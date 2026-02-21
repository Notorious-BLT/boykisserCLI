#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void usage() {
    ifstream file("/usr/local/share/boykisser/kissers/usage.txt");
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
}

void selective_boykiss(int index) {
    string path = "/usr/local/share/boykisser/kissers/" + to_string(index) + ".txt";
    ifstream file(path);
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
}

void random_boykiss(bool nsfw) {
    /*
    srand(time(NULL));
    int num = (rand() % 6) + 1; - from 1 to 6
    */
    srand(time(NULL));
    int range = 31;
    if (nsfw) {
         range++;
    }
    int index = (rand() % range) + 1;
    string path = "/usr/local/share/boykisser/kissers/" + to_string(index) + ".txt";
    ifstream file(path);
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
}

// How to copy from a file
// cat hello.txt | xsel -ib

void copy_random(bool nsfw) {
    srand(time(NULL));
    int range = 31;
    if (nsfw) {
        range++;
    }
    int index = (rand() % range) + 1;
    string path = "/usr/local/share/boykisser/kissers/" + to_string(index) + ".txt";
    string command = "cat " + path + " | xsel -ib";
    system(command.c_str());
    cout << "Copied succesfully!\n";
}

void copy_specific(int index) {
    string path = "/usr/local/share/boykisser/kissers/" + to_string(index) + ".txt";
    string command = "cat " + path + " | xsel -ib";
    system(command.c_str());
    cout << "Copied succesfully!\n";
}

int main(int argc, char* argv[]){
    if (argc < 2) {
        return 1;
    }

    string command = argv[1];
    string argument = argv[2];

    if (command == "--help") {
        if (argument == "usage") {
            usage();
        } else if (argument == "ascii_sources") {
            cout << "Ascii sources can be found in the source files or at /usr/local/share/boykisser\n";
        }
    }

    if (command == "random-kiss") {
        bool flag;
        if (argument == "-sfw") {
            flag = false;
        } else if (argument == "-nsfw") {
            flag = true;
        } else {
            cout << "Invalid flag.";
            return 1;
        }
        random_boykiss(flag);
    }

    if (command == "find-kiss") {
        int index = stoi(argument)
        ;
        if (index > 32) {
            cout << "Index out of range.";
            return 1;
        } else {
            selective_boykiss(index);
        }
    }

    if (command == "copy-random-kiss") {
        bool flag;
        if (argument == "-sfw") {
            flag = false;
        } else if (argument == "-nsfw") {
            flag = true;
        } else {
            cout << "Invalid flag.";
            return 1;
        }
        copy_random(flag);
    }

    if (command == "copy-kiss") {
        int index = stoi(argument);
        if (index > 32) {
            cout << "Index out of range.";
            return 1;
        } else {
            copy_specific(index);
        }
    }
}