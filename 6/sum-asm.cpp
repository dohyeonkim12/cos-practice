#include <iostream>

using namespace std;

void decode1(long *xp, long *yp, long *zp){
    __asm__(
        
        // "mov    %rsp,%rbp\n"
        // "mov    %edi,-0x4(%rbp)\n"
        // "mov    %esi,-0x8(%rbp\n)"
        // "mov    -0x4(%rbp),%edx\n"
        // "mov    -0x8(%rbp),%eax\n"
        // "add    %edx,%eax\n"

        // "add %esi, %edi\n"
        // "mov %edi, %eax"
        "movq (%rdi), %r8\n"
        "movq (%rsi), %rcx\n"
        "movq (%rdx), %rax\n"
        "movq %r8, (%rsi)\n"
        "movq %rcx, (%rdx)\n"
        "movq %rax, (%rdi)\n"
      

        
       
    );
}

int main(){
    long x, y, x;
    x = 10000; y = 20000; z = 30000;
    cout << "before" << "x: " << x << ", y: " << y << ", z: " << z << endl;
    decode1(&x, &y, &z);
    cout << "after" << "x: " << x << ", y: " << y << ", z: " << z << endl;

}