/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 66 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.h"

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
#line 415 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.h"

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

#line 452 "/home/brandonio/Documents/Thesis_project_2022/EyeSim_simulation_software/EyeSim/myscripts/Project_scripts/Ontological_Slam/Control_Agent/cmake-build-debug/Third_Party/cowl/src/parser/functional/cowl_func_yyparser.h"

#endif /* !YY_COWL_FUNC_YY_HOME_BRANDONIO_DOCUMENTS_THESIS_PROJECT_2022_EYESIM_SIMULATION_SOFTWARE_EYESIM_MYSCRIPTS_PROJECT_SCRIPTS_ONTOLOGICAL_SLAM_CONTROL_AGENT_CMAKE_BUILD_DEBUG_THIRD_PARTY_COWL_SRC_PARSER_FUNCTIONAL_COWL_FUNC_YYPARSER_H_INCLUDED  */
