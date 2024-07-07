class Solution {
public:
    vector<string> validStrings(int n) {
        
          vector<string> ans;
        if (n == 0) return ans;
        rec(n, "", ans);
        return ans;
    }

private:
    void rec(int n,string i,vector<string>& ans) {
        if (i.length() == n) {
            ans.push_back(i);
            return;
        }

        if (i.length() == 0 || i.back() != '0') {
            rec(n, i + "0", ans);
        }

        rec(n, i + "1",ans);
        
    }
};