1./
int a = 0; 
for (i = 0; i < N; i++) { 
    for (j = N; j > i; j--) { 
        a = a + i + j; 
    } 
} 
    // i = 0
    // 里面循环N次
    // i = 1
    // N-1 次
    // i = 2
    // N-2 次
    // 从里向外分析其次数
    // 总共循环则为 N*(N-1)*(N-2)......

// 2.
int i, j, k = 0; 
for (i = n / 2; i <= n; i++) { 
	for (j = 2; j <= n; j = j * 2) { 
		k = k + n / 2; 
	} 
} 

// 先从内层开始分析,
// 若N = 10
// 则循环 2^n = 10. n = log2^10次
// 即 logN次

// 外层
// 循环N/2次

// 总共也就是
// (N/2)*(logn), 复杂度为O(nlogn)

3.

int a = 0, i = N; 
while (i > 0) { 
    a += i;  // a = a + i
    i /= 2;  // i = i / 2
} 

// 例如i = 10
// 循环执行logn次
// O(logn)


// tutorial question
1. You are given an array S of n integers and another integer x.
(a) Describe an O(n log n) algorithm (in the sense of the worst case performance) that 
determines whether or not there exist two elements in S whose
sum is exactly x.
(b) Describe an algorithm that accomplishes the same task, but runs in O(n)
expected (i.e., average) time.yi


(a)
一组数列如[5,3,4,2,6,0,8],判断其中是否有一对和等于目标数字
