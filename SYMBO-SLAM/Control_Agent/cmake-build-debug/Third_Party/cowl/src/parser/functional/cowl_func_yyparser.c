/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 43 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"

    #include "cowl_func_yyparser.h"
    #include "cowl_func_yylexer.h"
    #include "cowl_func_parser.h"
    #include "cowl_private.h"

    static void cowl_func_yyerror(cowl_unused COWL_FUNC_YYLTYPE *yylloc,
                                  cowl_unused yyscan_t scanner,
                                  CowlFuncParser *parser, const char *s) {
        cowl_ret code = strcmp(s, "memory exhausted") ? COWL_ERR_SYNTAX : COWL_ERR_MEM;
        cowl_parser_ctx_handle_error(parser->ctx, code, s);
    }

    #define COWL_ERROR(CODE) do {                                                                   \
        cowl_parser_ctx_handle_error_type(parser->ctx, (CODE));                                     \
        YYERROR;                                                                                    \
    } while(0)

    #define COWL_ERROR_MEM COWL_ERROR(COWL_ERR_MEM)

    #define COWL_VEC_PUSH(T, VEC, OBJ) do {                                                         \
        uvec_ret ret = uvec_push(CowlObjectPtr, VEC, OBJ);                                          \
        if (ret == UVEC_ERR) {                                                                      \
            cowl_##T##_release(OBJ);                                                                \
            COWL_ERROR_MEM;                                                                         \
        }                                                                                           \
    } while (0)

    #define COWL_SET_INSERT(T, SET, OBJ) do {                                                       \
        uhash_ret ret = uhset_insert(CowlObjectTable, SET, OBJ);                                    \
        if (ret != UHASH_INSERTED) {                                                                \
            cowl_##T##_release(OBJ);                                                                \
            if (ret == UHASH_ERR) COWL_ERROR_MEM;                                                   \
        }                                                                                           \
    } while (0)

#line 104 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
/* Substitute the type names.  */
#define YYSTYPE         COWL_FUNC_YYSTYPE
#define YYLTYPE         COWL_FUNC_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         cowl_func_yyparse
#define yylex           cowl_func_yylex
#define yyerror         cowl_func_yyerror
#define yydebug         cowl_func_yydebug
#define yynerrs         cowl_func_yynerrs


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_COWL_FUNC_YY_HOME_BRANDONIO_DOCUMENTS_THESIS_PROJECT_2022_EYESIM_SIMULATION_SOFTWARE_EYESIM_MYSCRIPTS_PROJECT_SCRIPTS_ONTOLOGICAL_SLAM_CONTROL_AGENT_CMAKE_BUILD_DEBUG_THIRD_PARTY_COWL_SRC_PARSER_FUNCTIONAL_COWL_FUNC_YYPARSER_H_INCLUDED
# define YY_COWL_FUNC_YY_HOME_BRANDONIO_DOCUMENTS_THESIS_PROJECT_2022_EYESIM_SIMULATION_SOFTWARE_EYESIM_MYSCRIPTS_PROJECT_SCRIPTS_ONTOLOGICAL_SLAM_CONTROL_AGENT_CMAKE_BUILD_DEBUG_THIRD_PARTY_COWL_SRC_PARSER_FUNCTIONAL_COWL_FUNC_YYPARSER_H_INCLUDED
/* Debug traces.  */
#ifndef COWL_FUNC_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define COWL_FUNC_YYDEBUG 1
#  else
#   define COWL_FUNC_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define COWL_FUNC_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined COWL_FUNC_YYDEBUG */
#if COWL_FUNC_YYDEBUG
extern int cowl_func_yydebug;
#endif
/* "%code requires" blocks.  */
#line 33 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"

    #include "cowl_std.h"
    #include "cowl_types.h"

    #ifndef YY_TYPEDEF_YY_SCANNER_T
    #define YY_TYPEDEF_YY_SCANNER_T
    typedef void* yyscan_t;
    #endif

#line 175 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"

/* Token type.  */
#ifndef COWL_FUNC_YYTOKENTYPE
# define COWL_FUNC_YYTOKENTYPE
  enum cowl_func_yytokentype
  {
    NON_NEGATIVE_INTEGER = 258,
    QUOTED_STRING = 259,
    BLANK_NODE_LABEL = 260,
    PNAME_NS = 261,
    PNAME_LN = 262,
    LANG_TAG = 263,
    IRI_REF = 264,
    L_PAREN = 265,
    R_PAREN = 266,
    EQUALS = 267,
    DOUBLE_CARET = 268,
    IMPORT = 269,
    ONTOLOGY = 270,
    PREFIX = 271,
    DECLARATION = 272,
    ANNOTATION = 273,
    DATATYPE_DEFINITION = 274,
    HAS_KEY = 275,
    CLASS = 276,
    DATATYPE = 277,
    OBJECT_PROPERTY = 278,
    DATA_PROPERTY = 279,
    ANNOTATION_PROPERTY = 280,
    NAMED_INDIVIDUAL = 281,
    DATA_INTERSECTION_OF = 282,
    DATA_UNION_OF = 283,
    DATA_COMPLEMENT_OF = 284,
    DATA_ONE_OF = 285,
    DATATYPE_RESTRICTION = 286,
    DATA_SOME_VALUES_FROM = 287,
    DATA_ALL_VALUES_FROM = 288,
    DATA_HAS_VALUE = 289,
    DATA_MIN_CARDINALITY = 290,
    DATA_MAX_CARDINALITY = 291,
    DATA_EXACT_CARDINALITY = 292,
    OBJECT_INVERSE_OF = 293,
    OBJECT_INTERSECTION_OF = 294,
    OBJECT_UNION_OF = 295,
    OBJECT_COMPLEMENT_OF = 296,
    OBJECT_ONE_OF = 297,
    OBJECT_SOME_VALUES_FROM = 298,
    OBJECT_ALL_VALUES_FROM = 299,
    OBJECT_HAS_VALUE = 300,
    OBJECT_HAS_SELF = 301,
    OBJECT_MIN_CARDINALITY = 302,
    OBJECT_MAX_CARDINALITY = 303,
    OBJECT_EXACT_CARDINALITY = 304,
    SUB_CLASS_OF = 305,
    EQUIVALENT_CLASSES = 306,
    DISJOINT_CLASSES = 307,
    DISJOINT_UNION = 308,
    SUB_OBJECT_PROPERTY_OF = 309,
    EQUIVALENT_OBJECT_PROPERTIES = 310,
    DISJOINT_OBJECT_PROPERTIES = 311,
    OBJECT_PROPERTY_CHAIN = 312,
    INVERSE_OBJECT_PROPERTIES = 313,
    OBJECT_PROPERTY_DOMAIN = 314,
    OBJECT_PROPERTY_RANGE = 315,
    FUNCTIONAL_OBJECT_PROPERTY = 316,
    INVERSE_FUNCTIONAL_OBJECT_PROPERTY = 317,
    REFLEXIVE_OBJECT_PROPERTY = 318,
    IRREFLEXIVE_OBJECT_PROPERTY = 319,
    SYMMETRIC_OBJECT_PROPERTY = 320,
    ASYMMETRIC_OBJECT_PROPERTY = 321,
    TRANSITIVE_OBJECT_PROPERTY = 322,
    SUB_DATA_PROPERTY_OF = 323,
    EQUIVALENT_DATA_PROPERTIES = 324,
    DISJOINT_DATA_PROPERTIES = 325,
    DATA_PROPERTY_DOMAIN = 326,
    DATA_PROPERTY_RANGE = 327,
    FUNCTIONAL_DATA_PROPERTY = 328,
    SAME_INDIVIDUAL = 329,
    DIFFERENT_INDIVIDUALS = 330,
    CLASS_ASSERTION = 331,
    OBJECT_PROPERTY_ASSERTION = 332,
    NEGATIVE_OBJECT_PROPERTY_ASSERTION = 333,
    DATA_PROPERTY_ASSERTION = 334,
    NEGATIVE_DATA_PROPERTY_ASSERTION = 335,
    ANNOTATION_ASSERTION = 336,
    SUB_ANNOTATION_PROPERTY_OF = 337,
    ANNOTATION_PROPERTY_DOMAIN = 338,
    ANNOTATION_PROPERTY_RANGE = 339
  };
#endif

/* Value type.  */
#if ! defined COWL_FUNC_YYSTYPE && ! defined COWL_FUNC_YYSTYPE_IS_DECLARED
union COWL_FUNC_YYSTYPE
{

