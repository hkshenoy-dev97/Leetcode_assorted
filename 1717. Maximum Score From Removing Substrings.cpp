class Solution {
public:
    int sol(string s,int x,int y,char a,char b){
        int ans=0;
        int n=s.size();
        char *st=new char[n];
        int p=0;
        for(int i=0;i<n;i++){
            if(p-1>=0 and s[i]==b and st[p-1]==a)ans+=x,p--;
            else st[p++]=s[i];
        }
        
        char* sc=new char[p];
        int l=0;
        for(int i=0;i<p;i++){
            if(l-1>=0 and st[i]==a and sc[l-1]==b){
                ans+=y;
                l--;
            }else sc[l++]=st[i];
        }
        return ans;
        
    }
    int maximumGain(string s, int x, int y) {
        return max(sol(s,x,y,'a','b'),sol(s,y,x,'b','a'));
    }
};
