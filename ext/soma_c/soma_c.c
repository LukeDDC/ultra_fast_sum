#include "soma_c.h"
#include <ruby.h>

// NAME OF C MODULE
VALUE SOMA_C = Qnil;
// HEADER OF METHOD CALLED BY RUBY
VALUE method_get_soma(VALUE, VALUE, VALUE);

void Init_soma_c()
{
  // DEFINING MODULE THAT RUBY COULD INCLUDE
  SOMA_C = rb_define_module("SOMA_C");
  // DEFINING METHOD IN THE MODULE
  rb_define_method(SOMA_C, "soma_c", method_get_soma, 2);
}

// METHOD THAT RUBY CALLS
VALUE method_get_soma(VALUE self, VALUE a, VALUE b)
{
  int value1 = NUM2INT(a);
  int value2 = NUM2INT(b);
  return rb_int_new(soma_c(value1, value2));
}

int soma_c(int a, int b)
{
  return a + b;
}
