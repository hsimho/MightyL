

#include "bdd.h"
#include "EnumAtoms.h"



// Generated from Mitl.g4 by ANTLR 4.13.1


#include "MitlLexer.h"


using namespace antlr4;

using namespace mightylcpp;


using namespace antlr4;

namespace {

struct MitlLexerStaticData final {
  MitlLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MitlLexerStaticData(const MitlLexerStaticData&) = delete;
  MitlLexerStaticData(MitlLexerStaticData&&) = delete;
  MitlLexerStaticData& operator=(const MitlLexerStaticData&) = delete;
  MitlLexerStaticData& operator=(MitlLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mitllexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MitlLexerStaticData *mitllexerLexerStaticData = nullptr;

void mitllexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mitllexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(mitllexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MitlLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "Comma", "LParen", "RParen", "LBrack", "RBrack", "Not", 
      "And", "Or", "Iff", "Implies", "Finally", "Globally", "Until", "Release", 
      "Next", "IntLit", "Infty", "Idfr", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,21,119,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,
  	5,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,
  	11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,
  	17,5,17,93,8,17,10,17,12,17,96,9,17,3,17,98,8,17,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,19,1,19,5,19,108,8,19,10,19,12,19,111,9,19,1,20,4,20,114,
  	8,20,11,20,12,20,115,1,20,1,20,0,0,21,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,
  	20,41,21,1,0,5,1,0,49,57,1,0,48,57,1,0,97,122,4,0,48,57,65,90,95,95,97,
  	122,3,0,9,10,13,13,32,32,122,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,
  	1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,
  	0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,
  	29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,
  	0,0,0,0,41,1,0,0,0,1,43,1,0,0,0,3,48,1,0,0,0,5,54,1,0,0,0,7,56,1,0,0,
  	0,9,58,1,0,0,0,11,60,1,0,0,0,13,62,1,0,0,0,15,64,1,0,0,0,17,66,1,0,0,
  	0,19,69,1,0,0,0,21,72,1,0,0,0,23,76,1,0,0,0,25,79,1,0,0,0,27,81,1,0,0,
  	0,29,83,1,0,0,0,31,85,1,0,0,0,33,87,1,0,0,0,35,97,1,0,0,0,37,99,1,0,0,
  	0,39,105,1,0,0,0,41,113,1,0,0,0,43,44,5,116,0,0,44,45,5,114,0,0,45,46,
  	5,117,0,0,46,47,5,101,0,0,47,2,1,0,0,0,48,49,5,102,0,0,49,50,5,97,0,0,
  	50,51,5,108,0,0,51,52,5,115,0,0,52,53,5,101,0,0,53,4,1,0,0,0,54,55,5,
  	44,0,0,55,6,1,0,0,0,56,57,5,40,0,0,57,8,1,0,0,0,58,59,5,41,0,0,59,10,
  	1,0,0,0,60,61,5,91,0,0,61,12,1,0,0,0,62,63,5,93,0,0,63,14,1,0,0,0,64,
  	65,5,33,0,0,65,16,1,0,0,0,66,67,5,38,0,0,67,68,5,38,0,0,68,18,1,0,0,0,
  	69,70,5,124,0,0,70,71,5,124,0,0,71,20,1,0,0,0,72,73,5,60,0,0,73,74,5,
  	45,0,0,74,75,5,62,0,0,75,22,1,0,0,0,76,77,5,45,0,0,77,78,5,62,0,0,78,
  	24,1,0,0,0,79,80,5,70,0,0,80,26,1,0,0,0,81,82,5,71,0,0,82,28,1,0,0,0,
  	83,84,5,85,0,0,84,30,1,0,0,0,85,86,5,82,0,0,86,32,1,0,0,0,87,88,5,88,
  	0,0,88,34,1,0,0,0,89,98,5,48,0,0,90,94,7,0,0,0,91,93,7,1,0,0,92,91,1,
  	0,0,0,93,96,1,0,0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,98,1,0,0,0,96,94,1,
  	0,0,0,97,89,1,0,0,0,97,90,1,0,0,0,98,36,1,0,0,0,99,100,5,105,0,0,100,
  	101,5,110,0,0,101,102,5,102,0,0,102,103,5,116,0,0,103,104,5,121,0,0,104,
  	38,1,0,0,0,105,109,7,2,0,0,106,108,7,3,0,0,107,106,1,0,0,0,108,111,1,
  	0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,40,1,0,0,0,111,109,1,0,0,0,
  	112,114,7,4,0,0,113,112,1,0,0,0,114,115,1,0,0,0,115,113,1,0,0,0,115,116,
  	1,0,0,0,116,117,1,0,0,0,117,118,6,20,0,0,118,42,1,0,0,0,5,0,94,97,109,
  	115,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mitllexerLexerStaticData = staticData.release();
}

}

MitlLexer::MitlLexer(CharStream *input) : Lexer(input) {
  MitlLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mitllexerLexerStaticData->atn, mitllexerLexerStaticData->decisionToDFA, mitllexerLexerStaticData->sharedContextCache);
}

MitlLexer::~MitlLexer() {
  delete _interpreter;
}

std::string MitlLexer::getGrammarFileName() const {
  return "Mitl.g4";
}

const std::vector<std::string>& MitlLexer::getRuleNames() const {
  return mitllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& MitlLexer::getChannelNames() const {
  return mitllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& MitlLexer::getModeNames() const {
  return mitllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& MitlLexer::getVocabulary() const {
  return mitllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MitlLexer::getSerializedATN() const {
  return mitllexerLexerStaticData->serializedATN;
}

const atn::ATN& MitlLexer::getATN() const {
  return *mitllexerLexerStaticData->atn;
}




void MitlLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mitllexerLexerInitialize();
#else
  ::antlr4::internal::call_once(mitllexerLexerOnceFlag, mitllexerLexerInitialize);
#endif
}
