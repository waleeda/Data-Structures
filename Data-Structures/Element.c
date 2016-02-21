//
//  Element.c
//  Data-Structures
//
//  Created by Waleed Azhar on 2016-02-20.
//  Copyright © 2016 nil. All rights reserved.
//

#include "Element.h"
#include <stdlib.h>



Element create_Element(){
    
    Element temp  = (Element) malloc(sizeof(_Element));
    temp->data = 0;
    
    return temp;
    
    
}



void delete_Element(Element element){
    
    free(element);

    
}