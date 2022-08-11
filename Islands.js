var numIslands = function(grid) {
    const R = grid.length-1;
    const C = grid[0].length-1;
    let sum = 0;
    function check(r,c, recursive){
        if (grid[r][c] === '1'){
            grid[r][c] = 0;
            if (r - 1 >= 0 && grid[r-1][c] ==='1'){
                check(r-1, c, true);
            }
            if (c+1 <= C && grid[r][c+1]==='1'){
                check(r, c+1, true);
            }
            if (r+1 <= R && grid[r+1][c]==='1'){
                check(r+1, c, true);
            }
            if (c-1 >= 0 && grid[r][c-1]==='1'){
                check(r, c-1, true);
            }
            if (!recursive) sum += 1;
        } 
        
        
    }

    for (let i=0; i <= R; i++){
        for (let j=0; j <= C; j++){
            check(i,j, false);
        }
    }
    return sum;
};

    


let grid = [
    ["1","1","0","0","0"],
    ["1","1","0","0","0"],
    ["0","0","1","0","0"],
    ["0","0","0","1","1"]
]

console.log(numIslands(grid));