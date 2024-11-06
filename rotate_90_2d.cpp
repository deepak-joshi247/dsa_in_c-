#include <bits/stdc++.h> 
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{
    // transposing the array
    int just =0;
        for (int j= ((matrix[0].size()-1)-just); j>=0 ; j--)
        {
            for (int i= j;i>=0; i--)
            {
                if(j!=i)    // to swap only non diagonal element
                {
                    swap(matrix[j][i],matrix[i][j]);
                }
            }
            just++;
        }
    
    // reversing 
    for(int i=0;i<(matrix[0].size()/2) ; i++)       
    {
        swap(matrix[i],matrix[(matrix[0].size()-1)-i]);   //swap directly the rows
    }
    return matrix;
}
