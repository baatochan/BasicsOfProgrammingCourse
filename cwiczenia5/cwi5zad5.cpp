#include <stdio.h>

void m_strupr(char* array){
    for (int i=0; i<100; i++){
        if(*(array+i)>=97&&*(array+i)<=122){
            *(array+i) -= 32;
        }
    }
}

int main() {
    char str[100];
    printf("Podaj napis: ");
    gets(str);
    m_strupr(str);
    printf("Zdanie zamienione na dzue litery: %s", str);
    
    
    
    
	return 0;
}