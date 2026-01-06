#include <iostream>
#include <fstream>


int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::cout << "Filename is: " << av[1] << std::endl;
        std::cout << "Replace " << av[2] << " with " << av[3] << std::endl;
        std::string file_text;
        std::ifstream inFile;
        inFile.open(av[1]);
        if (inFile.fail())
        {
            std::cout << "File doesnt exist." << std::endl;
            return 1;
        }
        std::filebuf *buffer = inFile.rdbuf();
        std::cout << buffer;
        std::string replace = ".replace";
        std::string writing_file = av[1] + replace;
        std::cout << "writing file is: " << writing_file << std::endl;
        std::ofstream outfile(writing_file);
        outfile << buffer;
    }
    else
        std::cout << "format is <filename> <string1> <string2>" << std::endl;

}