#include "electronic_management_system.h"

/**
 * @brief function to  find the details about a item
 * 
 * @param id 
 * @return test_values 
 */

test_values searchitem(int id)
{
    
    FILE *fp=NULL;
    fp = fopen("itemLibrary.dat","rb");
    if(fp==NULL)
    {
        printf("\nError while opening file in search area\n");
        return fail;
    }
    else{
    
     item * item_to_find=( item*)malloc(sizeof( item));
    while(fread(item_to_find,sizeof( item),1,fp))
    {
        if( item_to_find-> item_id==id)
        {
            
            printf("\nItem_Id: %d\t\tItem_name: %s\t\tDescription: %s",item_to_find->item_id,item_to_find->item_name,item_to_find->description);
            fclose(fp);
            free(item_to_find);
            return pass;
        }
    }
    
    fclose(fp);
    free(item_to_find);
    printf("\nSpecified Item is not present\n");
    
    return fail;
    }
}