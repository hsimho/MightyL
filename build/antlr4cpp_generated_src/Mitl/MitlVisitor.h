

#include "bdd.h"
#include "EnumAtoms.h"



// Generated from Mitl.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "MitlParser.h"


namespace mightylcpp {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by MitlParser.
 */
class  MitlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MitlParser.
   */
    virtual std::any visitMain(MitlParser::MainContext *context) = 0;

    virtual std::any visitFormulaAtom(MitlParser::FormulaAtomContext *context) = 0;

    virtual std::any visitFormulaAnd(MitlParser::FormulaAndContext *context) = 0;

    virtual std::any visitFormulaIff(MitlParser::FormulaIffContext *context) = 0;

    virtual std::any visitFormulaImplies(MitlParser::FormulaImpliesContext *context) = 0;

    virtual std::any visitFormulaNot(MitlParser::FormulaNotContext *context) = 0;

    virtual std::any visitFormulaOr(MitlParser::FormulaOrContext *context) = 0;

    virtual std::any visitBound(MitlParser::BoundContext *context) = 0;

    virtual std::any visitInterval(MitlParser::IntervalContext *context) = 0;

    virtual std::any visitAtomIdfr(MitlParser::AtomIdfrContext *context) = 0;

    virtual std::any visitAtomFalse(MitlParser::AtomFalseContext *context) = 0;

    virtual std::any visitAtomParen(MitlParser::AtomParenContext *context) = 0;

    virtual std::any visitAtomR(MitlParser::AtomRContext *context) = 0;

    virtual std::any visitAtomG(MitlParser::AtomGContext *context) = 0;

    virtual std::any visitAtomTrue(MitlParser::AtomTrueContext *context) = 0;

    virtual std::any visitAtomU(MitlParser::AtomUContext *context) = 0;

    virtual std::any visitAtomF(MitlParser::AtomFContext *context) = 0;


};

}  // namespace mightylcpp
