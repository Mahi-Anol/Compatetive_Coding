class Solution {
public:
    int majorityElement(vector<int>& nums) {
         
        int maj=-1;
         int cnt=0;

	      for(auto i=nums.begin();i!=nums.end();i++)
         {
             if(cnt==0)
             {
                 maj=*i;
             }
             if(*i==maj)cnt++;
             else cnt--;
         }

         return maj;
    }
};
