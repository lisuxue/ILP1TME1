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

ILP_GenerateClass (5);
extern struct ILP_Class5 ILP_object_PointColore_class;
extern struct ILP_Field ILP_object_color_field;
ILP_Object ilp__m2_9 (ILP_Closure ilp_useless, ILP_Object self7,
		      ILP_Object x8);

struct ILP_Field ILP_object_color_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_PointColore_class,
    &ILP_object_y_field,
    "color",
    2}}
};

struct ILP_Class5 ILP_object_PointColore_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "PointColore",
    3,
    &ILP_object_color_field,
    5,
    {ILPm_print,
     ILPm_classOf,
     ilp__longueur_2,
     ilp__m1_6,
     ilp__m2_9,
     }}}
};

struct ILP_Method ILP_object_m2_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_PointColore_class,
    "m2",
    2,				/* arité */
    4				/* offset */
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
      ILP_Object ilptmp324;
      ILP_Object ilptmp325;
      {
	ILP_Object ilptmp326;
	ilptmp326 = self1;
	if (ILP_IsA (ilptmp326, Point))
	  {
	    ilptmp324 = ilptmp326->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp324 = ILP_UnknownFieldError ("x", ilptmp326);
	  }
      }
      {
	ILP_Object ilptmp327;
	ilptmp327 = self1;
	if (ILP_IsA (ilptmp327, Point))
	  {
	    ilptmp325 = ilptmp327->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp325 = ILP_UnknownFieldError ("y", ilptmp327);
	  }
      }
      return ILP_Plus (ilptmp324, ilptmp325);
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
      ILP_Object ilptmp328;
      ILP_Object ilptmp329;
      {
	ILP_Object ilptmp330;
	ILP_Object ilptmp331;
	ilptmp330 = z4;
	{
	  ILP_Object ilptmp332;
	  ilptmp332 = self3;
	  if (ILP_IsA (ilptmp332, Point))
	    {
	      ilptmp331 = ilptmp332->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp331 = ILP_UnknownFieldError ("x", ilptmp332);
	    }
	}
	ilptmp328 = ILP_Times (ilptmp330, ilptmp331);
      }
      {
	ILP_Object ilptmp333;
	ILP_Object ilptmp334;
	ilptmp333 = t5;
	{
	  ILP_Object ilptmp335;
	  ilptmp335 = self3;
	  if (ILP_IsA (ilptmp335, Point))
	    {
	      ilptmp334 = ilptmp335->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp334 = ILP_UnknownFieldError ("y", ilptmp335);
	    }
	}
	ilptmp329 = ILP_Times (ilptmp333, ilptmp334);
      }
      return ILP_Plus (ilptmp328, ilptmp329);
    }
  }
}

ILP_Object
ilp__m2_9 (ILP_Closure ilp_useless, ILP_Object self7, ILP_Object x8)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m2_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[2];
  ilp_CurrentArguments[0] = self7;
  ilp_CurrentArguments[1] = x8;

  {
    {
      ILP_Object ilptmp336;
      ILP_Object ilptmp337;
      ilptmp336 = ILP_Integer2ILP (823);
      ilptmp337 = x8;
      return ILP_Plus (ilptmp336, ilptmp337);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp338;
    {
      ILP_Object ilptmp339;
      {
	ILP_Object ilptmp340;
	ILP_Object ilptmp341;
	ILP_Object ilptmp342;
	ILP_Object ilptmp343;
	ilptmp341 = ILP_Integer2ILP (11);
	ilptmp342 = ILP_Integer2ILP (22);
	ilptmp343 = ILP_String2ILP ("red");
	ilptmp340 = ILP_MakeInstance (PointColore);
	ilptmp340->_content.asInstance.field[0] = ilptmp341;
	ilptmp340->_content.asInstance.field[1] = ilptmp342;
	ilptmp340->_content.asInstance.field[2] = ilptmp343;
	ilptmp339 = ilptmp340;
      }

      {
	ILP_Object pc10 = ilptmp339;
	{
	  ILP_general_function ilptmp344;
	  ILP_Object ilptmp345;
	  ilptmp345 = pc10;
	  ilptmp344 =
	    ILP_find_method (ilptmp345, &ILP_object_print_method, 1);
	  ilptmp338 = ilptmp344 (NULL, ilptmp345);
	}

      }
    }
    ilptmp338 = ILP_Integer2ILP (831);
    return ilptmp338;
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
