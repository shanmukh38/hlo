#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int IntVector;
void bar(void)
{
printf("Augh! I've been hacked!\n");
}
void InsertInt(unsigned index,unsigned long value)
{
printf(writing memory at %p\n",&(IntVector[index]));
IntVector[index]=value;
}
bool Init vector(int size)
{
IntVector=(int*)malloc(size of(int)*size);
printf("address of intVector is %p\n",IntVector);
if(IntVector==Null)
return false;
else
return true;
}
int main(int argc,char*ardv[])
{
unsigned long index,value;
if(aryc!=3)
{
printf("usage is %s[index][value]\n");
return -1;
}
index=atol(argv[1);
value=atol(argv[2]);
InsertInt(index,value);
return 0;
}
