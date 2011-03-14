/*
 *  tag.h
 *  swfgl
 *
 *  Created by Matthew Clark on 3/8/11.
 *  Copyright 2011 . All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>


struct SWFglTag {
	unsigned short id;
	unsigned long length;
};

char* TagGetType(unsigned short id);
