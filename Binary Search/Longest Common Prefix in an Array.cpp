#include<bits/stdc++.h>
using namespace std;

string getminlen(string arr[],int n){
    int minlen = 10000;
    for(int i=0;i<n;i++){
        minlen = (minlen>arr[i].length())?arr[i].length():minlen;
    }
    string opstr ="";
    for(int i=0; i<minlen; i++){
        char x = arr[0][i];
        for(int j=0; j<n; j++){
            if(arr[j][i] != x)return (opstr.length()==0)?"-1":opstr;
        }
        opstr += x;
    }
    
    return (opstr.length()==0)?"-1":opstr;
}

int main()
 {
	//code
	int N;
	cin >> N;
	while(N--){
	    int n;
	    cin >> n;
	    string arr[n];
	    
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    cout << getminlen(arr,n) << endl;
	    
	}
	return 0;
}
