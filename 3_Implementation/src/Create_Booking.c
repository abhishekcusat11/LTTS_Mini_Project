
#include<stdlib.h>
typedef struct NODE
{
	int reg_no;
	int age;
	char name[20];
	struct NODE *next;
} node;
node *start;
int num=0;
int create( )
{
	node *new;
	new=(node *)malloc(sizeof(node));
	new->reg_no=1;
	printf("Name: ");
	scanf("%s", new->name);
	printf("Age : ");
	scanf("%d", &new->age);
    if(new->age>=90 || new->age<=10) {
        free(new);
        return -1;
    }
	start=new;
	new->next=NULL;
	num++;
    return 1;
	
}


