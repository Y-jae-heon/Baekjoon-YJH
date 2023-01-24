function solution(keyinput, board) {
    var [a,b] = keyinput.reduce(([a,b], x) => {
        if(x == 'left' && a > -Math.floor(board[0]/2)) return [a-1,b];
        if(x == 'right' && a < Math.floor(board[0]/2)) return [a+1,b];
        if(x == 'up' && b < Math.floor(board[1]/2)) return [a,b+1];
        if(x == 'down' && b > -Math.floor(board[1]/2)) return [a,b-1];
        return [a,b];
    },[0,0])

    return [a,b];
}