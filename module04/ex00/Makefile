NAME = $(BINDIR)/Animals

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

BINDIR = bin
OBJDIR = .objs

SRCS =	main.cpp		\
		Animal.cpp		\
		Dog.cpp			\
		Cat.cpp			\
		WrongCat.cpp	\
		WrongAnimal.cpp
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

GREEN = \033[0;32m
YELLOW = \033[0;33m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@mkdir -p $(BINDIR)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)🎉 Executable $(NAME) successfully created!$(NC)\n"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR)
	@printf "$(YELLOW)🧹 Objects cleaned$(NC)\n"

fclean: clean
	@$(RM) $(BINDIR)
	@printf "$(YELLOW)🗑️ Executable removed$(NC)\n"

re: fclean all

.PHONY: all clean fclean re