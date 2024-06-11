#pragma once
#include <algorithm>

template<typename Iterator>
typename Iterator::value_type maxSubarray(Iterator first, Iterator last)
{
	//TODO znajdowanie maksymalnej sumy (algorytm Kadane)
	if (first == last) return 0;
	auto  to = first+1;
	auto maxLocal = *first, maxTotal = *first;
	for(to; to != last;to++)
	{
		
			maxLocal += *to;

		if (maxLocal < *to)
			maxLocal = *to;
		
		if (maxLocal > maxTotal)
			maxTotal = maxLocal;

	}
	return maxTotal;
}

