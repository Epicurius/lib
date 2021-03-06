/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 10:53:23 by nneronin          #+#    #+#             */
/*   Updated: 2019/10/20 10:59:32 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_strclr(char *s)
{
	size_t x;

	x = 0;
	while (s[x] != '\0')
	{
		s[x] = '\0';
		x++;
	}
}
