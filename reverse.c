#include <stdio.h>
#include <string.h>
 
int main()
{
    int i,b;
    
    char a[100];

 scanf("%s",&a);
 b=strlen(a);
 for(i=b;i>0;i--)
 {
     printf("%c",a[i]);
 }
   return 0;
}
