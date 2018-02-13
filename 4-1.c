
#include <stdio.h>
/*loop:
    push1 %ebp      push ebp onto stack
    movel %esp, %ebp         copy value of esp into variable ebp
    push1 %esi               push esi onto stack
    push1 %ebx               push ebx onto stack
    mov1 8(%ebp), %esi       retrive x
    mov1 12(%ebp), %ecx      retrive y
    mov1 $2, %edx            put value of 2 in edx
    mov1 $-1, %eax           put value of -1 in eax
  .L2:
    move1 %esi, %ebx        copy value of esi into variable ebx
    and1 %edx, %ebx         use and to compare edx and ebx 
    xorl %ebx, %eax         exclusive or. return 1 in ebx and eax are different otherwise 0
    sall %cl, %edx          left shift 
    cmpl %1, %edx           performs subtraction but doesn't override edx
    jg   .L2                jump backward in code, for loop
    pop1 %ebx               restores content of ebx 
    pop1 %esi               restores content of esi
    pop1 %ebp               restores content of ebp
    ret                     return
*/

int loop(int x, int y)
{
    int result = 2;    //set result equal to 2 initially//
    for (int mask = -1 ; mask -- ; mask = y)   //use for decrementing foor loop//
    {
        result ^= (x&mask);                 //set result equal to exclusive or of x and mask//llk
    }
    return result;                          //return result
}

int main(int argc, char *argv[]){
    printf("%d\n", loop(1,5));
    printf("%d\n", loop(2,4));
    printf("%d\n", loop(3,3));
    printf("%d\n", loop(4,2));
    printf("%d\n", loop(5,1));
    return 0;
    }
    
