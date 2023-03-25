#include "readDict.h" 

using namespace std;

readDict::readDict()
{
}

std::map<std::string, int> readDict::readFile()
{
    string key;
    int value;
    map<string, int> my_map;

    ifstream file_in("testdict.txt");

    while (file_in >> key && file_in >> value) {
        cout << "Read: " << key << " " << value << endl;
        my_map[key] = value;
    }
    file_in.close();

    return my_map;
}

std::