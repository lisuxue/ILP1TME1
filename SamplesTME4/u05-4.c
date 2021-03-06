#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp30;
    {
      ILP_Object ilptmp31;
      ilptmp31 = ILP_FALSE;
      if (ILP_isEquivalentToTrue (ilptmp31))
	{
	}
      else
	{
	  {
	    ILP_Object ilptmp32;
	    ILP_Object ilptmp33;
	    ilptmp32 = ILP_Integer2ILP (3);
	    ilptmp33 = ILP_Integer2ILP (2);
	    ilptmp30 = ILP_Plus (ilptmp32, ilptmp33);
	  }

	}
    }

    {
      ILP_Object x1 = ilptmp30;
      return x1;

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
