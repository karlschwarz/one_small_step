#include<stdio.h>
struct data
{
	int num;
	int ranking;
	int university;
	int professor;
	struct data *next;
};
int n;
struct data *insert(struct data *head, struct data *pos)
{
	struct data *p0, *p1, *p2;
	p1=head;
	po=pos;
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

