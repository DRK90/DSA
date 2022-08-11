#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>


bool isSubsequence(char * s, char * t){
    int ptr1 = 0;

    for(int i = 0; i < strlen(t); i++){
        if (t[i]==s[ptr1]){
            ptr1++;
            if (ptr1 == strlen(s)){
                return true;
            }
        }        
    }
    return false;


}


void main(){

    char s[] = "axc";
    char t[] = "ahbgdc";

    printf("%d\n", isSubsequence(s,t));

}