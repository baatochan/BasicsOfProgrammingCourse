#include <stdio.h>

char* m_strcpy(char* str1, char* str2) {
    for(int i=0;i<100;i++){
        *(str2+i)=*(str1+i);
    }
    return str2;
}


int main() {
    char str[100];
    char str2[100];
    printf("Podaj napis: ");
    gets(str);
    char* copied_str = m_strcpy(str, str2);
    printf("Skopiowane zdanie: %s", copied_str);
    
    
    
    
	return 0;
}