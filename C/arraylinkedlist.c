#include<stdio.h>
#include<conio.h>
struct node
{
int info;
int link;
};

struct node array[10];
int avail=0,start=-1;

// IT IS CREATING THE AVAIL LIST
void create_avail_list()
{
	int i;
    for(i=0;i<99;i++)
       array[i].link=i+1;
   array[99].link=-1;
}

// IT RETURNS THE FREE NODE;
int getnode()
{
    if(avail==-1)
        printf("List is full\n");
    else
    {
        int n=avail;
        printf("Enter the number\n");
        scanf("%d",&array[avail].info);
        avail=array[avail].link;
        return n;
    }
}

// IT IS RETURNING THE NODE TO THE AVAILLIST AFTER COMPLETING ITS WORK;
void freenode(int p)
{
    array[p].link=avail;
    avail=p;
}

// INSERTING THE ELEMENT AT THE BEGINNING
void insertion_at_beginning()
{
    int n=getnode();
    if(start==-1)
    {
        start=n;
        array[n].link=-1;
    }
    else
    {
        array[n].link=start;
        start=n;
    }
}

// INSERTING THE ELEMENT AT THE END
void insertion_at_last()
{
    int n=getnode();
    int p=start;
    while(array[p].link!=-1)
        p=array[p].link;
    if(start==-1)
    {
        start=n;
        array[n].link=-1;
    }
    else
    {
        array[p].link=n;
        array[n].link=-1;
    }
}

// SEARCHING THE GIVEN ITEM INTO THE LIST;
int search(int info)
{
    int i=1;
    int p=start;
    while(p!=-1)
    {
        if(array[p].info==info)
        {
            printf("Element found at : %d",i);
            return p;
        }
        p=array[p].link;
        i++;
    }
    if(p==-1)
    {
        printf("Element does not exist\n");
        return -1;
    }
}

// DELETE THE ELEMENT
void deleteit(int info)
{
    int x=search(info);
    int p=start,prev;
    while(p!=-1)
    {
        if(p==x)
        {
            if(p==start)
            {
                start=array[p].link;
                freenode(p);
            }
            else
            {
            array[prev].link=array[p].link;
            freenode(p);
            }
        }
        prev=p;
        p=array[p].link;
    }
}

// TO INSERT THE ELEMENT ANYWHERE;
void insertion_at_anywhere(int info)
{
    int n=getnode();
    int k=search(info);
    int p=start;
    while(p!=-1)
    {
        if(p==k)
        {
            array[n].link=array[p].link;
            array[p].link=n;
        }
        p=array[p].link;
    }
}

// TO DISPLAY ALL THE ELEMENTS
void display()
{
    int p=start;
    printf("Elements are=\n");
    while(p!=-1)
    {
        printf("%d ",array[p].info);
        p=array[p].link;
    }
}

// CHOICE FUNCTION TO IMPLEMENT OUR CHOICES;
void choice()
{
	int choice,info;
	while(1)
	{
		system("cls");
		printf("1.Insert the element at last\n2.Delete the element\n3.Display\n4.search\n5.Insert the element at the beginning\n6.Insert the element anywhere\n7.exit");
	    printf("\nEnter you choice\n");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:
	    		insertion_at_last();
	    		break;
	    	case 2:
	    		printf("Enter the number you want to delete\n");
	    		scanf("%d",&info);
	    		deleteit(info);
	    		getch();
	    		break;
	    	case 3:
	    		display();
	    		getch();
	    		break;
	    	case 4:
	    		printf("Enter the number you want to search\n");
	    		scanf("%d",&info);
	    		search(info);
	    		getch();
	    		break;
	    	case 5:
	    		insertion_at_beginning();
	    		break;
	    	case 6:
	    		printf("Enter the number you want to insert\n");
	    		scanf("%d",&info);
	    		insertion_at_anywhere(info);
	    		getch();
	    		break;
	    	case 7:
	    		exit(0);
	    	default:
	    		printf("WRONG CHOICE\n");
		}
	}
}

// MAIN FUNCTION TO IMPLEMENT ALL THE OPERATIONS;
int main()
{
    int item;
    create_avail_list();
    choice();
    return 0;
}
