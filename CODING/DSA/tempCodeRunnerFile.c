#include<stdio.h>
#include<stdlib.h>
    typedef struct treenode
    {
        /* data */
        struct treenode *l;
        int data;
        struct treenode *r;
        }node;
        node *temp,*root;
       

 void craete_tree()
        {
            temp=(node*)malloc(sizeof(node));
            scanf("%d",&temp->data);
            temp->l=NULL;
            temp->r=NULL;
            if (root==NULL)
            {
                root=temp;
            }
            else{
                node *p,*q;
                p=root;
                while (p!=NULL)
                {
                    if (p->data>temp->data)
                    {
                        /* code */
                        q=p;
                        p=p->l;
                    
                    }
                    else{
                        q=p;
                        p=p->r;

                    }
                    
                }
                if(q->data>temp->data)
                q->l=temp;
                else
                q->r=temp;
                
            }
        }