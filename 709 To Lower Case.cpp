class Solution {
public:
    string toLowerCase(string str) {
        string result;
        constexpr int gap=('z'-'Z');
        for(const auto& letter : str)
        {
            if(letter>='a' && letter<='z')
            {
                result.push_back(letter);    
            }
            else if(letter>='A' && letter<='Z')
            {
                result.push_back(letter+gap);
            }
            else
            {
                result.push_back(letter);
            }
        }
        return result;
    }
};
