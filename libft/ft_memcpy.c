/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:09:58 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/29 18:00:51 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*buffer1;
	char	*buffer2;

	i = 0;
	buffer1 = (void *)dest;
	buffer2 = (void *)src;
	while (i < n)
	{
		buffer1[i] = buffer2[i];
		i++;
	}
	buffer1[i] = 0;
	return (buffer1);
}

/*
void    main()
{
        char src[5] = "abcde";

        ft_memcpy(src, src + 2, 3);
        printf("%s\n", src);
}
*/
