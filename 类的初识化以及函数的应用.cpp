#include<iostream>
#include<string>
using namespace std;
class Phone {
public:
    Phone() {
    }
    Phone(string a, string b, string c) :p_brand(a), p_model(b), p_chip(c) {};
    string p_brand;
    string p_model;
    string p_chip;
};
class Man {
public:
    Man() {

    }
    Man(string d, Phone e) :M_name(d), M_phone(e) {};
    string M_name;
    Phone M_phone;
    int M_age;
};
void test() {
    Phone p("vivo", "X200 pro mini", "天机9400+");
    Phone p1("iPhone ", "17 pro max", "A19");
    Man m("Eathan Yuan", p1);
    cout << "The company whose name is called '" << p.p_brand << "'," << "released the latest phone." << "It's model is" << p.p_model << "," << "chip is" << p.p_chip << endl;
    cout << "My english name is " << m.M_name << "." << "The phone that was used by me is " << m.M_phone.p_brand << "." << endl;
}
int main() {
    test();
    system("pause");
    return 0;
}