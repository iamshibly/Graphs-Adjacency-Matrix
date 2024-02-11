#include <stdio.h> 
void edgePrinter(long long grp);

int main(void) {
    long long code;
    
    printf("enter your student code: "); 
    scanf("%lld", &code); 
    
    edgePrinter(code);
    
    return 0;
}

void edgePrinter(long long grp){
    if(grp==0){
        
        printf("A11 Edges Printed.\n");
        return;
    }
    if(grp%3==0) 
        printf("%d and %d are connected\n", (grp / 100)%10, grp%10); 
    else 
        printf("%d and %d are connected\n", (grp / 100)%10, (grp/1000)%10);
        
    return edgePrinter(grp / 10);
    }    