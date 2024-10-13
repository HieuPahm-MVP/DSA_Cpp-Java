#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;
//cap phat dong mot node moi voi du lieu la so nguyen x
node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
//kiem tra rong
bool empty(node a){
    return a == NULL;
}
//do rong (size)
int Size(node a){
    int cnt =0;
    while(a != NULL){
        a = a->next;
    }
    return cnt;
}
//them 1 phan tu vao dau danh sach lien ket 
void insertFirst(node &a, int val){
    node tmp = makeNode(val);
    if(a == NULL){
        a == tmp;
    }
    else{
        tmp->next = a;
        a = tmp;
    }
}
//Them mot phan tu vao cuoi danh sach
void insertLast(node &a, int val){
    node tmp = makeNode(val);
    if(a == NULL) a == tmp;
    else{
        node p = a;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}
//them mot phan tu vao giua
void insertMiddle(node &a, int val, int pos){
    int n = Size(a);
    if(pos <= 0 || pos > n + 1){
        cout<<"Error";
    }
    if(pos == 1){
        insertFirst(a,x);
        return;
    }
    else if(pos == n + 1){
        insertLast(a,x);
        return;
    }
    node p = a;
    for(int i =1; i < pos - 1; i++){
        p = p->next;
    }
    node tmp = makeNode(val);
    tmp->next = p->next;
    p->next = tmp;
}
//xoa phan tu o dau
void deleteFirst(node &a){
    if(a == NULL) return;
    a = a->next;
}
//xoa phan tu o cuoi
void deleteLast(node &a){
    if(a == NULL) return;
    node truoc = NULL, sau = a;
    while(sau->next != NULL){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc == NULL){
        a == NULL;
    }
    else{
        truoc->next = NULL;
    }
}
//xoa phan tu o giua 
void deleteMiddle(node &a, int pos){
    int n = Size(a);
    if(pos <= 0 || pos > n) return;
    node truoc = NULL, sau = a;
    for(int i = 1; i < pos; i++){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc == NULL){
        a = a->next;
    }
    else{
        truoc->next = sau->next;
    }
}
//print
void in(node a){
    cout << "--------------------------------\n";
    while(a != NULL){
        cout<<a->data<<" ";
        a = a->next;
    }
    cout<<endl;
}
void sapxep(node &a){
    for(node p = a; p->next != NULL; p = p->next){
        node min = p;
        for(node q = p->next; q != NULL; q = q->next){
            if(q->data < min->data){
                min = q;
            }
        }
        int tmp = min->data;
        min->data = p->data;
        p->data = tmp;
    }
}