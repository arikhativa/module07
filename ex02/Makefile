# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:56:52 by yrabby            #+#    #+#              #
#    Updated: 2023/06/19 11:31:23 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 					= test

# class
CLASS_DIR				= .
CLASS_NAME				= 

# other src
OTHER_SRC				= 

# main
SRC_MAIN				= main

# src
SRC_SUFFIX				= .cpp
SRC_DIR					= .
SRC_NAME				= $(addsuffix $(SRC_SUFFIX), $(CLASS_NAME) $(SRC_MAIN) $(OTHER_SRC))
SRC						= $(addprefix $(SRC_DIR)/, $(SRC_NAME))

# other header
OTHER_HEAD				= iter

# heads
HEAD_SUFFIX				= .hpp
HEAD_DIR				= .
HEAD_NAME				= $(addsuffix $(HEAD_SUFFIX), $(CLASS_NAME))
HEAD					= $(addprefix $(HEAD_DIR)/, $(HEAD_NAME))

# obj
OBJ_DIR					= obj
OBJ						= $(addprefix $(OBJ_DIR)/, $(SRC_NAME:.cpp=.o))

# dep
DEP						:= $(OBJ:.o=.d)

# flags
CC 						= c++
CPPFLAGS 				= -c -MMD -MP -Wshadow -Wall -Wextra -Werror  -std=c++98 -pedantic -I $(HEAD_DIR)

# implicit rules
$(addprefix $(OBJ_DIR)/, %.o): $(addprefix $(SRC_DIR)/, %.cpp) $(HEAD)
	$(CC) $(CPPFLAGS) $< -o $(@)

# rules
.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(OBJ) -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) $(OBJ) $(DEP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEP)
