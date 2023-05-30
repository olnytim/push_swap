NAME 	=	push_swap
#
LIBFT_PATH 	=	libft
PREF_S 	=	src/
PREF_OBJ 	=	obj/
#
HF_DIR 	=	hf
HEADER 	=	-I $(HF_DIR)
#
SRCS_PS 	=	push_swap
SRCS_UT 	=	utils
#
SRCPS 		=	$(addprefix $(PREF_S), $(addsuffix .c , $(SRCS_PS)))
SRCUT 		=	$(addprefix $(PREF_S), $(addsuffix .c , $(SRCS_UT)))
#
OBJPS 		=	$(addprefix $(PREF_OBJ), $(addsuffix .o , $(SRCS_PS)))
OBJUT 		=	$(addprefix $(PREF_OBJ), $(addsuffix .o , $(SRCS_UT)))
#
CC 			=	cc
FLAGS 		=	-Wall -Werror -Wextra
FSANITIZE 	=	-fsanitize=address -g3
#
OBJF 		=	.done
#
all:		add $(NAME)
#
$(NAME):	$(OBJPS) $(OBJUT) $(OBJF)
	@$(CC) $(FLAGS) $(OBJPS) $(OBJUT) $(OBJF) $(HEADER) $(LIBFT_PATH)/libft.a -o $@
#
$(PREF_OBJ)%.o:	$(PREF_S)%.c $(OBJF)
			@$(CC) $(FLAGS) $(HEADER) -c $< -o $@
#
$(OBJF):
			@mkdir -p $(PREF_OBJ)
			@touch $(OBJF)
#
add:
		@make -C $(LIBFT_PATH)
#
clean:
		@rm -rf $(PREF_OBJ)
		@rm -f $(OBJF)
		@$(MAKE) -C $(LIBFT_PATH) clean
#
fclean:		clean
			@rm -f $(NAME)
			@rm -f $(LIBFT_PATH)/libft.a
#
re:			fclean all
#
.PHONY :	all add clean fclean re
