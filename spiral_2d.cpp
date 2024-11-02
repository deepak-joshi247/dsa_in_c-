// to print 2D array in spiral format 
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // intializing index
int startingrow = 0;
int startingcol = 0;
int endingrow = matrix.size() - 1;
int endingcol = matrix[0].size() - 1;
int total = (endingrow + 1) * (endingcol + 1);
vector<int> ans;
int count = 0;

// Looping till all elements are done
while (count < total) {
    // Printing starting row
    for (int index = startingcol; count < total && index <= endingcol; index++) {
        ans.push_back(matrix[startingrow][index]);
        count++;
    }
    startingrow++;
    
    // Printing ending column
    for (int index = startingrow; count < total && index <= endingrow; index++) {
        ans.push_back(matrix[index][endingcol]);
        count++;
    }
    endingcol--;
    
    // Printing ending row 
    for (int index = endingcol; count < total && index >= startingcol; index--) {
        ans.push_back(matrix[endingrow][index]);
        count++;
    }
    endingrow--;
    
    // Printing starting column 
    for (int index = endingrow; count < total && index >= startingrow; index--) {
        ans.push_back(matrix[index][startingcol]);
        count++;
    }
    startingcol++;
}

return ans;
    }
// no duplicaates are being printed since we are updating row amd colm value 
