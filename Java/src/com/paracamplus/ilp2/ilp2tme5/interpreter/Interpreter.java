/* *****************************************************************
 * ILP9 - Implantation d'un langage de programmation.
 * by Christian.Queinnec@paracamplus.com
 * See http://mooc.paracamplus.com/ilp9
 * GPL version 3
 ***************************************************************** */
package com.paracamplus.ilp2.ilp2tme5.interpreter;

import java.util.List;
import java.util.Vector;

import com.paracamplus.ilp2.interfaces.IASTassignment;
import com.paracamplus.ilp2.interfaces.IASTloop;
import com.paracamplus.ilp2.interfaces.IASTfunctionDefinition;
import com.paracamplus.ilp2.interfaces.IASTprogram;
import com.paracamplus.ilp2.ilp2tme5.compiler.BreakException;
import com.paracamplus.ilp2.ilp2tme5.compiler.ContinueException;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTbreak;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTcontinue;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTvisitor;
import com.paracamplus.ilp1.interfaces.IASTinvocation;
import com.paracamplus.ilp1.interfaces.IASTvariable;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interpreter.EmptyLexicalEnvironment;
import com.paracamplus.ilp1.interpreter.Function;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.ILexicalEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.Invocable;


public class Interpreter extends com.paracamplus.ilp1.interpreter.Interpreter
implements IASTvisitor<Object, ILexicalEnvironment, EvaluationException> {
    

    // 
	protected int cptwhile;
    
    public Interpreter(IGlobalVariableEnvironment globalVariableEnvironment,
			IOperatorEnvironment operatorEnvironment) {
		super(globalVariableEnvironment, operatorEnvironment);
		cptwhile=0;
	}

    @Override
	public Object visit(com.paracamplus.ilp1.interfaces.IASTprogram iast, ILexicalEnvironment lexenv) throws EvaluationException  {
    	return visit((IASTprogram)iast, lexenv);
    }

	public Object visit(IASTprogram iast, ILexicalEnvironment lexenv) 
            throws EvaluationException {
        for ( IASTfunctionDefinition fd : iast.getFunctionDefinitions() ) {
            Object f = this.visit(fd, lexenv);
            String v = fd.getName();
            getGlobalVariableEnvironment().addGlobalVariableValue(v, f);
        }
        try {
            return iast.getBody().accept(this, lexenv);
       } catch (Exception exc) {
            return exc;
        }
    }
   
    // 

            
    @Override
	public Object visit(IASTassignment iast, ILexicalEnvironment lexenv) 
            throws EvaluationException {
        IASTvariable variable = iast.getVariable();
        Object value = iast.getExpression().accept(this, lexenv);
        try {
            lexenv.update(variable, value);
        } catch (EvaluationException exc) {
            getGlobalVariableEnvironment()
                .updateGlobalVariableValue(variable.getName(), value);
        }
        return value;
    }


    
    public Invocable visit(IASTfunctionDefinition iast, ILexicalEnvironment lexenv) 
            throws EvaluationException {
        Invocable fun = new Function(iast.getVariables(),
                                     iast.getBody(),
                                     new EmptyLexicalEnvironment());
        return fun;
    }
    
    @Override
	public Object visit(IASTinvocation iast, ILexicalEnvironment lexenv) 
            throws EvaluationException {
        Object function = iast.getFunction().accept(this, lexenv);
        if ( function instanceof Invocable ) {
            Invocable f = (Invocable)function;
            List<Object> args = new Vector<Object>();
            for ( IASTexpression arg : iast.getArguments() ) {
                Object value = arg.accept(this, lexenv);
                args.add(value);
            }
            return f.apply(this, args.toArray());
        } else {
            String msg = "Cannot apply " + function;
            throw new EvaluationException(msg);
        }
    }
    
    
    @Override
	public Object visit(IASTloop iast, ILexicalEnvironment lexenv) 
            throws EvaluationException {
        while ( true ) {
            Object condition = iast.getCondition().accept(this, lexenv);
            if ( condition instanceof Boolean ) {
                Boolean c = (Boolean) condition;
                if ( ! c ) {
                    break;
                }
            }
            cptwhile++;
            try{
            	iast.getBody().accept(this, lexenv);
            }catch(ContinueException ce){
            	continue;
            }catch(BreakException be){
            	break;
            }
            // return Boolean.False
            //catch(Continue)
            //{}
            
        }
        cptwhile--;
        return Boolean.FALSE;
    }

	@Override
	public Object visit(IASTcontinue iast, ILexicalEnvironment data)
			throws EvaluationException {
		if (cptwhile<1) {
			throw new EvaluationException("continue n'est pas dans une while");
		}else{
			throw new ContinueException();
		}
	}

	@Override
	public Object visit(IASTbreak iast, ILexicalEnvironment data)
			throws EvaluationException {
		if (cptwhile<1){
			throw new EvaluationException("break n'est pas dans une while");
		}else{
			throw new BreakException();
		}
	}


}
