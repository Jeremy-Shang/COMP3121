

/* represent the map by a 2D array */
map[R][C]
/* optimal solution for every point on map */
opt[R][C]

/* init the base equal to 0*/
/* because the situation from low to high has not happended */
opt[0][0] = 0

/* we can track the path via any data structure */
/* record_previous_point represent a pseudo funciton that maintain
 * a linklist structure. record_previous_point(a,b) record point b as
 * the previous point of a
*/

/* the first column */
int j = 0
int i = 0
for(i=1;i < R;i++){
    /* compare to point from top */
    if (map[i][j] > map[i-1][j]){
        opt[i][j] = opt[i-1][j] + 1
    }
    else {
        opt[i][j] = opt[i-1][j]
    }
    
    record_previous_point(map[i][j],map[i-1][j])
}
/* the first row */
i = 0
for (j=1;j < C;j++){
    /* compare the point from left */
    if(map[i][j] > map[i][j-1]{
        opt[i][j] = opt[i][j-1] + 1
    }
    else{
        opt[i][j] = opt[i][j-1]
    }
    record_previous_point(map[i][j],map[i][j-1])
}



/* the other point */
for(i=1;i < R;i ++) {
    for(j=1;j < C;j ++){
        /* compare to point from top */
        if (map[i][j] > map[i-1][j]){
            top = opt[i][j-1] + 1
        }
        else {
            top = opt[i][j-1]
        }
        /* compare the point from left */
        if (map[i][j] > map[i][j-1] ){
            left = opt[i-1][j] + 1
        }
        else{
            left = opt[i-1][j]
        }
        /* compare which one is optimal(from left or from top) */
        opt[i][j] = top <= left ? top : left
        /* record */
        if top <= left {
            /* the point from top would be the previous point */
            record_previous_point(map[i][j],map[i-1][j-1])
        }
        else{
            record_previous_point(map[i][j],map[i][j-1])
        }
    }
}