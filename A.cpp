class Solution {
public:
    string getEncryptedString(string s, int k) {
        string p="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            p+=s[(i+k)%n];
        }
        return p;
    }
};