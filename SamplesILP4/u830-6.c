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
ILP_Object ilp__longueur_2 (ILP_Closure ilp_useless, ILP_Object self1);
ILP_Object ilp__m1_6 (ILP_Closure ilp_useless, ILP_Object self3,
		      ILP_Object z4, ILP_Object t5);

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
     ilp__longueur_2,
     ilp__m1_6,
     }}}
};

struct ILP_Method ILP_object_longueur_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "longueur",
    1,				/* arité */
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

ILP_Object
ilp__longueur_2 (ILP_Closure ilp_useless, ILP_Object self1)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_longueur_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self1;

  {
    {
      ILP_Object ilptmp305;
      ILP_Object ilptmp306;
      {
	ILP_Object ilptmp307;
	ilptmp307 = self1;
	if (ILP_IsA (ilptmp307, Point))
	  {
	    ilptmp305 = ilptmp307->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp305 = ILP_UnknownFieldError ("x", ilptmp307);
	  }
      }
      {
	ILP_Object ilptmp308;
	ilptmp308 = self1;
	if (ILP_IsA (ilptmp308, Point))
	  {
	    ilptmp306 = ilptmp308->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp306 = ILP_UnknownFieldError ("y", ilptmp308);
	  }
      }
      return ILP_Plus (ilptmp305, ilptmp306);
    }
  }
}

ILP_Object
ilp__m1_6 (ILP_Closure ilp_useless,
	   ILP_Object self3, ILP_Object z4, ILP_Object t5)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self3;
  ilp_CurrentArguments[1] = z4;
  ilp_CurrentArguments[2] = t5;

  {
    {
      ILP_Object ilptmp309;
      ILP_Object ilptmp310;
      {
	ILP_Object ilptmp311;
	ILP_Object ilptmp312;
	ilptmp311 = z4;
	{
	  ILP_Object ilptmp313;
	  ilptmp313 = self3;
	  if (ILP_IsA (ilptmp313, Point))
	    {
	      ilptmp312 = ilptmp313->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp312 = ILP_UnknownFieldError ("x", ilptmp313);
	    }
	}
	ilptmp309 = ILP_Times (ilptmp311, ilptmp312);
      }
      {
	ILP_Object ilptmp314;
	ILP_Object ilptmp315;
	ilptmp314 = t5;
	{
	  ILP_Object ilptmp316;
	  ilptmp316 = self3;
	  if (ILP_IsA (ilptmp316, Point))
	    {
	      ilptmp315 = ilptmp316->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp315 = ILP_UnknownFieldError ("y", ilptmp316);
	    }
	}
	ilptmp310 = ILP_Times (ilptmp314, ilptmp315);
      }
      return ILP_Plus (ilptmp309, ilptmp310);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp317;
    {
      ILP_Object ilptmp318;
      {
	ILP_Object ilptmp319;
	ILP_Object ilptmp320;
	ILP_Object ilptmp321;
	ilptmp320 = ILP_Integer2ILP (11);
	ilptmp321 = ILP_Integer2ILP (22);
	ilptmp319 = ILP_MakeInstance (Point);
	ilptmp319->_content.asInstance.field[0] = ilptmp320;
	ilptmp319->_content.asInstance.field[1] = ilptmp321;
	ilptmp318 = ilptmp319;
      }

      {
	ILP_Object point7 = ilptmp318;
	{
	  ILP_general_function ilptmp322;
	  ILP_Object ilptmp323;
	  ilptmp323 = point7;
	  ilptmp322 =
	    ILP_find_method (ilptmp323, &ILP_object_print_method, 1);
	  ilptmp317 = ilptmp322 (NULL, ilptmp323);
	}

      }
    }
    ilptmp317 = ILP_Integer2ILP (830);
    return ilptmp317;
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
