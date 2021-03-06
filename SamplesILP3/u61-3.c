#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object print;

/* Global prototypes */

/* Global functions */


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1436;
    ilptmp1436 = ILP_Integer2ILP (1);

    {
      ILP_Object x1 = ilptmp1436;
      {
	ILP_Object ilptmp1437;
	{
	  struct ILP_catcher *current_catcher = ILP_current_catcher;
	  struct ILP_catcher new_catcher;
	  if (0 == setjmp (new_catcher._jmp_buf))
	    {
	      ILP_establish_catcher (&new_catcher);
	      ilptmp1437 = x1;
	      ILP_current_exception = NULL;
	    };
	  ILP_reset_catcher (current_catcher);
	  {
	    ILP_Object ilptmp1438;
	    ilptmp1438 = ILP_Integer2ILP (3);
	    (void) (x1 = ilptmp1438);
	  }
	  if (NULL != ILP_current_exception)
	    {
	      ILP_throw (ILP_current_exception);
	    };
	  ilptmp1437 = ILP_FALSE;
	}
	{
	  ILP_Object ilptmp1439;
	  ilptmp1439 = x1;
	  ilptmp1437 = ILP_print (ilptmp1439);
	}
	{
	  ILP_Object ilptmp1440;
	  ILP_Object ilptmp1441;
	  ilptmp1440 = x1;
	  ilptmp1441 = ILP_Integer2ILP (3);
	  ilptmp1437 = ILP_Equal (ilptmp1440, ilptmp1441);
	}
	return ilptmp1437;
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
