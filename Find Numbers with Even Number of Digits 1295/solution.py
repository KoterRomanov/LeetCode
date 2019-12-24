class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        length = len(nums)
        count = 1
        result = 0
        for i in range(length):
            num = nums[i]
            num = num // 10
            while ( num > 0 ):
                num = num // 10
                count = count + 1
               
            temp = count % 2
            if ( 0 == temp ):
                result = result + 1
                
            count = 1
                
              
          
        return result