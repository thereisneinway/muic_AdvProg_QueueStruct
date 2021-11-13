struct node{
	int data;	
	node * nextPtr;
};

typedef node QNODE;
typedef QNODE* QNodePtr;

typedef struct {
  QNodePtr headPtr,tailPtr;
  int size;
}Queue;

void enqueue_struct(Queue& q,int x);
int dequeue_struct(Queue& q);

/*void enqueue(QNodePtr &head, QNodePtr &tail, int x){
  QNodePtr new_node= new QNODE;
  if(new_node){ 
  cout<<"Queue: "<<x<<endl;
   	new_node->data=x;
		new_node->nextPtr=NULL;
    if(head==NULL) head=new_node;
    else tail->nextPtr=new_node    ;          
	   tail=new_node;
 }
}

int dequeue(QNodePtr &head, QNodePtr &tail){
   QNodePtr t=head;
   if(t){
    int value= t->data;
    head= t->nextPtr;
    delete t;
    cout<<"dequeue: ";
    return value;
   }
   else{
     cout<<"There is no such queue"<<endl;
     return -1;
   }
}*/

void enqueue_struct(Queue& q,int x){
  QNodePtr new_node= new QNODE;
  if(new_node){ 
    cout<<"Queue: "<<x<<endl;
   	new_node->data=x; 
		new_node->nextPtr=NULL;
    if(q.headPtr==NULL) q.headPtr=new_node; 
    else q.tailPtr->nextPtr=new_node;         
	  q.tailPtr=new_node;
    q.size++;
  }
}

int dequeue_struct(Queue& q){
  QNodePtr node = q.headPtr;
  if(q.size != 0){
    int value= node->data;
    q.headPtr= node->nextPtr;
    delete node;
    cout<<"dequeue: ";
    q.size--;
    return value;
   }
   else{
     cout<<"There is no such queue ";
     return -1;
   }
}