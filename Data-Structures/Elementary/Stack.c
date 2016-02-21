//
//  Stack.c
//  Data-Structures
//
//  Created by Waleed Azhar on 2016-02-20.
//  Copyright © 2016 nil. All rights reserved.
//

#include "Stack.h"
#include <stdlib.h>

Stack create_stack(int size){
    
    Stack stk = (Stack) malloc(sizeof(_Stack));
    stk->base = (Element) malloc(sizeof(Element) * size);
    stk->top = stk->base;
  
    stk->size = size;
    
    
    return stk;
}


int stack_empty(Stack stack){
    
    return (stack->base  == stack->top);
    
}

int push(Element element, Stack stack){
    if (stack->top < stack->base + stack->size) {
        
        *(stack->top) = *element;
        stack->top += 1;
        return 0;
        
    }else
        return -1;
    
}

Element pop(Stack stack){
    
    stack->top -= 1;
    return (stack->top);
    
}

Element top_element(Stack stack){
    
    return (stack->top - 1);
    
}

void remove_stack(Stack stack){
    
    
    free(stack->base);
    free(stack);
}