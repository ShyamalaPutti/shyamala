#include<iostream>
using namespace std;
int main()
{
  public class SearchInRotatedSortedArray {
	public static int searchTargetUsingLinearSearch(int[] arr, int target){
		if(arr.length == 0) {
			return -1;
		}
		for( int i=0;i<arr.length;i++) {
			if(arr[i]==target) {
				return i;
			}
		}
		return -1;
	}
	}
}
