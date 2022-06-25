#include <stdio.h> 
#include <string.h> //String Header File is included to help With String copying using the strcpy() Function

int main(){ //Main Function Declaration
    struct plan //Structure declaration
    { //Structure's Data Declaration
        int plan_no; //Plan Number
        char name[70]; //Name of the Plan
        float price; //Price of the Plan
        float Data; //Data offered per day (GB)
        int time; // Plan Validity
        char s_ott[30]; // OTT Platform offered
    };

    char ott[5][30] = {{"Netflix\0"},{"Hotstar\0"},{"Prime\0"},{"Sony Liv\0"},("Zee5")}; // 2Dimensional Array for storing Preset OTT Platform Names
    
    //Present Plans Available Declared using the structure
    struct plan p1 = {1,"Budget Plan",349,1,30};
    struct plan p2 = {2,"Best Value Plan",499,2,60};
    struct plan p3 = {3,"Old School Plan",199,0.1,45};
    struct plan p4 = {4,"The Data Fever Plan",747,3,30};
    struct plan cp = {0,"",0,0,0,""};
    
    //Menu Drive Begins Here
    printf("Welcome to Telecom Billing Application\n");
    int choice;
    while (1) //While Loop Used to Repeat Program Infinitely unitl Exit Command is Issued
    {
        printf("\n\nPress 1 to view Current plan\nPress 2 to purchase/change Plan\nPress 3 to Renew Plan\nPress 0 to Exit\n");
    scanf("%d",&choice); // User Choice is Taken to Switch Case.
    if (choice==0){
        break;
    }
    switch (choice) // Code Jumps Cases according to the User's input
    {
    case 1: // View Current Plan Case
        if(cp.plan_no==0){ // Check if User has no Plan Active
            printf("You Have No plans currently selected\nPlease Choose a New Plan\n\n");
        }
        else{
            printf("Current Plan:"); // Display Active Plan
            printf("\nPlan Number: %d\nPlan Name: %s\nPlan Price: %.2f Rupees\nData Per Day: %.2fgb\nPlan Validity: %d days\nOTT Plan: %s\n",cp.plan_no,cp.name,cp.price,cp.Data,cp.time,cp.s_ott);
        }
        break;
    case 2: // Change or Purchase New Plan
        printf("Plan Number: %d\nPlan Name: %s\nPlan Price: %.2f Rupees\nData Per Day: %.2fgb\nPlan Validity: %d days\n\n",p1.plan_no,p1.name,p1.price,p1.Data,p1.time);
        printf("Plan Number: %d\nPlan Name: %s\nPlan Price: %.2f Rupees\nData Per Day: %.2fgb\nPlan Validity: %d days\n\n",p2.plan_no,p2.name,p2.price,p2.Data,p2.time);
        printf("Plan Number: %d\nPlan Name: %s\nPlan Price: %.2f Rupees\nData Per Day: %.2fgb\nPlan Validity: %d days\n\n",p3.plan_no,p3.name,p3.price,p3.Data,p3.time);
        printf("Plan Number: %d\nPlan Name: %s\nPlan Price: %.2f Rupees\nData Per Day: %.2fgb\nPlan Validity: %d days\n\n",p4.plan_no,p4.name,p4.price,p4.Data,p4.time);
        int pchoice;
        printf("Choose Your Plan 1-4");
        scanf("%d",&pchoice); // User input taken to switch Plans
        switch (pchoice) //Nested Switch used to help User Choose Plan according to their Needs
        { // In each case Current Plan details are modified according to User's Choice
        case 1:
            cp = p1;
            printf("You Have Chosen Plan 1\n");
            break;
        case 2:
            cp = p2;
            printf("You Have Chosen Plan 2\n");
            break;
        case 3:
            cp = p3;
            printf("You Have Chosen Plan 3\n");
            break;
        case 4:
            cp = p4;
            printf("You Have Chosen Plan 4\n");
            break;
        
        default:
            break;
        }
        printf("Chooase Your OTT Plan for just Rupees 300:(Strictly Optional)\n"); //User is offered choice to buy OTT Subscription
        int i;
        printf("Values:\n");
        for (i=0;i<5;i++){ //All Available OTT Subscriptions is Displayed by Traversing 2D Array
            printf("%s\n", *(ott + i));} // Pointers are used to Access Array Elements
        scanf("%d",&i);

        switch (i) // Nested Switch Case used to Choose OTT Subscription
        { //In Each Case, Current Plan Details are modified According to User's Choice.
        case 1:
            strcpy(cp.s_ott,*(ott));
            printf("You Have chosen %s\n",*(ott));
            break;
        case 2:
            strcpy(cp.s_ott,*(ott+1));
            printf("You Have Chosen %s\n",*(ott+1));
            break;
        case 3:
            strcpy(cp.s_ott,*(ott+2));
            printf("You Have Chosen %s\n",*(ott+2));
            break;
        case 4:
            strcpy(cp.s_ott,*(ott+3));
            printf("You Have Chosen %s\n",*(ott+3));
            break;
        case 5:
            strcpy(cp.s_ott,*(ott+4));
            printf("You Have Chosen %s",*(ott+4));
            break;
        default:
            break;
        }

        break;
    case 3: // User's Choice to Extend plan validity Leads to Case 3
        int ext;
        if (cp.plan_no!=0){ // If condition to check if User has or does not have an Active Plan
            printf("To renew Your Plan, Enter the Number of Days to extend Validity, Prices do not vary across plans, Each day costs Rupees 11.25\n");
        scanf("%d",&ext); //User's Input to Change Plan Validity is taken into Input Here
        printf("You Have chosen to Extend your plan for %d day(s) for Rupees %.2f\n",ext,ext*11.25);
        cp.time+=ext;cp.price+=ext*11.25; //Current Plan Details are modified according to User's Choice
        }
        else printf("You Have no Plan selected to Renew. Please Check your current plan status\n"); // Else Condtion Prompting User to Choose a Plan
        
    default:
        break;
    }
    }
    
}
// Program Ends Here
// To Ensure Program Executes to Perfection, Pleas Use Latest C Version compiler.
