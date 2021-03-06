/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 14:00:11 by alegent           #+#    #+#             */
/*   Updated: 2015/02/05 09:35:22 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_node			*projection(t_mlx *mlx, t_node *coor)
{
	int			x;
	int			y;

	y = (coor->x - CTE * coor->z) * mlx->zoom;
	x = ((CTE / 2) * coor->z - coor->y) * mlx->zoom;
	x *= -1;
	x += mlx->img->min->x;
	y += mlx->img->min->y;
	return (new_node(x, y, coor->z));
}
