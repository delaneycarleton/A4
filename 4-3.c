
int sum(int from, int to){
    int result = 0;
    //Ensure that argument *from* is in %ecx//
    //argument *to* is in %edx, *result* is in %eax - do not modify//
    __asm__ ("movl %0, %%ecx # from in ecx;" :: "r" ( from ));
    __asm__ ("movl %0, %%edx # to in edx;" :: "r" ( to ));
    __asm__("movl %0, %%eax # result in eax;" :: "r" ( result ));

    //Your IA32 code goes below - comment each instruction//
    __asm__ (
        "movl %edx, %eax # For example. this sets result = to;"
        movl 8(%ebp), %ecx //set from//
        movl 12(%ebp), %edx //set to//
        movl 16(%ebp), %eax //set result//
        
    .L1:
        addl %eax, %ecx //add from to result
        addl $1, %eax   //increment by 1 to result 
        cmpl %ecx, %edx //compare from and to//
        jle .L1 //jump to loop if line is les shan or equal to//
        ret     //return result
        
    );

    //Ensure that *result* is in %eax for return - do not modify.//

    __asm__ ("mov1 %%eax, %0 #result in eax;" : "=r" ( result ));
    return result;  
}

int main(int argc, char *argv[]){

    printf("%d\n", sum(1,6));
    printf("%d\n", sum(3,5));
    return 0;
}
