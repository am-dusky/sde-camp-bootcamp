class Solution {
public:
     int f(int n,int k){
        if (n==1)
            return 0;
        return ((k)%n+(f(n-1,k)))%n;
    }
    int findTheWinner(int n, int k) {
        return 1+ f(n,k);
    }
};
