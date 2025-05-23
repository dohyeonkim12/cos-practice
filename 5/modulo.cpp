#include <iostream>
#include <cstdlib>
using namespace std;
int convert(char *sum);
int mod(int a, int b);

int main(int argc, char *argv[]){         // argv는 배열의 이름. 그 안에 포인터(주소) 가 argv[1]
    int a, b, c;
    if (argc != 3){
        cout << "please insert two numbers" << endl;
        return 0;
    }

    //a = atoi(argv[1]);
    //b = atoi(argv[2]);
    a = convert(argv[2]);
    b = convert(argv[2]);
    //c = a % b;
    c = mod(a, b);
    cout << a << "mod" << b << " = " << c << endl;
    return 0;
}

int mod(int a, int b){
    if (a >= 0)
        return a % b;
    else
        return a - (a / b - 1) * b;   // wrong
}
int slen(char *snum){
    int ret;
    char *p;
    ret = 0;

    p = snum;
    sign = 1;

    if (*p == 0x2d){
        sign = -1;
        p++;
    }
    len

    while (*p != 0){
        ret += 1;
        p++;
    }
    return ret;
}

int convert(char *sum){
    int len = slen(snum);
    int i, ret;
    char *p;

    ret = 0;
    for (i=0; i<len; i++){
        ret *= 10;
        ret = ret + (*(p+i) - 0x30);

    }
    ret *= sign;
    return ret;

}