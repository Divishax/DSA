#include <iostream>
#include <string.h>
using namespace std;

void toUpperCase(char ch[], int size){

    int index = 0;

    while(ch[index] != '\0'){
        char currCharacter = ch[index];

        if(currCharacter >='a' && currCharacter <='z'){
            ch[index] = currCharacter - 'a' + 'A';
        }
        index++;
    }

}

int main(){

    char ch[100];
    cin>>ch;

}