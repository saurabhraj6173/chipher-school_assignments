#include<iostream>
using namespace std;
public int[] intersect_extraMemory(int[] nums1, int[] nums2) {
   if (nums1.length == 0 || nums2.length == 0) {
      return new int[] {};
   }
   
   //prepare map with number of occurence of each number
   Map<Integer, Integer> map = new HashMap<Integer, Integer>();
   for (int j=0; j<nums2.length; j++) {
      Integer count = map.getOrDefault(nums2[j], 0);
      count ++;
      
      map.put(nums2[j], count);
   }
   
   List<Integer> res = new ArrayList<Integer>();
   for (int i=0; i<nums1.length; i++) {
      int count = map.getOrDefault(nums1[i], 0);
      if (count > 0) {
         res.add(nums1[i]);

         count --;
         map.put(nums1[i], count);
      }
   }
   
   //copy the result array
   int[] r = new int[res.size()];
   for (int i=0; i<res.size(); i++) {
      r[i] = res.get(i);
   }
   
   return r;
}
