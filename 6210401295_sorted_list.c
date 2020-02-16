//6210401295 Pachara Srisomboonchote


#include <stdio.h>
#include <stdlib.h>
typedef struct list {
    int num;
    struct list *next;
} list;
void insert(list *pre , int new){
    list *newlist;
    newlist= (list*)malloc(sizeof(list));
    newlist->num=new;
    newlist->next=pre->next;
    pre->next=newlist;
}
void insertfront(list **pre, int new){
  list *newlist;
  newlist= (list*)malloc(sizeof(list));
  newlist->num=new;
  newlist->next=*pre;
  *pre=newlist;

}
list *createnew(int newnum){
    list *new;
    new=(list*)malloc(sizeof(list));
    new->num=newnum;
    new->next=NULL;
    return new;
}
void print_list(list *head)
{ list *tmp;
for (tmp=head; tmp; tmp = tmp->next)
printf("%d\n", tmp->num);
}
int main(){
     int x,count=0,c=1,a=1000000000;
    list *head, *tmp, *check;
    while (scanf("%d", &x) == 1){
    if(x==-1) break;
    if (count==0)head=createnew(x);
    
    if(count>=1){
    for(tmp=head;tmp;tmp=tmp->next){
      check=tmp->next;
        if(check!=NULL)  a=check->num;
        
         if(x>=(tmp->num)&&x<=a) {
             insert(tmp,x);
             break;
             }
        
         else if(check==NULL && x>=tmp->num){insert(tmp,x); break;}
         else if (x<tmp->num) {insertfront(&head,x); break;}
        
        
    }
        
    }
count++;



    }
    if(count!=0)
    print_list(head);
    
    
    
    
    }