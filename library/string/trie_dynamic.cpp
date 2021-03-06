/*
Problems
https://binarysearch.com/problems/Trie
https://codeforces.com/contest/665/problem/E
https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3ff3
*/

const int BASE = 26, START = 'a';

struct TRIE {
	struct node {
		int count = 1;
		bool end = false;
		node* next[BASE] = {};
	};
	struct node* head;

	TRIE(): head(new node()) {};

	void add(string s) {
		auto ptr = head;
		for(char &c: s) {
			ptr->count++;
			if(!ptr->next[c - START]) ptr->next[c - START] = new node();
			ptr = ptr->next[c - START];
		}
		ptr->count++;
		ptr->end = true;
	}

	bool exists(string s, bool prefix = false) {
		auto ptr = head;
		for(char &c: s) {
			if(!ptr->next[c - START]) return false;
			ptr = ptr->next[c - START];
		}
		return prefix or ptr->end;
	}

	bool startswith(string s) {
		return exists(s, true);
	}
};