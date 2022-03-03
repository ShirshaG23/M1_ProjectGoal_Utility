PROJ_NAME = main
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = src/billing.h\
src/card.h\
src/fooditem.h\
src/menu.h\
src/order.h\
src/payment.h\
src/paytm.h\
src/person.h\
src/Restaurant.c\
src/upi.h\



INC_H = inc
INC_T = unity

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

clean:
	
	$(RM) *.$(EXEC)