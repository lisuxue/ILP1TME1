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
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__x_2 (ILP_Closure ilp_useless, ILP_Object self1);

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

struct ILP_Class3 ILP_object_Point_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Point",
    2,
    &ILP_object_y_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__x_2,
     }}}
};

struct ILP_Method ILP_object_x_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "x",
    1,				/* arité */
    2				/* offset */
    }}
};

ILP_GenerateClass (4);
extern struct ILP_Class4 ILP_object_PointColore_class;
extern struct ILP_Field ILP_object_color_field;
ILP_Object ilp__color1_4 (ILP_Closure ilp_useless, ILP_Object self3);

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
     ilp__x_2,
     ilp__color1_4,
     }}}
};

struct ILP_Method ILP_object_color1_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_PointColore_class,
    "color1",
    1,				/* arité */
    3				/* offset */
    }}
};

extern struct ILP_Class4 ILP_object_PointLarge_class;
extern struct ILP_Field ILP_object_taille_field;
ILP_Object ilp__color2_6 (ILP_Closure ilp_useless, ILP_Object self5);

struct ILP_Field ILP_object_taille_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_PointLarge_class,
    &ILP_object_y_field,
    "taille",
    2}}
};

struct ILP_Class4 ILP_object_PointLarge_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "PointLarge",
    3,
    &ILP_object_taille_field,
    4,
    {ILPm_print,
     ILPm_classOf,
     ilp__x_2,
     ilp__color2_6,
     }}}
};

struct ILP_Method ILP_object_color2_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_PointLarge_class,
    "color2",
    1,				/* arité */
    3				/* offset */
    }}
};

ILP_Object
ilp__x_2 (ILP_Closure ilp_useless, ILP_Object self1)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_x_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self1;

  {
    {
      ILP_Object ilptmp373;
      ilptmp373 = self1;
      if (ILP_IsA (ilptmp373, Point))
	{
	  return ilptmp373->_content.asInstance.field[0];
	}
      else
	{
	  return ILP_UnknownFieldError ("x", ilptmp373);
	}
    }
  }
}

ILP_Object
ilp__color1_4 (ILP_Closure ilp_useless, ILP_Object self3)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_color1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self3;

  {
    {
      ILP_Object ilptmp374;
      ilptmp374 = self3;
      if (ILP_IsA (ilptmp374, PointColore))
	{
	  return ilptmp374->_content.asInstance.field[2];
	}
      else
	{
	  return ILP_UnknownFieldError ("color", ilptmp374);
	}
    }
  }
}

ILP_Object
ilp__color2_6 (ILP_Closure ilp_useless, ILP_Object self5)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_color2_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self5;

  {
    {
      ILP_Object ilptmp375;
      ilptmp375 = self5;
      if (ILP_IsA (ilptmp375, PointLarge))
	{
	  return ilptmp375->_content.asInstance.field[2];
	}
      else
	{
	  return ILP_UnknownFieldError ("taille", ilptmp375);
	}
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp376;
    ILP_Object ilptmp377;
    {
      ILP_Object ilptmp378;
      ILP_Object ilptmp379;
      ILP_Object ilptmp380;
      ILP_Object ilptmp381;
      ilptmp379 = ILP_Integer2ILP (11);
      ilptmp380 = ILP_Integer2ILP (22);
      ilptmp381 = ILP_String2ILP ("red");
      ilptmp378 = ILP_MakeInstance (PointColore);
      ilptmp378->_content.asInstance.field[0] = ilptmp379;
      ilptmp378->_content.asInstance.field[1] = ilptmp380;
      ilptmp378->_content.asInstance.field[2] = ilptmp381;
      ilptmp376 = ilptmp378;
    }
    {
      ILP_Object ilptmp382;
      ILP_Object ilptmp383;
      ILP_Object ilptmp384;
      ILP_Object ilptmp385;
      ilptmp383 = ILP_Integer2ILP (33);
      ilptmp384 = ILP_Integer2ILP (44);
      ilptmp385 = ILP_Integer2ILP (835);
      ilptmp382 = ILP_MakeInstance (PointLarge);
      ilptmp382->_content.asInstance.field[0] = ilptmp383;
      ilptmp382->_content.asInstance.field[1] = ilptmp384;
      ilptmp382->_content.asInstance.field[2] = ilptmp385;
      ilptmp377 = ilptmp382;
    }

    {
      ILP_Object pc7 = ilptmp376;
      ILP_Object pl8 = ilptmp377;
      {
	ILP_Object ilptmp386;
	{
	  struct ILP_catcher *current_catcher = ILP_current_catcher;
	  struct ILP_catcher new_catcher;
	  if (0 == setjmp (new_catcher._jmp_buf))
	    {
	      ILP_establish_catcher (&new_catcher);
	      {
		ILP_general_function ilptmp387;
		ILP_Object ilptmp388;
		ilptmp388 = pc7;
		ilptmp387 =
		  ILP_find_method (ilptmp388, &ILP_object_color2_method, 1);
		ilptmp386 = ilptmp387 (NULL, ilptmp388);
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
		    ILP_Object e9 = ILP_current_exception;
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
	  ilptmp386 = ILP_FALSE;
	}
	ilptmp386 = ILP_Integer2ILP (836);
	return ilptmp386;
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
