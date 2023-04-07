class Solution {

    private:
    bool checkEqual(int a[26], int b[26])
    {
     for(int i=0; i<26; i++)
     {
         if(a[i]!=b[i])
         {
             return 0;
         }
     }
     return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int arr[26] = {0};
        for(int i=0; i<s1.length(); i++)
        {
            char ch = s1[i];
            int number =0;
            number = ch-'a';
            arr[number]++;
        }
        int i =0;
         int windowSize = s1.length();
         int arr2[26] = {0};
         while(i<windowSize&&i<s1.length())
         {
             int index = s2[i] -'a';
           arr2[index]++;
           i++;
         }

         if(checkEqual(arr, arr2))
         return 1;

         while(i<s2.length())
         {
             char newChar = s2[i];
             int index = newChar - 'a';
             arr2[index]++;

             char oldChar = s2[i-windowSize];
             index = oldChar- 'a';
             arr2[index]--;
             i++;
if(checkEqual(arr, arr2))
         return 1;
         }
          return 0; 
    }
    
};
