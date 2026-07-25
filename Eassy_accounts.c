#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    	int choice ;
        int accountNo ;
        int acc_no;
        char name[50];
        float balance ;
	printf("\n ====SIMPLE ACCOUNT SYSTEM =====\n") ;
	printf(  "1. add Account \n");
    printf("2.view Account\n");
	printf("5. Check Balance \n");
	printf( "3. Deposit Money \n");
	printf("4. Withdrow Money \n");
	printf("6. Exit \n");
	printf("\ n Enter your choice :"); 

	scanf("%d" ,&choice);
switch(choice)
{ 
 case 1:
printf("\n====Add Account Selected\n====");
printf("Enter AccNumber ");
scanf("%d",&accountNo);
printf("\n Enter CustoName \n");
scanf("%s", name);
printf("\n Enter Invitial balance\n");
scanf("%f",&balance);
printf("\n Account Created Successfully \n" );
printf("\n Customer Name : %s \n",name);
printf("Balance : %.2f \n",balance ); 
break; 

 case 2: 
 printf("====View Account Selected====" );
 printf("Account Number : %d\n",accountNo);
 printf("\n Customer Name : %s \n ", name);
 printf("\n Balance : %2f\n", balance);
 break;
 case 3:
 float deposit ;
 printf("\n====  Enter Ammount Deposit  Selected==== ");
 scanf("%f",&deposit );
 balance = balance + deposit ;
 printf("\n Amount Deposited Successfully \n");
 printf("n Current Balance : %.2f \n", balance);
 break;
 case 4:
 float withdraw ;
 printf(" Enter Withdraw Amount Selected ");
 scanf("%f", &withdraw);
 if(withdraw<=balance )
 {
 balance=balance - withdraw ;
 printf("\n Amount Withdraw Successfully \n ");
 printf("\n Current Balance : %.2f \n ",balance);
 } 
 else 
 { 
 printf("\n Insufficient Balance ! ");
 } 
 break;
 case 5: 
 printf("===Check Balance Selected=== ");
 printf("Account Holder :%d\n ", name );
 printf("Account Number :%d\n",acc_no );
 printf("Current Balance : %.2f \n ", balance );
 break;
 case 6:
 printf("Exit Selected ");
 printf("\n Exit Selected ...\n ");
 printf("Thank you for using Eassy Account System !\n");
 break;
default:
printf("Invalid choice ! Plenter a number between 1 and 6\n " );
break;
}
	return 0;
}