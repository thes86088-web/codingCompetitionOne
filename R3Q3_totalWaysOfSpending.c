
/*

input provided : int amount, int costs[]

output expected : total ways of spending the given amout with the given options/items

*/

/*

approach : ways of n->0 = ways of n->cost[i] + ways of (n-cost[i])->0 

dis_adv = recursive approach

improvements possible : memoization of overlapping subproblems
*/
