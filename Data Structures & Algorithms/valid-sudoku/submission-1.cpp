class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int m=board.size();
        int n=board[0].size();
        unordered_set<int>st;
        int numscount=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(board[i][j]!='.')
               {numscount++;
               st.insert(board[i][j]);
               }
            }
            if(st.size()!=numscount)
            {
                cout<< "duplicate presents in row"<<endl;
                return false;
            }
            st.clear();
            cout<<endl;
            numscount=0;
        }
         
         numscount=0;
         for(int j=0;j<n;j++)
         {
            for(int i=0;i<m;i++)
            {
               if(board[i][j]!='.')
               {
                numscount++;
                st.insert(board[i][j]);
               }
            }
            if(st.size()!=numscount)
            {
                cout<< "duplicate presents in columns"<<endl;
                return false;
            }
            st.clear();
            cout<<endl;
            numscount=0;
        }

        for(int row=0;row<9;row+=3)
        {
            for(int col=0;col<9;col+=3)
            {
            for(int i=row;i<row+3;i++)
            {
                for(int j=col;j<col+3;j++)
                {
               if(board[i][j]!='.')
               {
                numscount++;
                st.insert(board[i][j]);
               }
            }
            }
            if(st.size()!=numscount)
            {
                cout<< "duplicate presents in 3x3 matrix"<<endl;
                return false;
            }
            st.clear();
            cout<<endl;
            numscount=0;
        }
        }
        return true;
        
    }
};
