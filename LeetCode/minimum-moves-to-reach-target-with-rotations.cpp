const int INF = 1e9 + 5;
const int HOR = 0, VER = 1;

int R, C;
vector<vector<int>> grid;
vector<vector<vector<int>>> dist;
queue<pair<pair<int, int>, int>> q;

bool valid(int r, int c) {
    return 0 <= r && r < R && 0 <= c && c < C;
}

void bfs_check(int r, int c, int dir, int current_dist) {
    if (current_dist < dist[r][c][dir]) {
        dist[r][c][dir] = current_dist;
        q.push({{r, c}, dir});
    }
}

class Solution {
  public:
    int minimumMoves(vector<vector<int>>& _grid) {
        q = queue<pair<pair<int, int>, int>>();
        grid = _grid;
        R = grid.size();
        C = grid.size();
        dist.assign(R, vector<vector<int>>(C, vector<int>(2, INF)));
        bfs_check(0, 0, HOR, 0);

        while (!q.empty()) {
            auto top = q.front();
            q.pop();
            int r = top.first.first, c = top.first.second, dir = top.second;
            int my_dist = dist[r][c][dir];
            int r2 = dir == HOR ? r : r + 1;
            int c2 = dir == HOR ? c + 1 : c;

            if (valid(r, c + 1) && valid(r2, c2 + 1) && !grid[r][c + 1] && !grid[r2][c2 + 1])
                bfs_check(r, c + 1, dir, my_dist + 1);

            if (valid(r + 1, c) && valid(r2 + 1, c2) && !grid[r + 1][c] && !grid[r2 + 1][c2])
                bfs_check(r + 1, c, dir, my_dist + 1);

            if (dir == HOR) {
                if (valid(r + 1, c) && valid(r + 1, c + 1) && !grid[r + 1][c] && !grid[r + 1][c + 1])
                    bfs_check(r, c, VER, my_dist + 1);
            } else {
                if (valid(r, c + 1) && valid(r + 1, c + 1) && !grid[r][c + 1] && !grid[r + 1][c + 1])
                    bfs_check(r, c, HOR, my_dist + 1);
            }
        }
        int answer = dist[R - 1][C - 2][HOR];
        return answer < INF ? answer : -1;
    }
};
