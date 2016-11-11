# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 08:18:27 by ppatil            #+#    #+#              #
#    Updated: 2016/11/11 08:18:27 by ppatil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# 4x4 Matrix
C_FILES += mat4f.c
C_FILES += mat4f_mult.c
C_FILES += mat4f_transpose.c
C_FILES += mat4f_vec_mult.c

# 2d Floating Point Vector
C_FILES += vec2f.c
C_FILES += vec2f_init.c
C_FILES += vec2f_rotate.c

# 3d Floating Point Vector
C_FILES += vec3f.c
C_FILES += vec3f_init.c
C_FILES += vec3f_cross.c
C_FILES += vec3f_orthographic_proj.c
C_FILES += vec3f_perspective_proj.c

# 4d Floating Point Vector (AKA: Quaternion)
C_FILES += vec4f.c
C_FILES += vec4f_init.c
C_FILES += vec4f_from_euler.c
C_FILES += vec4f_rot_vec3f.c
