/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution
{
public:
    /*brute force approach*/
    // bool valid3x(vector<vector<char>> &board, int sr, int er, int sc, int ec)
    // {
    //     unordered_set<char> st;
    //     for (int i = sr; i <= er; i++)
    //     {
    //         for (int j = sc; j <= ec; j++)
    //         {
    //             char ch = board[i][j];
    //             if (ch == '.')
    //             {
    //                 continue;
    //             }
    //             if (st.count(ch))
    //             {
    //                 return false;
    //             }
    //             st.insert(ch);
    //         }
    //     }
    //     return true;
    // }

    // bool isValidSudoku(vector<vector<char>> &board)
    // {
    //     int n = board.size();

    //     for (int i = 0; i < n; i++)
    //     {
    //         unordered_set<char> st;
    //         for (int j = 0; j < n; j++)
    //         {
    //             char ch = board[i][j];

    //             if (ch == '.')
    //             {
    //                 continue;
    //             }
    //             if (st.count(ch))
    //             {
    //                 return false;
    //             }
    //             st.insert(ch);
    //         }
    //     }

    //     for (int i = 0; i < n; i++)
    //     {
    //         unordered_set<char> st;
    //         for (int j = 0; j < n; j++)
    //         {
    //             char ch = board[j][i];

    //             if (ch == '.')
    //             {
    //                 continue;
    //             }
    //             if (st.count(ch))
    //             {
    //                 return false;
    //             }
    //             st.insert(ch);
    //         }
    //     }

    //     for (int sr = 0; sr < 9; sr += 3)
    //     {
    //         int er = sr + 2;
    //         for (int sc = 0; sc < 9; sc += 3)
    //         {
    //             int ec = sc + 2;
    //             if (!valid3x(board, sr, er, sc, ec))
    //             {
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }

    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_set<string> st;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                char ch = board[i][j];

                if (ch == '.')
                {
                    continue;
                }

                string row = string(1, ch) + "_row_" + to_string(i);
                string col = string(1, ch) + "_col_" + to_string(j);
                string box = string(1, ch) + "_box_" + to_string(i / 3) + "_" + to_string(j / 3);

                if (st.count(row) || st.count(col) || st.count(box))
                {
                    return false;
                }
                st.insert(row);
                st.insert(col);
                st.insert(box);
            }
        }
        return true;
    }
};
// @lc code=end
