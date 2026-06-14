#include <iostream>; 

using namespace std; 

void trocar (int *a, int *b) {

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}

int main() {
    int a = 20;
    int b = 30;

    trocar(&a, &b);

    cout << "Primeiro Número: " << a << endl;
    cout << "Segundo Número: " << b << endl;

    return 0;
}