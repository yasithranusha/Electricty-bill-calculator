#include<stdio.h>
int main()
{
    int c=1;
    int cno,uts;
    float totamt,totern=0;
    char cname[50];
    char tf;
    
    while(c<=3){
        printf("Input customer number:");
        scanf("%d",&cno);
        printf("Input customer name:");
        scanf("%s",cname);
        printf("Input tarrif code:");
        scanf(" %c",&tf);
        printf("Number of Units consumed:");
        scanf("%d",&uts);
        
        if(tf=='d'){
            if(uts<=100){
                totamt=uts*5;}
            else{
                totamt=500+(uts-100)*10;}
        }
        else if(tf=='c'){
            if(uts<=200){
                totamt=uts*10;}
            else{
                totamt=2000+(uts-200)*15;}
        }
        else{
            printf("*Invalid tarrif code*\n\n");
            continue;}
        
        printf("\nCustomer number is %d\n",cno);
        printf("Customer name is %s\n",cname);
        printf("Number of Units consumed = %d\n",uts);
        printf("Total amount is RS.%.2f\n\n\n",totamt);
        
        totern=totern+totamt;
        c=c+1;
    }
    
    printf("Total earnings to the CEB=Rs.%.2f\n",totern);
}