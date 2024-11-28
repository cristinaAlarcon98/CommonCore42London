/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:40:57 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/28 20:04:16 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*string;
	int		i;

	string = (void *)s;
	i = 0;
	while (i < n)
	{
		string[i] = 0;
		i++;
	}
}
/*
void	main()
{
	char s[10];

	ft_bzero(s, 5);
}
*/
/*
  we can also use this:
 	 while(i < n)    
        {
                *string = 0;
                 string++;
                 i++;
        }
*/
