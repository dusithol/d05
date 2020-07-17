/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:39:17 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/17 14:41:47 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int sum_one = 0;
	int sum_two = 0;
	unsigned int d = 0;
	while(d < n)
	{
		sum_one += s1[d];
			d++;
	}
	d = 0;
	while(d < n )
	{
		sum_two += s2[d];
			d++;
	}
	return sum_one - sum_two;
}
