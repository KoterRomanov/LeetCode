class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int second_times = 0;
        vector<vector<int>>::iterator it_point_first = points.begin();
        for ( vector<vector<int>>::iterator it_point_next = it_point_first+1; it_point_next != points.end(); it_point_next++ )
        {
            //first coordinate x
            int first_x = (*it_point_first).at(0);
            
            //first coordinate y
            int first_y = (*it_point_first).at(1);
            
            //next coordinate x
            int next_x = (*it_point_next).at(0);
            
            //next coordinate y
            int next_y = (*it_point_next).at(1);
            
            while( true )
            {
                //come to target
                if ( first_x == next_x && first_y == next_y )
                    break;
                
                //move vertically
                if ( first_x == next_x && first_y != next_y )
                {
                    if ( next_y > first_y ) first_y++;
                    else    first_y--;
                }
                else if ( first_y == next_y && first_x != next_x )
                {
                    //move horizontally
                    if ( next_x > first_x ) first_x++;
                    else    first_x--;
                }
                else
                {
                    //move diaonally
                    if ( next_x > first_x ) first_x++;
                    else first_x--;
                    
                    if ( next_y > first_y ) first_y++;
                    else first_y--;
                }
                
                second_times++;
                
            }
            
            //swap point
            it_point_first = it_point_next;
            
            
        }
        
        return second_times;
    }
};