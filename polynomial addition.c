#include <stdio.h>
Struct node
{
    int coeff;
    int power;
    Struct node *add;//poly1
};
Struct node *head=NULL,*temp,*newnode;
void polymal1(int val1, int pow1)
{
    poly1=(Struct node ) malloc (size of(Struct node))
    poly1->coeff=val1;
    poly1->power=pow1;
    poly1->add=NULL;
    if(head==NULL)
    {
        head=poly1;
        temp=poly1;
    }
    else
    {
        temp->add=poly1;
        temp=poly1;
    }
    
}
void polymal2(int val2, int pow2)
{
    poly2=(Struct node ) malloc (size of(Struct node))
    poly2->coeff=val2;
    poly2->power=pow1;
    poly2->add=NULL;
    if(head==NULL)
    {
        head=poly2;
        temp=poly2;
    }
    else
    {
        temp->add=poly2;
        temp=poly2;
    }
    
}
polyadd(Struct node *poly1, struct node *poly2, Struct node *poly)
{
    while(poly1->add!=NULL || poly2->add!=NULL)
    {
        poly1=poly1->add;
        poly2=poly2->add;
        while(poly1->power = poly2->power)
        {
            poly->coeff=poly1->coeff+poly2->coeff2;
            poly->power=poly1->power;
        }
    }
}
int main()
{
    polymal1(1,1);
    polymal2(2,3);
    polymal1(2,2);
    polymal2(3,1);
    polymal1(3,2);
    polymal2(1,3);
    polyadd();
    
    return 0;
}
