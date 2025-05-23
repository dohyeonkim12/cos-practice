#include <iostream>
#include <cstring>
using namespace std;
int uadd_ok(unsigned int a, unsigned int b){
    unsigned int max = 0xffffffff;
    unsigned int diff = max - a;
    return diff > b;

}

int tadd_ok(int a, int b){
    if (a > 0 && b > 0)
        return a+b < 0;
    if (a < 0 && b < 0)
        return a+b > 0;
    else 
        return 1;
        

}

int main (int argc, char *argv[]){
    int a, b;
    unsighed int x, y;
    if (argc != 3){
        cout << "tou should insert two number in hex" << endl;
        return 1;
    }

    a = strtol(argv[1], NULL, 16);
    b = strtol(argv[2], NULL, 16);
    x = (unsighed int) a;
    y = (unsighed int) b;
    cout << "unsi.  aadditioj" << endl;
    if (uadd_ok(x, y))
        cout << "no overlfow" << end;
    else 
        cout << "overflow" << endl;
    
    cout << "signed addition" << endl;
    if(tadd_ok(a, b))
        cout << "no overflow" << endl;
    else
        cout << "overflow" << endl;
    return 0;
}