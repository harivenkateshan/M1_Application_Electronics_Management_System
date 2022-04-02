
/**
 * @file electronic_Managment_system.h
 * 
 * @brief 
 * @version 0.1
 
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ELECTRONIC_MANAGEMENT_SYSTEM_H__
#define __ELECTRONIC_MANAGEMENT_SYSTEM_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * @brief structure for Item Record
 * 
 */
typedef struct library
{
    int item_id;
    char item_name[20];
    char description[20];
}item;

/**
 * @brief return type for funtions for unit testing
 * 
 */

typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;

/**
 * @brief function to find a item by its ID
 * @param id 
 * @return test_values 
 */
test_values searchitem(int id);

/**
 * @brief function to add new items to the library
 * 
 * @return test_values 
 */
test_values additem(int id,char name[],char author[]);

/**
 * @brief funtion to denote discarded items
 * 
 * @param id 
 * @return test_values 
 */
test_values deleteitem(int id);

/**
 * @brief function to view all the items
 * 
 * @return test_values 
 */
test_values issueitem(int id);

/**
 * @brief function to issue the items
 * 
 * @return test_values 
 */
test_values viewitem(void);

#endif
