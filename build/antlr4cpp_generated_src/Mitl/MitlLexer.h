

#include "bdd.h"
#include "EnumAtoms.h"



// Generated from Mitl.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace mightylcpp {


class  MitlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, Comma = 3, LParen = 4, RParen = 5, LBrack = 6, RBrack = 7, 
    Not = 8, And = 9, Or = 10, Iff = 11, Implies = 12, Finally = 13, Globally = 14, 
    Until = 15, Release = 16, Next = 17, IntLit = 18, Infty = 19, Idfr = 20, 
    WS = 21
  };

  explicit MitlLexer(antlr4::CharStream *input);

  ~MitlLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace mightylcpp
