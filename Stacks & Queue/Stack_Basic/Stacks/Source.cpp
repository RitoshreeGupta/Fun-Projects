#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include <string>

using namespace std;

string QuickTrickQueueStack(vector<int> &in) {
	if (in.size() == 0) {
		return " ";
	}
	
	stack <queue<int>*> stack;

	queue<int>* Q = new queue<int>;
	Q->push(in.at(0));
	
	stack.push(Q);
	int s;
	
	for (int i = 1; i < in.size(); i++) {
		s = in.at(i);
		
		Q = stack.top();
		if (s > Q->front()) {
		
			Q->push(s);
		}
		else {
			
			Q = new queue<int>;
			Q->push(s);
		
			stack.push(Q);
		}
	}


	string r = "";
	while (!stack.empty()) {
		
		Q = stack.top();
		
		stack.pop();
	
		while (!Q->empty()) {
			s = Q->front();
			Q->pop();
		
			r = r + to_string(s) + " ";
		}
	
		delete Q;
	}
	return r;
}