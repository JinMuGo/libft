# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 08:31:25 by jgo               #+#    #+#              #
#    Updated: 2023/07/16 18:54:39 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifndef TOPDIR
		TOPDIR = $(abspath ../../../)
endif

include $(TOPDIR)/make_config/com/Color.mk
include $(TOPDIR)/make_config/com/Funcs.mk
include $(TOPDIR)/make_config/com/Flags.mk
include $(TOPDIR)/make_config/lib/Rules.mk

SRCS =	ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isinteger.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_isspecial.c

NAME =	libft_is.a

OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)
-include $(DEPS)

include $(TOPDIR)/make_config/lib/SubLibsRecipes.mk