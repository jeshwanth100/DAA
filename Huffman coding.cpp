#include<iostream>
#include<queue>
using namespace std;
struct Node{
	char ch;
	int freq;
	Node *left,*right;
	Node(char c,int f){
		ch=c;
		freq=f;
		left=right=NULL;	
	}
};
struct compare{
	bool operator()(Node* a,Node* b){
		return a->freq>b->freq;
	}
};
void printcode(Node*root,string code){
	if(root==NULL)
	return;
	if(root->left==NULL&&root->right==NULL)
	cout<<root->ch<<":"<<code<<endl;
	printcode(root->left,code+"0");
	printcode(root->right,code+"1");
}
int main(){
	int n;
	cin>>n;
	priority_queue<Node*,vector<Node*>,compare>pq;
	for(int i=0;i<n;i++){
		char ch;
		int freq;
		cin>>ch>>freq;
		pq.push(new Node(ch,freq));
	}
	while(pq.size()>1){
		Node*left=pq.top();
		pq.pop();
		Node*right=pq.top();
		pq.pop();
		Node*parent=new Node('$',left->freq+right->freq);
		parent->left=left;
		parent->right=right;
		pq.push(parent);
	}
	cout<<"huffman coding\n";
	printcode(pq.top(),"");
	return 0;
}
