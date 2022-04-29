//https://github.com/Kyonto/SRM_Projects/edit/main/test.c
//RA2111003010121 - Sivaguru Muralidharan

#include <stdio.h>

float result;

float add(float num1,float num2)
{
    result = num1 + num2;
    return result;
}
float sub(float num1,float num2)
{
    result = num1 - num2;
    return result;
}
float mult(float num1, float num2)
{
    result = num1*num2;
    return result;
}
float div(float num1,float num2)
{
    result = num1/num2;
    return result;
}

int main()
{
    int choice;
    float num1,num2;
    printf("\nEnter The First Number: ");
    scanf("%f",&num1);
    printf("Enter The Second Number: ");
    scanf("%f",&num2);
    printf("Choose your Mathematical Requirement: \n");
    printf("Type 1 for Addition\n");
    printf("Type 2 for Subtraction\n");
    printf("Type 3 for Multiplication\n");
    printf("Type 4 for Division\n");
    scanf("%d",&choice);
    if (choice == 1){
        printf("The Resulting Value is : %f",add(num1,num2));main();}
    else if (choice==2){
        printf("The Resulting Value is : %f",sub(num1,num2));main();}
    else if (choice==3){
        printf("The Resulting Value is : %f",mult(num1,num2));main();}
    else if (choice==4){
        printf("The Resulting Value is : %f",div(num1,num2));main();}
    else
    {
        printf("Enter a Valid Input Case: \n");
        main();
    }

	return 0;
}