  /* annotation_property  */
  CowlAnnotProp * annotation_property;
  /* sub_annotation_property  */
  CowlAnnotProp * sub_annotation_property;
  /* super_annotation_property  */
  CowlAnnotProp * super_annotation_property;
  /* annotation_value  */
  CowlAnnotValue * annotation_value;
  /* annotation_subject  */
  CowlAnnotValue * annotation_subject;
  /* annotation  */
  CowlAnnotation * annotation;
  /* declaration  */
  CowlAxiom * declaration;
  /* axiom  */
  CowlAxiom * axiom;
  /* class_axiom  */
  CowlAxiom * class_axiom;
  /* sub_class_of  */
  CowlAxiom * sub_class_of;
  /* equivalent_classes  */
  CowlAxiom * equivalent_classes;
  /* disjoint_classes  */
  CowlAxiom * disjoint_classes;
  /* disjoint_union  */
  CowlAxiom * disjoint_union;
  /* object_property_axiom  */
  CowlAxiom * object_property_axiom;
  /* sub_object_property_of  */
  CowlAxiom * sub_object_property_of;
  /* equivalent_object_properties  */
  CowlAxiom * equivalent_object_properties;
  /* disjoint_object_properties  */
  CowlAxiom * disjoint_object_properties;
  /* inverse_object_properties  */
  CowlAxiom * inverse_object_properties;
  /* object_property_domain  */
  CowlAxiom * object_property_domain;
  /* object_property_range  */
  CowlAxiom * object_property_range;
  /* functional_object_property  */
  CowlAxiom * functional_object_property;
  /* inverse_functional_object_property  */
  CowlAxiom * inverse_functional_object_property;
  /* reflexive_object_property  */
  CowlAxiom * reflexive_object_property;
  /* irreflexive_object_property  */
  CowlAxiom * irreflexive_object_property;
  /* symmetric_object_property  */
  CowlAxiom * symmetric_object_property;
  /* asymmetric_object_property  */
  CowlAxiom * asymmetric_object_property;
  /* transitive_object_property  */
  CowlAxiom * transitive_object_property;
  /* data_property_axiom  */
  CowlAxiom * data_property_axiom;
  /* sub_data_property_of  */
  CowlAxiom * sub_data_property_of;
  /* equivalent_data_properties  */
  CowlAxiom * equivalent_data_properties;
  /* disjoint_data_properties  */
  CowlAxiom * disjoint_data_properties;
  /* data_property_domain  */
  CowlAxiom * data_property_domain;
  /* data_property_range  */
  CowlAxiom * data_property_range;
  /* functional_data_property  */
  CowlAxiom * functional_data_property;
  /* datatype_definition  */
  CowlAxiom * datatype_definition;
  /* has_key  */
  CowlAxiom * has_key;
  /* assertion  */
  CowlAxiom * assertion;
  /* same_individual  */
  CowlAxiom * same_individual;
  /* different_individuals  */
  CowlAxiom * different_individuals;
  /* class_assertion  */
  CowlAxiom * class_assertion;
  /* object_property_assertion  */
  CowlAxiom * object_property_assertion;
  /* negative_object_property_assertion  */
  CowlAxiom * negative_object_property_assertion;
  /* data_property_assertion  */
  CowlAxiom * data_property_assertion;
  /* negative_data_property_assertion  */
  CowlAxiom * negative_data_property_assertion;
  /* annotation_axiom  */
  CowlAxiom * annotation_axiom;
  /* annotation_assertion  */
  CowlAxiom * annotation_assertion;
  /* sub_annotation_property_of  */
  CowlAxiom * sub_annotation_property_of;
  /* annotation_property_domain  */
  CowlAxiom * annotation_property_domain;
  /* annotation_property_range  */
  CowlAxiom * annotation_property_range;
  /* class  */
  CowlClass * class;
  /* class_expression  */
  CowlClsExp * class_expression;
  /* object_intersection_of  */
  CowlClsExp * object_intersection_of;
  /* object_union_of  */
  CowlClsExp * object_union_of;
  /* object_complement_of  */
  CowlClsExp * object_complement_of;
  /* object_one_of  */
  CowlClsExp * object_one_of;
  /* object_some_values_from  */
  CowlClsExp * object_some_values_from;
  /* object_all_values_from  */
  CowlClsExp * object_all_values_from;
  /* object_has_value  */
  CowlClsExp * object_has_value;
  /* object_has_self  */
  CowlClsExp * object_has_self;
  /* object_min_cardinality  */
  CowlClsExp * object_min_cardinality;
  /* object_max_cardinality  */
  CowlClsExp * object_max_cardinality;
  /* object_exact_cardinality  */
  CowlClsExp * object_exact_cardinality;
  /* data_some_values_from  */
  CowlClsExp * data_some_values_from;
  /* data_all_values_from  */
  CowlClsExp * data_all_values_from;
  /* data_has_value  */
  CowlClsExp * data_has_value;
  /* data_min_cardinality  */
  CowlClsExp * data_min_cardinality;
  /* data_max_cardinality  */
  CowlClsExp * data_max_cardinality;
  /* data_exact_cardinality  */
  CowlClsExp * data_exact_cardinality;
  /* sub_class_expression  */
  CowlClsExp * sub_class_expression;
  /* super_class_expression  */
  CowlClsExp * super_class_expression;
  /* data_property  */
  CowlDataProp * data_property;
  /* data_property_expression  */
  CowlDataPropExp * data_property_expression;
  /* sub_data_property_expression  */
  CowlDataPropExp * sub_data_property_expression;
  /* super_data_property_expression  */
  CowlDataPropExp * super_data_property_expression;
  /* data_range  */
  CowlDataRange * data_range;
  /* data_intersection_of  */
  CowlDataRange * data_intersection_of;
  /* data_union_of  */
  CowlDataRange * data_union_of;
  /* data_complement_of  */
  CowlDataRange * data_complement_of;
  /* data_one_of  */
  CowlDataRange * data_one_of;
  /* datatype_restriction  */
  CowlDataRange * datatype_restriction;
  /* datatype  */
  CowlDatatype * datatype;
  /* entity  */
  CowlEntity * entity;
  /* facet_restriction  */
  CowlFacetRestr * facet_restriction;
  /* full_iri  */
  CowlIRI * full_iri;
  /* abbreviated_iri  */
  CowlIRI * abbreviated_iri;
  /* iri  */
  CowlIRI * iri;
  /* ontology_iri  */
  CowlIRI * ontology_iri;
  /* version_iri  */
  CowlIRI * version_iri;
  /* individual  */
  CowlIndividual * individual;
  /* anonymous_individual  */
  CowlIndividual * anonymous_individual;
  /* source_individual  */
  CowlIndividual * source_individual;
  /* target_individual  */
  CowlIndividual * target_individual;
  /* literal  */
  CowlLiteral * literal;
  /* target_value  */
  CowlLiteral * target_value;
  /* named_individual  */
  CowlNamedInd * named_individual;
  /* object_property  */
  CowlObjProp * object_property;
  /* object_property_expression  */
  CowlObjPropExp * object_property_expression;
  /* inverse_object_property  */
  CowlObjPropExp * inverse_object_property;
  /* sub_object_property_expression  */
  CowlObjPropExp * sub_object_property_expression;
  /* super_object_property_expression  */
  CowlObjPropExp * super_object_property_expression;
  /* prefix_name  */
  CowlString * prefix_name;
  /* facet_restriction_list  */
  UHash(CowlObjectTable)* facet_restriction_list;
  /* class_expression_list  */
  UHash(CowlObjectTable)* class_expression_list;
  /* class_expression_2_list  */
  UHash(CowlObjectTable)* class_expression_2_list;
  /* data_property_expression_list  */
  UHash(CowlObjectTable)* data_property_expression_list;
  /* data_property_expression_2_list  */
  UHash(CowlObjectTable)* data_property_expression_2_list;
  /* data_property_expression_star  */
  UHash(CowlObjectTable)* data_property_expression_star;
  /* data_range_list  */
  UHash(CowlObjectTable)* data_range_list;
  /* data_range_2_list  */
  UHash(CowlObjectTable)* data_range_2_list;
  /* individual_list  */
  UHash(CowlObjectTable)* individual_list;
  /* individual_2_list  */
  UHash(CowlObjectTable)* individual_2_list;
  /* literal_list  */
  UHash(CowlObjectTable)* literal_list;
  /* object_property_expression_list  */
  UHash(CowlObjectTable)* object_property_expression_list;
  /* object_property_expression_2_list  */
  UHash(CowlObjectTable)* object_property_expression_2_list;
  /* object_property_expression_star  */
  UHash(CowlObjectTable)* object_property_expression_star;
  /* QUOTED_STRING  */
  UString QUOTED_STRING;
  /* BLANK_NODE_LABEL  */
  UString BLANK_NODE_LABEL;
  /* PNAME_NS  */
  UString PNAME_NS;
  /* PNAME_LN  */
  UString PNAME_LN;
  /* LANG_TAG  */
  UString LANG_TAG;
  /* IRI_REF  */
  UString IRI_REF;
  /* property_expression_chain  */
  UVec(CowlObjectPtr)* property_expression_chain;
  /* annotation_star  */
  UVec(CowlObjectPtr)* annotation_star;
  /* object_property_expression_ordered_2_list  */
  UVec(CowlObjectPtr)* object_property_expression_ordered_2_list;
  /* NON_NEGATIVE_INTEGER  */
  ulib_uint NON_NEGATIVE_INTEGER;
  /* cardinality  */
  ulib_uint cardinality;
#line 524 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"

};
typedef union COWL_FUNC_YYSTYPE COWL_FUNC_YYSTYPE;
# define COWL_FUNC_YYSTYPE_IS_TRIVIAL 1
# define COWL_FUNC_YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined COWL_FUNC_YYLTYPE && ! defined COWL_FUNC_YYLTYPE_IS_DECLARED
typedef struct COWL_FUNC_YYLTYPE COWL_FUNC_YYLTYPE;
struct COWL_FUNC_YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define COWL_FUNC_YYLTYPE_IS_DECLARED 1
# define COWL_FUNC_YYLTYPE_IS_TRIVIAL 1
#endif



int cowl_func_yyparse (yyscan_t scanner, CowlFuncParser *parser);
/* "%code provides" blocks.  */
#line 22 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"

    #undef YYSTYPE
    #undef YYLTYPE

    #define YYSTYPE COWL_FUNC_YYSTYPE
    #define YYLTYPE COWL_FUNC_YYLTYPE

    #define YYMALLOC ulib_malloc
    #define YYFREE ulib_free

#line 561 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"

#endif /* !YY_COWL_FUNC_YY_HOME_BRANDONIO_DOCUMENTS_THESIS_PROJECT_2022_EYESIM_SIMULATION_SOFTWARE_EYESIM_MYSCRIPTS_PROJECT_SCRIPTS_ONTOLOGICAL_SLAM_CONTROL_AGENT_CMAKE_BUILD_DEBUG_THIRD_PARTY_COWL_SRC_PARSER_FUNCTIONAL_COWL_FUNC_YYPARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined COWL_FUNC_YYLTYPE_IS_TRIVIAL && COWL_FUNC_YYLTYPE_IS_TRIVIAL \
             && defined COWL_FUNC_YYSTYPE_IS_TRIVIAL && COWL_FUNC_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   666

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  224
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  531

#define YYUNDEFTOK  2
#define YYMAXUTOK   339


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if COWL_FUNC_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   226,   226,   232,   238,   244,   245,   251,   255,   256,
     260,   269,   273,   274,   278,   287,   291,   295,   296,   300,
     308,   309,   316,   317,   327,   336,   345,   354,   363,   372,
     373,   377,   384,   392,   397,   400,   408,   415,   418,   421,
     424,   427,   430,   438,   439,   443,   452,   458,   459,   460,
     461,   462,   463,   467,   473,   479,   486,   492,   499,   504,
     511,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   542,
     548,   554,   561,   567,   575,   583,   591,   598,   602,   611,
     615,   624,   628,   637,   641,   649,   657,   665,   669,   678,
     682,   691,   695,   706,   707,   708,   709,   710,   711,   712,
     713,   719,   720,   721,   722,   726,   734,   738,   742,   748,
     754,   763,   764,   765,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   779,   784,   791,   795,   799,   805,
     811,   817,   825,   833,   841,   848,   855,   862,   869,   876,
     883,   892,   893,   894,   895,   896,   897,   901,   909,   913,
     917,   923,   929,   937,   945,   954,   964,   976,   977,   978,
     979,   980,   981,   982,   986,   992,   998,  1006,  1015,  1024,
    1033,  1042,  1046,  1050,  1056,  1064,  1067,  1070,  1078,  1079,
    1080,  1081,  1085,  1094,  1097,  1103,  1111,  1115,  1119,  1127,
    1137,  1140,  1152,  1157,  1164,  1171,  1176,  1183,  1190,  1193,
    1205,  1210,  1217,  1224,  1229,  1236,  1243,  1248,  1255,  1260,
    1267,  1274,  1280,  1287,  1290
};
#endif

