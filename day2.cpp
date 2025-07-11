//day2.cpp
//link:https://www.hackerrank.com/challenges/compare-the-triplets

/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int>r(2);
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==b[i])
            continue;
        if(a[i]>b[i])
            r[0]++;
        else 
            r[1]++;
    }
    return r;
}