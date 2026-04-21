class Solution {
public:
    string foreignDictionary(vector<string>& words)
    {
           unordered_map<char, vector<char>> adj;
        unordered_map<char, int> indegree;

        // Step 1: initialize
        for (auto &word : words) {
            for (char c : word) {
                adj[c];           // ensure node exists
                indegree[c] = 0;  // initialize indegree
            }
        }

        // Step 2: build graph
        for (int i = 0; i < words.size() - 1; i++) {
            string w1 = words[i];
            string w2 = words[i + 1];

            // invalid case
            if (w1.size() > w2.size() && w1.substr(0, w2.size()) == w2) {
                return "";
            }

            for (int j = 0; j < min(w1.size(), w2.size()); j++) {
                if (w1[j] != w2[j]) {
                    adj[w1[j]].push_back(w2[j]);
                    indegree[w2[j]]++;
                    break; // only first difference matters
                }
            }
        }

        // Step 3: Kahn's BFS
        queue<char> q;
        for (auto &[c, deg] : indegree) {
            if (deg == 0) q.push(c);
        }

        string result;
        while (!q.empty()) {
            char c = q.front(); q.pop();
            result += c;

            for (char nei : adj[c]) {
                if (--indegree[nei] == 0) {
                    q.push(nei);
                }
            }
        }

        // Step 4: cycle check
        return result.size() == indegree.size() ? result : "";
        
    }
};
