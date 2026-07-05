class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        for i in range(len(nums2)):
            nums1.append(nums2[i])
        
        nums1.sort()

        n=len(nums1)

        if(n%2==0):
            k=int((n/2)-1)
            return (nums1[k]+nums1[k+1])/2
        else:
            k=((n+1)/2)-1
            return float(nums1[int(k)])