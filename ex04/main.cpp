#include <iostream>
#include <fstream>
#include <string>

void analyze_line(std::ofstream& output_file, std::string& line, std::string& str1, std::string& str2)
{
    size_t pos;
    size_t start = 0;
    if (str1.empty())
    {
        output_file << line;
        return;
    }
    while((pos = line.find(str1, start)) != std::string::npos)
    {
        output_file << line.substr(start, pos - start);
        output_file << str2;
        start = pos + str1.length();
    }
    output_file << line.substr(start);
}

int main(int ac, char **av)
{

    if (ac == 4)
    {
        std::string infile = av[1];
        std::string outfile = infile + ".replace";
        std::string str1 = av[2];
        std::string str2 = av[3];
        std::ifstream input_file;
        std::ofstream output_file;
        std::string line; 

        input_file.open(infile.c_str());
        if (!input_file.is_open())
        {
            std::cerr << "Error\nCan´t open input file" << std::endl;
            return (1);
        }
        output_file.open(outfile.c_str());
        if (!output_file.is_open())
        {
            std::cerr << "Error\nCan´t open output file" << std::endl;
            return (1);
        }
        
        while(getline(input_file, line))
        {
            if (str1 == str2)
            {
                output_file << line;
                output_file << std::endl;
            }
            else
            {
                analyze_line(output_file, line, str1, str2);
                output_file << std::endl;
            }
        }
    }
    else
        std::cout << "Usage: ./replace <filename> <string1> <string2>" << std::endl;
}
