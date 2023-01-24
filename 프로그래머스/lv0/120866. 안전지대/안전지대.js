function solution(board) {
        let ans = 0;
        const bod = JSON.parse(JSON.stringify(board));

        for (let i = 0; i < board.length; i++) {
            const el = bod[i];
            for (let e = 0; e < el.length; e++) {
                const el2 = el[e];
                if(el2 >= 1) { 
                    board[i][e] = false;
                    if(e-1 >= 0) board[i][e-1] = false;
                    if(e+1 < el.length) board[i][e+1] = false;
                    if(i-1 >= 0) board[i-1][e] = false;
                    if(i-1 >= 0 && e-1 >= 0) board[i-1][e-1] = false;
                    if(i-1 >= 0) board[i-1][e+1] = false;
                    if(i+1 < board.length) board[i+1][e] = false;
                    if(i+1 < board.length && e-1 >= 0) board[i+1][e-1] = false;
                    if(i+1 < board.length && e+1 < el.length) board[i+1][e+1] = false;
                }
            }
        }
        board.map(x => x.map(e => {
            if(e !== false) ans++;
        }))
        return ans;
    };