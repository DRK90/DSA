import math

def search(nums, target):    
    index = 0
    while (nums):           
        mid = math.floor(len(nums)/2)
        num = nums[mid]
        if num == target: 
            index += mid
            break            
        if len(nums)<=1: 
            return -1
            break
            
        if num < target:
            index += mid
            nums = nums[mid:]
        elif num > target:             
            nums = nums[:mid]

    return index

   


print(search([-1,0,3,5,9,12], -1))