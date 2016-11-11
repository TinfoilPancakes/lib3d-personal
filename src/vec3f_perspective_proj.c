/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3f_perspective_proj.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:36:05 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/11 14:36:05 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3f.h"

t_vec2f		vec3f_perspective_proj(t_vec3f v, float focal_dist)
{
	return (vec2f_init(v.x * focal_dist / v.z, v.y * focal_dist / v.z));
}
