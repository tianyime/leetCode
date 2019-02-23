class Solution 
{
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) 
    {
        string shortUrl="http:://t.com/" + std::to_string(count);
        m.emplace(std::make_pair(shortUrl,longUrl));
        count++;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) 
    {
        auto search = m.find(shortUrl);
        if (search != m.end()) 
        {
            return search->second;
        } 
        else
        {
            return shortUrl;
        }
    }
    
    std::map<string,string> m;
    int count;
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));