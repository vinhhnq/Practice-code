#include <iostream>
using namespace std;

int n;
struct Node {
    int data;
    Node *next; // chua dia chi ma node tro toi
    
};
struct List {
    Node *head;
    Node *tail;
};
void Init(List &l){
    l.head = l.tail = NULL;
}
Node *createNode(int x){
    Node *p = new Node;
    if(p==NULL)
      exit(1);
    p->next = NULL;
    p->data = x;
    return p;
}
bool isEmpty(List l){
    if (l.head == NULL) return true;
    return false;
}

void addHead(List &l, int x){
    Node *p = createNode(x);
    if(isEmpty(l)) l.head = l.tail = p;
    else{
        p->next = l.head;
        l.head = p;
    }
}
Node *search(List l, int k){
  Node *p = l.head;
  while (p!=NULL) { 
    if(p->data == k) return p;
    else p = p->next;

  }
  return NULL;

}
void addTail(List &l, int x) {
  Node *p = createNode(x);
  if(isEmpty(l)) addHead(l,x);
  else{
    l.tail -> next = p;
    l.tail = p;
  }
    
}

void addMid(List &l,int x,int k){
  Node *p = search(l,k);
  if(p!=NULL){
    Node *q = createNode(x);
    Node *r = p->next;
    p->next = q;
    q->next = r;  
  }
}
void addAtK(List &l,int x,int k){
  if(isEmpty(l) || k<=1) addHead(l,x);
  else if(k>=n) addTail(l,x);
  else{
    Node *p = createNode(x);
    Node *q = createNode(x), *w = new Node;
    Node *r = l.head;
    int count = 0;
    while (r!=NULL){
      count++;
      q = r;
      if(count == k) break;
      else r = r->next;
    }
    w = l.head;
    while (w->next != q) w = w->next;
    w->next = p;
    p->next = r;
    
  }
}
void input(List &l){
  cout<<"\n nhap so phan tu dau tien cua List: "; 
  cin >> n;
  for(int i = 1; i <= n; i++)
    addTail(l,i);
}
void output(List l){
  Node *p = l.head;
  while (p!=NULL) { 
    cout<<" "<<p->data;
    p=p->next;
  }
  
}


void menu(){
    List l;
    Init(l);
    input(l);
    output(l);
    int k,x;
    int luachon;
    
    do{
        cout<<"\n_____MENU_____\n1_chen dau.\n2_chen cuoi."
            <<"\n3 chen sau vi tri node data = x.\n4_chen vao vi tri bat ki."
            <<"\n5_xuat thong tin list.\n0_Thoat.\n_Chon: ";
        cin >> luachon;
        switch (luachon) {
            case 0: break;
            case 1:
                cout<<"\n Nhap x: ";
                cin>>x;
                addHead(l,x);
                n++;
                break;
            case 2:
                cout<<"\n Nhap x: ";
                cin>>x;
                addTail(l,x);
                n++;
                break;
            case 3:
                cout<<"\n Nhap x, vi tri k: ";
                cin>>x>>k;
                addMid(l,x,k);
                n++;
                break;
            case 4:
                cout<<"\n Nhap x, vi tri k: ";
                cin>>x>>k;
                addAtK(l,x,k);
                n++;
                break;
            case 5:
                output(l);
        }
    }
    while (luachon!=0);
}
int main(){
    menu();
    return 0;
}
