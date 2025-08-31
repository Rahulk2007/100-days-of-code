#include <stdio.h>
int main () {
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("uppercae alphabet",ch);
    }
    else if (ch>='a' && ch<='z'){
        printf("lowercase alphabet",ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("number",ch);
    }
    else {
        printf("special character");
    }
    

    return 0;
    
    
        
    }
    
    

