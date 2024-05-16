

#include "bdd.h"
#include "EnumAtoms.h"



// Generated from Mitl.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "MitlVisitor.h"


namespace mightylcpp {

/**
 * This class provides an empty implementation of MitlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MitlBaseVisitor : public MitlVisitor {
public:

  virtual std::any visitMain(MitlParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormulaAtom(MitlParser::FormulaAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormulaAnd(MitlParser::FormulaAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormulaIff(MitlParser::FormulaIffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormulaImplies(MitlParser::FormulaImpliesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormulaNot(MitlParser::FormulaNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormulaOr(MitlParser::FormulaOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBound(MitlParser::BoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterval(MitlParser::IntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomIdfr(MitlParser::AtomIdfrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomFalse(MitlParser::AtomFalseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomParen(MitlParser::AtomParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomR(MitlParser::AtomRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomG(MitlParser::AtomGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomTrue(MitlParser::AtomTrueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomU(MitlParser::AtomUContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomF(MitlParser::AtomFContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace mightylcpp
