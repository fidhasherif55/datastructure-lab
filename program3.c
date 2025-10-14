#include <stdio.h>
#include <stdlib.h>

void insertion();
void deletion();
void searching();
void sorting();
void display();

int arr[50];
int num; //current size of the array
int n;   //menu option

int main() {
    printf("enter the number of elements");
    scanf("%d",&num);
    
    for(int i=0;i<num;i++) {
    printf("The array element %d: ",i+1);
    scanf("%d",&arr[i]):
}
    printf("The array elements are:\n");
    for(int i=0;i<num;i++) {
    printf("%d\n",arr[i]);
                                                                                                                                             
}
while(1){
printf("\n enter a option:\n ");
printf("1.INSERTION\n");
printf("2.DELETION\n ");
printf("3.SEARCHING\n ");
printf("4.SORTING\n ");
printf("5.DISPLAY\n ");
printf("6.EXIT\n ");
scanf("%d",&n);

switch(n){
 case 1:
       insertion();
       break;
 case 2:
       deletion();
       break;'
 case 3:
       searchin();
       break;
 case 4:
       sorting();
       break;
 case 5:
       display();
       break;
 case 6:
       exit(0);
       break;
default:print("invalid option\n");
break;
}
}
return 0;
}
void insertion()
{
int number;
printf("enter the number to be inserted\n");
scanf("%d",&number);
array[num]=number;
num=num+1;
printf("the array elements are:\n");
for(int i=0;i<num;i++)
{
printf("%d\n"array[i]);
}
}
void deletion()
int i,int j;
if(num>0)
{
print("\nEnter the index of element\n");
scanf("%d",&int);
for(j=int;j<num;j++)
array[j]=array[j]+1;
num=num-1;
}
else
{
printf("\n array is empty\n");
}
printf("the array elements are:");
for(int i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
}
void searching()
{
int num,to search,found,i;
printf("\nEnter element to search:");
scanf("%d",& to search);
found=0;
for(i=0;i<num;i++)
{
if(array[i]==to search)
{
found=1;
break;
}
}
if(found==1)
{
printf("\n%d is found at position %d\n",to search,i+1);
}
else
{
printf("\n%d is not found in the array\n",to search);
}
}
void sorting()
{
int a,i,j;
for(i=0;i<num;++i)
{
for(j=i+1;j<num;++j)
{
if(array[i]>array[j])
{
a=array[i];
array[i]=array[j];
array[j]=a;
}
}
}
printf("the numbers arranged in the ascending order are given below\n");
for(i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
}
void display()
{
int i;
printf("the array elements are:");
for(int i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
}

