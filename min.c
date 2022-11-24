#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <unistd.h>
#include <errno.h>



int main() {
     

    int number_rows = 3;
    int number_cols = 3;
    
    float copyfrom[number_rows][number_cols];

    printf("Custom Matrix\n");
    
    int i,j,k,l,m,n=0;

    while(i<number_rows){
        while(j<number_cols){
            copyfrom[i][j]= 5;
            j++;
        }
        i++;
    }

    printf("Printing Copy from matrix\n");
    while(k<number_rows){
        while(l<number_cols){
            printf("%f ",copyfrom[k][l]);
            k++;
        }

        printf("\n");

        l++;
    }
  
    long sys;
    
    sys = syscall(448,&copyfrom,copyto,number_rows,number_cols);

    printf("Printing Copy to matrix\n");
    while(m<number_rows){
        while(n<number_cols){
            printf("%f ",copyto)
            n++
        }

        printf("\n");
        m++;

    }

    if (__copy_from_user(buffer, src, sizeof(int)* (len)))
       return -EFAULT;

    if (__copy_to_user(dest, buffer, sizeof(int)*(len)))
       return -EFAULT;

    return 0;
}
