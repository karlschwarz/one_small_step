#include<stdio.h>
#include<malloc.h>
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
int main()
{
	struct data *creat();
	struct data *dele(struct data*,int);
	struct data *insert(struct data*, struct data*);
	void print(struct data*);
	struct data *head, *dat;
	int del_num;
	printf("Please input the data: \n");
	head=creat();
	print(head);
	printf("Input the deleted number: \n");
	scanf("%d", &del_num);
	head=dele(head,del_num);
	print(head);
	printf("Please input the inserted data: \n");
	scanf("%d, %d, %d, %d", &dat->num, &dat->ranking, &dat->university, &dat->professor);
	head=insert(head, dat);
	print(head);
	return 0;
}

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


struct data *dele(struct data *head, int num)
{
	struct data *p1, *p2;
	if (head==NULL)
	{
		printf("\n This table is empty!\n");
		return(head);
	}
	p1=head;
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


struct data *insert(struct data *head, struct data *pos)
{
	struct data *p0, *p1, *p2;
	p1=head;
	p0=pos;
	if(head==NULL)
	{
		head=p0;
		p0->next=NULL;
	}
	else
	{
		while ((p0->num>p1->num)&&(p1->next != NULL))
		{
			p2=p1;
			p1=p1->next;
		}
		if (p0->num<=p1->num)
		{
			if(head==p1)
				head=p0;
			else
				p2->next=p0;
			p0->next=p1;
		}
		else
		{
			p1->next=p0;
			p0->next=NULL;
		}
		n+=1;
		return(head);
	}
}

void print(struct data*head)
{
	struct data*p;
	printf("The data might be as follows: \n");
	p=head;
	if(head != NULL)
		do
	{
		printf("%d, %d, %d, %d\n", p->num, p->ranking, p->university, p->professor);
		p=p->next;
	}
	while(p!=NULL);
}
