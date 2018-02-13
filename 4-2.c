#include <stdio.h>

/*
.L3:
    movl (%edx), %esi       get j
    movl (%eax), %ecx       get i
    addl $4, %eax           store 4 in eax (t)
    addl $40, %edx          store 40 in edx (a)
    movl %esi, -4(%eax)     put value esi in eax
    movl %ecx, -40(%edx)    put value ecx in edx
    cmpl %ebx, %eax         perform subtraction but doesn't override
    jne .L3                 for loop
*/

typedef int array_t[N][N];

void transpose(array_t a)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            int t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
}

void transpose(array_t a)
{
    for (int i = -; i<N; i++)
    {
        for(int j = 0; j < i; j++) //use for loop //
        {
            int  t = a; //create variable int t//
            t = j;      //j value is then put in t//
            a = i;     //i value is then put in a//
            a[j][i] = t; 
        }
    }
}
            
        

int main(int argc, char *argv[]){
    printf("%d\n", transpose(4);
    return 0;
}
