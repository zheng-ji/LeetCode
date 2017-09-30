int maxSubArr(vector<int> v) {

    int m = MIN_INT;
    int sum = 0;

    for (int i=0; i<v.size(); i++) {

        sum = sum + v[i];
        m = max(sum, m);

        if (sum < 0) {
            sum = 0;
        }

    }

    return m;
}

int maxSubArray(vector <int>v) {

    int sum = 0;
    int m = INT_MIN;

    for(int i = 0; i < v.size(); i++) {

        sum += v[i];
        m = max(m, sum);

        if(sum < 0) {
            sum = 0;
        }
    }

    return m;
}
