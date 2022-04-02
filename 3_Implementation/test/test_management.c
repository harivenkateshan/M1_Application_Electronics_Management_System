#include "electronic_management_system.h"
#include"unity_internals.h"
#include"unity.h"
#include "unity.c"
#include "electronic_management_system.h"
#include "additem.c"
#include "deleteitem.c"
#include "issueitem.c"
#include "searchitem.c"
#include "viewitem.c"


void setUp(){}

void tearDown(){}


void test_additem(void){
    TEST_ASSERT_EQUAL(pass,additem(25, "RICE", "SMALL PACKET"));
}

void test_viewitem(void){
    TEST_ASSERT_EQUAL(pass,viewitem());
}

void test_searchitem(void){
    TEST_ASSERT_EQUAL(fail,searchitem(-1));
    TEST_ASSERT_EQUAL(pass,searchitem(25));
}



void test_deleteitem(void){
    TEST_ASSERT_EQUAL(pass,deleteitem(25));
}        

void test_issueitem(void){
    TEST_ASSERT_EQUAL(pass,issueitem(25));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_additem);
    RUN_TEST(test_searchitem);
    RUN_TEST(test_issueitem);
    RUN_TEST(test_deleteitem);
    RUN_TEST(test_viewitem);
    
    return UNITY_END();
}