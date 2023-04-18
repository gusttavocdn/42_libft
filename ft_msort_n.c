#include "libft.h"

static void	copy_array(int dest[], const int src[], int start, int end);
static void	merge(int list[], int start, int middle, int end);

void	ft_msort_n(int start, int end, int array[end])
{
	int	middle;

	if ((end - start) > 1)
	{
		middle = start + (end - start) / 2;
		ft_msort_n(start, middle, array);
		ft_msort_n(middle, end, array);
		merge(array, start, middle, end);
	}
}

static void	merge(int list[], int start, int middle, int end)
{
	int	i;
	int	top_left;
	int	top_right;
	int	*left_list;
	int	*right_list;

	left_list = ft_calloc(middle - start, sizeof(int));
	right_list = ft_calloc(end - middle, sizeof(int));
	copy_array(left_list, list, start, middle);
	copy_array(right_list, list, middle, end);
	i = start;
	top_left = 0;
	top_right = 0;
	while (i < end)
	{
		if (top_left >= (middle - start))
			list[i++] = right_list[top_right++];
		else if (top_right >= (end - middle))
			list[i++] = left_list[top_left++];
		else if (left_list[top_left] < right_list[top_right])
			list[i++] = left_list[top_left++];
		else
			list[i++] = right_list[top_right++];
	}
	free(left_list);
	free(right_list);
}

static void	copy_array(int dest[], const int src[], int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
		dest[i++] = src[start++];
}
