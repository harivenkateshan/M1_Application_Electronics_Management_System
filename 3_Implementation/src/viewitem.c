#include"electronic_management_system.h"

/**
 * @brief function to view all  the items
 * 
 * @return test_values 
 */

test_values viewitem()
{
    
    FILE *fp=NULL;
    fp=fopen("itemLibrary.dat","rb");
   
    if(fp==NULL)
    {
        printf("\nERROR:\n");
        return fail;
    }
    else{
        item *item_to_find=( item*)malloc(sizeof( item));
    while(fread(item_to_find,sizeof(item),1,fp)==1)
    {
        printf("\n%d\t\t\t%s\t\t\t%s",item_to_find->item_id,item_to_find->item_name,item_to_find->description);
    }
    fclose(fp);
    free(item_to_find);
    
    return pass;
    }
}