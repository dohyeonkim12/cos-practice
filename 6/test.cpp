#include <iostream>

using namespace std;

short test(short x, short y, short z){
    __asm__(
        "leaq (%rdx, %rsi), %rax\n"
        "subq %rdi, %rax\n"
        "cmpq %5, %rdx\n"
        "jle .L2\n"
        "cmpq $2, %rsi\n"
        "jle .L3\n"
        "movq %rdi, %ra\nx"
        "idivq %rdx, %rax\n"
        "ret"
        .L3:



        );
}

int main (){
    cout << "the skeleton code for the assembly language" << endl;
    cout << "return value: " << run() << endl;
    return 0;
}