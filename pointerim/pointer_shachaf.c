//
//  main.c
//  pointer_shachaf
//
//  Created by Jaron Treyer on 04.12.22.
//

#include <stdio.h>

//1
/*
int main () {
    
    int a, *b, c[4];
    
//    a CORRECT
     *(c+3) = 8;
//    b NOT CORRECT
//    c NOT CORRECT
//    d NOT CORRECT
//    e NOT CORRECT
//    f NOT CORRECT
//    g NOT CORRECT
//    h CORRECT
      a = *b - *c;
//    i CORRECT
      *c = *(b++);
//    j NOT CORRECT
//    k NOT CORRECT
//    l
//    c[3] = *b == 2;

    printf("address of pointer b is %p.\n",b);
}
*/

/*
int main () {
    int arr[5][3];
    
    printf("Size of one place in the matrix is: %lu\n", sizeof(arr[0][0]));
    printf("Size of one row in the matrix is: %lu\n", (sizeof(arr) / sizeof(arr[0])) * sizeof(arr[0][0]));
    printf("Size of the matrix is: %lu\n", sizeof(arr));
    printf("Number of Colums in the matrix: %lu\n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("Number of rows in the matrix is: %lu\n", (sizeof(arr) / sizeof(arr[0])));
    printf("Number of all places in the matrix is: %lu\n", sizeof(arr) / sizeof(arr[0][0]));

}
*/

/* 3)
long checkNum(long num, int*sumP, int*countP){
    
    if (num < 10){
        *sumP += num % 10;
        *countP += 1;
        return num;
    }
    checkNum(num / 10, sumP, countP);
    *sumP += num % 10;
    *countP += 1;
    return num;
}

int main () {
    long num = 1234567;
    int sum = 0;
    int counter = 0;
    checkNum(num, &sum, &counter);
    
    printf("sum is %d - number is %d", sum, counter);
}
*/

// 7)
/*
#define MAX_LENGTH 80
int my_strlen (char *s)
{
char *p = s;
    while (*p != 0)
        p++;
return p-s;
}
void main()
{
    char str[MAX_LENGTH];
    int len;
    printf("Enter a string:");
    gets(str);
    len = my_strlen(str);
    printf("The lenght of the string %s is %d \n",str,len);
    
}
*/

void sort(int *arr, int size)
{
    for (int *temp = arr + size - 1; temp > arr; temp--)
    {
        if (*temp % 2 == 0)
        {
            for (int *i = temp; i > arr; i--)
            {
                for (int *j = i - 1; j > arr; j--)
                {
                    if (*i < *j)
                    {
                        int temp = *i;
                        *i = *j;
                        *j = temp;
                    }
                }
            }
            break;
        }
    }


}

int main(int argc, char const *argv[])
{
    int arr[9] = {1,
                  2,
                  3,
                  6,
                  5,
                  4,
                  2,
                  9,
                  9};
    sort(arr, 9);



    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
