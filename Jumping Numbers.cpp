class Solution {
  public:
    long long jumpingNums(long long x) {
        long long maxm=INT_MIN;
        for(int i=0; i<=9; i++){
            queue<long long >q;
            q.push(i);
            while(q.empty()==false){
                long long stepnum=q.front();
                q.pop();
                if(stepnum<=x){
                    maxm=max(maxm,stepnum) ;
                    if(i==0 || stepnum>x)
                        continue;
                    int lastdigit=stepnum%10;
                    int stepnumA=stepnum*10+(lastdigit-1);
                    int stepnumB=stepnum*10+(lastdigit+1);
                    if(lastdigit==0)
                        q.push(stepnumB);
                    else if(lastdigit==9)
                        q.push(stepnumA);
                    else{ 
                        q.push(stepnumA);
                        q.push(stepnumB);
                    }
                }
            }
        }
       return maxm;
    }
};