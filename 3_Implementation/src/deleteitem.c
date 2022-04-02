#include "electronic_management_system.h"

/**
 * @brief function to remove the records of a item
 * 
 * @param id 
 * @return test_values 
 */

test_values deleteitem(int id)
{
    
    
    
    FILE *fp=NULL;
    FILE *ft=NULL;
    fp = fopen("itemLibrary.dat","rb");
    ft = fopen("temp.dat","wb");
    
    if(fp==NULL || ft==NULL)
        {
             printf("\nError: While opening file:\n");
            return fail;
        }
    else{
        rewind(fp);
        
        item *discarded_item = ( item*)malloc(sizeof(item));
    while(fread(discarded_item,sizeof(item),1,fp)==1)
    {
        if(id != discarded_item-> item_id)
        {
            
            fwrite(discarded_item,sizeof( item),1,ft);
            
            
        }
        
        
        

    }
    fclose(fp);
    fclose(ft);
    free(discarded_item);
  
   remove("itemLibrary.dat");
    rename("temp.dat","itemLibrary.dat");
    
    return pass;
    
    
        }

}