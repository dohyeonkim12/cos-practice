#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct human_st{
    const char *name;
    int age;
    int gender;

}human;

int main (int argc, char *argv[]){
    human *hw;

    hw = (human *)malloc(sizeof(human));
    hw->name = "hyeonwoo";
    hw->age = 39;
    hw->gender = 0;

    cout << "name: " << hw-> name << "age: " << hw->age << "gender: " << hw->gender << endl;
    return 0;
}