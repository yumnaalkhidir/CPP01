#include <iostream>
#include <fstream>
#include <string>

void analyze_line(std::ofstream& output_file, std::string line, std::string str1, std::string str2)
{
    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;
    output_file << line << std::endl;
}


int main(int ac, char **av)
{

    if (ac == 4)
    {
        std::string infile = av[1];
        std::string outfile = infile + ".replace";
        std::cout << "infile is: " << infile << std::endl;
        std::cout << "outfile is: " << outfile << std::endl;

        std::ifstream input_file;
        std::ofstream output_file;
        input_file.open(infile.c_str());
        output_file.open(outfile.c_str());
        std::string line;
        if (input_file.is_open())
        {
            if (output_file.is_open())
            {
                while(getline(input_file, line))
                    analyze_line(output_file, line, av[2], av[3]);
            }
            else
                std::cerr << "Error\n Output file isn´t open \n" << std::endl;

        }
        else
            std::cerr << "Error\n Input file isn´t open \n" << std::endl;

    }
    else
        std::cout << "Usage: ./replace <filename> <string1> <string2>" << std::endl;

}

/*
create the two files input and output files
read from the input file line by line
analyze each line word by word and write it to my writing file and stop when the s1 string is found and 
write s2 to the writing file
*/