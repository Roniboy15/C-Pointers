//
//  main.c
//  pointer_daniel_15_09
//
//  Created by Jaron Treyer on 15.09.22.
//

#include <stdio.h>
#include <string.h>
/*
void SWAP_(int *p, int *p1){
    int temp = *p;
    *p = *p1;
    *p1 = temp;
    printf("%d  %d\n", *p, *p1);
    
}

int main() {
    
    int a[5] = {4,5,3,4,5};
    
    int *p = &a[0];
    int *p1 = &a[1];
    
    
    
    printf("\n");
    
//    SWAP_(p, p1);
    *p += 1;
    
    printf("%d\n", sizeof(p));
    
    printf("%p\n%p\n%p\n",&a[0], *p, *p1);

//    %p *pointer : gibt den Wert des Pointers in Hexadezimal an
}
*/


/*
void printPointer(int* ptr);

int main(){
    int num = 3;
    int* ptr;
    ptr = &num;
    
    printf("%d\n")
    
    printPointer(&num);
}

void printPointer(int* ptr){
    printf("%p\n", ptr);
}
*/
 /*
void test(int arr[]){
    printf("%d\n", arr[0]);
}
void test1(int * arr){
    printf("%d\n", arr[1]);
}

int main(){
    int arr[3] = {1, 2, 3};
    test(arr);
    test1(arr);
}
*/

/*
//aufgabe wieviel zahlen kann man durch die zwei zahlen gerade teilen?

void checkHowMany(int arr[], int n1, int n2, int size, int * g1, int * g2){
    for (int i= 0; i < size; i++) {
        if(arr[i] % n1 == 0){
            (*g1)++;
        }
        if(arr[i] % n2 == 0){
            (*g2)++;
        }
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int num1 = 2, num2 = 1;
    int goal1 = 0, goal2 = 0;
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    checkHowMany(arr, num1, num2, size, &goal1, &goal2);
    
    printf("%d, %d\n", goal1, goal2);
}
*/

/*
//aufgabe zahlen zählen

void checkNum(long num, int * n, int * s){
    
    while (num != 0) {
        (*s) += num % 10;
        (*n)++;
        num /= 10;
    }
}

int main(){
    long num = 757979797;
    int nums = 0, sum = 0;
    checkNum(num, &nums, &sum);
    printf("amount of numbers: %d, sum of number: %d\n", nums, sum);
}
*/

/*
//aufgabe drei reihen dritte mit 1-2 füllen summe
#define SIZE 5

void fillArray(int * p1, int * p2, int * p3){
    for (int i = 0; i < SIZE; i++) {
        p3+i = (p1+i);
    }
}

int main(){
    int arr1[SIZE] = {1, 2, 3, 4, 5};
    int arr2[SIZE] = {1, 2, 3, 4, 5};
    int arr3[SIZE];
    
    fillArray(arr1,arr2,arr3);
}
*/

/*
void check (char * p, char *p2) {
    
    printf("Before: %p, %d\n", p, *p);

    *p2 = 6;
    
    printf("After:\n");

    printf("%p, %d\n", p, *p);
    printf("%p, %d\n", p+1, *(p+1));
    printf("%p, %d\n", p+2, *(p+2));

}

int main () {
    char ar[] = {1,2,3};
    char *p = &ar[0];
    check(ar, p);
}
*/
/*
 char* searchChar(const char*s, char c){
 
 while (*s!=0) {
 if (*s == c) {
 return s;
 }
 s++;
 }
 return NULL;
 }
 
 int main () {
 char str[] = "hallo";
 char c = 'l';
 
 printf("The letter `%c` appears in the word %s |%p| at index |%d|\n", c, str, &str, searchChar(str, c)-str+1);
 
 }
 */

#include <stdio.h>
#include <string.h>
/*
 cheap up
 1
 heapcup
 */

/*
int main(void) {
    
    int T;
    scanf("%d", &T);
    int lengthP;
    int lengthC;
    char A[40000], B[40000];
    char parents[40000];
    char scanC[40000];
    char c[40000];

    while(T--){
        memset(A, "\0", 40000);
        memset(parents, "\0", lengthP);
        
        int N;
        scanf("%s %s", A, B);
        strcat(A,B);
        strcat(parents,A);
        
        scanf("%d", &N);
        
        for(int i = 0; i<N; i++){
            scanf("%s", scanC);
            strcat(c, scanC);
        }
        lengthP = strlen(parents);
        lengthC = strlen(c);
        
        int i, j;
        int counter=0;
        for(i = 0; i < lengthC; i++){
            
            for(j = 0; j < lengthP; j++){
                
               if(c[i]==parents[j]){
                   counter++;
                   parents[j] = "\0";
                   break;
               }
            }
            
            if(counter==0){
                printf("NO\n");
                counter = 0;
                break;
            }
            
        }
        if(counter!=0)printf("YES\n");
    }
    
}

*/
//strcmp
int checkString (char *p1, char *p2){
    
    int sum1 = 0, sum2 = 0;
    while (*p1 != 0 || *p2 != 0) {
        sum1 += *p1;
        sum2 += *p2;
        if(*p1 != 0)p1++;
        if(*p2 != 0)p2++;
    }
    if(sum1 > sum2)return 1;
    else if(sum1 < sum2)return -1;
    else return 0;
}

int main () {
    char str1[] = "abC";
    char str2[] = "abc";
    
    printf("%d\n",checkString(str1, str2));
    
}
