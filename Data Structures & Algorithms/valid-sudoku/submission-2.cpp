class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // bool isValid = true;

        // for (int i = 0; i < 9; i++)
        // {
        //     for (int j = 0; j < 9; j++)
        //     {
        //         unordered_set<int> row_set, col_set;
        //         int row_count = 0, col_count = 0;

        //         for (int k = 0; k < 9; k++)
        //         {
        //             if (board[i][k] != '.')
        //             {
        //                 row_set.insert(board[i][k]);
        //                 row_count++;
        //             }

        //             if (board[k][j] != '.')
        //             {
        //                 col_set.insert(board[k][j]);
        //                 col_count++;
        //             }
        //         }
                
        //         if (!((row_count == row_set.size()) && (col_count == col_set.size())))
        //         {
        //             isValid = false;
        //             break;
        //         }
        //     }
        // }

        // for (int i = 0; i < 3; i++)
        // {
        //     for (int j = 0; j < 3; j++)
        //     {
        //         unordered_set<int> box_set;
        //         int box_count = 0;

        //         for (int k = 0; k < 9; k++)
        //         {
        //             if (board[i * 3 + k / 3][j * 3 + k % 3] != '.')
        //             {
        //                 box_set.insert(board[i * 3 + k / 3][j * 3 + k % 3]);
        //                 box_count++;
        //             }
        //         }

        //         if (!(box_count == box_set.size()))
        //         {
        //             isValid = false;
        //             break;
        //         }
        //     }
        // }


        // return isValid;

        int row[9] = {0};
        int col[9] = {0};
        int box[9] = {0};

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;

                int k = 3 * (i / 3) + (j / 3);
                int mask = 1 << (board[i][j] - '1');

                if (row[i] & mask || col[j] & mask || box[k] & mask)
                    return false;

                row[i] |= mask;
                col[j] |= mask;
                box[k] |= mask;
            }
        }

        return true;
    }
};
