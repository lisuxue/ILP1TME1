#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


/* Classes */
ILP_GenerateClass (3);
extern struct ILP_Class3 ILP_object_Point_class;
extern struct ILP_Field ILP_object_x_field;
ILP_Object ilp__m1_4 (ILP_Closure ilp_useless, ILP_Object self1,
		      ILP_Object t2, ILP_Object u3);

struct ILP_Field ILP_object_x_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    NULL,
    "x",
    0}}
};

struct ILP_Class3 ILP_object_Point_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Point",
    1,
    &ILP_object_x_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__m1_4,
     }}}
};

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "m1",
    3,				/* arité */
    2				/* offset */
    }}
};

extern struct ILP_Class3 ILP_object_Point2D_class;
extern struct ILP_Field ILP_object_y_field;

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point2D_class,
    &ILP_object_x_field,
    "y",
    1}}
};

struct ILP_Class3 ILP_object_Point2D_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "Point2D",
    2,
    &ILP_object_y_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__m1_4,
     }}}
};

extern struct ILP_Class3 ILP_object_Point3D_class;
extern struct ILP_Field ILP_object_z_field;
ILP_Object ilp__m1_8 (ILP_Closure ilp_useless, ILP_Object self5,
		      ILP_Object t6, ILP_Object u7);

struct ILP_Field ILP_object_z_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point3D_class,
    &ILP_object_y_field,
    "z",
    2}}
};

struct ILP_Class3 ILP_object_Point3D_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point2D_class,
    "Point3D",
    3,
    &ILP_object_z_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__m1_8,
     }}}
};

ILP_Object
ilp__m1_4 (ILP_Closure ilp_useless,
	   ILP_Object self1, ILP_Object t2, ILP_Object u3)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self1;
  ilp_CurrentArguments[1] = t2;
  ilp_CurrentArguments[2] = u3;

  {
    {
      ILP_Object ilptmp428;
      ILP_Object ilptmp429;
      ilptmp428 = u3;
      {
	ILP_Object ilptmp430;
	ilptmp430 = self1;
	if (ILP_IsA (ilptmp430, Point))
	  {
	    ilptmp429 = ilptmp430->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp429 = ILP_UnknownFieldError ("x", ilptmp430);
	  }
      }
      return ILP_Plus (ilptmp428, ilptmp429);
    }
  }
}

ILP_Object
ilp__m1_8 (ILP_Closure ilp_useless,
	   ILP_Object self5, ILP_Object t6, ILP_Object u7)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_4;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self5;
  ilp_CurrentArguments[1] = t6;
  ilp_CurrentArguments[2] = u7;

  {
    {
      ILP_Object ilptmp431;
      ILP_Object ilptmp432;
      {
	ILP_Object ilptmp433;
	ilptmp433 = self5;
	if (ILP_IsA (ilptmp433, Point2D))
	  {
	    ilptmp431 = ilptmp433->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp431 = ILP_UnknownFieldError ("y", ilptmp433);
	  }
      }
      {
	ILP_Object ilptmp434;
	ILP_Object ilptmp435;
	ilptmp434 = t6;
	{
	  ILP_Object ilptmp436;
	  ILP_Object ilptmp437;
	  {
	    ILP_Object ilptmp438;
	    ilptmp438 = self5;
	    if (ILP_IsA (ilptmp438, Point3D))
	      {
		ilptmp436 = ilptmp438->_content.asInstance.field[2];
	      }
	    else
	      {
		ilptmp436 = ILP_UnknownFieldError ("z", ilptmp438);
	      }
	  }
	  ilptmp437 = ILP_FindAndCallSuperMethod ();
	  ilptmp435 = ILP_Times (ilptmp436, ilptmp437);
	}
	ilptmp432 = ILP_Plus (ilptmp434, ilptmp435);
      }
      return ILP_Plus (ilptmp431, ilptmp432);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp439;
    {
      ILP_Object ilptmp440;
      ILP_Object ilptmp441;
      ILP_Object ilptmp442;
      ILP_Object ilptmp443;
      ilptmp441 = ILP_Integer2ILP (8);
      ilptmp442 = ILP_Integer2ILP (-1);
      ilptmp443 = ILP_Integer2ILP (84);
      ilptmp440 = ILP_MakeInstance (Point3D);
      ilptmp440->_content.asInstance.field[0] = ilptmp441;
      ilptmp440->_content.asInstance.field[1] = ilptmp442;
      ilptmp440->_content.asInstance.field[2] = ilptmp443;
      ilptmp439 = ilptmp440;
    }

    {
      ILP_Object pc9 = ilptmp439;
      {
	struct ILP_catcher *current_catcher = ILP_current_catcher;
	struct ILP_catcher new_catcher;
	if (0 == setjmp (new_catcher._jmp_buf))
	  {
	    ILP_establish_catcher (&new_catcher);
	    {
	      ILP_general_function ilptmp444;
	      ILP_Object ilptmp445;
	      ILP_Object ilptmp446;
	      ILP_Object ilptmp447;
	      ilptmp445 = pc9;
	      ilptmp446 = ILP_Integer2ILP (4);
	      ilptmp447 = ILP_Integer2ILP (2);
	      ilptmp444 =
		ILP_find_method (ilptmp445, &ILP_object_m1_method, 3);
	      return ilptmp444 (NULL, ilptmp445, ilptmp446, ilptmp447);
	    }
	    ILP_current_exception = NULL;
	  };
	ILP_reset_catcher (current_catcher);
	if (NULL != ILP_current_exception)
	  {
	    if (0 == setjmp (new_catcher._jmp_buf))
	      {
		ILP_establish_catcher (&new_catcher);
		{
		  ILP_Object e10 = ILP_current_exception;
		  ILP_current_exception = NULL;
		  (void) ILP_FALSE;
		}
	      };
	  };
	ILP_reset_catcher (current_catcher);
	if (NULL != ILP_current_exception)
	  {
	    ILP_throw (ILP_current_exception);
	  };
	return ILP_FALSE;
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
