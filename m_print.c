/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:12:01 by albaud            #+#    #+#             */
/*   Updated: 2023/09/26 15:34:47 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"

void	m_print(t_m *mtx)
{
	int	i;
	int	j;

	i = -1;
	printf("%d : %d\n", mtx->size, mtx->arr->size);
	while (++i < mtx->size)
	{
		j = -1;
		while (++j < mtx->arr->size)
		{
			printf("%f : ", mtx->arr[i].arr[j]);
		}
		printf("\n");
	}
}
