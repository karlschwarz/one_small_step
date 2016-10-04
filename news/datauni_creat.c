#include <stdio.h>
#include <stdlib.h>
#define LTH sizeof(struct data)
struct data
{
	int num;
	int ranking;
	int university;
	int professor;
	struct data *next;
};
int n;
struct data *creat(void)
	{
		struct data *head;
		struct data *p1, *p2;
		n=0;
		p1=p2=(struct data *)malloc(LTH);
		scanf("%d, %d, %d, %d", &p1->num, &p1->ranking, &p1->university, &p1->professor);
		head=NULL;
		while (p1->num!=0)
		{
			n+=1;
			if(n==1) head=p1;
			else p2->next = p1;
			p2=p1;
			p1=(struct data *)malloc(LTH);
		scanf("%d, %d, %d, %d", &p1->num, &p1->ranking, &p1->university, &p1->professor);
		}
		p2->next=NULL;
		return(head);
	}

int main()
{
	struct data *pt;
	pt=creat();
	printf("\n******************\n\n");
	do
	{
		printf("%d, %d, %d, %d\n", pt->num, pt->ranking, pt->university, pt->professor);
		pt=pt->next;
	}
	while (pt != NULL);
	printf("\n******************\n");
	return 0;
}

