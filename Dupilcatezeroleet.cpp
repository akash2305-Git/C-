class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int a=0;a<size(arr);a++){
        if(arr[a]==0){
            for(int b=size(arr)-1;b>a;b--){
                arr[b]=arr[b-1];
            }
            if(a!=size(arr)-1)
                arr[a+1]=arr[a];
            a++;
        }
    }
    }
};
