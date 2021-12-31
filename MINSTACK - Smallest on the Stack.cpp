#include <iostream> 
#include <cstdio>
#include <bits/stdc++.h> 
#include <string>

char order[11];
using namespace std;

int main () {
	int N;
	stack <int> st; 
	int minst;
	scanf("%d", &N); getchar();
	while (N--) {
		scanf("%s", order);
		if (strcmp(order, "PUSH") == 0) {
			int num;
			scanf("%d", &num);
			if (st.empty()) {
				minst = num;
				st.push(num);
			}
			else if (num < minst) {
				st.push(2*num-minst);
				minst = num;
			}
			else st.push(num);
			
		}
		else if(strcmp(order,"MIN") == 0) {
			if (st.empty()) {
				printf("EMPTY\n\n");
			}
			else {
				printf("%d\n\n", minst);
			}
		}
		else if (strcmp(order,"POP") == 0) {
			if (!st.empty()) {
				int tanda = st.top();
				st.pop();
				if (tanda < minst) {
					minst = 2*minst-tanda;
				}
			}
			else {
				printf("EMPTY\n\n");
			}
		}
	}
	
	return 0;
}
