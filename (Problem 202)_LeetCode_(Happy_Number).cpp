class Solution {
public:
    bool isHappy(int n) 
    {
        set<int> nums;

        nums.insert(n);
        string s = to_string(n);

        while(sumof(s) != 1 && nums.find(sumof(s)) == nums.end())
        {
            nums.insert(sumof(s));
            s = to_string(sumof(s));
        }

        if(sumof(s) == 1)
         return true;

        else return false ;

    }
private:
    int sumof(string s) 
    {
        int sum = 0 ;
        for(int i=0;i<s.length();i++)
        {
            sum += pow(s[i] - '0',2);
        }

        return sum ;
    }   
};
