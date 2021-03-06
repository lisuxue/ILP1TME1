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
      ILP_Object ilptmp357;
      ilptmp357 = self1;
      if (ILP_IsA (ilptmp357, Point))
	{
	  return ilptmp357->_content.asInstance.field[0];
	}
      else
	{
	  return ILP_UnknownFieldError ("x", ilptmp357);
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
      ILP_Object ilptmp358;
      ilptmp358 = self3;
      if (ILP_IsA (ilptmp358, PointColore))
	{
	  return ilptmp358->_content.asInstance.field[2];
	}
      else
	{
	  return ILP_UnknownFieldError ("color", ilptmp358);
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
      ILP_Object ilptmp359;
      ilptmp359 = self5;
      if (ILP_IsA (ilptmp359, PointLarge))
	{
	  return ilptmp359->_content.asInstance.field[2];
	}
      else
	{
	  return ILP_UnknownFieldError ("taille", ilptmp359);
	}
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp360;
    ILP_Object ilptmp361;
    {
      ILP_Object ilptmp362;
      ILP_Object ilptmp363;
      ILP_Object ilptmp364;
      ILP_Object ilptmp365;
      ilptmp363 = ILP_Integer2ILP (11);
      ilptmp364 = ILP_Integer2ILP (22);
      ilptmp365 = ILP_String2ILP ("red");
      ilptmp362 = ILP_MakeInstance (PointColore);
      ilptmp362->_content.asInstance.field[0] = ilptmp363;
      ilptmp362->_content.asInstance.field[1] = ilptmp364;
      ilptmp362->_content.asInstance.field[2] = ilptmp365;
      ilptmp360 = ilptmp362;
    }
    {
      ILP_Object ilptmp366;
      ILP_Object ilptmp367;
      ILP_Object ilptmp368;
      ILP_Object ilptmp369;
      ilptmp367 = ILP_Integer2ILP (33);
      ilptmp368 = ILP_Integer2ILP (44);
      ilptmp369 = ILP_Integer2ILP (835);
      ilptmp366 = ILP_MakeInstance (PointLarge);
      ilptmp366->_content.asInstance.field[0] = ilptmp367;
      ilptmp366->_content.asInstance.field[1] = ilptmp368;
      ilptmp366->_content.asInstance.field[2] = ilptmp369;
      ilptmp361 = ilptmp366;
    }

    {
      ILP_Object pc7 = ilptmp360;
      ILP_Object pl8 = ilptmp361;
      {
	ILP_Object ilptmp370;
	{
	  struct ILP_catcher *current_catcher = ILP_current_catcher;
	  struct ILP_catcher new_catcher;
	  if (0 == setjmp (new_catcher._jmp_buf))
	    {
	      ILP_establish_catcher (&new_catcher);
	      {
		ILP_general_function ilptmp371;
		ILP_Object ilptmp372;
		ilptmp372 = pl8;
		ilptmp371 =
		  ILP_find_method (ilptmp372, &ILP_object_color1_method, 1);
		ilptmp370 = ilptmp371 (NULL, ilptmp372);
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
	  ilptmp370 = ILP_FALSE;
	}
	ilptmp370 = ILP_Integer2ILP (835);
	return ilptmp370;
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