#if COWL_FUNC_YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NON_NEGATIVE_INTEGER", "QUOTED_STRING",
  "BLANK_NODE_LABEL", "PNAME_NS", "PNAME_LN", "LANG_TAG", "IRI_REF",
  "L_PAREN", "R_PAREN", "EQUALS", "DOUBLE_CARET", "IMPORT", "ONTOLOGY",
  "PREFIX", "DECLARATION", "ANNOTATION", "DATATYPE_DEFINITION", "HAS_KEY",
  "CLASS", "DATATYPE", "OBJECT_PROPERTY", "DATA_PROPERTY",
  "ANNOTATION_PROPERTY", "NAMED_INDIVIDUAL", "DATA_INTERSECTION_OF",
  "DATA_UNION_OF", "DATA_COMPLEMENT_OF", "DATA_ONE_OF",
  "DATATYPE_RESTRICTION", "DATA_SOME_VALUES_FROM", "DATA_ALL_VALUES_FROM",
  "DATA_HAS_VALUE", "DATA_MIN_CARDINALITY", "DATA_MAX_CARDINALITY",
  "DATA_EXACT_CARDINALITY", "OBJECT_INVERSE_OF", "OBJECT_INTERSECTION_OF",
  "OBJECT_UNION_OF", "OBJECT_COMPLEMENT_OF", "OBJECT_ONE_OF",
  "OBJECT_SOME_VALUES_FROM", "OBJECT_ALL_VALUES_FROM", "OBJECT_HAS_VALUE",
  "OBJECT_HAS_SELF", "OBJECT_MIN_CARDINALITY", "OBJECT_MAX_CARDINALITY",
  "OBJECT_EXACT_CARDINALITY", "SUB_CLASS_OF", "EQUIVALENT_CLASSES",
  "DISJOINT_CLASSES", "DISJOINT_UNION", "SUB_OBJECT_PROPERTY_OF",
  "EQUIVALENT_OBJECT_PROPERTIES", "DISJOINT_OBJECT_PROPERTIES",
  "OBJECT_PROPERTY_CHAIN", "INVERSE_OBJECT_PROPERTIES",
  "OBJECT_PROPERTY_DOMAIN", "OBJECT_PROPERTY_RANGE",
  "FUNCTIONAL_OBJECT_PROPERTY", "INVERSE_FUNCTIONAL_OBJECT_PROPERTY",
  "REFLEXIVE_OBJECT_PROPERTY", "IRREFLEXIVE_OBJECT_PROPERTY",
  "SYMMETRIC_OBJECT_PROPERTY", "ASYMMETRIC_OBJECT_PROPERTY",
  "TRANSITIVE_OBJECT_PROPERTY", "SUB_DATA_PROPERTY_OF",
  "EQUIVALENT_DATA_PROPERTIES", "DISJOINT_DATA_PROPERTIES",
  "DATA_PROPERTY_DOMAIN", "DATA_PROPERTY_RANGE",
  "FUNCTIONAL_DATA_PROPERTY", "SAME_INDIVIDUAL", "DIFFERENT_INDIVIDUALS",
  "CLASS_ASSERTION", "OBJECT_PROPERTY_ASSERTION",
  "NEGATIVE_OBJECT_PROPERTY_ASSERTION", "DATA_PROPERTY_ASSERTION",
  "NEGATIVE_DATA_PROPERTY_ASSERTION", "ANNOTATION_ASSERTION",
  "SUB_ANNOTATION_PROPERTY_OF", "ANNOTATION_PROPERTY_DOMAIN",
  "ANNOTATION_PROPERTY_RANGE", "$accept", "full_iri", "prefix_name",
  "abbreviated_iri", "iri", "ontology_document", "prefix_declarations",
  "prefix_declaration", "ontology", "ontology_id", "ontology_iri",
  "version_iri", "ontology_imports", "import", "ontology_annotations",
  "axioms", "class", "datatype", "object_property", "data_property",
  "annotation_property", "individual", "named_individual",
  "anonymous_individual", "literal", "declaration", "entity",
  "object_property_expression", "inverse_object_property",
  "data_property_expression", "data_range", "data_intersection_of",
  "data_union_of", "data_complement_of", "data_one_of",
  "datatype_restriction", "facet_restriction_list", "facet_restriction",
  "class_expression", "object_intersection_of", "object_union_of",
  "object_complement_of", "object_one_of", "object_some_values_from",
  "object_all_values_from", "object_has_value", "object_has_self",
  "object_min_cardinality", "object_max_cardinality",
  "object_exact_cardinality", "cardinality", "data_some_values_from",
  "data_all_values_from", "data_has_value", "data_min_cardinality",
  "data_max_cardinality", "data_exact_cardinality", "axiom", "class_axiom",
  "sub_class_of", "sub_class_expression", "super_class_expression",
  "equivalent_classes", "disjoint_classes", "disjoint_union",
  "object_property_axiom", "sub_object_property_of",
  "sub_object_property_expression", "super_object_property_expression",
  "property_expression_chain", "equivalent_object_properties",
  "disjoint_object_properties", "inverse_object_properties",
  "object_property_domain", "object_property_range",
  "functional_object_property", "inverse_functional_object_property",
  "reflexive_object_property", "irreflexive_object_property",
  "symmetric_object_property", "asymmetric_object_property",
  "transitive_object_property", "data_property_axiom",
  "sub_data_property_of", "sub_data_property_expression",
  "super_data_property_expression", "equivalent_data_properties",
  "disjoint_data_properties", "data_property_domain",
  "data_property_range", "functional_data_property", "datatype_definition",
  "has_key", "assertion", "same_individual", "different_individuals",
  "class_assertion", "object_property_assertion",
  "negative_object_property_assertion", "data_property_assertion",
  "negative_data_property_assertion", "source_individual",
  "target_individual", "target_value", "annotation", "annotation_value",
  "annotation_axiom", "annotation_assertion", "annotation_subject",
  "sub_annotation_property_of", "sub_annotation_property",
  "super_annotation_property", "annotation_property_domain",
  "annotation_property_range", "annotation_star", "class_expression_list",
  "class_expression_2_list", "data_property_expression_list",
  "data_property_expression_2_list", "data_property_expression_star",
  "data_range_list", "data_range_2_list", "individual_list",
  "individual_2_list", "literal_list", "object_property_expression_list",
  "object_property_expression_2_list",
  "object_property_expression_ordered_2_list",
  "object_property_expression_star", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339
};
# endif

#define YYPACT_NINF (-369)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-221)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -369,    36,    55,  -369,    20,    35,  -369,  -369,    33,    76,
    -369,  -369,  -369,  -369,  -369,  -369,    33,  -369,    52,    69,
    -369,  -369,    75,    85,  -369,    92,   106,    33,   114,   360,
    -369,  -369,   115,  -369,  -369,   117,   128,   132,   133,   136,
     139,   147,   151,   169,   176,   177,   180,   185,   186,   189,
     194,   198,   201,   202,   204,   207,   208,   209,   210,   211,
     212,   218,   219,   220,   221,   228,   230,   232,   235,   237,
     242,   243,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,    39,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,   102,  -369,   286,    39,   458,
     458,   458,   458,    39,     9,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    39,    39,    39,
      39,    39,    39,   116,   116,   458,    25,    25,    39,    39,
      39,    39,    39,    39,    18,  -369,  -369,  -369,  -369,   125,
     245,   246,   247,   250,   258,   259,   195,  -369,   206,   261,
     263,   264,   267,   268,   273,   274,   281,   285,   287,   290,
     295,   296,   303,   304,   305,   306,  -369,  -369,   310,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,   580,  -369,   580,
     205,   311,   580,   317,   318,  -369,  -369,  -369,  -369,    -3,
      -3,  -369,    -3,   319,   320,    -3,   580,   580,   321,   322,
     323,   324,   325,   326,   327,  -369,  -369,  -369,    33,  -369,
      33,   328,   329,   580,   206,   333,  -369,  -369,  -369,  -369,
       2,   334,   335,     2,     2,     2,     2,     2,     2,  -369,
      33,    33,    33,  -369,    33,  -369,    33,    33,    33,    33,
      33,    33,  -369,   337,   342,   343,   344,   347,  -369,   348,
    -369,  -369,  -369,  -369,  -369,    33,    33,    33,   355,   355,
     355,   580,   580,   580,     2,    -3,    -3,    -3,    -3,   355,
     355,   355,  -369,  -369,   349,   350,  -369,  -369,   351,    33,
      -3,  -369,   352,   353,   354,  -369,  -369,   357,   358,   359,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,   363,   364,
    -369,  -369,   365,   370,  -369,   371,  -369,  -369,   372,  -369,
       2,     2,   362,   362,  -369,  -369,   102,  -369,   373,   374,
     375,  -369,   376,   377,   378,   382,   384,   387,   206,   206,
     206,   362,    33,  -369,   206,   206,   362,  -369,    33,    33,
      33,   388,   392,   393,   153,   580,   580,     2,   394,    -3,
      -3,    -3,    30,  -369,  -369,   406,    -3,    42,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,   434,   436,
    -369,   437,   438,   439,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,   206,   440,   442,   443,  -369,    51,
      33,   444,   448,   449,    45,    58,   196,  -369,  -369,  -369,
    -369,  -369,   450,   451,   452,  -369,   501,   519,   562,   454,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
     455,  -369,  -369,  -369,  -369,  -369,   362,    83,  -369,  -369,
    -369,  -369,  -369,   460,  -369,   461,  -369,   462,  -369,  -369,
    -369,  -369,   463,  -369,   464,  -369,   466,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,   126,   467,  -369,
    -369
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,     0,     9,     7,    12,     0,
       4,     2,     5,     6,    15,    17,    13,     3,     0,    20,
      16,    14,     0,     0,    18,    22,     0,     0,     0,     0,
      21,    10,     0,   200,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,    23,   104,   111,   112,   113,   114,   105,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   106,   151,   152,   153,   154,   155,   156,
     107,   108,   109,   167,   168,   169,   170,   171,   172,   173,
     110,   188,   189,   190,   191,    19,     0,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,    28,     0,   201,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    32,   186,   185,   187,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    61,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,   116,     0,   202,     0,
       0,     0,     0,     0,     0,    26,    43,   136,    44,     0,
       0,   218,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    46,   158,     0,   205,
       0,     0,     0,     0,     0,     0,    31,   213,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
       0,     0,     0,    34,     0,   184,     0,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,    47,     0,
      48,    49,    50,    51,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,   117,     0,   203,   118,   119,     0,     0,
       0,   137,     0,     0,   219,   139,   140,     0,     0,     0,
     144,   145,   146,   147,   148,   149,   150,   159,     0,   206,
     160,   161,     0,     0,   164,   214,   174,   175,     0,   181,
       0,     0,     0,     0,   193,   194,     0,   197,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   165,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,   120,     0,     0,     0,   134,   135,
     141,   142,   143,   157,   162,   163,   176,   182,     0,     0,
     183,     0,     0,     0,   195,   198,   199,    37,    38,    39,
      40,    41,    42,   210,     0,     0,     0,     0,   216,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    80,    81,
      82,   214,     0,     0,     0,    86,     0,     0,     0,     0,
     224,    45,   221,   138,   222,   177,   178,   179,   180,   192,
     211,    53,    54,    55,    56,   217,     0,     0,    58,    94,
      95,    96,    97,     0,    99,     0,   101,     0,    83,    84,
      85,    87,     0,    89,     0,    91,     0,   208,    60,    57,
      59,    98,   100,   102,    88,    90,    92,     0,     0,   209,
     166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -369,   299,  -369,  -369,    -8,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -161,  -148,  -305,   170,
    -132,  -171,   171,  -154,  -368,  -369,  -369,   -71,  -369,  -160,
    -203,  -369,  -369,  -369,  -369,  -369,  -369,  -168,  -135,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -200,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,   223,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -218,    99,    98,   459,   100,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,   513,  -369,  -139,  -369,   308,  -369,
    -369,    86,   154,   312,  -369,  -369,   345,  -369,  -369
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    18,    13,   255,     1,     2,     6,     7,    15,
      16,    21,    19,    24,    25,    29,   227,   318,   256,   276,
     155,   379,   288,   289,   198,    72,   206,   261,   258,   279,
     453,   320,   321,   322,   323,   324,   497,   498,   248,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     408,   240,   241,   242,   243,   244,   245,    73,    74,    75,
     247,   344,    76,    77,    78,    79,    80,   259,   352,   260,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,   278,   368,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   380,   438,   441,   156,   199,   110,   111,   386,   112,
     300,   388,   113,   114,   116,   249,   250,   280,   281,   527,
     454,   455,   290,   291,   459,   262,   263,   427,   422
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,   197,   252,   394,    10,   319,    11,   195,    20,    10,
     208,    11,   287,   287,   440,   440,    10,   277,    11,    32,
     283,   284,   285,   251,   228,   246,   303,    28,   296,   297,
       8,   304,    10,   458,    11,   253,     3,    10,   463,    11,
      10,   479,    11,    28,   425,     9,    10,   253,    11,    10,
     293,    11,    10,   483,    11,   194,   502,    28,   298,   299,
     301,   302,   494,   253,    22,    10,   254,    11,   253,   504,
       4,     5,   313,   314,   315,   316,   317,   381,   382,   383,
     253,   373,    17,    23,    11,   313,   314,   315,   316,   317,
      10,   495,    11,   257,   519,    27,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   194,   195,   154,    10,
      28,    11,   343,   348,   345,   294,   295,    31,   367,   375,
     369,   195,   378,    10,    33,    11,   115,   117,   518,   409,
     410,   358,   359,    10,    28,    11,   305,   528,   118,   419,
     420,   421,   119,   120,   385,   392,   121,   196,   372,   122,
     207,   226,   226,   226,   226,   226,   391,   123,   195,   393,
      10,   124,    11,   287,   470,   404,   405,   406,   387,   275,
     275,   275,   275,   275,   275,   286,   286,   226,   396,   125,
     275,   275,   154,   154,   154,   154,   126,   127,   351,   351,
     128,   354,   411,   412,   357,   129,   130,   457,   413,   131,
     207,   461,   462,    10,   132,    11,   312,   506,   133,   437,
     437,   134,   135,    10,   136,    11,   346,   137,   138,   139,
     140,   141,   142,   313,   314,   315,   316,   317,   143,   144,
     145,   146,   197,   313,   314,   315,   316,   317,   147,   226,
     148,   226,   149,   471,   226,   150,   474,   151,   464,   465,
     466,   490,   152,   153,   460,   306,   307,   308,   226,   226,
     309,   503,   505,   507,   415,   416,   417,   418,   310,   311,
     275,   325,   275,   326,   327,   226,   207,   328,   329,   426,
     472,   473,   286,   330,   331,   286,   286,   286,   286,   286,
     384,   332,   154,   389,   390,   333,   207,   334,   226,   207,
     335,   275,   154,   286,    28,   336,   337,   200,   201,   202,
     203,   204,   205,   338,   339,   340,   341,   275,   275,   275,
     342,    26,   347,   226,   226,   226,   286,   349,   350,   520,
     355,   356,   360,   361,   362,   363,   364,   365,   366,   370,
     371,   512,   514,   516,   374,   376,   377,   398,   476,   477,
     478,   480,   399,   400,   401,   482,   484,   402,   407,   403,
     423,  -204,   424,   428,   429,  -220,   194,   529,   430,   431,
     432,    34,   286,   286,   433,  -207,   434,    35,   196,    36,
      37,   435,  -215,   436,   444,   445,   446,   447,   448,   449,
     207,   207,   207,   450,   207,   451,   207,   207,   452,   467,
     275,   275,   275,   468,   469,   475,   286,   226,   226,   286,
      38,    39,    40,    41,    42,    43,    44,   481,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,   485,   207,   486,   487,   488,
     489,   491,   496,   492,   493,   499,   207,   207,   207,   500,
     501,   508,   509,   510,   517,    10,  -212,    11,   226,   226,
     226,   521,   522,   523,   524,   525,    28,   526,   530,   395,
     439,   442,   397,   353,    30,   456,   443,   282,   414,   496,
     209,   210,   211,   212,   213,   214,   292,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,    10,     0,
      11,   264,   511,     0,     0,     0,     0,     0,     0,   275,
       0,     0,     0,     0,     0,     0,    10,     0,    11,     0,
     513,     0,     0,   209,   210,   211,   212,   213,   214,     0,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,    10,
       0,    11,     0,   515,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,    11,
       0,     0,     0,     0,   209,   210,   211,   212,   213,   214,
       0,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   209,   210,   211,   212,   213,   214,     0,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193
};

