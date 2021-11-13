#include <iostream>
using namespace std;
#include "queue.h"



int main() {
  Queue* yeah = new Queue;

  enqueue_struct(*yeah, 5);
  enqueue_struct(*yeah, 3);
  cout<<dequeue_struct(*yeah)<<endl;
  enqueue_struct(*yeah, 2);
  enqueue_struct(*yeah, 1);
  cout<<dequeue_struct(*yeah)<<endl;
  enqueue_struct(*yeah, 3);
  cout<<dequeue_struct(*yeah)<<endl;
  cout<<dequeue_struct(*yeah)<<endl;
  cout<<dequeue_struct(*yeah)<<endl;
  cout<<dequeue_struct(*yeah)<<endl;  
  
  return 0;
} 
