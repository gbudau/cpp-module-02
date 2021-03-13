NAME = eval_expr
CPPFLAGS = -Wall -Werror -Wextra
DEPS = Fixed.class.hpp eval_expr.hpp
CXX = clang++

OBJ = main.o Fixed.class.o

%.o: %.c $(DEPS)
	$(CXX) $(CPPFLAGS) -c -o $@ $<

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

.PHONY: clean
clean:
	rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

.PHONY: test
test: all
	./tests.sh || true
