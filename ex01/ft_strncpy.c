/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:27:10 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/17 14:28:26 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;
   d = 0;
	while(d < n && src [d] != '\0')
	{
		dest [d] = src [d];
		d++;
	}
	while(d < n)
	{
		dest [d] = '\0';
		d++;
	}
	return dest;
}
