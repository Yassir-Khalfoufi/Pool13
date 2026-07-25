void	ft_rev_int_tab(int	*tab, int	size)
{
	int	*left;
	int	*right;
	int	swap;
	left = tab;
	right = left + size - 1;
	while(left < right)
	{
		swap = *left;
		*left = *right;
		*right = swap;
		left++;
		right--;
	}
}

