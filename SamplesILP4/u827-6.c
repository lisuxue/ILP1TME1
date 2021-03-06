#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


/* Classes */
ILP_GenerateClass (4);
extern struct ILP_Class4 ILP_object_Point_class;
extern struct ILP_Field ILP_object_x_field;
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__m2_3 (ILP_Closure ilp_useless, ILP_Object self1,
		      ILP_Object u2);
ILP_Object ilp__m1_7 (ILP_Closure ilp_useless, ILP_Object self4,
		      ILP_Object z5, ILP_Object t6);

struct ILP_Field ILP_object_x_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    NULL,
    "x",
    0}}
};

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    &ILP_object_x_field,
    "y",
    1}}
};

struct ILP_Class4 ILP_object_Point_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Point",
    2,
    &ILP_object_y_field,
    4,
    {ILPm_print,
     ILPm_classOf,
     ilp__m2_3,
     ilp__m1_7,
     }}}
};

struct ILP_Method ILP_object_m2_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "m2",
    2,				/* arité */
    2				/* offset */
    }}
};

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "m1",
    3,				/* arité */
    3				/* offset */
    }}
};

extern struct ILP_Class4 ILP_object_PointColore_class;
extern struct ILP_Field ILP_object_color_field;
ILP_Object ilp__m1_11 (ILP_Closure ilp_useless, ILP_Object self8,
		       ILP_Object z9, ILP_Object t10);

struct ILP_Field ILP_object_color_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_PointColore_class,
    &ILP_object_y_field,
    "color",
    2}}
};

struct ILP_Class4 ILP_object_PointColore_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "PointColore",
    3,
    &ILP_object_color_field,
    4,
    {ILPm_print,
     ILPm_classOf,
     ilp__m2_3,
     ilp__m1_11,
     }}}
};

ILP_Object
ilp__m2_3 (ILP_Closure ilp_useless, ILP_Object self1, ILP_Object u2)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m2_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[2];
  ilp_CurrentArguments[0] = self1;
  ilp_CurrentArguments[1] = u2;

  {
    {
      ILP_general_function ilptmp278;
      ILP_Object ilptmp279;
      ILP_Object ilptmp280;
      ILP_Object ilptmp281;
      ilptmp279 = self1;
      ilptmp280 = ILP_Integer2ILP (1);
      ilptmp281 = u2;
      ilptmp278 = ILP_find_method (ilptmp279, &ILP_object_m1_method, 3);
      return ilptmp278 (NULL, ilptmp279, ilptmp280, ilptmp281);
    }
  }
}

ILP_Object
ilp__m1_7 (ILP_Closure ilp_useless,
	   ILP_Object self4, ILP_Object z5, ILP_Object t6)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self4;
  ilp_CurrentArguments[1] = z5;
  ilp_CurrentArguments[2] = t6;

  {
    {
      ILP_Object ilptmp282;
      ILP_Object ilptmp283;
      {
	ILP_Object ilptmp284;
	ILP_Object ilptmp285;
	ilptmp284 = z5;
	{
	  ILP_Object ilptmp286;
	  ilptmp286 = self4;
	  if (ILP_IsA (ilptmp286, Point))
	    {
	      ilptmp285 = ilptmp286->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp285 = ILP_UnknownFieldError ("x", ilptmp286);
	    }
	}
	ilptmp282 = ILP_Times (ilptmp284, ilptmp285);
      }
      {
	ILP_Object ilptmp287;
	ILP_Object ilptmp288;
	ilptmp287 = t6;
	{
	  ILP_Object ilptmp289;
	  ilptmp289 = self4;
	  if (ILP_IsA (ilptmp289, Point))
	    {
	      ilptmp288 = ilptmp289->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp288 = ILP_UnknownFieldError ("y", ilptmp289);
	    }
	}
	ilptmp283 = ILP_Times (ilptmp287, ilptmp288);
      }
      return ILP_Plus (ilptmp282, ilptmp283);
    }
  }
}

ILP_Object
ilp__m1_11 (ILP_Closure ilp_useless,
	    ILP_Object self8, ILP_Object z9, ILP_Object t10)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_7;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self8;
  ilp_CurrentArguments[1] = z9;
  ilp_CurrentArguments[2] = t10;

  {
    {
      ILP_Object ilptmp290;
      ILP_Object ilptmp291;
      ilptmp290 = ILP_Integer2ILP (826);
      ilptmp291 = z9;
      return ILP_Plus (ilptmp290, ilptmp291);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp292;
    {
      ILP_Object ilptmp293;
      ILP_Object ilptmp294;
      ILP_Object ilptmp295;
      ILP_Object ilptmp296;
      ilptmp294 = ILP_Integer2ILP (11);
      ilptmp295 = ILP_Integer2ILP (22);
      ilptmp296 = ILP_String2ILP ("red");
      ilptmp293 = ILP_MakeInstance (PointColore);
      ilptmp293->_content.asInstance.field[0] = ilptmp294;
      ilptmp293->_content.asInstance.field[1] = ilptmp295;
      ilptmp293->_content.asInstance.field[2] = ilptmp296;
      ilptmp292 = ilptmp293;
    }

    {
      ILP_Object pc12 = ilptmp292;
      {
	ILP_general_function ilptmp297;
	ILP_Object ilptmp298;
	ILP_Object ilptmp299;
	ilptmp298 = pc12;
	ilptmp299 = ILP_Integer2ILP (2);
	ilptmp297 = ILP_find_method (ilptmp298, &ILP_object_m2_method, 2);
	return ilptmp297 (NULL, ilptmp298, ilptmp299);
      }

    }
  }

}

static ILP_Object
ilp_caught_program ()
{
  struct ILP_catcher *current_catcher = ILP_current_catcher;
  struct ILP_catcher new_catcher;

  if (0 == setjmp (new_catcher._jmp_buf))
    {
      ILP_establish_catcher (&new_catcher);
      return ilp_program ();
    };
  return ILP_current_exception;
}

int
main (int argc, char *argv[])
{
  ILP_START_GC;
  ILP_print (ilp_caught_program ());
  ILP_newline ();
  return EXIT_SUCCESS;
}
