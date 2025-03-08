/*count eveything*/

#include <stdio.h>

int main()
{
    // declarations
    int c; // characters to be entered
    int arr[12];    // array with counts of 0-9 (10 nos), white space, others
    
    for (int i = 0; i<12; ++i){
        arr[i] = 0;
    }
    
    while ((c=getchar())!=EOF){
        if (c >= '0' && c <= '9'){
            ++arr[c-'0'];
        }
        else if (c == ' ' | c == '\n' | c == '\t'){
            ++arr[10];
        }
        else{
            ++arr[11];
        }
    }
    // print the array content
    for (int i = 0; i <12; ++i){
        if (i < 10){
            printf("Count of %d is %d\n", i, arr[i]);
        }
        else{
           printf("Count white spaces is %d and other %d", arr[10], arr[11]); 
        }
        
    }

    return 0;
}