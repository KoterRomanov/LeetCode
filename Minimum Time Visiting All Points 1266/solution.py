class Solution(object):
    def minTimeToVisitAllPoints(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        second_times = 0

        first_point = points.pop(0)

        #遍历
        for point in points:
            # first coordinate x
            first_x = first_point[0]

            # first coordinate y
            first_y = first_point[1]

            # next coordinate x
            next_x = point[0]

            # next coordinate y
            next_y = point[1]

            while (True):
                #move target
                if ( first_x == next_x and first_y == next_y ):
                    break

                if ( first_x == next_x and first_y != next_y ):
                    #move vertically
                    if ( next_y > first_y ):
                        first_y = first_y + 1
                    else:
                        first_y = first_y - 1
                elif ( first_x != next_x and first_y == next_y ):
                    #move horizontally
                    if ( next_x > first_x ):
                        first_x = first_x + 1
                    else:
                        first_x = first_x - 1
                else:
                    #move diaonally
                    if ( next_x > first_x ):
                        first_x = first_x + 1
                    else:
                        first_x = first_x - 1

                    if ( next_y > first_y ):
                        first_y = first_y + 1
                    else:
                        first_y = first_y - 1

                second_times = second_times + 1


            first_point = point

        return second_times

        