

#include "bdd.h"
#include "EnumAtoms.h"



// Generated from Mitl.g4 by ANTLR 4.13.1


#include "MitlVisitor.h"

#include "MitlParser.h"


using namespace antlrcpp;
using namespace mightylcpp;

using namespace antlr4;

namespace {

struct MitlParserStaticData final {
  MitlParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MitlParserStaticData(const MitlParserStaticData&) = delete;
  MitlParserStaticData(MitlParserStaticData&&) = delete;
  MitlParserStaticData& operator=(const MitlParserStaticData&) = delete;
  MitlParserStaticData& operator=(MitlParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mitlParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MitlParserStaticData *mitlParserStaticData = nullptr;

void mitlParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mitlParserStaticData != nullptr) {
    return;
  }
#else
  assert(mitlParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MitlParserStaticData>(
    std::vector<std::string>{
      "main", "formula", "bound", "interval", "atom"
    },
    std::vector<std::string>{
      "", "'true'", "'false'", "','", "'('", "')'", "'['", "']'", "'!'", 
      "'&&'", "'||'", "'<->'", "'->'", "'F'", "'G'", "'U'", "'R'", "'X'", 
      "", "'infty'"
    },
    std::vector<std::string>{
      "", "", "", "Comma", "LParen", "RParen", "LBrack", "RBrack", "Not", 
      "And", "Or", "Iff", "Implies", "Finally", "Globally", "Until", "Release", 
      "Next", "IntLit", "Infty", "Idfr", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,21,102,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,3,1,18,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	5,1,32,8,1,10,1,12,1,35,9,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,63,
  	8,3,1,4,1,4,1,4,3,4,68,8,4,1,4,1,4,1,4,3,4,73,8,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,3,4,83,8,4,1,4,1,4,1,4,3,4,88,8,4,1,4,1,4,1,4,1,4,3,4,94,
  	8,4,1,4,5,4,97,8,4,10,4,12,4,100,9,4,1,4,0,2,2,8,5,0,2,4,6,8,0,1,1,0,
  	18,19,115,0,10,1,0,0,0,2,17,1,0,0,0,4,36,1,0,0,0,6,62,1,0,0,0,8,82,1,
  	0,0,0,10,11,3,2,1,0,11,12,5,0,0,1,12,1,1,0,0,0,13,14,6,1,-1,0,14,18,3,
  	8,4,0,15,16,5,8,0,0,16,18,3,2,1,5,17,13,1,0,0,0,17,15,1,0,0,0,18,33,1,
  	0,0,0,19,20,10,4,0,0,20,21,5,9,0,0,21,32,3,2,1,5,22,23,10,3,0,0,23,24,
  	5,10,0,0,24,32,3,2,1,4,25,26,10,2,0,0,26,27,5,11,0,0,27,32,3,2,1,3,28,
  	29,10,1,0,0,29,30,5,12,0,0,30,32,3,2,1,2,31,19,1,0,0,0,31,22,1,0,0,0,
  	31,25,1,0,0,0,31,28,1,0,0,0,32,35,1,0,0,0,33,31,1,0,0,0,33,34,1,0,0,0,
  	34,3,1,0,0,0,35,33,1,0,0,0,36,37,7,0,0,0,37,5,1,0,0,0,38,39,5,6,0,0,39,
  	40,3,4,2,0,40,41,5,3,0,0,41,42,3,4,2,0,42,43,5,7,0,0,43,63,1,0,0,0,44,
  	45,5,4,0,0,45,46,3,4,2,0,46,47,5,3,0,0,47,48,3,4,2,0,48,49,5,7,0,0,49,
  	63,1,0,0,0,50,51,5,6,0,0,51,52,3,4,2,0,52,53,5,3,0,0,53,54,3,4,2,0,54,
  	55,5,5,0,0,55,63,1,0,0,0,56,57,5,4,0,0,57,58,3,4,2,0,58,59,5,3,0,0,59,
  	60,3,4,2,0,60,61,5,5,0,0,61,63,1,0,0,0,62,38,1,0,0,0,62,44,1,0,0,0,62,
  	50,1,0,0,0,62,56,1,0,0,0,63,7,1,0,0,0,64,65,6,4,-1,0,65,67,5,13,0,0,66,
  	68,3,6,3,0,67,66,1,0,0,0,67,68,1,0,0,0,68,69,1,0,0,0,69,83,3,8,4,8,70,
  	72,5,14,0,0,71,73,3,6,3,0,72,71,1,0,0,0,72,73,1,0,0,0,73,74,1,0,0,0,74,
  	83,3,8,4,7,75,83,5,1,0,0,76,83,5,2,0,0,77,83,5,20,0,0,78,79,5,4,0,0,79,
  	80,3,2,1,0,80,81,5,5,0,0,81,83,1,0,0,0,82,64,1,0,0,0,82,70,1,0,0,0,82,
  	75,1,0,0,0,82,76,1,0,0,0,82,77,1,0,0,0,82,78,1,0,0,0,83,98,1,0,0,0,84,
  	85,10,6,0,0,85,87,5,15,0,0,86,88,3,6,3,0,87,86,1,0,0,0,87,88,1,0,0,0,
  	88,89,1,0,0,0,89,97,3,8,4,7,90,91,10,5,0,0,91,93,5,16,0,0,92,94,3,6,3,
  	0,93,92,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,97,3,8,4,6,96,84,1,0,0,
  	0,96,90,1,0,0,0,97,100,1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,9,1,0,0,
  	0,100,98,1,0,0,0,11,17,31,33,62,67,72,82,87,93,96,98
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mitlParserStaticData = staticData.release();
}

}

MitlParser::MitlParser(TokenStream *input) : MitlParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MitlParser::MitlParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MitlParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mitlParserStaticData->atn, mitlParserStaticData->decisionToDFA, mitlParserStaticData->sharedContextCache, options);
}

MitlParser::~MitlParser() {
  delete _interpreter;
}

const atn::ATN& MitlParser::getATN() const {
  return *mitlParserStaticData->atn;
}

std::string MitlParser::getGrammarFileName() const {
  return "Mitl.g4";
}

const std::vector<std::string>& MitlParser::getRuleNames() const {
  return mitlParserStaticData->ruleNames;
}

const dfa::Vocabulary& MitlParser::getVocabulary() const {
  return mitlParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MitlParser::getSerializedATN() const {
  return mitlParserStaticData->serializedATN;
}


//----------------- MainContext ------------------------------------------------------------------

MitlParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MitlParser::FormulaContext* MitlParser::MainContext::formula() {
  return getRuleContext<MitlParser::FormulaContext>(0);
}

tree::TerminalNode* MitlParser::MainContext::EOF() {
  return getToken(MitlParser::EOF, 0);
}


size_t MitlParser::MainContext::getRuleIndex() const {
  return MitlParser::RuleMain;
}


std::any MitlParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

MitlParser::MainContext* MitlParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 0, MitlParser::RuleMain);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(10);
    formula(0);
    setState(11);
    match(MitlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

MitlParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MitlParser::FormulaContext::getRuleIndex() const {
  return MitlParser::RuleFormula;
}

void MitlParser::FormulaContext::copyFrom(FormulaContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->negated = ctx->negated;
}

//----------------- FormulaAtomContext ------------------------------------------------------------------

MitlParser::AtomContext* MitlParser::FormulaAtomContext::atom() {
  return getRuleContext<MitlParser::AtomContext>(0);
}

MitlParser::FormulaAtomContext::FormulaAtomContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MitlParser::FormulaAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitFormulaAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FormulaAndContext ------------------------------------------------------------------

std::vector<MitlParser::FormulaContext *> MitlParser::FormulaAndContext::formula() {
  return getRuleContexts<MitlParser::FormulaContext>();
}

MitlParser::FormulaContext* MitlParser::FormulaAndContext::formula(size_t i) {
  return getRuleContext<MitlParser::FormulaContext>(i);
}

tree::TerminalNode* MitlParser::FormulaAndContext::And() {
  return getToken(MitlParser::And, 0);
}

MitlParser::FormulaAndContext::FormulaAndContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MitlParser::FormulaAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitFormulaAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FormulaIffContext ------------------------------------------------------------------

std::vector<MitlParser::FormulaContext *> MitlParser::FormulaIffContext::formula() {
  return getRuleContexts<MitlParser::FormulaContext>();
}

MitlParser::FormulaContext* MitlParser::FormulaIffContext::formula(size_t i) {
  return getRuleContext<MitlParser::FormulaContext>(i);
}

tree::TerminalNode* MitlParser::FormulaIffContext::Iff() {
  return getToken(MitlParser::Iff, 0);
}

MitlParser::FormulaIffContext::FormulaIffContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MitlParser::FormulaIffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitFormulaIff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FormulaImpliesContext ------------------------------------------------------------------

std::vector<MitlParser::FormulaContext *> MitlParser::FormulaImpliesContext::formula() {
  return getRuleContexts<MitlParser::FormulaContext>();
}

MitlParser::FormulaContext* MitlParser::FormulaImpliesContext::formula(size_t i) {
  return getRuleContext<MitlParser::FormulaContext>(i);
}

tree::TerminalNode* MitlParser::FormulaImpliesContext::Implies() {
  return getToken(MitlParser::Implies, 0);
}

MitlParser::FormulaImpliesContext::FormulaImpliesContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MitlParser::FormulaImpliesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitFormulaImplies(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FormulaNotContext ------------------------------------------------------------------

tree::TerminalNode* MitlParser::FormulaNotContext::Not() {
  return getToken(MitlParser::Not, 0);
}

MitlParser::FormulaContext* MitlParser::FormulaNotContext::formula() {
  return getRuleContext<MitlParser::FormulaContext>(0);
}

MitlParser::FormulaNotContext::FormulaNotContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MitlParser::FormulaNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitFormulaNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FormulaOrContext ------------------------------------------------------------------

std::vector<MitlParser::FormulaContext *> MitlParser::FormulaOrContext::formula() {
  return getRuleContexts<MitlParser::FormulaContext>();
}

MitlParser::FormulaContext* MitlParser::FormulaOrContext::formula(size_t i) {
  return getRuleContext<MitlParser::FormulaContext>(i);
}

tree::TerminalNode* MitlParser::FormulaOrContext::Or() {
  return getToken(MitlParser::Or, 0);
}

MitlParser::FormulaOrContext::FormulaOrContext(FormulaContext *ctx) { copyFrom(ctx); }


std::any MitlParser::FormulaOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitFormulaOr(this);
  else
    return visitor->visitChildren(this);
}

MitlParser::FormulaContext* MitlParser::formula() {
   return formula(0);
}

MitlParser::FormulaContext* MitlParser::formula(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MitlParser::FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, parentState);
  MitlParser::FormulaContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, MitlParser::RuleFormula, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(17);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MitlParser::T__0:
      case MitlParser::T__1:
      case MitlParser::LParen:
      case MitlParser::Finally:
      case MitlParser::Globally:
      case MitlParser::Idfr: {
        _localctx = _tracker.createInstance<FormulaAtomContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(14);
        atom(0);
        break;
      }

      case MitlParser::Not: {
        _localctx = _tracker.createInstance<FormulaNotContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(15);
        match(MitlParser::Not);
        setState(16);
        formula(5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(33);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(31);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<FormulaAndContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(19);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(20);
          match(MitlParser::And);
          setState(21);
          formula(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<FormulaOrContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(22);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(23);
          match(MitlParser::Or);
          setState(24);
          formula(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<FormulaIffContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(25);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(26);
          match(MitlParser::Iff);
          setState(27);
          formula(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<FormulaImpliesContext>(_tracker.createInstance<FormulaContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleFormula);
          setState(28);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(29);
          match(MitlParser::Implies);
          setState(30);
          formula(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(35);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BoundContext ------------------------------------------------------------------

MitlParser::BoundContext::BoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MitlParser::BoundContext::IntLit() {
  return getToken(MitlParser::IntLit, 0);
}

tree::TerminalNode* MitlParser::BoundContext::Infty() {
  return getToken(MitlParser::Infty, 0);
}


size_t MitlParser::BoundContext::getRuleIndex() const {
  return MitlParser::RuleBound;
}


std::any MitlParser::BoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitBound(this);
  else
    return visitor->visitChildren(this);
}

MitlParser::BoundContext* MitlParser::bound() {
  BoundContext *_localctx = _tracker.createInstance<BoundContext>(_ctx, getState());
  enterRule(_localctx, 4, MitlParser::RuleBound);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    _la = _input->LA(1);
    if (!(_la == MitlParser::IntLit

    || _la == MitlParser::Infty)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalContext ------------------------------------------------------------------

MitlParser::IntervalContext::IntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MitlParser::IntervalContext::LBrack() {
  return getToken(MitlParser::LBrack, 0);
}

std::vector<MitlParser::BoundContext *> MitlParser::IntervalContext::bound() {
  return getRuleContexts<MitlParser::BoundContext>();
}

MitlParser::BoundContext* MitlParser::IntervalContext::bound(size_t i) {
  return getRuleContext<MitlParser::BoundContext>(i);
}

tree::TerminalNode* MitlParser::IntervalContext::Comma() {
  return getToken(MitlParser::Comma, 0);
}

tree::TerminalNode* MitlParser::IntervalContext::RBrack() {
  return getToken(MitlParser::RBrack, 0);
}

tree::TerminalNode* MitlParser::IntervalContext::LParen() {
  return getToken(MitlParser::LParen, 0);
}

tree::TerminalNode* MitlParser::IntervalContext::RParen() {
  return getToken(MitlParser::RParen, 0);
}


size_t MitlParser::IntervalContext::getRuleIndex() const {
  return MitlParser::RuleInterval;
}


std::any MitlParser::IntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitInterval(this);
  else
    return visitor->visitChildren(this);
}

MitlParser::IntervalContext* MitlParser::interval() {
  IntervalContext *_localctx = _tracker.createInstance<IntervalContext>(_ctx, getState());
  enterRule(_localctx, 6, MitlParser::RuleInterval);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      match(MitlParser::LBrack);
      setState(39);
      bound();
      setState(40);
      match(MitlParser::Comma);
      setState(41);
      bound();
      setState(42);
      match(MitlParser::RBrack);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(44);
      match(MitlParser::LParen);
      setState(45);
      bound();
      setState(46);
      match(MitlParser::Comma);
      setState(47);
      bound();
      setState(48);
      match(MitlParser::RBrack);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(50);
      match(MitlParser::LBrack);
      setState(51);
      bound();
      setState(52);
      match(MitlParser::Comma);
      setState(53);
      bound();
      setState(54);
      match(MitlParser::RParen);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(56);
      match(MitlParser::LParen);
      setState(57);
      bound();
      setState(58);
      match(MitlParser::Comma);
      setState(59);
      bound();
      setState(60);
      match(MitlParser::RParen);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

MitlParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MitlParser::AtomContext::getRuleIndex() const {
  return MitlParser::RuleAtom;
}

void MitlParser::AtomContext::copyFrom(AtomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->negated = ctx->negated;
}

//----------------- AtomIdfrContext ------------------------------------------------------------------

tree::TerminalNode* MitlParser::AtomIdfrContext::Idfr() {
  return getToken(MitlParser::Idfr, 0);
}

MitlParser::AtomIdfrContext::AtomIdfrContext(AtomContext *ctx) { copyFrom(ctx); }


std::any MitlParser::AtomIdfrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitAtomIdfr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomFalseContext ------------------------------------------------------------------

MitlParser::AtomFalseContext::AtomFalseContext(AtomContext *ctx) { copyFrom(ctx); }


std::any MitlParser::AtomFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitAtomFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomParenContext ------------------------------------------------------------------

tree::TerminalNode* MitlParser::AtomParenContext::LParen() {
  return getToken(MitlParser::LParen, 0);
}

MitlParser::FormulaContext* MitlParser::AtomParenContext::formula() {
  return getRuleContext<MitlParser::FormulaContext>(0);
}

tree::TerminalNode* MitlParser::AtomParenContext::RParen() {
  return getToken(MitlParser::RParen, 0);
}

MitlParser::AtomParenContext::AtomParenContext(AtomContext *ctx) { copyFrom(ctx); }


std::any MitlParser::AtomParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitAtomParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomRContext ------------------------------------------------------------------

std::vector<MitlParser::AtomContext *> MitlParser::AtomRContext::atom() {
  return getRuleContexts<MitlParser::AtomContext>();
}

MitlParser::AtomContext* MitlParser::AtomRContext::atom(size_t i) {
  return getRuleContext<MitlParser::AtomContext>(i);
}

tree::TerminalNode* MitlParser::AtomRContext::Release() {
  return getToken(MitlParser::Release, 0);
}

MitlParser::IntervalContext* MitlParser::AtomRContext::interval() {
  return getRuleContext<MitlParser::IntervalContext>(0);
}

MitlParser::AtomRContext::AtomRContext(AtomContext *ctx) { copyFrom(ctx); }


std::any MitlParser::AtomRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitAtomR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomGContext ------------------------------------------------------------------

tree::TerminalNode* MitlParser::AtomGContext::Globally() {
  return getToken(MitlParser::Globally, 0);
}

MitlParser::AtomContext* MitlParser::AtomGContext::atom() {
  return getRuleContext<MitlParser::AtomContext>(0);
}

MitlParser::IntervalContext* MitlParser::AtomGContext::interval() {
  return getRuleContext<MitlParser::IntervalContext>(0);
}

MitlParser::AtomGContext::AtomGContext(AtomContext *ctx) { copyFrom(ctx); }


std::any MitlParser::AtomGContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitAtomG(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomTrueContext ------------------------------------------------------------------

MitlParser::AtomTrueContext::AtomTrueContext(AtomContext *ctx) { copyFrom(ctx); }


std::any MitlParser::AtomTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitAtomTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomUContext ------------------------------------------------------------------

std::vector<MitlParser::AtomContext *> MitlParser::AtomUContext::atom() {
  return getRuleContexts<MitlParser::AtomContext>();
}

MitlParser::AtomContext* MitlParser::AtomUContext::atom(size_t i) {
  return getRuleContext<MitlParser::AtomContext>(i);
}

tree::TerminalNode* MitlParser::AtomUContext::Until() {
  return getToken(MitlParser::Until, 0);
}

MitlParser::IntervalContext* MitlParser::AtomUContext::interval() {
  return getRuleContext<MitlParser::IntervalContext>(0);
}

MitlParser::AtomUContext::AtomUContext(AtomContext *ctx) { copyFrom(ctx); }


std::any MitlParser::AtomUContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitAtomU(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomFContext ------------------------------------------------------------------

tree::TerminalNode* MitlParser::AtomFContext::Finally() {
  return getToken(MitlParser::Finally, 0);
}

MitlParser::AtomContext* MitlParser::AtomFContext::atom() {
  return getRuleContext<MitlParser::AtomContext>(0);
}

MitlParser::IntervalContext* MitlParser::AtomFContext::interval() {
  return getRuleContext<MitlParser::IntervalContext>(0);
}

MitlParser::AtomFContext::AtomFContext(AtomContext *ctx) { copyFrom(ctx); }


std::any MitlParser::AtomFContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MitlVisitor*>(visitor))
    return parserVisitor->visitAtomF(this);
  else
    return visitor->visitChildren(this);
}

MitlParser::AtomContext* MitlParser::atom() {
   return atom(0);
}

MitlParser::AtomContext* MitlParser::atom(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MitlParser::AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, parentState);
  MitlParser::AtomContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, MitlParser::RuleAtom, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MitlParser::Finally: {
        _localctx = _tracker.createInstance<AtomFContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(65);
        match(MitlParser::Finally);
        setState(67);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(66);
          interval();
          break;
        }

        default:
          break;
        }
        setState(69);
        atom(8);
        break;
      }

      case MitlParser::Globally: {
        _localctx = _tracker.createInstance<AtomGContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(70);
        match(MitlParser::Globally);
        setState(72);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(71);
          interval();
          break;
        }

        default:
          break;
        }
        setState(74);
        atom(7);
        break;
      }

      case MitlParser::T__0: {
        _localctx = _tracker.createInstance<AtomTrueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(75);
        match(MitlParser::T__0);
        break;
      }

      case MitlParser::T__1: {
        _localctx = _tracker.createInstance<AtomFalseContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(76);
        match(MitlParser::T__1);
        break;
      }

      case MitlParser::Idfr: {
        _localctx = _tracker.createInstance<AtomIdfrContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(77);
        match(MitlParser::Idfr);
        break;
      }

      case MitlParser::LParen: {
        _localctx = _tracker.createInstance<AtomParenContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(78);
        match(MitlParser::LParen);
        setState(79);
        formula(0);
        setState(80);
        match(MitlParser::RParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(98);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(96);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AtomUContext>(_tracker.createInstance<AtomContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAtom);
          setState(84);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(85);
          match(MitlParser::Until);
          setState(87);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
          case 1: {
            setState(86);
            interval();
            break;
          }

          default:
            break;
          }
          setState(89);
          atom(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AtomRContext>(_tracker.createInstance<AtomContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAtom);
          setState(90);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(91);
          match(MitlParser::Release);
          setState(93);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
          case 1: {
            setState(92);
            interval();
            break;
          }

          default:
            break;
          }
          setState(95);
          atom(6);
          break;
        }

        default:
          break;
        } 
      }
      setState(100);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool MitlParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return formulaSempred(antlrcpp::downCast<FormulaContext *>(context), predicateIndex);
    case 4: return atomSempred(antlrcpp::downCast<AtomContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MitlParser::formulaSempred(FormulaContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool MitlParser::atomSempred(AtomContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

void MitlParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mitlParserInitialize();
#else
  ::antlr4::internal::call_once(mitlParserOnceFlag, mitlParserInitialize);
#endif
}
