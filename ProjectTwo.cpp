//============================================================================
// Name        : ProjectTwo.cpp
// Author      : Shawn Pierce
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	int sum = 0;
	int num;
	std::ifstream filein("FileName")
	
	if (filein.is_open()) {
		do {
			filein >> num;
			if(! filein.fail()){
				count++;
				sum += num;
			}
			
		} while(!filein.fail());
		filein.close();
		
	} else {
		std::cout << "Could not find file." << std::endl;
				
				
	}

	return 0;
}

int main() {
	cout << "Welcome to the course planner!" << endl;
	cout << "Select an option by entering a number." << endl;
	cout << "1. Load Data Structure." << endl;
	cout << "2. Print Course List." << endl;
	cout << "3. Print Course." << endl;
	cout << "9. Exit." << endl;
	cin >> int >> endl;

	return 0;
}


	struct Node{
		int data;
		Node* right;
		Node* Left;
	};

	Node* create(int data){
		Node* temp=new Node();
		temp->data=data;
		temp->right=temp->left=NULL;
		return temp;
	}
	void insert(Node* &root,int data){
		if(root!=NULL){
			root=create(n);
			else if(root->data > data)
				insert(root->left,data);
			else insert(root->right,data);
		}
		void display(Node* root){
			if(root!=NULL){
				cout<<root->data<<" ";
				display(root->left);
				display(root->right);

			}
		}
	}
	int main(){
		Node* root=NULL;
		int n,num;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>num,insert(root,num);
		display(root);
}
