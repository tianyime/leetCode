class Solution 
{
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        set<string> result;
        for(const auto& e : emails)
        {
            int plus_place = e.find_first_of('+');
            int at_place = e.find_first_of('@');
            
            string tmp_string_prefix = e.substr(0, plus_place);
            string tmp_string_suffix = e.substr(at_place, e.size());

            string s = std::move(tmp_string_prefix) + std::move(tmp_string_suffix);
            s.erase(std::find(s.begin(), s.end(), '.'));   
            
            int n = s.find_last_of('@');
            s.insert(n,1,'.');
            result.insert(s);
        }
        return result.size();
    }
};
