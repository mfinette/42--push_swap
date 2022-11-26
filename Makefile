NAME = push_swap

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= @rm -f
NORM	= norminette -R CheckDefine
HEADER	= push_swap.h
DEF_COLOR = \033[0;39m
YELLOW = \033[0;93m
GREEN = \033[0;92m
BLUE = \033[0;94m
CYAN = \033[0;96m

FILES = 
		push_swap						\
		utils/get_data					\
		utils/ft_atoi					\
		utils/ft_calloc					\
		utils/free_all					\
		utils/ft_putstrendl				\
		utils/print_tabs				\
		operations/sa_sb_ss				\
		operations/ra_rb_rr				\
		operations/pa_pb				\
		operations/rra_rrb_rrr			\


SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

%.o:%.c $(HEADER) Makefile
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@echo "$(GREEN)😳😎pushswap compiled!😎😳$(DEF_COLOR)"

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "$(CYAN)pushswap object files cleaned!$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN)3$(DEF_COLOR)"
	@sleep 0.2
	@echo "$(CYAN)2$(DEF_COLOR)"
	@sleep 0.2
	@echo "$(CYAN)1$(DEF_COLOR)"
	@sleep 0.2
	@echo "$(GREEN)pushswap executable files cleaned!$(DEF_COLOR)"


re: clean all

.PHONY: all clean fclean re norm