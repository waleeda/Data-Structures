//
//  Element.h
//  Data-Structures
//
//  Created by Waleed Azhar on 2016-02-20.
//  Copyright © 2016 nil. All rights reserved.
//

#ifndef Element_h
#define Element_h


typedef struct __Element
{
    int data;
} _Element ;

typedef _Element *Element;


//data is init to value of 0
Element create_Element();

void delete_Element(Element element);

#endif /* Element_h */

