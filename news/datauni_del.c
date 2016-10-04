#include <stdio.h>
struct data
{
	int num;
	int ranking; 
	int university;
        int professor;
        struct data * next;
};
int n;

struct data *dele(struct data *head, int num)
{
	struct data *p1, *p2;
	if (head==NULL)
	{
		printf("\n This table is empty!\n");
		return(head);
	}
	while (num != p1->num && p1->next!=NULL)
	{
		p2=p1;
		p1=p1->next;
	}
	if (num == p1->num)
	{
		if (p1==head)
			head=p1->next;
		else p2->next=p1->next;
		printf("%d is deleted successfully!\n",num);
		n-=1;
	}
	else printf("%d is not found!\n",num);
	return(head);
}
