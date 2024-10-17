/*

#include<stdio.h>

/*
int main(){
	
char answer;

printf("\nWould you like to play? Enter Y or N: \n");
scanf(" %c", &answer);

//printf("\n answer is %c\n", answer);

while (answer == 'Y'){

//printf("Success!");

printf("\nDo you want to play again? Y or N: \n");
scanf(" %c", &answer);

//printf("\n answer is %c\n", answer);

}
printf("GoodBye!");
return 0;

*/


int main(void)
{
    char answer;
    printf("Would you like to play? Enter Y or N: ");
    while (scanf(" %c", &answer) == 1 &&
           printf("Answer is %c\n", answer) > 0 &&
           answer == 'Y')
    {
        printf("Success!\n");
        printf("Do you want to play again? Y or N: ");
    }
    printf("GoodBye!\n");
    return 0;
}




/*

#include<stdio.h>
#include<string.h>
 

void main()

{
     
    char customer_name[30] , ans;
    float weight;
     
    
    printf("\n***********************************************");
    printf("\\n*         WELCOME TO THE GROCERIES SHOP             *");
    printf("\n***********************************************");
     
  
    printf("Would you like to continue (Y/N)?");
    scanf("%c", ans);
    
    if(ans == 'y' || ans == 'Y')
    {
    printf("\nEnter customer’s name: ");
    gets(customer_name);
    printf("\nEnter weight of groceries[KG]: ");
    scanf("f" ,&weight);
    }    
    
    else(ans == 'n' || ans == 'N');
    break;
   {
 
    
}

*/








