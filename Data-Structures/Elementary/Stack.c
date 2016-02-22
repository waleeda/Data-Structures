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
    stk->previous = NULL;
    
    return stk;
}


int stack_empty(Stack stack){
    
    return (stack->base  == stack->top && stack->previous == NULL);
    
}

void push(Element element, Stack stack){
    if (stack->top < stack->base + stack->size) {
        
        *(stack->top) = *element;
        stack->top += 1;
        
    }else{
        Stack new;
        new  = (Stack) malloc(sizeof(_Stack));
        new->base = stack->base;
        new->top = stack->top;
        new->size = stack->size;
        new->previous = stack->previous;
        stack->previous = new;
        stack->base = (Element) malloc(stack->size * sizeof(Element));
        stack->top = stack->base +1;
        *(stack->base) = *element;
        
        
        
    }
    
}

Element pop(Stack stack){
    
    if(stack->top == stack->base) {
        Stack old;
        old = stack->previous;
        stack->previous = old->previous;
        free(stack->base);
        stack->base= old->top;
        stack->top = old->top;
        free(old);
    }
    stack->size -= 1;
    return (stack->top);
    
}

Element top_element(Stack stack){
    if( stack->top == stack->base){
        return stack->previous->top - 1;
    }
    else{
    return (stack->top - 1);
    }
}

void remove_stack(Stack stack){
    Stack tmp;
    tmp = stack->previous;
    do {
        tmp = stack->previous;
        free(stack->base);
        free(stack);
        stack = tmp;
    } while (stack != NULL);
}