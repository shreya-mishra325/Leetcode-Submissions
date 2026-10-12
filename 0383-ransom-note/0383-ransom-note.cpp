class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mpp;
        for(int i=0; i<magazine.size(); i++){
            mpp[magazine[i]]++;
        }
        for(int i=0; i<ransomNote.size(); i++){
            if(mpp.contains(ransomNote[i]) && mpp[ransomNote[i]]>0){
                mpp[ransomNote[i]]--;
                continue;
            } 
            else return false;
        }
        return true;
    }
};