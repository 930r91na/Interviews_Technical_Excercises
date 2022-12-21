// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, int Y, int D) {
	//cout<<Y-X;
	//cout<<(Y-X)/D;
	int n;
	if((Y-X)%D==0){
		 n= ((Y-X)/D);
	}else{
		 n= ((Y-X)/D)+1;
	}
    
    
    return n;
}
