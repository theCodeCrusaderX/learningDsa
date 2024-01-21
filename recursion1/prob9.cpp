// reverse array

#include<bits/stdc++.h>
using namespace std;
void revarray(int i,int arr[],int n) {
	if(i>=n/2) {
		return;
	}
	else {
		swap(arr[i],arr[n-i-1]);
		revarray(i+1,arr,n);
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}
	revarray(0,arr,n);
	for(int i=0;i<n;i++) {
		cout << arr[i];
	}
	return 0;
}