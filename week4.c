#include <stdio.h>

#include <string.h>


int main()
{
   

char frstlang[50];
   
char secondlang[50];
   
char text[1000];
   
int i,j;
   
   
fgets(frstlang, sizeof(frstlang), stdin);
   
fgets(secondlang, sizeof(secondlang), stdin);
  
fgets(text, sizeof(text), stdin);
   
   
   
for(i=0;i<strlen(text);i++){
       
       
for(j=0;j<strlen(frstlang);j++){
           
           
if(text[i]==frstlang[j]){
              
printf("%c",secondlang[j]);
               
break;
           }
           
           
else if((text[i]+32)==frstlang[j]){
               
printf("%c",secondlang[j]-32);
               
break;
           
}
           
          
else if(isdigit(text[i])){
               
printf("%c",text[i]);
               
break;
           
}
           
       
}
   
}
   
    
return 0;

}