static const yytype_int16 yycheck[] =
{
       8,   155,   163,   308,     7,   208,     9,     5,    16,     7,
     158,     9,   183,   184,   382,   383,     7,   177,     9,    27,
     180,   181,   182,   162,   159,   160,     8,    18,   188,   189,
      10,    13,     7,   401,     9,    38,     0,     7,   406,     9,
       7,    11,     9,    18,   349,    10,     7,    38,     9,     7,
     185,     9,     7,    11,     9,     4,    11,    18,   190,   191,
     192,   193,    11,    38,    12,     7,    57,     9,    38,    11,
      15,    16,    27,    28,    29,    30,    31,   295,   296,   297,
      38,   284,     6,    14,     9,    27,    28,    29,    30,    31,
       7,   459,     9,   164,    11,    10,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,     4,     5,   116,     7,
      18,     9,   247,   252,   249,   186,   187,    11,   278,   290,
     280,     5,   293,     7,    10,     9,    11,    10,   496,   329,
     330,   266,   267,     7,    18,     9,    11,    11,    10,   339,
     340,   341,    10,    10,   298,   306,    10,   155,   283,    10,
     158,   159,   160,   161,   162,   163,   304,    10,     5,   307,
       7,    10,     9,   334,    11,   325,   326,   327,   300,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   310,    10,
     188,   189,   190,   191,   192,   193,    10,    10,   259,   260,
      10,   262,   331,   332,   265,    10,    10,   400,   333,    10,
     208,   404,   405,     7,    10,     9,    11,    11,    10,   380,
     381,    10,    10,     7,    10,     9,    11,    10,    10,    10,
      10,    10,    10,    27,    28,    29,    30,    31,    10,    10,
      10,    10,   386,    27,    28,    29,    30,    31,    10,   247,
      10,   249,    10,   414,   252,    10,   417,    10,   408,   409,
     410,   454,    10,    10,   402,    10,    10,    10,   266,   267,
      10,   464,   465,   466,   335,   336,   337,   338,    10,    10,
     278,    10,   280,    10,    10,   283,   284,    10,    10,   350,
     415,   416,   290,    10,    10,   293,   294,   295,   296,   297,
     298,    10,   300,   301,   302,    10,   304,    10,   306,   307,
      10,   309,   310,   311,    18,    10,    10,    21,    22,    23,
      24,    25,    26,    10,    10,    10,    10,   325,   326,   327,
      10,    22,    11,   331,   332,   333,   334,    10,    10,   497,
      11,    11,    11,    11,    11,    11,    11,    11,    11,    11,
      11,   476,   477,   478,    11,    11,    11,    10,   419,   420,
     421,   422,    10,    10,    10,   426,   427,    10,     3,    11,
      11,    11,    11,    11,    11,    11,     4,   527,    11,    11,
      11,    11,   380,   381,    11,    11,    11,    17,   386,    19,
      20,    11,    11,    11,    11,    11,    11,    11,    11,    11,
     398,   399,   400,    11,   402,    11,   404,   405,    11,    11,
     408,   409,   410,    11,    11,    11,   414,   415,   416,   417,
      50,    51,    52,    53,    54,    55,    56,    11,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    11,   454,    11,    11,    11,
      11,    11,   460,    11,    11,    11,   464,   465,   466,    11,
      11,    11,    11,    11,    10,     7,    11,     9,   476,   477,
     478,    11,    11,    11,    11,    11,    18,    11,    11,   309,
     381,   383,   311,   260,    25,   399,   386,   179,   334,   497,
      32,    33,    34,    35,    36,    37,   184,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     7,    -1,
       9,   166,    11,    -1,    -1,    -1,    -1,    -1,    -1,   527,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,     9,    -1,
      11,    -1,    -1,    32,    33,    34,    35,    36,    37,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     7,
      -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,     9,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    90,    91,     0,    15,    16,    92,    93,    10,    10,
       7,     9,    86,    88,    89,    94,    95,     6,    87,    97,
      89,    96,    12,    14,    98,    99,    86,    10,    18,   100,
     189,    11,    89,    10,    11,    17,    19,    20,    50,    51,
      52,    53,    54,    55,    56,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   110,   142,   143,   144,   147,   148,   149,   150,
     151,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     191,   192,   194,   197,   198,    11,   199,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    89,   105,   189,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,     4,     5,    89,   108,   109,   190,
      21,    22,    23,    24,    25,    26,   111,    89,   102,    32,
      33,    34,    35,    36,    37,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    89,   101,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     136,   137,   138,   139,   140,   141,   123,   145,   123,   200,
     201,   201,   101,    38,    57,    89,   103,   112,   113,   152,
     154,   112,   210,   211,   211,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,    89,   104,   114,   169,   114,
     202,   203,   203,   114,   114,   114,    89,   106,   107,   108,
     207,   208,   208,   123,   112,   112,   114,   114,   105,   105,
     195,   105,   105,     8,    13,    11,    10,    10,    10,    10,
      10,    10,    11,    27,    28,    29,    30,    31,   102,   115,
     116,   117,   118,   119,   120,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,   123,   146,   123,    11,    11,   201,    10,
      10,   112,   153,   153,   112,    11,    11,   112,   123,   123,
      11,    11,    11,    11,    11,    11,    11,   114,   170,   114,
      11,    11,   123,   115,    11,   106,    11,    11,   106,   106,
     186,   186,   186,   186,    89,   108,   193,   105,   196,    89,
      89,   102,   101,   102,   103,   104,   105,   107,    10,    10,
      10,    10,    10,    11,   114,   114,   114,     3,   135,   135,
     135,   201,   201,   123,   207,   112,   112,   112,   112,   135,
     135,   135,   213,    11,    11,   103,   112,   212,    11,    11,
      11,    11,    11,    11,    11,    11,    11,   106,   187,   187,
     109,   188,   188,   190,    11,    11,    11,    11,    11,    11,
      11,    11,    11,   115,   205,   206,   206,   115,   109,   209,
     102,   115,   115,   109,   114,   114,   114,    11,    11,    11,
      11,   106,   123,   123,   106,    11,   112,   112,   112,    11,
     112,    11,   112,    11,   112,    11,    11,    11,    11,    11,
     115,    11,    11,    11,    11,   109,    89,   121,   122,    11,
      11,    11,    11,   115,    11,   115,    11,   115,    11,    11,
      11,    11,   123,    11,   123,    11,   123,    10,   109,    11,
     122,    11,    11,    11,    11,    11,    11,   204,    11,   114,
      11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    87,    88,    89,    89,    90,    91,    91,
      92,    93,    94,    94,    94,    95,    96,    97,    97,    98,
      99,    99,   100,   100,   101,   102,   103,   104,   105,   106,
     106,   107,   108,   109,   109,   109,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   114,   115,   115,   115,
     115,   115,   115,   116,   117,   118,   119,   120,   121,   121,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   132,   133,
     133,   134,   134,   135,   136,   137,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   143,   143,   143,   143,   144,   145,   146,   147,   148,
     149,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   151,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   167,   167,   167,   167,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   178,   178,
     178,   178,   178,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   190,   190,   191,   191,
     191,   191,   192,   193,   193,   194,   195,   196,   197,   198,
     199,   199,   200,   200,   201,   202,   202,   203,   204,   204,
     205,   205,   206,   207,   207,   208,   209,   209,   210,   210,
     211,   212,   212,   213,   213
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     0,     2,
       6,     7,     0,     1,     2,     1,     1,     0,     2,     4,
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     5,     4,     4,     4,
       4,     4,     4,     1,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     5,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     5,     5,     5,     4,     5,     6,     5,
       6,     5,     6,     1,     5,     5,     5,     5,     6,     5,
       6,     5,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     1,     1,     5,     5,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     6,     1,     1,     4,     5,
       5,     6,     6,     6,     5,     5,     5,     5,     5,     5,
       5,     1,     1,     1,     1,     1,     1,     6,     1,     1,
       5,     5,     6,     6,     5,     6,    11,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     6,     7,     7,     7,
       7,     1,     1,     1,     6,     1,     1,     1,     1,     1,
       1,     1,     7,     1,     1,     6,     1,     1,     6,     6,
       0,     2,     1,     2,     2,     1,     2,     2,     0,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     2,
       2,     2,     2,     0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, parser, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if COWL_FUNC_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined COWL_FUNC_YYLTYPE_IS_TRIVIAL && COWL_FUNC_YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner, parser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, CowlFuncParser *parser)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (parser);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, CowlFuncParser *parser)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, scanner, parser);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, CowlFuncParser *parser)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, parser); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !COWL_FUNC_YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !COWL_FUNC_YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, CowlFuncParser *parser)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (parser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 86: /* full_iri  */
#line 210 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_iri_release(((*yyvaluep).full_iri)); }
#line 2001 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 87: /* prefix_name  */
#line 215 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_string_release(((*yyvaluep).prefix_name)); }
#line 2007 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 88: /* abbreviated_iri  */
#line 210 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_iri_release(((*yyvaluep).abbreviated_iri)); }
#line 2013 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 89: /* iri  */
#line 210 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_iri_release(((*yyvaluep).iri)); }
#line 2019 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 95: /* ontology_iri  */
#line 210 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_iri_release(((*yyvaluep).ontology_iri)); }
#line 2025 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 96: /* version_iri  */
#line 210 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_iri_release(((*yyvaluep).version_iri)); }
#line 2031 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 101: /* class  */
#line 201 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_class_release(((*yyvaluep).class)); }
#line 2037 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 102: /* datatype  */
#line 206 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_datatype_release(((*yyvaluep).datatype)); }
#line 2043 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 103: /* object_property  */
#line 213 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_obj_prop_release(((*yyvaluep).object_property)); }
#line 2049 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 104: /* data_property  */
#line 203 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_data_prop_release(((*yyvaluep).data_property)); }
#line 2055 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 105: /* annotation_property  */
#line 198 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_annot_prop_release(((*yyvaluep).annotation_property)); }
#line 2061 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 106: /* individual  */
#line 209 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_individual_release(((*yyvaluep).individual)); }
#line 2067 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 107: /* named_individual  */
#line 212 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_named_ind_release(((*yyvaluep).named_individual)); }
#line 2073 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 108: /* anonymous_individual  */
#line 209 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_individual_release(((*yyvaluep).anonymous_individual)); }
#line 2079 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 109: /* literal  */
#line 211 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_literal_release(((*yyvaluep).literal)); }
#line 2085 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 110: /* declaration  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).declaration)); }
#line 2091 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 111: /* entity  */
#line 207 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_entity_release(((*yyvaluep).entity)); }
#line 2097 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 112: /* object_property_expression  */
#line 214 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_obj_prop_exp_release(((*yyvaluep).object_property_expression)); }
#line 2103 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 113: /* inverse_object_property  */
#line 214 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_obj_prop_exp_release(((*yyvaluep).inverse_object_property)); }
#line 2109 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 114: /* data_property_expression  */
#line 204 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_data_prop_exp_release(((*yyvaluep).data_property_expression)); }
#line 2115 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 115: /* data_range  */
#line 205 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_data_range_release(((*yyvaluep).data_range)); }
#line 2121 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 116: /* data_intersection_of  */
#line 205 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_data_range_release(((*yyvaluep).data_intersection_of)); }
#line 2127 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 117: /* data_union_of  */
#line 205 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_data_range_release(((*yyvaluep).data_union_of)); }
#line 2133 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 118: /* data_complement_of  */
#line 205 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_data_range_release(((*yyvaluep).data_complement_of)); }
#line 2139 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 119: /* data_one_of  */
#line 205 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_data_range_release(((*yyvaluep).data_one_of)); }
#line 2145 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 120: /* datatype_restriction  */
#line 205 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_data_range_release(((*yyvaluep).datatype_restriction)); }
#line 2151 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 121: /* facet_restriction_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).facet_restriction_list)); }
#line 2157 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 122: /* facet_restriction  */
#line 208 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_facet_restr_release(((*yyvaluep).facet_restriction)); }
#line 2163 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 123: /* class_expression  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).class_expression)); }
#line 2169 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 124: /* object_intersection_of  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_intersection_of)); }
#line 2175 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 125: /* object_union_of  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_union_of)); }
#line 2181 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 126: /* object_complement_of  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_complement_of)); }
#line 2187 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 127: /* object_one_of  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_one_of)); }
#line 2193 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 128: /* object_some_values_from  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_some_values_from)); }
#line 2199 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 129: /* object_all_values_from  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_all_values_from)); }
#line 2205 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 130: /* object_has_value  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_has_value)); }
#line 2211 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 131: /* object_has_self  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_has_self)); }
#line 2217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 132: /* object_min_cardinality  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_min_cardinality)); }
#line 2223 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 133: /* object_max_cardinality  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_max_cardinality)); }
#line 2229 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 134: /* object_exact_cardinality  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).object_exact_cardinality)); }
#line 2235 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 136: /* data_some_values_from  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).data_some_values_from)); }
#line 2241 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 137: /* data_all_values_from  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).data_all_values_from)); }
#line 2247 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 138: /* data_has_value  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).data_has_value)); }
#line 2253 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 139: /* data_min_cardinality  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).data_min_cardinality)); }
#line 2259 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 140: /* data_max_cardinality  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).data_max_cardinality)); }
#line 2265 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 141: /* data_exact_cardinality  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).data_exact_cardinality)); }
#line 2271 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 142: /* axiom  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).axiom)); }
#line 2277 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 143: /* class_axiom  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).class_axiom)); }
#line 2283 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 144: /* sub_class_of  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).sub_class_of)); }
#line 2289 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 145: /* sub_class_expression  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).sub_class_expression)); }
#line 2295 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 146: /* super_class_expression  */
#line 202 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_cls_exp_release(((*yyvaluep).super_class_expression)); }
#line 2301 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 147: /* equivalent_classes  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).equivalent_classes)); }
#line 2307 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 148: /* disjoint_classes  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).disjoint_classes)); }
#line 2313 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 149: /* disjoint_union  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).disjoint_union)); }
#line 2319 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 150: /* object_property_axiom  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).object_property_axiom)); }
#line 2325 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 151: /* sub_object_property_of  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).sub_object_property_of)); }
#line 2331 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 152: /* sub_object_property_expression  */
#line 214 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_obj_prop_exp_release(((*yyvaluep).sub_object_property_expression)); }
#line 2337 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 153: /* super_object_property_expression  */
#line 214 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_obj_prop_exp_release(((*yyvaluep).super_object_property_expression)); }
#line 2343 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 154: /* property_expression_chain  */
#line 216 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_vec_free(((*yyvaluep).property_expression_chain)); }
#line 2349 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 155: /* equivalent_object_properties  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).equivalent_object_properties)); }
#line 2355 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 156: /* disjoint_object_properties  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).disjoint_object_properties)); }
#line 2361 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 157: /* inverse_object_properties  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).inverse_object_properties)); }
#line 2367 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 158: /* object_property_domain  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).object_property_domain)); }
#line 2373 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 159: /* object_property_range  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).object_property_range)); }
#line 2379 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 160: /* functional_object_property  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).functional_object_property)); }
#line 2385 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 161: /* inverse_functional_object_property  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).inverse_functional_object_property)); }
#line 2391 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 162: /* reflexive_object_property  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).reflexive_object_property)); }
#line 2397 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 163: /* irreflexive_object_property  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).irreflexive_object_property)); }
#line 2403 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 164: /* symmetric_object_property  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).symmetric_object_property)); }
#line 2409 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 165: /* asymmetric_object_property  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).asymmetric_object_property)); }
#line 2415 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 166: /* transitive_object_property  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).transitive_object_property)); }
#line 2421 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 167: /* data_property_axiom  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).data_property_axiom)); }
#line 2427 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 168: /* sub_data_property_of  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).sub_data_property_of)); }
#line 2433 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 169: /* sub_data_property_expression  */
#line 204 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_data_prop_exp_release(((*yyvaluep).sub_data_property_expression)); }
#line 2439 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 170: /* super_data_property_expression  */
#line 204 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_data_prop_exp_release(((*yyvaluep).super_data_property_expression)); }
#line 2445 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 171: /* equivalent_data_properties  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).equivalent_data_properties)); }
#line 2451 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 172: /* disjoint_data_properties  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).disjoint_data_properties)); }
#line 2457 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 173: /* data_property_domain  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).data_property_domain)); }
#line 2463 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 174: /* data_property_range  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).data_property_range)); }
#line 2469 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 175: /* functional_data_property  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).functional_data_property)); }
#line 2475 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 176: /* datatype_definition  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).datatype_definition)); }
#line 2481 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 177: /* has_key  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).has_key)); }
#line 2487 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 178: /* assertion  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).assertion)); }
#line 2493 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 179: /* same_individual  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).same_individual)); }
#line 2499 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 180: /* different_individuals  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).different_individuals)); }
#line 2505 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 181: /* class_assertion  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).class_assertion)); }
#line 2511 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 182: /* object_property_assertion  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).object_property_assertion)); }
#line 2517 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 183: /* negative_object_property_assertion  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).negative_object_property_assertion)); }
#line 2523 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 184: /* data_property_assertion  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).data_property_assertion)); }
#line 2529 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 185: /* negative_data_property_assertion  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).negative_data_property_assertion)); }
#line 2535 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 186: /* source_individual  */
#line 209 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_individual_release(((*yyvaluep).source_individual)); }
#line 2541 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 187: /* target_individual  */
#line 209 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_individual_release(((*yyvaluep).target_individual)); }
#line 2547 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 188: /* target_value  */
#line 211 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_literal_release(((*yyvaluep).target_value)); }
#line 2553 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 189: /* annotation  */
#line 197 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_annotation_release(((*yyvaluep).annotation)); }
#line 2559 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 190: /* annotation_value  */
#line 199 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_annot_value_release(((*yyvaluep).annotation_value)); }
#line 2565 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 191: /* annotation_axiom  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).annotation_axiom)); }
#line 2571 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 192: /* annotation_assertion  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).annotation_assertion)); }
#line 2577 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 193: /* annotation_subject  */
#line 199 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_annot_value_release(((*yyvaluep).annotation_subject)); }
#line 2583 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 194: /* sub_annotation_property_of  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).sub_annotation_property_of)); }
#line 2589 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 195: /* sub_annotation_property  */
#line 198 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_annot_prop_release(((*yyvaluep).sub_annotation_property)); }
#line 2595 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 196: /* super_annotation_property  */
#line 198 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_annot_prop_release(((*yyvaluep).super_annotation_property)); }
#line 2601 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 197: /* annotation_property_domain  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).annotation_property_domain)); }
#line 2607 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 198: /* annotation_property_range  */
#line 200 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_axiom_release(((*yyvaluep).annotation_property_range)); }
#line 2613 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 199: /* annotation_star  */
#line 216 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_vec_free(((*yyvaluep).annotation_star)); }
#line 2619 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 200: /* class_expression_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).class_expression_list)); }
#line 2625 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 201: /* class_expression_2_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).class_expression_2_list)); }
#line 2631 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 202: /* data_property_expression_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).data_property_expression_list)); }
#line 2637 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 203: /* data_property_expression_2_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).data_property_expression_2_list)); }
#line 2643 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 204: /* data_property_expression_star  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).data_property_expression_star)); }
#line 2649 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 205: /* data_range_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).data_range_list)); }
#line 2655 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 206: /* data_range_2_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).data_range_2_list)); }
#line 2661 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 207: /* individual_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).individual_list)); }
#line 2667 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 208: /* individual_2_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).individual_2_list)); }
#line 2673 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 209: /* literal_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).literal_list)); }
#line 2679 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 210: /* object_property_expression_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).object_property_expression_list)); }
#line 2685 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 211: /* object_property_expression_2_list  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).object_property_expression_2_list)); }
#line 2691 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 212: /* object_property_expression_ordered_2_list  */
#line 216 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_vec_free(((*yyvaluep).object_property_expression_ordered_2_list)); }
#line 2697 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

    case 213: /* object_property_expression_star  */
#line 217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { cowl_object_set_free(((*yyvaluep).object_property_expression_star)); }
#line 2703 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, CowlFuncParser *parser)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined COWL_FUNC_YYLTYPE_IS_TRIVIAL && COWL_FUNC_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 226 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
              {
        (yyval.full_iri) = cowl_iri_from_cstring((yyvsp[0].IRI_REF).cstring, (yyvsp[0].IRI_REF).length);
    }
#line 3007 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 3:
#line 232 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
               {
        (yyval.prefix_name) = cowl_string_get((yyvsp[0].PNAME_NS).cstring, (yyvsp[0].PNAME_NS).length, true);
    }
#line 3015 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 4:
#line 238 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
               {
        (yyval.abbreviated_iri) = cowl_func_parser_get_full_iri(parser, (yyvsp[0].PNAME_LN));
    }
#line 3023 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 10:
#line 260 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                         {
        cowl_ret ret = cowl_func_parser_register_ns(parser, (yyvsp[-3].prefix_name), (yyvsp[-1].full_iri)->ns);
        cowl_string_release((yyvsp[-3].prefix_name));
        cowl_iri_release((yyvsp[-1].full_iri));
        if (ret) YYERROR;
    }
