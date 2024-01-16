class Solution {
public:
    int hIndex(std::vector<int>& citations) {
        int n = citations.size();
        std::vector<int> papers(n + 1, 0);

        for (int c : citations) {
            papers[std::min(n, c)]++;
        }

        int k = n;
        for (int s = papers[n]; k > s; s += papers[k]) {
            k--;
        }

        return k;
    }
};