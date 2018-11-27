struct node 
{
    void *i;            //pointer to the item (info)
    struct node *next;  //pointer to the next Node
};
typedef struct node* Node;

struct list 
{
    Node p;     //pointer to the first list item
    Node u;     //pointer to the last list item
    int n;      //nimber of items in the list
};
typedef struct list* List;

int 
main()
{
    
}
