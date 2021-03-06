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
		      ILP_Object tt2, ILP_Object uu3);

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

extern struct ILP_Class3 ILP_object_Point2Da_class;
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__m1_8 (ILP_Closure ilp_useless, ILP_Object self5,
		      ILP_Object ttt6, ILP_Object uuu7);

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point2Da_class,
    &ILP_object_x_field,
    "y",
    1}}
};

struct ILP_Class3 ILP_object_Point2Da_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "Point2Da",
    2,
    &ILP_object_y_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__m1_8,
     }}}
};

extern struct ILP_Class3 ILP_object_Point3Da_class;
extern struct ILP_Field ILP_object_z_field;
ILP_Object ilp__m1_12 (ILP_Closure ilp_useless, ILP_Object self9,
		       ILP_Object tt10, ILP_Object uu11);

struct ILP_Field ILP_object_z_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point3Da_class,
    &ILP_object_y_field,
    "z",
    2}}
};

struct ILP_Class3 ILP_object_Point3Da_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point2Da_class,
    "Point3Da",
    3,
    &ILP_object_z_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__m1_12,
     }}}
};

extern struct ILP_Class3 ILP_object_Point2Db_class;
extern struct ILP_Field ILP_object_yy_field;
ILP_Object ilp__m1_16 (ILP_Closure ilp_useless, ILP_Object self13,
		       ILP_Object t14, ILP_Object u15);

struct ILP_Field ILP_object_yy_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point2Db_class,
    &ILP_object_x_field,
    "yy",
    1}}
};

struct ILP_Class3 ILP_object_Point2Db_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "Point2Db",
    2,
    &ILP_object_yy_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__m1_16,
     }}}
};

extern struct ILP_Class3 ILP_object_Point3Db_class;
extern struct ILP_Field ILP_object_zz_field;
ILP_Object ilp__m1_20 (ILP_Closure ilp_useless, ILP_Object self17,
		       ILP_Object tt18, ILP_Object uu19);

struct ILP_Field ILP_object_zz_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point3Db_class,
    &ILP_object_yy_field,
    "zz",
    2}}
};

struct ILP_Class3 ILP_object_Point3Db_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point2Db_class,
    "Point3Db",
    3,
    &ILP_object_zz_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__m1_20,
     }}}
};

ILP_Object
ilp__m1_4 (ILP_Closure ilp_useless,
	   ILP_Object self1, ILP_Object tt2, ILP_Object uu3)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self1;
  ilp_CurrentArguments[1] = tt2;
  ilp_CurrentArguments[2] = uu3;

  {
    {
      ILP_Object ilptmp577;
      ILP_Object ilptmp578;
      ilptmp577 = tt2;
      {
	ILP_Object ilptmp579;
	ilptmp579 = self1;
	if (ILP_IsA (ilptmp579, Point))
	  {
	    ilptmp578 = ilptmp579->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp578 = ILP_UnknownFieldError ("x", ilptmp579);
	  }
      }
      return ILP_Times (ilptmp577, ilptmp578);
    }
  }
}

ILP_Object
ilp__m1_8 (ILP_Closure ilp_useless,
	   ILP_Object self5, ILP_Object ttt6, ILP_Object uuu7)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_4;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self5;
  ilp_CurrentArguments[1] = ttt6;
  ilp_CurrentArguments[2] = uuu7;

  {
    {
      ILP_Object ilptmp580;
      ILP_Object ilptmp581;
      ilptmp580 = uuu7;
      {
	ILP_Object ilptmp582;
	ilptmp582 = self5;
	if (ILP_IsA (ilptmp582, Point2Da))
	  {
	    ilptmp581 = ilptmp582->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp581 = ILP_UnknownFieldError ("y", ilptmp582);
	  }
      }
      return ILP_Times (ilptmp580, ilptmp581);
    }
  }
}

ILP_Object
ilp__m1_12 (ILP_Closure ilp_useless,
	    ILP_Object self9, ILP_Object tt10, ILP_Object uu11)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_8;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self9;
  ilp_CurrentArguments[1] = tt10;
  ilp_CurrentArguments[2] = uu11;

  {
    {
      ILP_Object ilptmp583;
      ILP_Object ilptmp584;
      {
	ILP_Object ilptmp585;
	ilptmp585 = self9;
	if (ILP_IsA (ilptmp585, Point3Da))
	  {
	    ilptmp583 = ilptmp585->_content.asInstance.field[2];
	  }
	else
	  {
	    ilptmp583 = ILP_UnknownFieldError ("z", ilptmp585);
	  }
      }
      ilptmp584 = ILP_FindAndCallSuperMethod ();
      return ILP_Plus (ilptmp583, ilptmp584);
    }
  }
}

