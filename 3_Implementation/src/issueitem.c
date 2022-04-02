#include "electronic_management_system.h"

/**
 * @brief function to issue the item
 * 
 * @param id 
 * @return test_values 
 */

test_values issueitem(int id)
{
    char name1[20];
    FILE *fp=NULL;
    fp = fopen("itemLibrary.dat","rb");
    if(fp==NULL)
    {
         printf("\nError while opening file in issuing item\\n");
        return fail;
    }
    else{

    scanf("%19s company name",name1);
     item * item_to_find=(item*)malloc(sizeof(item));
    while(fread(item_to_find,sizeof(item),1,fp))
    {
        if( item_to_find-> item_id==id)
        {
            
            printf("\nItem_Id: %d\t\tItem_name: %s\t\tDescription: %s", item_to_find-> item_id, item_to_find-> item_name, item_to_find->description);
            printf("\n Items is issued to %s",name1);
            fclose(fp);
            free(item_to_find);
            return pass;
        }
    }
    
    fclose(fp);
    free( item_to_find);
    printf("\nSpecified item is not present\n");
    
    return fail;
    }
}