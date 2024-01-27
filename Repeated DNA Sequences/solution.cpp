class Solution {
    public:
      vector<string> findRepeatedDnaSequences(string s) {
  
          // Set to keep track of all encountered substrings
          unordered_set<string> seen;
          // Set to keep track of repeated substrings
          unordered_set<string> repeated;
          // Result vector to store repeated DNA sequences
          vector<string> ans;
  
          // Iterate through the input string 's'
          for (int i = 0; i + 10 <= s.length(); ++i) {
              // Extract a substring of length 10
              string substr = s.substr(i, 10);
  
              // Check if the substring is already in 'seen'
              if (!seen.insert(substr).second) {
                  // If the substring is already in 'seen', it's repeated
                  // Check if it's not already in 'repeated' to avoid duplicates
                  if (repeated.insert(substr).second) {
                      // Add the repeated substring to the result vector 'ans'
                      ans.push_back(substr);
                  }
              }
          }
  
          // Return the vector containing all repeated DNA sequences
          return ans;
      }
    };
