/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4f.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:15:00 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/09 16:15:00 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT4F_H
# define MAT4F_H

# include <math.h>
# include "vec3f.h"

typedef	struct
{
	float	m[4][4];
}			t_mat4f;

t_mat4f		mat4f(void);

t_mat4f		mat4f_mult(t_mat4f l, t_mat4f r);

t_mat4f		mat4f_rotation_euler(t_vec3f e);

t_mat4f		mat4f_transpose(t_mat4f m);

t_vec3f		mat4f_vec_mult(t_vec3f v, t_mat4f m);

#endif
