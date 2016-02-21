//
//  Stack.h
//  Data-Structures
//
//  Created by Waleed Azhar on 2016-02-20.
//  Copyright © 2016 nil. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>
#include "Element.h"

typedef struct __Stack{
    Element base;
    Element top;
    int size;
   
} _Stack;

typedef _Stack  *Stack;

Stack create_stack(int size);

int stack_empty(Stack stack);

int push(Element element, Stack stack);

Element pop(Stack stack);

Element top_element(Stack stack);

void remove_stack(Stack stack);


#endif /* Stack_h */
