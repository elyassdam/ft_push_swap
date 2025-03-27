/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-you <yael-you@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:06:21 by yael-you          #+#    #+#             */
/*   Updated: 2024/11/18 12:54:31 by yael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		count;
	char	c;

	i = 0;
	count = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= '0' && c <= '9'))
		{
			count ++;
		}
		i ++;
	}
	if (count == i)
	{
		return (1);
	}
	return (0);
}
/*int	main(void)
{
        char c[]={"177676"};
        int result=0;
        result=ft_str_is_numeric(c);
        printf("%d",result);
}*/
