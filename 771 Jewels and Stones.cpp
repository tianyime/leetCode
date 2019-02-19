class Solution 
{
public:
    int numJewelsInStones(string J, string S) 
    {
        int n=0;
        for(int j=0; j < J.size(); j++)
        {
            for(int i=0; i < S.size(); i++)
            {
                if(J[j]==S[i])
                {
                    n++;
                }
            }
        }
        return n;
    }
};
