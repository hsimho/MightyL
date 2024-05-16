

#include "bdd.h"
#include "EnumAtoms.h"



// Generated from Mitl.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace mightylcpp {


class  MitlParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, Comma = 3, LParen = 4, RParen = 5, LBrack = 6, RBrack = 7, 
    Not = 8, And = 9, Or = 10, Iff = 11, Implies = 12, Finally = 13, Globally = 14, 
    Until = 15, Release = 16, Next = 17, IntLit = 18, Infty = 19, Idfr = 20, 
    WS = 21
  };

  enum {
    RuleMain = 0, RuleFormula = 1, RuleBound = 2, RuleInterval = 3, RuleAtom = 4
  };

  explicit MitlParser(antlr4::TokenStream *input);

  MitlParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MitlParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class MainContext;
  class FormulaContext;
  class BoundContext;
  class IntervalContext;
  class AtomContext; 

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    std::map<std::string, int> props; bdd overline; bdd star; bdd tilde; bdd hat;
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FormulaContext *formula();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  FormulaContext : public antlr4::ParserRuleContext {
  public:
    bool negated = false; bdd overline; bdd star; bdd tilde; bdd hat;
    FormulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FormulaContext() = default;
    void copyFrom(FormulaContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FormulaAtomContext : public FormulaContext {
  public:
    FormulaAtomContext(FormulaContext *ctx);

    AtomContext *atom();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FormulaAndContext : public FormulaContext {
  public:
    FormulaAndContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *And();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FormulaIffContext : public FormulaContext {
  public:
    FormulaIffContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *Iff();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FormulaImpliesContext : public FormulaContext {
  public:
    FormulaImpliesContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *Implies();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FormulaNotContext : public FormulaContext {
  public:
    FormulaNotContext(FormulaContext *ctx);

    antlr4::tree::TerminalNode *Not();
    FormulaContext *formula();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FormulaOrContext : public FormulaContext {
  public:
    FormulaOrContext(FormulaContext *ctx);

    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);
    antlr4::tree::TerminalNode *Or();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FormulaContext* formula();
  FormulaContext* formula(int precedence);
  class  BoundContext : public antlr4::ParserRuleContext {
  public:
    BoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntLit();
    antlr4::tree::TerminalNode *Infty();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoundContext* bound();

  class  IntervalContext : public antlr4::ParserRuleContext {
  public:
    IntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBrack();
    std::vector<BoundContext *> bound();
    BoundContext* bound(size_t i);
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *RBrack();
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalContext* interval();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    bool negated = false; int id = 0; enum_atoms type; bdd overline; bdd star; bdd tilde; bdd hat;
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AtomContext() = default;
    void copyFrom(AtomContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AtomIdfrContext : public AtomContext {
  public:
    AtomIdfrContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *Idfr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomFalseContext : public AtomContext {
  public:
    AtomFalseContext(AtomContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomParenContext : public AtomContext {
  public:
    AtomParenContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *LParen();
    FormulaContext *formula();
    antlr4::tree::TerminalNode *RParen();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomRContext : public AtomContext {
  public:
    AtomRContext(AtomContext *ctx);

    std::vector<AtomContext *> atom();
    AtomContext* atom(size_t i);
    antlr4::tree::TerminalNode *Release();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomGContext : public AtomContext {
  public:
    AtomGContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *Globally();
    AtomContext *atom();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomTrueContext : public AtomContext {
  public:
    AtomTrueContext(AtomContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomUContext : public AtomContext {
  public:
    AtomUContext(AtomContext *ctx);

    std::vector<AtomContext *> atom();
    AtomContext* atom(size_t i);
    antlr4::tree::TerminalNode *Until();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomFContext : public AtomContext {
  public:
    AtomFContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *Finally();
    AtomContext *atom();
    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AtomContext* atom();
  AtomContext* atom(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool formulaSempred(FormulaContext *_localctx, size_t predicateIndex);
  bool atomSempred(AtomContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace mightylcpp