#line 3034 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 13:
#line 274 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                   {
        cowl_parser_ctx_set_iri(parser->ctx, (yyvsp[0].ontology_iri));
        cowl_iri_release((yyvsp[0].ontology_iri));
    }
#line 3043 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 14:
#line 278 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                               {
        cowl_parser_ctx_set_iri(parser->ctx, (yyvsp[-1].ontology_iri));
        cowl_parser_ctx_set_version(parser->ctx, (yyvsp[0].version_iri));
        cowl_iri_release((yyvsp[-1].ontology_iri));
        cowl_iri_release((yyvsp[0].version_iri));
    }
#line 3054 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 19:
#line 300 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                 {
        cowl_ret ret = cowl_parser_ctx_add_import(parser->ctx, (yyvsp[-1].iri));
        cowl_iri_release((yyvsp[-1].iri));
        if (ret) YYERROR;
    }
#line 3064 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 21:
#line 309 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                      {
        cowl_ret ret = cowl_parser_ctx_add_annot(parser->ctx, (yyvsp[0].annotation));
        cowl_annotation_release((yyvsp[0].annotation));
        if (ret) YYERROR;
    }
#line 3074 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 23:
#line 317 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                   {
        cowl_ret ret = cowl_parser_ctx_add_axiom(parser->ctx, (yyvsp[0].axiom));
        cowl_axiom_release((yyvsp[0].axiom));
        if (ret) YYERROR;
    }
