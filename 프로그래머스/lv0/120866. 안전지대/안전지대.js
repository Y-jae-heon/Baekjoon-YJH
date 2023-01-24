function solution(board) {

    let outside = [[-1,0], [-1,-1], [-1,1], [0,-1],[0,1],[1,0], [1,-1], [1,1]];
    let ans = 0;

    board.forEach((row, y, self) => row.forEach((it, x) => {
        if (it === 1) return false;
        return outside.some(([oy, ox]) => !!self[oy + y]?.[ox + x])
               ? false : ans++;
    }));

    return ans;
}