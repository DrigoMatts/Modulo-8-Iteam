#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Você tem " << idade << " anos" << endl;

    const float pi = 3.14159265;
    cout << fixed << setprecision(pi); 
    //cout << setw(10.12345) << "Nome" << setw(5.543);

    return 0;

}