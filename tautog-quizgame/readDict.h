#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <jsoncpp/json/json.h>


class readDict
{
private:
    int x;

public:
    readDict(); 
    std::map<std::string, int> readFile(); 
};


