#pragma once

#include <iostream>
#include <map>


extern int special;
extern void test(std::string s);

struct Employee {
    std::string name;

    std::string get_name() {
        return name;
    };
};

std::map<int, Employee> Employees;


void getAll() {
    using namespace std;
    for (auto i : Employees) {
        test("wwww");
       std::cout << i.second.get_name() << std::endl;
    }

}



namespace kjd {
void getSpecial() {
    std::cout << "Pi = " << special << std::endl;
}
}
