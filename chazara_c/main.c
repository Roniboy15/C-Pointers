//
//  main.c
//  chazara_c
//
//  Created by Jaron Treyer on 15.11.22.
//

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

//ex. 2 sheet nummern zählen

/*
int main () {
    &p
    int num, i = 0;
    char arr[10] = {'b','a', 'c', 'd'};
    char arr2[10];
    
    while (i<10) {
        
        int check = 0;
        
        for (int j = 0; j < 10; j++) {
            if(arr2[j] == arr[i]){
                check = 1;
                break;
            }
        }
        if(check == 0)printf("%c, ", arr[i]);
        
        if(arr[i] != arr2[i-1]) arr2[i] = arr[i];

        
        i++;
    }
    */
    /*for (int i = 0; i < 10; i++) {
        printf("%d, ", arr[i]);
    }*/
/*
}*/

/*
int checkNum(int num){
    int a;
    if(num == 9)return num;
    
    a = num%10;
    num = num/10;
    return checkNum(a);
}

int main () {
    int num = 9347234;
    
    printf("%d",checkNum(num));
}
*/


/*
int main () {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    
    int *p1, *p2, *p3;
    
    int i = 0;
    for (i = 0; i < 10; i++) {
        
    }
    printf("%d\n", *p3);
}
*/

int func(int x) {
    
    if (x<=0) return 1;
    return x * func(x-1) * func(x-2);
}

int findHighest (int *a, int n, int highest) {
    
    if(n == 0){
        return highest;
    }
    
    if(a[n]>highest){
        highest = a[n];
    }
    
    return findHighest(a, n-1, highest);

    }

int main () {
    int x = 4;
    int arr[] = {3,1,16,15,1,2};
    int sizeArr = sizeof(arr)/sizeof(arr[0]);
//    printf("%d\n", func(x));
    
    printf("%d\n", findHighest(&arr[0], sizeArr-1, arr[0]));
}
