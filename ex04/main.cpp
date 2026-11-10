#include <iostream>
#include <fstream>
#include <string>

std::string analyze_line(std::string line, std::string str1, std::string str2)
{
    std::string result;
    size_t pos;
    size_t start = 0;
    if (str1.empty())
        return (line);
    while((pos = line.find(str1, start)) != std::string::npos)
    {
        result.append(line, start, pos - start);
        result.append(str2);
        start = pos + str1.length();
    }
    result.append(line, start);
    return (result);
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
        bool first_line = true;
        while(getline(input_file, line))
        {
            if (!first_line)
                output_file << '\n';
            first_line = false;
            if (str1 == str2)
                output_file << line;
            else
               output_file << analyze_line(line, str1, str2);
        }
        getline(input_file, line);
        if (!first_line && line.empty())
            output_file << std::endl;
        output_file.close();
        input_file.close();
    }
    else
        std::cout << "Usage: ./replace <filename> <string1> <string2>" << std::endl;
}
