/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:30:37 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/17 16:50:22 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strstr(char *str, char *to_find)
{
    int a = 0;
    int j = 0;
    int dumi_len = 0;
    int dumi_letter_count = 0;
    char *result;
    
    while (to_find[dumi_len])
    {
        dumi_letter_count++;
        dumi_len++;
    }
    
    while (str[a])
    {
        if (str[a] == to_find[j])
        {
            result = &str[a];
            a++;
            j++;
            dumi_letter_count--;
            
            while ((str[a] == to_find[j]) && dumi_letter_count > 0)
            { 
                a++;
                j++;
                dumi_letter_count--;
            }
            
            if (dumi_letter_count == 0)
                return result;
            else
            {
                dumi_letter_count = dumi_len;
                j = 0;
            }
        }
        
        a++;
    }
    
    return (NULL);
}
