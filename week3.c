#include <stdio.h>

#include<conio.h>

#include<math.h>

void main()
{
  
  int k,n,w,bramnt,cost,total=0,p,i;
  
  p=pow(10,9);
   
  printf("Enter\n\tcost of one orange\n\tInitial amount teacher has\n\tnumber of oranges he wants:");
   
  scanf("%d%d%d",&k,&n,&w);
   
 if(k>=1&&(n>=0&&n<=p)&&(w>=1&&w<=1000)){
 
  for(i=1;i<=w;i++){
          
  cost=i*k;
         
  total=total+cost;
       
 }
   
 printf("The total cost is:%d $\n",total);
    
 bramnt=total-n;
   
 if(bramnt>0)
   
 printf("%d $ is the borrowed amount\n",bramnt);
    
 else
   
 printf("The teacher has sufficient amount to buy");
  
 }
   
 else 
 
 {
        
 printf("Entered input is not in the range\n");
   
 }
    
getch();

}