ILP_Object
ilp__m1_16 (ILP_Closure ilp_useless,
	    ILP_Object self13, ILP_Object t14, ILP_Object u15)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_4;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self13;
  ilp_CurrentArguments[1] = t14;
  ilp_CurrentArguments[2] = u15;

  {
    {
      ILP_Object ilptmp586;
      ILP_Object ilptmp587;
      ilptmp586 = u15;
      {
	ILP_Object ilptmp588;
	ilptmp588 = self13;
	if (ILP_IsA (ilptmp588, Point2Db))
	  {
	    ilptmp587 = ilptmp588->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp587 = ILP_UnknownFieldError ("yy", ilptmp588);
	  }
      }
      return ILP_Times (ilptmp586, ilptmp587);
    }
  }
}

ILP_Object
ilp__m1_20 (ILP_Closure ilp_useless,
	    ILP_Object self17, ILP_Object tt18, ILP_Object uu19)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_16;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self17;
  ilp_CurrentArguments[1] = tt18;
  ilp_CurrentArguments[2] = uu19;

  {
    {
      ILP_Object ilptmp589;
      ILP_Object ilptmp590;
      {
	ILP_Object ilptmp591;
	ilptmp591 = self17;
	if (ILP_IsA (ilptmp591, Point3Db))
	  {
	    ilptmp589 = ilptmp591->_content.asInstance.field[2];
	  }
	else
	  {
	    ilptmp589 = ILP_UnknownFieldError ("zz", ilptmp591);
	  }
      }
      ilptmp590 = ILP_FindAndCallSuperMethod ();
      return ILP_Times (ilptmp589, ilptmp590);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp592;
    ILP_Object ilptmp593;
    {
      ILP_Object ilptmp594;
      ILP_Object ilptmp595;
      ILP_Object ilptmp596;
      ILP_Object ilptmp597;
      ilptmp595 = ILP_Integer2ILP (-2);
      ilptmp596 = ILP_Integer2ILP (100);
      ilptmp597 = ILP_Integer2ILP (23);
      ilptmp594 = ILP_MakeInstance (Point3Da);
      ilptmp594->_content.asInstance.field[0] = ilptmp595;
      ilptmp594->_content.asInstance.field[1] = ilptmp596;
      ilptmp594->_content.asInstance.field[2] = ilptmp597;
      ilptmp592 = ilptmp594;
    }
    {
      ILP_Object ilptmp598;
      ILP_Object ilptmp599;
      ILP_Object ilptmp600;
      ILP_Object ilptmp601;
      ilptmp599 = ILP_Integer2ILP (20);
      ilptmp600 = ILP_Integer2ILP (10);
      ilptmp601 = ILP_Integer2ILP (5);
      ilptmp598 = ILP_MakeInstance (Point3Db);
      ilptmp598->_content.asInstance.field[0] = ilptmp599;
      ilptmp598->_content.asInstance.field[1] = ilptmp600;
      ilptmp598->_content.asInstance.field[2] = ilptmp601;
      ilptmp593 = ilptmp598;
    }

    {
      ILP_Object pc421 = ilptmp592;
      ILP_Object pc222 = ilptmp593;
      {
	struct ILP_catcher *current_catcher = ILP_current_catcher;
	struct ILP_catcher new_catcher;
	if (0 == setjmp (new_catcher._jmp_buf))
	  {
	    ILP_establish_catcher (&new_catcher);
	    {
	      ILP_Object ilptmp602;
	      ILP_Object ilptmp603;
	      ilptmp602 = ILP_Integer2ILP (275);
	      {
		ILP_Object ilptmp604;
		ILP_Object ilptmp605;
		{
		  ILP_general_function ilptmp606;
		  ILP_Object ilptmp607;
		  ILP_Object ilptmp608;
		  ILP_Object ilptmp609;
		  ilptmp607 = pc421;
		  ilptmp608 = ILP_Integer2ILP (3);
		  ilptmp609 = ILP_Integer2ILP (4);
		  ilptmp606 =
		    ILP_find_method (ilptmp607, &ILP_object_m1_method, 3);
		  ilptmp604 =
		    ilptmp606 (NULL, ilptmp607, ilptmp608, ilptmp609);
		}
		{
		  ILP_general_function ilptmp610;
		  ILP_Object ilptmp611;
		  ILP_Object ilptmp612;
		  ILP_Object ilptmp613;
		  ilptmp611 = pc222;
		  ilptmp612 = ILP_Integer2ILP (2);
		  ilptmp613 = ILP_Integer2ILP (3);
		  ilptmp610 =
		    ILP_find_method (ilptmp611, &ILP_object_m1_method, 3);
		  ilptmp605 =
		    ilptmp610 (NULL, ilptmp611, ilptmp612, ilptmp613);
		}
		ilptmp603 = ILP_Plus (ilptmp604, ilptmp605);
	      }
	      return ILP_Plus (ilptmp602, ilptmp603);
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
		  ILP_Object e23 = ILP_current_exception;
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
