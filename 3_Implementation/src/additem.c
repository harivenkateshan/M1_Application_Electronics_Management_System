#include "electronic_management_system.h"

/**
 * @brief function to add new items to library
 * 
 * @return test_values 
 */

test_values additem(int id,char item_name[],char description[])
{
    
    
    
    FILE *fp=NULL;
    fp=fopen("itemLibrary.dat","ab+");
    
    if(fp == NULL)
    {
        printf("\nError: while opening file\n");
        return fail;
    }
    else{
        
        item *newItem = NULL;
        newItem = malloc(sizeof(item));
		
        newItem->item_id = id;
        strcpy(newItem->item_name,item_name);
        
    

    strcpy(newItem->description,description);
    
    fwrite(newItem,sizeof(item),1,fp);
    fclose(fp);
    free(newItem);
    
    
    return pass;
    } 

}