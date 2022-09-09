class Solution {
    public int countStudents(int[] students, int[] sandwiches) {
        int ones=0,zeros=0;
        for(int i:students)
        {
            if(i==1) ones++;
            else zeros++;
        }
        for(int san : sandwiches){
            if(san==1 && ones>0){
                ones--;
            }
            else if(san==0 && zeros>0){
                zeros--;
            }
            else{
                return zeros+ones;
            }
        }
        return zeros+ones;
    }
}