#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){

	    int a;
	    int b;
	    cin>>a>>b;
	    
	    int count = 0;
	    for(int i=a;i<=b;i++){
	       	  if((i%10)==2 || (i%10)==3 || (i%10)==9){
	            count++;
	        }
	       }
	   cout << count << endl;

	}
	return 0;
}
