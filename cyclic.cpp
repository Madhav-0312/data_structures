/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* detectCycle(listnode* A) {
    listnode *f = (listnode *)malloc(sizeof(listnode));
    listnode *s = (listnode *)malloc(sizeof(listnode));
    
    f=A;
    s=A;
    
    while(f->next)
    {
        f=f->next->next;
        s=s->next;
        if(f==s)
        {
           break; 
        }
    }
    if(f->next==NULL)
    {
        return NULL;
    }
    f=A;
    while(f!=s)
    {
        f=f->next;
        s=s->next;
    }
    return f;
    
    
    
}