#line 3084 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 24:
#line 327 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
          {
        (yyval.class) = cowl_class_get((yyvsp[0].iri));
        cowl_iri_release((yyvsp[0].iri));
    }
#line 3093 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 25:
#line 336 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
          {
        (yyval.datatype) = cowl_datatype_get((yyvsp[0].iri));
        cowl_iri_release((yyvsp[0].iri));
    }
#line 3102 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 26:
#line 345 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
          {
        (yyval.object_property) = cowl_obj_prop_get((yyvsp[0].iri));
        cowl_iri_release((yyvsp[0].iri));
    }
#line 3111 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 27:
#line 354 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
          {
        (yyval.data_property) = cowl_data_prop_get((yyvsp[0].iri));
        cowl_iri_release((yyvsp[0].iri));
    }
#line 3120 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 28:
#line 363 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
          {
        (yyval.annotation_property) = cowl_annot_prop_get((yyvsp[0].iri));
        cowl_iri_release((yyvsp[0].iri));
    }
#line 3129 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 29:
#line 372 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                       { (yyval.individual) = (CowlIndividual *)(yyvsp[0].named_individual); }
#line 3135 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 31:
#line 377 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
          {
        (yyval.named_individual) = cowl_named_ind_get((yyvsp[0].iri));
        cowl_iri_release((yyvsp[0].iri));
    }
#line 3144 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 32:
#line 384 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                       {
        (yyval.anonymous_individual) = (CowlIndividual *)cowl_func_parser_get_anon_ind(parser, (yyvsp[0].BLANK_NODE_LABEL));
    }
#line 3152 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 33:
#line 392 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                          {
        if (!(yyvsp[0].datatype)) COWL_ERROR_MEM;
        (yyval.literal) = cowl_literal_get_raw((yyvsp[0].datatype), (yyvsp[-2].QUOTED_STRING), ustring_empty);
        cowl_datatype_release((yyvsp[0].datatype));
    }
#line 3162 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 34:
#line 397 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                             {
        (yyval.literal) = cowl_literal_get_raw(NULL, (yyvsp[-1].QUOTED_STRING), (yyvsp[0].LANG_TAG));
    }
#line 3170 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 35:
#line 400 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                    {
        (yyval.literal) = cowl_literal_get_raw(NULL, (yyvsp[0].QUOTED_STRING), ustring_empty);
    }
#line 3178 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 36:
#line 408 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                         {
        (yyval.declaration) = (CowlAxiom *)cowl_decl_axiom_get((yyvsp[-1].entity), (yyvsp[-2].annotation_star));
        cowl_entity_release((yyvsp[-1].entity));
    }
#line 3187 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 37:
#line 415 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                  {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].class));
    }
#line 3195 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 38:
#line 418 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                        {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].datatype));
    }
#line 3203 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 39:
#line 421 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                      {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].object_property));
    }
#line 3211 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 40:
#line 424 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                  {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].data_property));
    }
#line 3219 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 41:
#line 427 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                              {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].annotation_property));
    }
#line 3227 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 42:
#line 430 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                        {
        (yyval.entity) = (CowlEntity *)((yyvsp[-1].named_individual));
    }
#line 3235 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 43:
#line 438 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                      { (yyval.object_property_expression) = (CowlObjPropExp *)(yyvsp[0].object_property); }
#line 3241 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 45:
#line 443 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                        {
        (yyval.inverse_object_property) = (CowlObjPropExp *)cowl_inv_obj_prop_get((yyvsp[-1].object_property));
        cowl_obj_prop_release((yyvsp[-1].object_property));
    }
#line 3250 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 46:
#line 452 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                    { (yyval.data_property_expression) = (CowlDataPropExp *)(yyvsp[0].data_property); }
#line 3256 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 47:
#line 458 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
               { (yyval.data_range) = (CowlDataRange *)(yyvsp[0].datatype); }
#line 3262 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 53:
#line 467 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                             {
        (yyval.data_intersection_of) = (CowlDataRange *)cowl_nary_data_get(COWL_NT_INTERSECT, (yyvsp[-1].data_range_2_list));
    }
#line 3270 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 54:
#line 473 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                      {
        (yyval.data_union_of) = (CowlDataRange *)cowl_nary_data_get(COWL_NT_UNION, (yyvsp[-1].data_range_2_list));
    }
#line 3278 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 55:
#line 479 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                    {
        (yyval.data_complement_of) = (CowlDataRange *)cowl_data_compl_get((yyvsp[-1].data_range));
        cowl_data_range_release((yyvsp[-1].data_range));
    }
#line 3287 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 56:
#line 486 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                               {
        (yyval.data_one_of) = (CowlDataRange *)cowl_data_one_of_get((yyvsp[-1].literal_list));
    }
#line 3295 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 57:
#line 492 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                           {
        (yyval.datatype_restriction) = (CowlDataRange *)cowl_datatype_restr_get((yyvsp[-2].datatype), (yyvsp[-1].facet_restriction_list));
        cowl_datatype_release((yyvsp[-2].datatype));
    }
#line 3304 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 58:
#line 499 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                        {
        (yyval.facet_restriction_list) = cowl_facet_restr_set_alloc();
        if (!(yyval.facet_restriction_list)) COWL_ERROR_MEM;
        COWL_SET_INSERT(facet_restr, (yyval.facet_restriction_list), (yyvsp[0].facet_restriction));
    }
#line 3314 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 59:
#line 504 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                               {
        (yyval.facet_restriction_list) = (yyvsp[-1].facet_restriction_list);
        COWL_SET_INSERT(facet_restr, (yyval.facet_restriction_list), (yyvsp[0].facet_restriction));
    }
#line 3323 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 60:
#line 511 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                  {
        (yyval.facet_restriction) = cowl_facet_restr_get(cowl_facet_from_iri((yyvsp[-1].iri)), (yyvsp[0].literal));
        cowl_iri_release((yyvsp[-1].iri));
        cowl_literal_release((yyvsp[0].literal));
    }
#line 3333 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 61:
#line 521 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
            { (yyval.class_expression) = (CowlClsExp *)(yyvsp[0].class); }
#line 3339 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 79:
#line 542 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                     {
        (yyval.object_intersection_of) = (CowlClsExp *)cowl_nary_bool_get(COWL_NT_INTERSECT, (yyvsp[-1].class_expression_2_list));
    }
#line 3347 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 80:
#line 548 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                              {
        (yyval.object_union_of) = (CowlClsExp *)cowl_nary_bool_get(COWL_NT_UNION, (yyvsp[-1].class_expression_2_list));
    }
#line 3355 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 81:
#line 554 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                            {
        (yyval.object_complement_of) = (CowlClsExp *)cowl_obj_compl_get((yyvsp[-1].class_expression));
        cowl_cls_exp_release((yyvsp[-1].class_expression));
    }
#line 3364 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 82:
#line 561 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                    {
        (yyval.object_one_of) = (CowlClsExp *)cowl_obj_one_of_get((yyvsp[-1].individual_list));
    }
#line 3372 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 83:
#line 567 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                          {
        (yyval.object_some_values_from) = (CowlClsExp *)cowl_obj_quant_get(COWL_QT_SOME, (yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression));
        cowl_obj_prop_exp_release((yyvsp[-2].object_property_expression));
        cowl_cls_exp_release((yyvsp[-1].class_expression));
    }
#line 3382 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 84:
#line 575 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                         {
        (yyval.object_all_values_from) = (CowlClsExp *)cowl_obj_quant_get(COWL_QT_ALL, (yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression));
        cowl_obj_prop_exp_release((yyvsp[-2].object_property_expression));
        cowl_cls_exp_release((yyvsp[-1].class_expression));
    }
#line 3392 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 85:
#line 583 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                             {
        (yyval.object_has_value) = (CowlClsExp *)cowl_obj_has_value_get((yyvsp[-2].object_property_expression), (yyvsp[-1].individual));
        cowl_obj_prop_exp_release((yyvsp[-2].object_property_expression));
        cowl_individual_release((yyvsp[-1].individual));
    }
#line 3402 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 86:
#line 591 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                 {
        (yyval.object_has_self) = (CowlClsExp *)cowl_obj_has_self_get((yyvsp[-1].object_property_expression));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3411 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 87:
#line 598 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                    {
        (yyval.object_min_cardinality) = (CowlClsExp *)cowl_obj_card_get(COWL_CT_MIN, (yyvsp[-1].object_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3420 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 88:
#line 602 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                     {
        if (!(yyvsp[-1].class_expression)) COWL_ERROR_MEM;
        (yyval.object_min_cardinality) = (CowlClsExp *)cowl_obj_card_get(COWL_CT_MIN, (yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].cardinality));
        cowl_obj_prop_exp_release((yyvsp[-2].object_property_expression));
        cowl_cls_exp_release((yyvsp[-1].class_expression));
    }
#line 3431 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 89:
#line 611 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                    {
        (yyval.object_max_cardinality) = (CowlClsExp *)cowl_obj_card_get(COWL_CT_MAX, (yyvsp[-1].object_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3440 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 90:
#line 615 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                     {
        if (!(yyvsp[-1].class_expression)) COWL_ERROR_MEM;
        (yyval.object_max_cardinality) = (CowlClsExp *)cowl_obj_card_get(COWL_CT_MAX, (yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].cardinality));
        cowl_obj_prop_exp_release((yyvsp[-2].object_property_expression));
        cowl_cls_exp_release((yyvsp[-1].class_expression));
    }
#line 3451 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 91:
#line 624 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                      {
        (yyval.object_exact_cardinality) = (CowlClsExp *)cowl_obj_card_get(COWL_CT_EXACT, (yyvsp[-1].object_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3460 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 92:
#line 628 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                       {
        if (!(yyvsp[-1].class_expression)) COWL_ERROR_MEM;
        (yyval.object_exact_cardinality) = (CowlClsExp *)cowl_obj_card_get(COWL_CT_EXACT, (yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].cardinality));
        cowl_obj_prop_exp_release((yyvsp[-2].object_property_expression));
        cowl_cls_exp_release((yyvsp[-1].class_expression));
    }
#line 3471 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 94:
#line 641 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                {
        (yyval.data_some_values_from) = (CowlClsExp *)cowl_data_quant_get(COWL_QT_SOME, (yyvsp[-2].data_property_expression), (yyvsp[-1].data_range));
        cowl_data_prop_exp_release((yyvsp[-2].data_property_expression));
        cowl_data_range_release((yyvsp[-1].data_range));
    }
#line 3481 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 95:
#line 649 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                               {
        (yyval.data_all_values_from) = (CowlClsExp *)cowl_data_quant_get(COWL_QT_ALL, (yyvsp[-2].data_property_expression), (yyvsp[-1].data_range));
        cowl_data_prop_exp_release((yyvsp[-2].data_property_expression));
        cowl_data_range_release((yyvsp[-1].data_range));
    }
#line 3491 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 96:
#line 657 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                      {
        (yyval.data_has_value) = (CowlClsExp *)cowl_data_has_value_get((yyvsp[-2].data_property_expression), (yyvsp[-1].literal));
        cowl_data_prop_exp_release((yyvsp[-2].data_property_expression));
        cowl_literal_release((yyvsp[-1].literal));
    }
