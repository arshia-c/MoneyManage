#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
    int job,money,i,exp,num[300],sum=0,choice,balance,suggest;
    char name[20],str[30];
    printf("\n----------------------------------------------- HELLO THERE WELCOME TO MONEY MANAGE! ---------------------------------------\n\n");
    printf("-------------------------------------------------------WHAT'S YOUR GOOD NAME? ----------------------------------------------\n");
    printf("\n");
    printf("Enter your name:");
    scanf("%[^\n]s", name);
    printf("\n");
    printf("Glad to have you here %s!\n",name);
    printf("\n");
    printf("-----------------------------------------------------------Step 1/3------------------------------------------------------------\n");
    printf("You are a:\n");
    printf("1.Working professional\n2.Studemt\n");
    scanf("%d",&job);
    switch(job)
    {
        case 1:
        printf("\n----------------------------------------------------------Step 2/3------------------------------------------------------------\n");
        printf("What is your monthly income?\n");
        scanf("%d",&money);
        break;
        case 2:
        printf("\n----------------------------------------------------------Step 2/3------------------------------------------------------------\n");
        printf("How much is your monthly allowance?\n");
        scanf("%d",&money);
        break;
        
    }    
    printf("-----------------------------------------------------------------------------------------------------------------------------");
    printf("\n");
    printf("List the number of expenses you make\n");
    printf("(input an integer value)\n");
    scanf("%d",&exp);
        
    for(i=0;i<=exp;i++)
    {
        printf("\n----------------------------------------------------------Step 3/3-----------------------------------------------------------\n");
        printf("Enter amount and details where you spent it\n");
        printf("example:200 food\n");
        for(i=0;i<exp;i++)
        {
            scanf("%d %s",&num[i],&str[50]);
        }
    }
         for(i=0;i<exp;i++)
        {
          sum=sum+num[i];
        }
        printf("\n---------------------------------------------------------------<>-------------------------------------------------------------------\n\n");
        printf("The total expenditure is %d\n",sum);
        printf("\n---------------------------------------------------------------<>-------------------------------------------------------------------\n\n");
        if(sum<money/2)
        {
        printf("Yay!! You have saved more than half of your money\n");
        printf("Current balance is %d\n",money-sum);
        printf("\n---------------------------------------------------------------<>-------------------------------------------------------------------\n\n");
        printf("Looking for more suggestions to cut down you expences?\nPress 1 for more suggestion\n");
        scanf("%d",&suggest);
        }
        else if(sum==money)
        {
        printf("opps! you have spent your entire money\n");
        printf("Current balance is %d\n",money-sum);
         printf("\n---------------------------------------------------------------<>-------------------------------------------------------------------\n\n");
        printf("Looking for more suggestions to cut down you expences?\nPress 1 for more suggestion\n");
        scanf("%d",&suggest);
        }
        else if((sum>(money/4)*3)&&(sum<money))
        {
        printf("You have spent more than 3/4th of your money\n");
        printf("Current balance is %d\n",money-sum);
         printf("\n---------------------------------------------------------------<>-------------------------------------------------------------------\n\n");
        printf("Looking for more suggestions to cut down you expences?\nPress 1 for more suggestion\n");
         scanf("%d",&suggest);
        }
        else
        {
        printf("expenditure is greater than your money\n\n");
         printf("\n---------------------------------------------------------------<>-------------------------------------------------------------------\n\n");
        printf("Looking for more suggestions to cut down your expenses?\nPress 1 for more suggestions\n");
         scanf("%d",&suggest);
        }
        switch(suggest)
        {
            case 1:
            printf("\n---------------------------------------------------------------<>-------------------------------------------------------------------\n");
            printf("Record your expences.\nInclude saving in your budget.\nSet savings goal\n.");
            printf("-----------------------------------------------------------Happy savings!------------------------------------------------------------\n");
            printf("\n---------------------------------------------------------------<>-------------------------------------------------------------------\n\n");
           
        }
}
   

    
    
