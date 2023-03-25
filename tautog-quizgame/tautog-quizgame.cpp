#include "readDict.h"

using namespace std;

int main(int argc, const char* argv[]) {
    readDict rd; 
    map<string, int> my_map = rd.readFile();

    for (auto element : my_map)
    {
        //element.first represents key
        cout << element.first << " is the key and ";

        //element.second represents value
        cout << element.second << " is the value!" << endl;
    }
    return 0;
}