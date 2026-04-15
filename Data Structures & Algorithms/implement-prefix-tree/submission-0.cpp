class PrefixTree {
public:
  unordered_map<string,int>mp;
    PrefixTree() {   
    }
    void insert(string word) {
        mp[word]++;
    }
    bool search(string word) {
       if(mp.find(word)!=mp.end())return true;
       return false; 
    }
    
    bool startsWith(string prefix) {
        for(auto i:mp){
           string word= i.first;
           if(word.substr(0,prefix.size())==prefix){return true;}
        }
        return false;
    }

};
