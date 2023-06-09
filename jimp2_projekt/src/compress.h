#ifndef _COMPRESS_
#define _COMPRESS_

#include "node.h"
#include "key.h"

void printLeaves(dynamicArray* nodes);
void leavesMaker_8 (FILE *, dynamicArray *, int );
int leavesMaker_16 (FILE *, dynamicArray *, unsigned char *, int);
int leavesMaker_12 (FILE *, dynamicArray *, unsigned char *, int);
int compressToFile_8_16(FILE *, FILE *, int, key_type *);
int compressToFile_12(FILE *, FILE *, key_type *);


#endif
