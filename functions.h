#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <ctime>
#include <fstream>
#include <istream>
#include <sstream>
#include <numeric>
#include <stdexcept>
#include <bits/stdc++.h>
#include <chrono>
#include <list>
#include <deque>

using namespace std;

const int MAX_ND = 100;

struct duomenys {
    std::string vard, pav;
    std::vector<int> nd;
    int egzaminas;
    double gal_vid, gal_bal, gal_med;
    int nd_kiekis;
    string rusis;

     bool operator<(const duomenys& other) const {
        return gal_vid < other.gal_vid;
    }
};

void func_input_hands();
void func_generate_numbers();
void func_generate_names();
void func_input_file();
void func_generate(ifstream& fd, const string& file_name);
ifstream& open_file(ifstream& fd, const string& file_name);
void generate_new_file();
void use_existing_file(ifstream& fd, const string& file_name);
void read_list (ifstream& fd, const string& file_name);
void read_deque (ifstream& fd, const string& file_name);
#endif /* FUNCTIONS_H */