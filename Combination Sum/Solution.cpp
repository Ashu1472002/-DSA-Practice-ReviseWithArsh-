class Solution {
public:
    void combinations(int index,int target,int cnt,int arr[],vector<vector<int>> &ans,  vector<int> &temp)
    {
      if(cnt==0)
      {
          if(target==0)
          {
              ans.push_back(temp);
              return;
          }
      }
      for(int i=index;i<9;i++)
      {
         if(arr[i]>target) break;
         temp.push_back(arr[i]);
         combinations(i+1,target-arr[i],cnt-1,arr,ans,temp);
         temp.pop_back();
      }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        int arr[9] = {1,2,3,4,5,6,7,8,9};
        combinations(0,n,k,arr,ans,temp);
        return ans;
    }
};
