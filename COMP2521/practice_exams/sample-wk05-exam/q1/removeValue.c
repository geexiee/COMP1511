// removeValue.c 
// Written by Ashesh Mahidadia, August 2017

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "DLList.h"


/* 
    You will submit only this one file.

    Implement the function "removeValue" below. Read the exam paper for 
    detailed specification and description of your task.  

    - DO NOT modify code in the file DLList.h . 
    - You can add helper functions in this file.  
    - DO NOT add "main" function in this file. 
    
*/



void removeValue(DLList L, int value){
    assert(L != NULL);
    while (L->curr != NULL) {
        if (L->curr->value == value) {
            DLListNode *temp = L->curr, *nxt = L->curr->next, *prv = L->curr->prev;
            L->curr = L->first;
            prv->next = nxt;
            nxt->prev = prv;
            free(temp);
        }
        else {
            L->curr = L->curr->next;
        }
        L->curr = L->curr->next;
    }
    
            



	return;
}