#line 3501 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 97:
#line 665 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                {
        (yyval.data_min_cardinality) = (CowlClsExp *)cowl_data_card_get(COWL_CT_MIN, (yyvsp[-1].data_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_data_prop_exp_release((yyvsp[-1].data_property_expression));
    }
#line 3510 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 98:
#line 669 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                           {
        if (!(yyvsp[-1].data_range)) COWL_ERROR_MEM;
        (yyval.data_min_cardinality) = (CowlClsExp *)cowl_data_card_get(COWL_CT_MIN, (yyvsp[-2].data_property_expression), (yyvsp[-1].data_range), (yyvsp[-3].cardinality));
        cowl_data_prop_exp_release((yyvsp[-2].data_property_expression));
        cowl_data_range_release((yyvsp[-1].data_range));
    }
#line 3521 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 99:
#line 678 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                {
        (yyval.data_max_cardinality) = (CowlClsExp *)cowl_data_card_get(COWL_CT_MAX, (yyvsp[-1].data_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_data_prop_exp_release((yyvsp[-1].data_property_expression));
    }
#line 3530 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 100:
#line 682 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                           {
        if (!(yyvsp[-1].data_range)) COWL_ERROR_MEM;
        (yyval.data_max_cardinality) = (CowlClsExp *)cowl_data_card_get(COWL_CT_MAX, (yyvsp[-2].data_property_expression), (yyvsp[-1].data_range), (yyvsp[-3].cardinality));
        cowl_data_prop_exp_release((yyvsp[-2].data_property_expression));
        cowl_data_range_release((yyvsp[-1].data_range));
    }
#line 3541 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 101:
#line 691 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                  {
        (yyval.data_exact_cardinality) = (CowlClsExp *)cowl_data_card_get(COWL_CT_MAX, (yyvsp[-1].data_property_expression), NULL, (yyvsp[-2].cardinality));
        cowl_data_prop_exp_release((yyvsp[-1].data_property_expression));
    }
#line 3550 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 102:
#line 695 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                             {
        if (!(yyvsp[-1].data_range)) COWL_ERROR_MEM;
        (yyval.data_exact_cardinality) = (CowlClsExp *)cowl_data_card_get(COWL_CT_MAX, (yyvsp[-2].data_property_expression), (yyvsp[-1].data_range), (yyvsp[-3].cardinality));
        cowl_data_prop_exp_release((yyvsp[-2].data_property_expression));
        cowl_data_range_release((yyvsp[-1].data_range));
    }
#line 3561 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 115:
#line 726 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                               {
        (yyval.sub_class_of) = (CowlAxiom *)cowl_sub_cls_axiom_get((yyvsp[-2].sub_class_expression), (yyvsp[-1].super_class_expression), (yyvsp[-3].annotation_star));
        cowl_cls_exp_release((yyvsp[-2].sub_class_expression));
        cowl_cls_exp_release((yyvsp[-1].super_class_expression));
    }
#line 3571 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 118:
#line 742 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                 {
        (yyval.equivalent_classes) = (CowlAxiom *)cowl_nary_cls_axiom_get(COWL_NAT_EQUIV, (yyvsp[-1].class_expression_2_list), (yyvsp[-2].annotation_star));
    }
#line 3579 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 119:
#line 748 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                               {
        (yyval.disjoint_classes) = (CowlAxiom *)cowl_nary_cls_axiom_get(COWL_NAT_DISJ, (yyvsp[-1].class_expression_2_list), (yyvsp[-2].annotation_star));
    }
#line 3587 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 120:
#line 754 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                   {
        (yyval.disjoint_union) = (CowlAxiom *)cowl_disj_union_axiom_get((yyvsp[-2].class), (yyvsp[-1].class_expression_2_list), (yyvsp[-3].annotation_star));
        cowl_class_release((yyvsp[-2].class));
    }
#line 3596 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 134:
#line 779 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                                             {
        (yyval.sub_object_property_of) = (CowlAxiom *)cowl_sub_obj_prop_axiom_get((yyvsp[-2].sub_object_property_expression), (yyvsp[-1].super_object_property_expression), (yyvsp[-3].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-2].sub_object_property_expression));
        cowl_obj_prop_exp_release((yyvsp[-1].super_object_property_expression));
    }
#line 3606 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 135:
#line 784 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                                        {
        (yyval.sub_object_property_of) = (CowlAxiom *)cowl_sub_obj_prop_chain_axiom_get((yyvsp[-2].property_expression_chain), (yyvsp[-1].super_object_property_expression), (yyvsp[-3].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-1].super_object_property_expression));
    }
#line 3615 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 138:
#line 799 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                      {
        (yyval.property_expression_chain) = (yyvsp[-1].object_property_expression_ordered_2_list);
    }
#line 3623 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 139:
#line 805 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                     {
        (yyval.equivalent_object_properties) = (CowlAxiom *)cowl_nary_obj_prop_axiom_get(COWL_NAT_EQUIV, (yyvsp[-1].object_property_expression_2_list), (yyvsp[-2].annotation_star));
    }
#line 3631 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 140:
#line 811 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                   {
        (yyval.disjoint_object_properties) = (CowlAxiom *)cowl_nary_obj_prop_axiom_get(COWL_NAT_DISJ, (yyvsp[-1].object_property_expression_2_list), (yyvsp[-2].annotation_star));
    }
#line 3639 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 141:
#line 817 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                                      {
        (yyval.inverse_object_properties) = (CowlAxiom *)cowl_inv_obj_prop_axiom_get((yyvsp[-2].object_property_expression), (yyvsp[-1].object_property_expression), (yyvsp[-3].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-2].object_property_expression));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3649 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 142:
#line 825 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                         {
        (yyval.object_property_domain) = (CowlAxiom *)cowl_obj_prop_domain_axiom_get((yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-2].object_property_expression));
        cowl_cls_exp_release((yyvsp[-1].class_expression));
    }
#line 3659 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 143:
#line 833 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                        {
        (yyval.object_property_range) = (CowlAxiom *)cowl_obj_prop_range_axiom_get((yyvsp[-2].object_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-2].object_property_expression));
        cowl_cls_exp_release((yyvsp[-1].class_expression));
    }
#line 3669 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 144:
#line 841 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                            {
        (yyval.functional_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom_get(COWL_CAT_FUNC, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3678 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 145:
#line 848 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                    {
        (yyval.inverse_functional_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom_get(COWL_CAT_INV_FUNC, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3687 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 146:
#line 855 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                           {
        (yyval.reflexive_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom_get(COWL_CAT_REFL, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3696 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 147:
#line 862 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                             {
        (yyval.irreflexive_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom_get(COWL_CAT_IRREFL, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3705 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 148:
#line 869 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                           {
        (yyval.symmetric_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom_get(COWL_CAT_SYMM, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3714 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 149:
#line 876 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                            {
        (yyval.asymmetric_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom_get(COWL_CAT_ASYMM, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3723 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 150:
#line 883 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                            {
        (yyval.transitive_object_property) = (CowlAxiom *)cowl_obj_prop_char_axiom_get(COWL_CAT_TRANS, (yyvsp[-1].object_property_expression), (yyvsp[-2].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-1].object_property_expression));
    }
#line 3732 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 157:
#line 901 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                                       {
        (yyval.sub_data_property_of) = (CowlAxiom *)cowl_sub_data_prop_axiom_get((yyvsp[-2].sub_data_property_expression), (yyvsp[-1].super_data_property_expression), (yyvsp[-3].annotation_star));
        cowl_data_prop_exp_release((yyvsp[-2].sub_data_property_expression));
        cowl_data_prop_exp_release((yyvsp[-1].super_data_property_expression));
    }
#line 3742 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 160:
#line 917 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                 {
        (yyval.equivalent_data_properties) = (CowlAxiom *)cowl_nary_data_prop_axiom_get(COWL_NAT_EQUIV, (yyvsp[-1].data_property_expression_2_list), (yyvsp[-2].annotation_star));
    }
#line 3750 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 161:
#line 923 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                               {
        (yyval.disjoint_data_properties) = (CowlAxiom *)cowl_nary_data_prop_axiom_get(COWL_NAT_DISJ, (yyvsp[-1].data_property_expression_2_list), (yyvsp[-2].annotation_star));
    }
#line 3758 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 162:
#line 929 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                     {
        (yyval.data_property_domain) = (CowlAxiom *)cowl_data_prop_domain_axiom_get((yyvsp[-2].data_property_expression), (yyvsp[-1].class_expression), (yyvsp[-3].annotation_star));
        cowl_data_prop_exp_release((yyvsp[-2].data_property_expression));
        cowl_cls_exp_release((yyvsp[-1].class_expression));
    }
#line 3768 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 163:
#line 937 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                              {
        (yyval.data_property_range) = (CowlAxiom *)cowl_data_prop_range_axiom_get((yyvsp[-2].data_property_expression), (yyvsp[-1].data_range), (yyvsp[-3].annotation_star));
        cowl_data_prop_exp_release((yyvsp[-2].data_property_expression));
        cowl_data_range_release((yyvsp[-1].data_range));
    }
#line 3778 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 164:
#line 945 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                        {
        (yyval.functional_data_property) = (CowlAxiom *)cowl_func_data_prop_axiom_get((yyvsp[-1].data_property_expression), (yyvsp[-2].annotation_star));
        cowl_data_prop_exp_release((yyvsp[-1].data_property_expression));
    }
#line 3787 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 165:
#line 954 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                              {
        (yyval.datatype_definition) = (CowlAxiom *)cowl_datatype_def_axiom_get((yyvsp[-2].datatype), (yyvsp[-1].data_range), (yyvsp[-3].annotation_star));
        cowl_datatype_release((yyvsp[-2].datatype));
        cowl_data_range_release((yyvsp[-1].data_range));
    }
#line 3797 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 166:
#line 967 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                {
        (yyval.has_key) = (CowlAxiom *)cowl_has_key_axiom_get((yyvsp[-7].class_expression), (yyvsp[-5].object_property_expression_star), (yyvsp[-2].data_property_expression_star), (yyvsp[-8].annotation_star));
        cowl_cls_exp_release((yyvsp[-7].class_expression));
    }
#line 3806 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 174:
#line 986 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                        {
        (yyval.same_individual) = (CowlAxiom *)cowl_nary_ind_axiom_get(COWL_NAT_SAME, (yyvsp[-1].individual_2_list), (yyvsp[-2].annotation_star));
    }
#line 3814 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 175:
#line 992 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                              {
        (yyval.different_individuals) = (CowlAxiom *)cowl_nary_ind_axiom_get(COWL_NAT_DIFF, (yyvsp[-1].individual_2_list), (yyvsp[-2].annotation_star));
    }
#line 3822 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 176:
#line 998 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                  {
        (yyval.class_assertion) = (CowlAxiom *)cowl_cls_assert_axiom_get((yyvsp[-1].individual), (yyvsp[-2].class_expression), (yyvsp[-3].annotation_star));
        cowl_cls_exp_release((yyvsp[-2].class_expression));
        cowl_individual_release((yyvsp[-1].individual));
    }
#line 3832 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 177:
#line 1006 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                                               {
        (yyval.object_property_assertion) = (CowlAxiom *)cowl_obj_prop_assert_axiom_get((yyvsp[-2].source_individual), (yyvsp[-3].object_property_expression), (yyvsp[-1].target_individual), (yyvsp[-4].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-3].object_property_expression));
        cowl_individual_release((yyvsp[-2].source_individual));
        cowl_individual_release((yyvsp[-1].target_individual));
    }
#line 3843 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 178:
#line 1015 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                                                        {
        (yyval.negative_object_property_assertion) = (CowlAxiom *)cowl_neg_obj_prop_assert_axiom_get((yyvsp[-2].source_individual), (yyvsp[-3].object_property_expression), (yyvsp[-1].target_individual), (yyvsp[-4].annotation_star));
        cowl_obj_prop_exp_release((yyvsp[-3].object_property_expression));
        cowl_individual_release((yyvsp[-2].source_individual));
        cowl_individual_release((yyvsp[-1].target_individual));
    }
