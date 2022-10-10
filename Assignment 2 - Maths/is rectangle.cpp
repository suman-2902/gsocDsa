int Solution::solve(int A, int B, int C, int D) {
    //check on Length
    return (A==C && B==D) || (A==B && C==D) || (A==D && B==C);
}
