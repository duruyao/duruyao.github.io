#include <iostream>
#include <unistd.h>
#include <getopt.h>

#define LICENSE "+=======================+\n"   \
                "+   Author : DuRuYao    +\n"   \
                "+   Version: 1.0        +\n"   \
                "+   Date   :            +\n"   \
                "+=======================+\n"

using namespace std;

int opt;

void handle_opt(int, char **);

int main(int argc, char **argv) {

    handle_opt(argc, argv);

    return 0;
}

void handle_opt(int argc, char **argv) {
    while((opt = getopt(argc, argv, "L")) != -1) {
        switch(opt) {
            case 'L':
                cout << LICENSE;
                break;
            default:
                ;
        }
    }
}
