vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int size = n;
    sort(a.begin(), a.end());
    vector<int>ans;
    int secondMax = a[n - 2];
    ans.push_back(secondMax);
    ans.push_back(a[1]);
    return ans;
}