#line 3854 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 179:
#line 1024 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                                      {
        (yyval.data_property_assertion) = (CowlAxiom *)cowl_data_prop_assert_axiom_get((yyvsp[-2].source_individual), (yyvsp[-3].data_property_expression), (yyvsp[-1].target_value), (yyvsp[-4].annotation_star));
        cowl_data_prop_exp_release((yyvsp[-3].data_property_expression));
        cowl_individual_release((yyvsp[-2].source_individual));
        cowl_literal_release((yyvsp[-1].target_value));
    }
#line 3865 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 180:
#line 1033 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                                               {
        (yyval.negative_data_property_assertion) = (CowlAxiom *)cowl_neg_data_prop_assert_axiom_get((yyvsp[-2].source_individual), (yyvsp[-3].data_property_expression), (yyvsp[-1].target_value), (yyvsp[-4].annotation_star));
        cowl_data_prop_exp_release((yyvsp[-3].data_property_expression));
        cowl_individual_release((yyvsp[-2].source_individual));
        cowl_literal_release((yyvsp[-1].target_value));
    }
#line 3876 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 184:
#line 1056 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                      {
        (yyval.annotation) = cowl_annotation_get((yyvsp[-2].annotation_property), (yyvsp[-1].annotation_value), (yyvsp[-3].annotation_star));
        cowl_annot_prop_release((yyvsp[-2].annotation_property));
        cowl_annot_value_release((yyvsp[-1].annotation_value));
    }
#line 3886 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 185:
#line 1064 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                           {
        (yyval.annotation_value) = (CowlAnnotValue *)((yyvsp[0].anonymous_individual));
    }
#line 3894 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 186:
#line 1067 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
          {
        (yyval.annotation_value) = (CowlAnnotValue *)((yyvsp[0].iri));
    }
#line 3902 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 187:
#line 1070 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
              {
        (yyval.annotation_value) = (CowlAnnotValue *)((yyvsp[0].literal));
    }
#line 3910 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 192:
#line 1085 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                                   {
        (yyval.annotation_assertion) = (CowlAxiom *)cowl_annot_assert_axiom_get((yyvsp[-2].annotation_subject), (yyvsp[-3].annotation_property), (yyvsp[-1].annotation_value), (yyvsp[-4].annotation_star));
        cowl_annot_prop_release((yyvsp[-3].annotation_property));
        cowl_annot_value_release((yyvsp[-2].annotation_subject));
        cowl_annot_value_release((yyvsp[-1].annotation_value));
    }
#line 3921 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 193:
#line 1094 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
          {
        (yyval.annotation_subject) = (CowlAnnotValue *)((yyvsp[0].iri));
    }
#line 3929 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 194:
#line 1097 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                           {
        (yyval.annotation_subject) = (CowlAnnotValue *)((yyvsp[0].anonymous_individual));
    }
#line 3937 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 195:
#line 1103 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                                                   {
        (yyval.sub_annotation_property_of) = (CowlAxiom *)cowl_sub_annot_prop_axiom_get((yyvsp[-2].sub_annotation_property), (yyvsp[-1].super_annotation_property), (yyvsp[-3].annotation_star));
        cowl_annot_prop_release((yyvsp[-2].sub_annotation_property));
        cowl_annot_prop_release((yyvsp[-1].super_annotation_property));
    }
#line 3947 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 198:
#line 1119 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                         {
        (yyval.annotation_property_domain) = (CowlAxiom *)cowl_annot_prop_domain_axiom_get((yyvsp[-2].annotation_property), (yyvsp[-1].iri), (yyvsp[-3].annotation_star));
        cowl_annot_prop_release((yyvsp[-2].annotation_property));
        cowl_iri_release((yyvsp[-1].iri));
    }
#line 3957 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 199:
#line 1127 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                                        {
        (yyval.annotation_property_range) = (CowlAxiom *)cowl_annot_prop_range_axiom_get((yyvsp[-2].annotation_property), (yyvsp[-1].iri), (yyvsp[-3].annotation_star));
        cowl_annot_prop_release((yyvsp[-2].annotation_property));
        cowl_iri_release((yyvsp[-1].iri));
    }
#line 3967 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 200:
#line 1137 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
             {
        (yyval.annotation_star) = NULL;
    }
#line 3975 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 201:
#line 1140 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                 {
        if ((yyvsp[-1].annotation_star)) {
            (yyval.annotation_star) = (yyvsp[-1].annotation_star);
        } else {
            (yyval.annotation_star) = uvec_alloc(CowlObjectPtr);
            if (!(yyval.annotation_star)) COWL_ERROR_MEM;
        }
        COWL_VEC_PUSH(annotation, (yyval.annotation_star), (yyvsp[0].annotation));
    }
#line 3989 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 202:
#line 1152 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                       {
        (yyval.class_expression_list) = cowl_cls_exp_set_alloc();
        if (!(yyval.class_expression_list)) COWL_ERROR_MEM;
        COWL_SET_INSERT(cls_exp, (yyval.class_expression_list), (yyvsp[0].class_expression));
    }
#line 3999 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 203:
#line 1157 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                             {
        (yyval.class_expression_list) = (yyvsp[-1].class_expression_list);
        COWL_SET_INSERT(cls_exp, (yyval.class_expression_list), (yyvsp[0].class_expression));
    }
#line 4008 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 204:
#line 1164 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                             {
        (yyval.class_expression_2_list) = (yyvsp[-1].class_expression_list);
        COWL_SET_INSERT(cls_exp, (yyval.class_expression_2_list), (yyvsp[0].class_expression));
    }
#line 4017 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 205:
#line 1171 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                               {
        (yyval.data_property_expression_list) = cowl_data_prop_exp_set_alloc();
        if (!(yyval.data_property_expression_list)) COWL_ERROR_MEM;
        COWL_SET_INSERT(data_prop_exp, (yyval.data_property_expression_list), (yyvsp[0].data_property_expression));
    }
#line 4027 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 206:
#line 1176 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                             {
        (yyval.data_property_expression_list) = (yyvsp[-1].data_property_expression_list);
        COWL_SET_INSERT(data_prop_exp, (yyval.data_property_expression_list), (yyvsp[0].data_property_expression));
    }
#line 4036 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 207:
#line 1183 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                             {
        (yyval.data_property_expression_2_list) = (yyvsp[-1].data_property_expression_list);
        COWL_SET_INSERT(data_prop_exp, (yyval.data_property_expression_2_list), (yyvsp[0].data_property_expression));
    }
#line 4045 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 208:
#line 1190 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
             {
        (yyval.data_property_expression_star) = NULL;
    }
#line 4053 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 209:
#line 1193 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                             {
        if ((yyvsp[-1].data_property_expression_star)) {
            (yyval.data_property_expression_star) = (yyvsp[-1].data_property_expression_star);
        } else {
            (yyval.data_property_expression_star) = cowl_data_prop_exp_set_alloc();
            if (!(yyval.data_property_expression_star)) COWL_ERROR_MEM;
        }
        COWL_SET_INSERT(data_prop_exp, (yyval.data_property_expression_star), (yyvsp[0].data_property_expression));
    }
#line 4067 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 210:
#line 1205 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                 {
        (yyval.data_range_list) = cowl_data_range_set_alloc();
        if (!(yyval.data_range_list)) COWL_ERROR_MEM;
        COWL_SET_INSERT(data_range, (yyval.data_range_list), (yyvsp[0].data_range));
    }
#line 4077 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 211:
#line 1210 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                 {
        (yyval.data_range_list) = (yyvsp[-1].data_range_list);
        COWL_SET_INSERT(data_range, (yyval.data_range_list), (yyvsp[0].data_range));
    }
#line 4086 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 212:
#line 1217 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                 {
        (yyval.data_range_2_list) = (yyvsp[-1].data_range_list);
        COWL_SET_INSERT(data_range, (yyval.data_range_2_list), (yyvsp[0].data_range));
    }
#line 4095 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 213:
#line 1224 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                 {
        (yyval.individual_list) = cowl_individual_set_alloc();
        if (!(yyval.individual_list)) COWL_ERROR_MEM;
        COWL_SET_INSERT(individual, (yyval.individual_list), (yyvsp[0].individual));
    }
#line 4105 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 214:
#line 1229 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                 {
        (yyval.individual_list) = (yyvsp[-1].individual_list);
        COWL_SET_INSERT(individual, (yyval.individual_list), (yyvsp[0].individual));
    }
#line 4114 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 215:
#line 1236 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                 {
        (yyval.individual_2_list) = (yyvsp[-1].individual_list);
        COWL_SET_INSERT(individual, (yyval.individual_2_list), (yyvsp[0].individual));
    }
#line 4123 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 216:
#line 1243 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
              {
        (yyval.literal_list) = cowl_literal_set_alloc();
        if (!(yyval.literal_list)) COWL_ERROR_MEM;
        COWL_SET_INSERT(literal, (yyval.literal_list), (yyvsp[0].literal));
    }
#line 4133 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 217:
#line 1248 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                           {
        (yyval.literal_list) = (yyvsp[-1].literal_list);
        COWL_SET_INSERT(literal, (yyval.literal_list), (yyvsp[0].literal));
    }
#line 4142 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 218:
#line 1255 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                 {
        (yyval.object_property_expression_list) = cowl_obj_prop_exp_set_alloc();
        if (!(yyval.object_property_expression_list)) COWL_ERROR_MEM;
        COWL_SET_INSERT(obj_prop_exp, (yyval.object_property_expression_list), (yyvsp[0].object_property_expression));
    }
#line 4152 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 219:
#line 1260 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                 {
        (yyval.object_property_expression_list) = (yyvsp[-1].object_property_expression_list);
        COWL_SET_INSERT(obj_prop_exp, (yyval.object_property_expression_list), (yyvsp[0].object_property_expression));
    }
#line 4161 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 220:
#line 1267 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                 {
        (yyval.object_property_expression_2_list) = (yyvsp[-1].object_property_expression_list);
        COWL_SET_INSERT(obj_prop_exp, (yyval.object_property_expression_2_list), (yyvsp[0].object_property_expression));
    }
#line 4170 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 221:
#line 1274 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                            {
        (yyval.object_property_expression_ordered_2_list) = uvec_alloc(CowlObjectPtr);
        if (!(yyval.object_property_expression_ordered_2_list)) COWL_ERROR_MEM;
        COWL_VEC_PUSH(obj_prop_exp, (yyval.object_property_expression_ordered_2_list), (yyvsp[-1].object_property_expression));
        COWL_VEC_PUSH(obj_prop_exp, (yyval.object_property_expression_ordered_2_list), (yyvsp[0].object_property_expression));
    }
#line 4181 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 222:
#line 1280 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                           {
        (yyval.object_property_expression_ordered_2_list) = (yyvsp[-1].object_property_expression_ordered_2_list);
        COWL_VEC_PUSH(obj_prop_exp, (yyval.object_property_expression_ordered_2_list), (yyvsp[0].object_property_expression));
    }
#line 4190 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 223:
#line 1287 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
             {
        (yyval.object_property_expression_star) = NULL;
    }
#line 4198 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;

  case 224:
#line 1290 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"
                                                                 {
        if ((yyvsp[-1].object_property_expression_star)) {
            (yyval.object_property_expression_star) = (yyvsp[-1].object_property_expression_star);
        } else {
            (yyval.object_property_expression_star) = cowl_obj_prop_exp_set_alloc();
            if (!(yyval.object_property_expression_star)) COWL_ERROR_MEM;
        }
        COWL_SET_INSERT(obj_prop_exp, (yyval.object_property_expression_star), (yyvsp[0].object_property_expression));
    }
#line 4212 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"
    break;


#line 4216 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, scanner, parser, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, scanner, parser, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, parser);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner, parser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, parser, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, parser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp, scanner, parser);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1301 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/Third_Party/cowl/src/parser/functional/cowl_functional.y"

