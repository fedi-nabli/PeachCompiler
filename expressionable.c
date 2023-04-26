#include "compiler.h"

/**
 * Format: {operator1, operator2, opertor3, NULL}
 */

struct expressionable_op_precedence_group op_precedence[TOTAL_OPERATOR_GROUPS] = {
  {.operators={"++", "--", "()", "[]", "(", "[", ".", "->", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"*", "/", "%", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"+", "-", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"<<", ">>", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"<", "<=", ">", ">=", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"==", "!=", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"&", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"^", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"|", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"&&", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"||", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT},
  {.operators={"?", ":", NULL}, .associativity=ASSOCIATIVITY_RIGHT_TO_LEFT},
  {.operators={"=", "+=", "-=", "*=", "/=", "%=", "<<=", ">>=", "&=", "^=", "|=", NULL}, .associativity=ASSOCIATIVITY_RIGHT_TO_LEFT},
  {.operators={",", NULL}, .associativity=ASSOCIATIVITY_LEFT_TO_RIGHT}
};