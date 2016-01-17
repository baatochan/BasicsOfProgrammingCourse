#include <stdio.h>

int m_strlen(char* array){
    int lenght = 0;
    for (lenght;lenght<100;lenght++){
        if (*(array+lenght)==0){
            break;
        }
    }
    return lenght;
}

int main() {
    char str[100];
    printf("Podaj napis: ");
    gets(str);
    int lenght = m_strlen(str);
    printf("Dlugosc zdania: %d", lenght);
    
    
    
    
	return 0;
}