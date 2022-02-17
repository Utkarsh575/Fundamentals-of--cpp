#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    string name;
    int id;

    void printname();

    void printid()
    {
        cout << "hoomans id is :- " << id << endl;
    };
};

void Human::printname()
{
    cout << "hooman name is :- " << name << endl;
};

int main()
{
    Human boy1;
    boy1.name = "uttu";
    boy1.id = 1;
    cout << "info of boy1 is:-  " << endl;
    boy1.printid();
    boy1.printname();
    return 0;
}