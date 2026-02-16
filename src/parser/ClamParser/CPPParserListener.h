#include "CPPParserBase.h"

// Generated from CPPParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CPPParser.h"


namespace ClamParser {

/**
 * This interface defines an abstract listener for a parse tree produced by CPPParser.
 */
class  CPPParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTranslationUnit(CPPParser::TranslationUnitContext *ctx) = 0;
  virtual void exitTranslationUnit(CPPParser::TranslationUnitContext *ctx) = 0;

  virtual void enterPrimaryExpression(CPPParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(CPPParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterIdExpression(CPPParser::IdExpressionContext *ctx) = 0;
  virtual void exitIdExpression(CPPParser::IdExpressionContext *ctx) = 0;

  virtual void enterUnqualifiedId(CPPParser::UnqualifiedIdContext *ctx) = 0;
  virtual void exitUnqualifiedId(CPPParser::UnqualifiedIdContext *ctx) = 0;

  virtual void enterQualifiedId(CPPParser::QualifiedIdContext *ctx) = 0;
  virtual void exitQualifiedId(CPPParser::QualifiedIdContext *ctx) = 0;

  virtual void enterNestedNameSpecifier(CPPParser::NestedNameSpecifierContext *ctx) = 0;
  virtual void exitNestedNameSpecifier(CPPParser::NestedNameSpecifierContext *ctx) = 0;

  virtual void enterLambdaExpression(CPPParser::LambdaExpressionContext *ctx) = 0;
  virtual void exitLambdaExpression(CPPParser::LambdaExpressionContext *ctx) = 0;

  virtual void enterLambdaIntroducer(CPPParser::LambdaIntroducerContext *ctx) = 0;
  virtual void exitLambdaIntroducer(CPPParser::LambdaIntroducerContext *ctx) = 0;

  virtual void enterLambdaCapture(CPPParser::LambdaCaptureContext *ctx) = 0;
  virtual void exitLambdaCapture(CPPParser::LambdaCaptureContext *ctx) = 0;

  virtual void enterCaptureDefault(CPPParser::CaptureDefaultContext *ctx) = 0;
  virtual void exitCaptureDefault(CPPParser::CaptureDefaultContext *ctx) = 0;

  virtual void enterCaptureList(CPPParser::CaptureListContext *ctx) = 0;
  virtual void exitCaptureList(CPPParser::CaptureListContext *ctx) = 0;

  virtual void enterCapture(CPPParser::CaptureContext *ctx) = 0;
  virtual void exitCapture(CPPParser::CaptureContext *ctx) = 0;

  virtual void enterSimpleCapture(CPPParser::SimpleCaptureContext *ctx) = 0;
  virtual void exitSimpleCapture(CPPParser::SimpleCaptureContext *ctx) = 0;

  virtual void enterInitcapture(CPPParser::InitcaptureContext *ctx) = 0;
  virtual void exitInitcapture(CPPParser::InitcaptureContext *ctx) = 0;

  virtual void enterLambdaDeclarator(CPPParser::LambdaDeclaratorContext *ctx) = 0;
  virtual void exitLambdaDeclarator(CPPParser::LambdaDeclaratorContext *ctx) = 0;

  virtual void enterPostfixExpression(CPPParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(CPPParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterTypeIdOfTheTypeId(CPPParser::TypeIdOfTheTypeIdContext *ctx) = 0;
  virtual void exitTypeIdOfTheTypeId(CPPParser::TypeIdOfTheTypeIdContext *ctx) = 0;

  virtual void enterExpressionList(CPPParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(CPPParser::ExpressionListContext *ctx) = 0;

  virtual void enterPseudoDestructorName(CPPParser::PseudoDestructorNameContext *ctx) = 0;
  virtual void exitPseudoDestructorName(CPPParser::PseudoDestructorNameContext *ctx) = 0;

  virtual void enterUnaryExpression(CPPParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(CPPParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterUnaryOperator(CPPParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(CPPParser::UnaryOperatorContext *ctx) = 0;

  virtual void enterNewExpression_(CPPParser::NewExpression_Context *ctx) = 0;
  virtual void exitNewExpression_(CPPParser::NewExpression_Context *ctx) = 0;

  virtual void enterNewPlacement(CPPParser::NewPlacementContext *ctx) = 0;
  virtual void exitNewPlacement(CPPParser::NewPlacementContext *ctx) = 0;

  virtual void enterNewTypeId(CPPParser::NewTypeIdContext *ctx) = 0;
  virtual void exitNewTypeId(CPPParser::NewTypeIdContext *ctx) = 0;

  virtual void enterNewDeclarator_(CPPParser::NewDeclarator_Context *ctx) = 0;
  virtual void exitNewDeclarator_(CPPParser::NewDeclarator_Context *ctx) = 0;

  virtual void enterNoPointerNewDeclarator(CPPParser::NoPointerNewDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerNewDeclarator(CPPParser::NoPointerNewDeclaratorContext *ctx) = 0;

  virtual void enterNewInitializer_(CPPParser::NewInitializer_Context *ctx) = 0;
  virtual void exitNewInitializer_(CPPParser::NewInitializer_Context *ctx) = 0;

  virtual void enterDeleteExpression(CPPParser::DeleteExpressionContext *ctx) = 0;
  virtual void exitDeleteExpression(CPPParser::DeleteExpressionContext *ctx) = 0;

  virtual void enterNoExceptExpression(CPPParser::NoExceptExpressionContext *ctx) = 0;
  virtual void exitNoExceptExpression(CPPParser::NoExceptExpressionContext *ctx) = 0;

  virtual void enterCastExpression(CPPParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(CPPParser::CastExpressionContext *ctx) = 0;

  virtual void enterPointerMemberExpression(CPPParser::PointerMemberExpressionContext *ctx) = 0;
  virtual void exitPointerMemberExpression(CPPParser::PointerMemberExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(CPPParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(CPPParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(CPPParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(CPPParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterShiftExpression(CPPParser::ShiftExpressionContext *ctx) = 0;
  virtual void exitShiftExpression(CPPParser::ShiftExpressionContext *ctx) = 0;

  virtual void enterShiftOperator(CPPParser::ShiftOperatorContext *ctx) = 0;
  virtual void exitShiftOperator(CPPParser::ShiftOperatorContext *ctx) = 0;

  virtual void enterRelationalExpression(CPPParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(CPPParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(CPPParser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(CPPParser::EqualityExpressionContext *ctx) = 0;

  virtual void enterAndExpression(CPPParser::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(CPPParser::AndExpressionContext *ctx) = 0;

  virtual void enterExclusiveOrExpression(CPPParser::ExclusiveOrExpressionContext *ctx) = 0;
  virtual void exitExclusiveOrExpression(CPPParser::ExclusiveOrExpressionContext *ctx) = 0;

  virtual void enterInclusiveOrExpression(CPPParser::InclusiveOrExpressionContext *ctx) = 0;
  virtual void exitInclusiveOrExpression(CPPParser::InclusiveOrExpressionContext *ctx) = 0;

  virtual void enterLogicalAndExpression(CPPParser::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(CPPParser::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(CPPParser::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(CPPParser::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterConditionalExpression(CPPParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(CPPParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(CPPParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(CPPParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperator(CPPParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(CPPParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterExpression(CPPParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CPPParser::ExpressionContext *ctx) = 0;

  virtual void enterConstantExpression(CPPParser::ConstantExpressionContext *ctx) = 0;
  virtual void exitConstantExpression(CPPParser::ConstantExpressionContext *ctx) = 0;

  virtual void enterStatement(CPPParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CPPParser::StatementContext *ctx) = 0;

  virtual void enterLabeledStatement(CPPParser::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(CPPParser::LabeledStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(CPPParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(CPPParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterCompoundStatement(CPPParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(CPPParser::CompoundStatementContext *ctx) = 0;

  virtual void enterStatementSeq(CPPParser::StatementSeqContext *ctx) = 0;
  virtual void exitStatementSeq(CPPParser::StatementSeqContext *ctx) = 0;

  virtual void enterSelectionStatement(CPPParser::SelectionStatementContext *ctx) = 0;
  virtual void exitSelectionStatement(CPPParser::SelectionStatementContext *ctx) = 0;

  virtual void enterCondition(CPPParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(CPPParser::ConditionContext *ctx) = 0;

  virtual void enterIterationStatement(CPPParser::IterationStatementContext *ctx) = 0;
  virtual void exitIterationStatement(CPPParser::IterationStatementContext *ctx) = 0;

  virtual void enterForInitStatement(CPPParser::ForInitStatementContext *ctx) = 0;
  virtual void exitForInitStatement(CPPParser::ForInitStatementContext *ctx) = 0;

  virtual void enterForRangeDeclaration(CPPParser::ForRangeDeclarationContext *ctx) = 0;
  virtual void exitForRangeDeclaration(CPPParser::ForRangeDeclarationContext *ctx) = 0;

  virtual void enterForRangeInitializer(CPPParser::ForRangeInitializerContext *ctx) = 0;
  virtual void exitForRangeInitializer(CPPParser::ForRangeInitializerContext *ctx) = 0;

  virtual void enterJumpStatement(CPPParser::JumpStatementContext *ctx) = 0;
  virtual void exitJumpStatement(CPPParser::JumpStatementContext *ctx) = 0;

  virtual void enterDeclarationStatement(CPPParser::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(CPPParser::DeclarationStatementContext *ctx) = 0;

  virtual void enterDeclarationseq(CPPParser::DeclarationseqContext *ctx) = 0;
  virtual void exitDeclarationseq(CPPParser::DeclarationseqContext *ctx) = 0;

  virtual void enterDeclaration(CPPParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(CPPParser::DeclarationContext *ctx) = 0;

  virtual void enterBlockDeclaration(CPPParser::BlockDeclarationContext *ctx) = 0;
  virtual void exitBlockDeclaration(CPPParser::BlockDeclarationContext *ctx) = 0;

  virtual void enterAliasDeclaration(CPPParser::AliasDeclarationContext *ctx) = 0;
  virtual void exitAliasDeclaration(CPPParser::AliasDeclarationContext *ctx) = 0;

  virtual void enterSimpleDeclaration(CPPParser::SimpleDeclarationContext *ctx) = 0;
  virtual void exitSimpleDeclaration(CPPParser::SimpleDeclarationContext *ctx) = 0;

  virtual void enterStaticAssertDeclaration(CPPParser::StaticAssertDeclarationContext *ctx) = 0;
  virtual void exitStaticAssertDeclaration(CPPParser::StaticAssertDeclarationContext *ctx) = 0;

  virtual void enterEmptyDeclaration_(CPPParser::EmptyDeclaration_Context *ctx) = 0;
  virtual void exitEmptyDeclaration_(CPPParser::EmptyDeclaration_Context *ctx) = 0;

  virtual void enterAttributeDeclaration(CPPParser::AttributeDeclarationContext *ctx) = 0;
  virtual void exitAttributeDeclaration(CPPParser::AttributeDeclarationContext *ctx) = 0;

  virtual void enterDeclSpecifier(CPPParser::DeclSpecifierContext *ctx) = 0;
  virtual void exitDeclSpecifier(CPPParser::DeclSpecifierContext *ctx) = 0;

  virtual void enterDeclSpecifierSeq(CPPParser::DeclSpecifierSeqContext *ctx) = 0;
  virtual void exitDeclSpecifierSeq(CPPParser::DeclSpecifierSeqContext *ctx) = 0;

  virtual void enterStorageClassSpecifier(CPPParser::StorageClassSpecifierContext *ctx) = 0;
  virtual void exitStorageClassSpecifier(CPPParser::StorageClassSpecifierContext *ctx) = 0;

  virtual void enterFunctionSpecifier(CPPParser::FunctionSpecifierContext *ctx) = 0;
  virtual void exitFunctionSpecifier(CPPParser::FunctionSpecifierContext *ctx) = 0;

  virtual void enterTypedefName(CPPParser::TypedefNameContext *ctx) = 0;
  virtual void exitTypedefName(CPPParser::TypedefNameContext *ctx) = 0;

  virtual void enterTypeSpecifier(CPPParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(CPPParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterTrailingTypeSpecifier(CPPParser::TrailingTypeSpecifierContext *ctx) = 0;
  virtual void exitTrailingTypeSpecifier(CPPParser::TrailingTypeSpecifierContext *ctx) = 0;

  virtual void enterTypeSpecifierSeq(CPPParser::TypeSpecifierSeqContext *ctx) = 0;
  virtual void exitTypeSpecifierSeq(CPPParser::TypeSpecifierSeqContext *ctx) = 0;

  virtual void enterTrailingTypeSpecifierSeq(CPPParser::TrailingTypeSpecifierSeqContext *ctx) = 0;
  virtual void exitTrailingTypeSpecifierSeq(CPPParser::TrailingTypeSpecifierSeqContext *ctx) = 0;

  virtual void enterSimpleTypeLengthModifier(CPPParser::SimpleTypeLengthModifierContext *ctx) = 0;
  virtual void exitSimpleTypeLengthModifier(CPPParser::SimpleTypeLengthModifierContext *ctx) = 0;

  virtual void enterSimpleTypeSignednessModifier(CPPParser::SimpleTypeSignednessModifierContext *ctx) = 0;
  virtual void exitSimpleTypeSignednessModifier(CPPParser::SimpleTypeSignednessModifierContext *ctx) = 0;

  virtual void enterSimpleTypeSpecifier(CPPParser::SimpleTypeSpecifierContext *ctx) = 0;
  virtual void exitSimpleTypeSpecifier(CPPParser::SimpleTypeSpecifierContext *ctx) = 0;

  virtual void enterTheTypeName(CPPParser::TheTypeNameContext *ctx) = 0;
  virtual void exitTheTypeName(CPPParser::TheTypeNameContext *ctx) = 0;

  virtual void enterDecltypeSpecifier(CPPParser::DecltypeSpecifierContext *ctx) = 0;
  virtual void exitDecltypeSpecifier(CPPParser::DecltypeSpecifierContext *ctx) = 0;

  virtual void enterElaboratedTypeSpecifier(CPPParser::ElaboratedTypeSpecifierContext *ctx) = 0;
  virtual void exitElaboratedTypeSpecifier(CPPParser::ElaboratedTypeSpecifierContext *ctx) = 0;

  virtual void enterEnumName(CPPParser::EnumNameContext *ctx) = 0;
  virtual void exitEnumName(CPPParser::EnumNameContext *ctx) = 0;

  virtual void enterEnumSpecifier(CPPParser::EnumSpecifierContext *ctx) = 0;
  virtual void exitEnumSpecifier(CPPParser::EnumSpecifierContext *ctx) = 0;

  virtual void enterEnumHead(CPPParser::EnumHeadContext *ctx) = 0;
  virtual void exitEnumHead(CPPParser::EnumHeadContext *ctx) = 0;

  virtual void enterOpaqueEnumDeclaration(CPPParser::OpaqueEnumDeclarationContext *ctx) = 0;
  virtual void exitOpaqueEnumDeclaration(CPPParser::OpaqueEnumDeclarationContext *ctx) = 0;

  virtual void enterEnumkey(CPPParser::EnumkeyContext *ctx) = 0;
  virtual void exitEnumkey(CPPParser::EnumkeyContext *ctx) = 0;

  virtual void enterEnumbase(CPPParser::EnumbaseContext *ctx) = 0;
  virtual void exitEnumbase(CPPParser::EnumbaseContext *ctx) = 0;

  virtual void enterEnumeratorList(CPPParser::EnumeratorListContext *ctx) = 0;
  virtual void exitEnumeratorList(CPPParser::EnumeratorListContext *ctx) = 0;

  virtual void enterEnumeratorDefinition(CPPParser::EnumeratorDefinitionContext *ctx) = 0;
  virtual void exitEnumeratorDefinition(CPPParser::EnumeratorDefinitionContext *ctx) = 0;

  virtual void enterEnumerator(CPPParser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(CPPParser::EnumeratorContext *ctx) = 0;

  virtual void enterNamespaceName(CPPParser::NamespaceNameContext *ctx) = 0;
  virtual void exitNamespaceName(CPPParser::NamespaceNameContext *ctx) = 0;

  virtual void enterOriginalNamespaceName(CPPParser::OriginalNamespaceNameContext *ctx) = 0;
  virtual void exitOriginalNamespaceName(CPPParser::OriginalNamespaceNameContext *ctx) = 0;

  virtual void enterNamespaceDefinition(CPPParser::NamespaceDefinitionContext *ctx) = 0;
  virtual void exitNamespaceDefinition(CPPParser::NamespaceDefinitionContext *ctx) = 0;

  virtual void enterNamespaceAlias(CPPParser::NamespaceAliasContext *ctx) = 0;
  virtual void exitNamespaceAlias(CPPParser::NamespaceAliasContext *ctx) = 0;

  virtual void enterNamespaceAliasDefinition(CPPParser::NamespaceAliasDefinitionContext *ctx) = 0;
  virtual void exitNamespaceAliasDefinition(CPPParser::NamespaceAliasDefinitionContext *ctx) = 0;

  virtual void enterQualifiednamespacespecifier(CPPParser::QualifiednamespacespecifierContext *ctx) = 0;
  virtual void exitQualifiednamespacespecifier(CPPParser::QualifiednamespacespecifierContext *ctx) = 0;

  virtual void enterUsingDeclaration(CPPParser::UsingDeclarationContext *ctx) = 0;
  virtual void exitUsingDeclaration(CPPParser::UsingDeclarationContext *ctx) = 0;

  virtual void enterUsingDirective(CPPParser::UsingDirectiveContext *ctx) = 0;
  virtual void exitUsingDirective(CPPParser::UsingDirectiveContext *ctx) = 0;

  virtual void enterAsmDefinition(CPPParser::AsmDefinitionContext *ctx) = 0;
  virtual void exitAsmDefinition(CPPParser::AsmDefinitionContext *ctx) = 0;

  virtual void enterLinkageSpecification(CPPParser::LinkageSpecificationContext *ctx) = 0;
  virtual void exitLinkageSpecification(CPPParser::LinkageSpecificationContext *ctx) = 0;

  virtual void enterAttributeSpecifierSeq(CPPParser::AttributeSpecifierSeqContext *ctx) = 0;
  virtual void exitAttributeSpecifierSeq(CPPParser::AttributeSpecifierSeqContext *ctx) = 0;

  virtual void enterAttributeSpecifier(CPPParser::AttributeSpecifierContext *ctx) = 0;
  virtual void exitAttributeSpecifier(CPPParser::AttributeSpecifierContext *ctx) = 0;

  virtual void enterAlignmentspecifier(CPPParser::AlignmentspecifierContext *ctx) = 0;
  virtual void exitAlignmentspecifier(CPPParser::AlignmentspecifierContext *ctx) = 0;

  virtual void enterAttributeList(CPPParser::AttributeListContext *ctx) = 0;
  virtual void exitAttributeList(CPPParser::AttributeListContext *ctx) = 0;

  virtual void enterAttribute(CPPParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(CPPParser::AttributeContext *ctx) = 0;

  virtual void enterAttributeNamespace(CPPParser::AttributeNamespaceContext *ctx) = 0;
  virtual void exitAttributeNamespace(CPPParser::AttributeNamespaceContext *ctx) = 0;

  virtual void enterAttributeArgumentClause(CPPParser::AttributeArgumentClauseContext *ctx) = 0;
  virtual void exitAttributeArgumentClause(CPPParser::AttributeArgumentClauseContext *ctx) = 0;

  virtual void enterBalancedTokenSeq(CPPParser::BalancedTokenSeqContext *ctx) = 0;
  virtual void exitBalancedTokenSeq(CPPParser::BalancedTokenSeqContext *ctx) = 0;

  virtual void enterBalancedtoken(CPPParser::BalancedtokenContext *ctx) = 0;
  virtual void exitBalancedtoken(CPPParser::BalancedtokenContext *ctx) = 0;

  virtual void enterInitDeclaratorList(CPPParser::InitDeclaratorListContext *ctx) = 0;
  virtual void exitInitDeclaratorList(CPPParser::InitDeclaratorListContext *ctx) = 0;

  virtual void enterInitDeclarator(CPPParser::InitDeclaratorContext *ctx) = 0;
  virtual void exitInitDeclarator(CPPParser::InitDeclaratorContext *ctx) = 0;

  virtual void enterDeclarator(CPPParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(CPPParser::DeclaratorContext *ctx) = 0;

  virtual void enterPointerDeclarator(CPPParser::PointerDeclaratorContext *ctx) = 0;
  virtual void exitPointerDeclarator(CPPParser::PointerDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerDeclarator(CPPParser::NoPointerDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerDeclarator(CPPParser::NoPointerDeclaratorContext *ctx) = 0;

  virtual void enterParametersAndQualifiers(CPPParser::ParametersAndQualifiersContext *ctx) = 0;
  virtual void exitParametersAndQualifiers(CPPParser::ParametersAndQualifiersContext *ctx) = 0;

  virtual void enterTrailingReturnType(CPPParser::TrailingReturnTypeContext *ctx) = 0;
  virtual void exitTrailingReturnType(CPPParser::TrailingReturnTypeContext *ctx) = 0;

  virtual void enterPointerOperator(CPPParser::PointerOperatorContext *ctx) = 0;
  virtual void exitPointerOperator(CPPParser::PointerOperatorContext *ctx) = 0;

  virtual void enterCvqualifierseq(CPPParser::CvqualifierseqContext *ctx) = 0;
  virtual void exitCvqualifierseq(CPPParser::CvqualifierseqContext *ctx) = 0;

  virtual void enterCvQualifier(CPPParser::CvQualifierContext *ctx) = 0;
  virtual void exitCvQualifier(CPPParser::CvQualifierContext *ctx) = 0;

  virtual void enterRefqualifier(CPPParser::RefqualifierContext *ctx) = 0;
  virtual void exitRefqualifier(CPPParser::RefqualifierContext *ctx) = 0;

  virtual void enterDeclaratorid(CPPParser::DeclaratoridContext *ctx) = 0;
  virtual void exitDeclaratorid(CPPParser::DeclaratoridContext *ctx) = 0;

  virtual void enterTheTypeId(CPPParser::TheTypeIdContext *ctx) = 0;
  virtual void exitTheTypeId(CPPParser::TheTypeIdContext *ctx) = 0;

  virtual void enterAbstractDeclarator(CPPParser::AbstractDeclaratorContext *ctx) = 0;
  virtual void exitAbstractDeclarator(CPPParser::AbstractDeclaratorContext *ctx) = 0;

  virtual void enterPointerAbstractDeclarator(CPPParser::PointerAbstractDeclaratorContext *ctx) = 0;
  virtual void exitPointerAbstractDeclarator(CPPParser::PointerAbstractDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerAbstractDeclarator(CPPParser::NoPointerAbstractDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerAbstractDeclarator(CPPParser::NoPointerAbstractDeclaratorContext *ctx) = 0;

  virtual void enterAbstractPackDeclarator(CPPParser::AbstractPackDeclaratorContext *ctx) = 0;
  virtual void exitAbstractPackDeclarator(CPPParser::AbstractPackDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerAbstractPackDeclarator(CPPParser::NoPointerAbstractPackDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerAbstractPackDeclarator(CPPParser::NoPointerAbstractPackDeclaratorContext *ctx) = 0;

  virtual void enterParameterDeclarationClause(CPPParser::ParameterDeclarationClauseContext *ctx) = 0;
  virtual void exitParameterDeclarationClause(CPPParser::ParameterDeclarationClauseContext *ctx) = 0;

  virtual void enterParameterDeclarationList(CPPParser::ParameterDeclarationListContext *ctx) = 0;
  virtual void exitParameterDeclarationList(CPPParser::ParameterDeclarationListContext *ctx) = 0;

  virtual void enterParameterDeclaration(CPPParser::ParameterDeclarationContext *ctx) = 0;
  virtual void exitParameterDeclaration(CPPParser::ParameterDeclarationContext *ctx) = 0;

  virtual void enterFunctionDefinition(CPPParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(CPPParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterFunctionBody(CPPParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(CPPParser::FunctionBodyContext *ctx) = 0;

  virtual void enterInitializer(CPPParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(CPPParser::InitializerContext *ctx) = 0;

  virtual void enterBraceOrEqualInitializer(CPPParser::BraceOrEqualInitializerContext *ctx) = 0;
  virtual void exitBraceOrEqualInitializer(CPPParser::BraceOrEqualInitializerContext *ctx) = 0;

  virtual void enterInitializerClause(CPPParser::InitializerClauseContext *ctx) = 0;
  virtual void exitInitializerClause(CPPParser::InitializerClauseContext *ctx) = 0;

  virtual void enterInitializerList(CPPParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(CPPParser::InitializerListContext *ctx) = 0;

  virtual void enterBracedInitList(CPPParser::BracedInitListContext *ctx) = 0;
  virtual void exitBracedInitList(CPPParser::BracedInitListContext *ctx) = 0;

  virtual void enterClassName(CPPParser::ClassNameContext *ctx) = 0;
  virtual void exitClassName(CPPParser::ClassNameContext *ctx) = 0;

  virtual void enterClassSpecifier(CPPParser::ClassSpecifierContext *ctx) = 0;
  virtual void exitClassSpecifier(CPPParser::ClassSpecifierContext *ctx) = 0;

  virtual void enterClassHead(CPPParser::ClassHeadContext *ctx) = 0;
  virtual void exitClassHead(CPPParser::ClassHeadContext *ctx) = 0;

  virtual void enterClassHeadName(CPPParser::ClassHeadNameContext *ctx) = 0;
  virtual void exitClassHeadName(CPPParser::ClassHeadNameContext *ctx) = 0;

  virtual void enterClassVirtSpecifier(CPPParser::ClassVirtSpecifierContext *ctx) = 0;
  virtual void exitClassVirtSpecifier(CPPParser::ClassVirtSpecifierContext *ctx) = 0;

  virtual void enterClassKey(CPPParser::ClassKeyContext *ctx) = 0;
  virtual void exitClassKey(CPPParser::ClassKeyContext *ctx) = 0;

  virtual void enterMemberSpecification(CPPParser::MemberSpecificationContext *ctx) = 0;
  virtual void exitMemberSpecification(CPPParser::MemberSpecificationContext *ctx) = 0;

  virtual void enterMemberdeclaration(CPPParser::MemberdeclarationContext *ctx) = 0;
  virtual void exitMemberdeclaration(CPPParser::MemberdeclarationContext *ctx) = 0;

  virtual void enterMemberDeclaratorList(CPPParser::MemberDeclaratorListContext *ctx) = 0;
  virtual void exitMemberDeclaratorList(CPPParser::MemberDeclaratorListContext *ctx) = 0;

  virtual void enterMemberDeclarator(CPPParser::MemberDeclaratorContext *ctx) = 0;
  virtual void exitMemberDeclarator(CPPParser::MemberDeclaratorContext *ctx) = 0;

  virtual void enterVirtualSpecifierSeq(CPPParser::VirtualSpecifierSeqContext *ctx) = 0;
  virtual void exitVirtualSpecifierSeq(CPPParser::VirtualSpecifierSeqContext *ctx) = 0;

  virtual void enterVirtualSpecifier(CPPParser::VirtualSpecifierContext *ctx) = 0;
  virtual void exitVirtualSpecifier(CPPParser::VirtualSpecifierContext *ctx) = 0;

  virtual void enterPureSpecifier(CPPParser::PureSpecifierContext *ctx) = 0;
  virtual void exitPureSpecifier(CPPParser::PureSpecifierContext *ctx) = 0;

  virtual void enterBaseClause(CPPParser::BaseClauseContext *ctx) = 0;
  virtual void exitBaseClause(CPPParser::BaseClauseContext *ctx) = 0;

  virtual void enterBaseSpecifierList(CPPParser::BaseSpecifierListContext *ctx) = 0;
  virtual void exitBaseSpecifierList(CPPParser::BaseSpecifierListContext *ctx) = 0;

  virtual void enterBaseSpecifier(CPPParser::BaseSpecifierContext *ctx) = 0;
  virtual void exitBaseSpecifier(CPPParser::BaseSpecifierContext *ctx) = 0;

  virtual void enterClassOrDeclType(CPPParser::ClassOrDeclTypeContext *ctx) = 0;
  virtual void exitClassOrDeclType(CPPParser::ClassOrDeclTypeContext *ctx) = 0;

  virtual void enterBaseTypeSpecifier(CPPParser::BaseTypeSpecifierContext *ctx) = 0;
  virtual void exitBaseTypeSpecifier(CPPParser::BaseTypeSpecifierContext *ctx) = 0;

  virtual void enterAccessSpecifier(CPPParser::AccessSpecifierContext *ctx) = 0;
  virtual void exitAccessSpecifier(CPPParser::AccessSpecifierContext *ctx) = 0;

  virtual void enterConversionFunctionId(CPPParser::ConversionFunctionIdContext *ctx) = 0;
  virtual void exitConversionFunctionId(CPPParser::ConversionFunctionIdContext *ctx) = 0;

  virtual void enterConversionTypeId(CPPParser::ConversionTypeIdContext *ctx) = 0;
  virtual void exitConversionTypeId(CPPParser::ConversionTypeIdContext *ctx) = 0;

  virtual void enterConversionDeclarator(CPPParser::ConversionDeclaratorContext *ctx) = 0;
  virtual void exitConversionDeclarator(CPPParser::ConversionDeclaratorContext *ctx) = 0;

  virtual void enterConstructorInitializer(CPPParser::ConstructorInitializerContext *ctx) = 0;
  virtual void exitConstructorInitializer(CPPParser::ConstructorInitializerContext *ctx) = 0;

  virtual void enterMemInitializerList(CPPParser::MemInitializerListContext *ctx) = 0;
  virtual void exitMemInitializerList(CPPParser::MemInitializerListContext *ctx) = 0;

  virtual void enterMemInitializer(CPPParser::MemInitializerContext *ctx) = 0;
  virtual void exitMemInitializer(CPPParser::MemInitializerContext *ctx) = 0;

  virtual void enterMeminitializerid(CPPParser::MeminitializeridContext *ctx) = 0;
  virtual void exitMeminitializerid(CPPParser::MeminitializeridContext *ctx) = 0;

  virtual void enterOperatorFunctionId(CPPParser::OperatorFunctionIdContext *ctx) = 0;
  virtual void exitOperatorFunctionId(CPPParser::OperatorFunctionIdContext *ctx) = 0;

  virtual void enterLiteralOperatorId(CPPParser::LiteralOperatorIdContext *ctx) = 0;
  virtual void exitLiteralOperatorId(CPPParser::LiteralOperatorIdContext *ctx) = 0;

  virtual void enterTemplateDeclaration(CPPParser::TemplateDeclarationContext *ctx) = 0;
  virtual void exitTemplateDeclaration(CPPParser::TemplateDeclarationContext *ctx) = 0;

  virtual void enterTemplateparameterList(CPPParser::TemplateparameterListContext *ctx) = 0;
  virtual void exitTemplateparameterList(CPPParser::TemplateparameterListContext *ctx) = 0;

  virtual void enterTemplateParameter(CPPParser::TemplateParameterContext *ctx) = 0;
  virtual void exitTemplateParameter(CPPParser::TemplateParameterContext *ctx) = 0;

  virtual void enterTypeParameter(CPPParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(CPPParser::TypeParameterContext *ctx) = 0;

  virtual void enterSimpleTemplateId(CPPParser::SimpleTemplateIdContext *ctx) = 0;
  virtual void exitSimpleTemplateId(CPPParser::SimpleTemplateIdContext *ctx) = 0;

  virtual void enterTemplateId(CPPParser::TemplateIdContext *ctx) = 0;
  virtual void exitTemplateId(CPPParser::TemplateIdContext *ctx) = 0;

  virtual void enterTemplateName(CPPParser::TemplateNameContext *ctx) = 0;
  virtual void exitTemplateName(CPPParser::TemplateNameContext *ctx) = 0;

  virtual void enterTemplateArgumentList(CPPParser::TemplateArgumentListContext *ctx) = 0;
  virtual void exitTemplateArgumentList(CPPParser::TemplateArgumentListContext *ctx) = 0;

  virtual void enterTemplateArgument(CPPParser::TemplateArgumentContext *ctx) = 0;
  virtual void exitTemplateArgument(CPPParser::TemplateArgumentContext *ctx) = 0;

  virtual void enterTypeNameSpecifier(CPPParser::TypeNameSpecifierContext *ctx) = 0;
  virtual void exitTypeNameSpecifier(CPPParser::TypeNameSpecifierContext *ctx) = 0;

  virtual void enterExplicitInstantiation(CPPParser::ExplicitInstantiationContext *ctx) = 0;
  virtual void exitExplicitInstantiation(CPPParser::ExplicitInstantiationContext *ctx) = 0;

  virtual void enterExplicitSpecialization(CPPParser::ExplicitSpecializationContext *ctx) = 0;
  virtual void exitExplicitSpecialization(CPPParser::ExplicitSpecializationContext *ctx) = 0;

  virtual void enterTryBlock(CPPParser::TryBlockContext *ctx) = 0;
  virtual void exitTryBlock(CPPParser::TryBlockContext *ctx) = 0;

  virtual void enterFunctionTryBlock(CPPParser::FunctionTryBlockContext *ctx) = 0;
  virtual void exitFunctionTryBlock(CPPParser::FunctionTryBlockContext *ctx) = 0;

  virtual void enterHandlerSeq(CPPParser::HandlerSeqContext *ctx) = 0;
  virtual void exitHandlerSeq(CPPParser::HandlerSeqContext *ctx) = 0;

  virtual void enterHandler(CPPParser::HandlerContext *ctx) = 0;
  virtual void exitHandler(CPPParser::HandlerContext *ctx) = 0;

  virtual void enterExceptionDeclaration(CPPParser::ExceptionDeclarationContext *ctx) = 0;
  virtual void exitExceptionDeclaration(CPPParser::ExceptionDeclarationContext *ctx) = 0;

  virtual void enterThrowExpression(CPPParser::ThrowExpressionContext *ctx) = 0;
  virtual void exitThrowExpression(CPPParser::ThrowExpressionContext *ctx) = 0;

  virtual void enterExceptionSpecification(CPPParser::ExceptionSpecificationContext *ctx) = 0;
  virtual void exitExceptionSpecification(CPPParser::ExceptionSpecificationContext *ctx) = 0;

  virtual void enterDynamicExceptionSpecification(CPPParser::DynamicExceptionSpecificationContext *ctx) = 0;
  virtual void exitDynamicExceptionSpecification(CPPParser::DynamicExceptionSpecificationContext *ctx) = 0;

  virtual void enterTypeIdList(CPPParser::TypeIdListContext *ctx) = 0;
  virtual void exitTypeIdList(CPPParser::TypeIdListContext *ctx) = 0;

  virtual void enterNoeExceptSpecification(CPPParser::NoeExceptSpecificationContext *ctx) = 0;
  virtual void exitNoeExceptSpecification(CPPParser::NoeExceptSpecificationContext *ctx) = 0;

  virtual void enterTheOperator(CPPParser::TheOperatorContext *ctx) = 0;
  virtual void exitTheOperator(CPPParser::TheOperatorContext *ctx) = 0;

  virtual void enterLiteral(CPPParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(CPPParser::LiteralContext *ctx) = 0;


};

}  // namespace ClamParser
