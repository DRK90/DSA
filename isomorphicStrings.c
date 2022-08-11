#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool isIsomorphic(char * s, char * t){
    int hashMapS[256] = {0};
    int hashMapT[256] = {0};

    if (strlen(s) != strlen(t)){
        return false;
    }

    for (int i = 0; i < strlen(s); i++){
        if (hashMapS[(int)t[i]] == 0){
            hashMapS[(int)t[i]] = (int)s[i];
        } else if (hashMapS[(int)t[i]] != (int)s[i]){
            return false;
        }
        if (hashMapT[(int)s[i]] == 0){
            hashMapT[(int)s[i]] = (int)t[i];
        } else if (hashMapT[(int)s[i]] != (int)t[i]){
            return false;
        }
    }
    return true;



}

void main(){
    char s[] = "eggsalad";
    char t[] = "add";



    printf("%lu\n", strlen(s));


    printf("%i\n", isIsomorphic(s, t));
}