#include<stdio.h> 
#include<stdlib.h>

int rules();       
int round1();      

int main() {
    rules();       
    printf("\n\n"); 
    round1();      
    return 0;     
}

int round1()
{
    char name[50];
    printf("Enter your name : ");
    scanf("%s",name);

    printf("\n\n");

    int money;
    printf("Enter the amount of money for the game : $");
    scanf("%d",&money);

    printf("\n\n");

    printf("Your current balance is $%d",money);

    printf("\n\n");

    int bet1;
    printf("%s, Enter the amount of money to bet : $ ",name);
    scanf("%d",&bet1);

    printf("\n\n");

    if(bet1>money)
    {
        printf("There is no sufficent amount of money,\n");
        printf("Please,Enter again : ");
        scanf("%d",&bet1);

    }

    printf("\n\n");

    int computer1;
    computer1 = rand() % 10;

    int num1;
    printf("Guess any number between 1 to 10 :");
    scanf("%d",&num1);

    if(num1>10)
    {
        printf("Number exceeds,\n");
        printf("Please,Guess any number again :");
        scanf("%d",&num1);
    }

    printf("\n\n");

    if(num1==computer1)
    {
        printf("you won a bet $%d", bet1);
        printf("\n\n");
    
    int bet2;
    bet2=bet1*10;

    int new_won;
    if(bet1==money)
    {
        new_won=bet2 + 0;
    }
    else
    {
        new_won=bet1 + money;

    }
    printf("You have won $%d as total", new_won);
    }
    else if(num1!=computer1)
    {
        printf("You have loss $%d",bet1);
        printf("\n\n");
        
        printf("The correct number is : %d", computer1);
        printf("\n\n");

        int loss_amount;
        loss_amount= money - bet1;

        printf("Now you have $%d as a balance", loss_amount);

        printf("\n\n");
    

        if(loss_amount==0)
        {
            printf("Sorry,you don't have sufficient amount of balance");
            printf("To continue");
            printf("Have a nice day");
        }
        else
        {
            int decision;
            printf("Press 1 for Yes\n");
            printf("Press 2 for NO\n");
            printf("Do you want to continue : ");
            scanf("%d",&decision);

            if (decision == 1)
            {
                rules();
                
                printf("\n\n");
                

                printf("Now you have $%d balance left",loss_amount);

                printf("\n\n");
                
                int bet3;
                printf("%s, Enter the money to bet : $",name );
                scanf("%d", &bet3);
                printf("\n\n");

                if(bet3 > loss_amount)
                {
                    printf("Insuffcient amount of money ,\n");
                    printf("Enter Again");
                    scanf("%d",&bet3);
            
                }

                int guess;
                printf("Enter a number between 1 to 10 : ");
                scanf("%d", &guess);
                printf("\n\n");

                int computer2;
                computer2= 9;
                
                if(guess>10)
                {
                    printf("'Number exceeds,\n");
                    printf("Enter Again: $");
                    scanf("%d",&guess);
                    printf("\n\n");
                }
                if(guess==computer2)
                {
                    printf("You have won $%d",bet3);
                    printf("\n\n");

                    int b;
                    b = bet3 * 10;

                    int b1;
                    if(bet3==loss_amount)
                    {
                        b1 = b + 0;

                    }
                    else
                    {
                        b1 = b + loss_amount;
                    }
                    printf("Congratulations you have won $%d as a total ", b1);

                }
                else if(guess!=computer2)
                {
                    printf("Sorry you have loss $%d",bet3);
                    printf("\n\n");

                    int b2;
                    b2= loss_amount - bet3;
                    printf("You have %d as total",b2);
                    printf("\n\n");

                if(b2==0)
                {
                    printf("Sorry,You have $0 balance\n");
                    printf("You do not have sufficient amount of money to play\n");
                    printf("Have a good day");
                }
                }
                         
            }

            else if(decision==2)
            {
                printf("Have a good day");
            }

        }
        
    }

}
int rules()
{
    printf("---------------------------------------------------------------------\n");

    printf("RULES\n");

    printf("---------------------------------------------------------------------\n");

    printf("1. Choose any number between 1 to 10\n");

    printf("2. If you win you will get 10 times of money you bet\n");

    printf("3. If you bet on wrong number you will lose the amount of money you bet\n");

    printf("---------------------------------------------------------------------\n");



}





