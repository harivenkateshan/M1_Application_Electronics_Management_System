/**
 * @file main.c
 * 
 * @brief 
 * @version 0.1
 * 
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "electronic_management_system.h"
#include "additem.c"
#include "deleteitem.c"
#include "issueitem.c"
#include "searchitem.c"
#include "viewitem.c"


/**
 * @brief main function of the project
 * 
 * @return int 
 */

int main()
{
    
    int id,choice,success; 
    
    char item_name[20],description[20];
    
        
    printf("\n\t\t\t\t\t\t*****************Welcome to Electronic Store *************************\n");
    printf("\n\t\t\t\t\t\t*************** MAIN MENU ***************\n");
    printf("\n\t\t\t\t\t\t1. Add Items");
    printf("\n\t\t\t\t\t\t2. Delete Items");
    printf("\n\t\t\t\t\t\t3. View Items");
    printf("\n\t\t\t\t\t\t4. Search Items");
    printf("\n\t\t\t\t\t\t5. Issue Items");
    printf("\n\t\t\t\t\t\t6. Close Application");
    printf("\n\t\t\t\t\t\t******************************************\n");
    printf("\n\t\t\t\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nItem Id: ");
        scanf("%d",&id);
        fflush(stdin);
        printf("\nItem name:");
        //gets(name);
	scanf("%19s",item_name);
       printf("Description: ");
        fflush(stdin);
        //gets(author);
	scanf("%19s",description);
        success=additem(id,item_name,description);
        break;
        case 2:
        printf("\nItemId: ");
        scanf("%d",&id);
        success=deleteitem(id);
        break;
        case 3:
        success=viewitem();
        break;
        case 4:
        printf("\nItemId:");
        scanf("%d",&id);
        success=searchitem(id);
        break;
        case 5:
        printf("\nItemId: ");
        scanf("%d",&id);
        success=issueitem(id);
        break;
        case 6:
        printf("\n\n\n");
        exit(1);
        default:
        printf("\n\t\t\t\t\t\tInvalid input");
        break;
     }
    if(success == pass)
    {
        printf("Successful\n");
    }
    else if(success==fail)
    {
        printf("Unsuccessful\n");
    }
    else{
        printf("Error\n");
    }
return 0;
}