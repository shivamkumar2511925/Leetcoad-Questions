class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set <char>st;
        string res=" ";
        int left=0;
        int maxlength =0;
        for(int i=0;i<s.size();i++){
            while(st.count(s[i])){
                st.erase(s[left]);
                left ++;
            }
            st.insert(s[i]);
            maxlength=max(maxlength,i-left+1);
        }
        return maxlength;
    }
};