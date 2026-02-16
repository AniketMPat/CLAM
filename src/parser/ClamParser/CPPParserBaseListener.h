#include "CPPParserBase.h"

// Generated from CPPParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CPPParserListener.h"


namespace ClamParser {

/**
 * This class provides an empty implementation of CPPParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CPPParserBaseListener : public CPPParserListener {
public:

  virtual void enterTranslationUnit(CPPParser::TranslationUnitContext * /*ctx*/) override { }
  virtual void exitTranslationUnit(CPPParser::TranslationUnitContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(CPPParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(CPPParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterIdExpression(CPPParser::IdExpressionContext * /*ctx*/) override { }
  virtual void exitIdExpression(CPPParser::IdExpressionContext * /*ctx*/) override { }

  virtual void enterUnqualifiedId(CPPParser::UnqualifiedIdContext * /*ctx*/) override { }
  virtual void exitUnqualifiedId(CPPParser::UnqualifiedIdContext * /*ctx*/) override { }

  virtual void enterQualifiedId(CPPParser::QualifiedIdContext * /*ctx*/) override { }
  virtual void exitQualifiedId(CPPParser::QualifiedIdContext * /*ctx*/) override { }

  virtual void enterNestedNameSpecifier(CPPParser::NestedNameSpecifierContext * /*ctx*/) override { }
  virtual void exitNestedNameSpecifier(CPPParser::NestedNameSpecifierContext * /*ctx*/) override { }

  virtual void enterLambdaExpression(CPPParser::LambdaExpressionContext * /*ctx*/) override { }
  virtual void exitLambdaExpression(CPPParser::LambdaExpressionContext * /*ctx*/) override { }

  virtual void enterLambdaIntroducer(CPPParser::LambdaIntroducerContext * /*ctx*/) override { }
  virtual void exitLambdaIntroducer(CPPParser::LambdaIntroducerContext * /*ctx*/) override { }

  virtual void enterLambdaCapture(CPPParser::LambdaCaptureContext * /*ctx*/) override { }
  virtual void exitLambdaCapture(CPPParser::LambdaCaptureContext * /*ctx*/) override { }

  virtual void enterCaptureDefault(CPPParser::CaptureDefaultContext * /*ctx*/) override { }
  virtual void exitCaptureDefault(CPPParser::CaptureDefaultContext * /*ctx*/) override { }

  virtual void enterCaptureList(CPPParser::CaptureListContext * /*ctx*/) override { }
  virtual void exitCaptureList(CPPParser::CaptureListContext * /*ctx*/) override { }

  virtual void enterCapture(CPPParser::CaptureContext * /*ctx*/) override { }
  virtual void exitCapture(CPPParser::CaptureContext * /*ctx*/) override { }

  virtual void enterSimpleCapture(CPPParser::SimpleCaptureContext * /*ctx*/) override { }
  virtual void exitSimpleCapture(CPPParser::SimpleCaptureContext * /*ctx*/) override { }

  virtual void enterInitcapture(CPPParser::InitcaptureContext * /*ctx*/) override { }
  virtual void exitInitcapture(CPPParser::InitcaptureContext * /*ctx*/) override { }

  virtual void enterLambdaDeclarator(CPPParser::LambdaDeclaratorContext * /*ctx*/) override { }
  virtual void exitLambdaDeclarator(CPPParser::LambdaDeclaratorContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(CPPParser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(CPPParser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterTypeIdOfTheTypeId(CPPParser::TypeIdOfTheTypeIdContext * /*ctx*/) override { }
  virtual void exitTypeIdOfTheTypeId(CPPParser::TypeIdOfTheTypeIdContext * /*ctx*/) override { }

  virtual void enterExpressionList(CPPParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(CPPParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterPseudoDestructorName(CPPParser::PseudoDestructorNameContext * /*ctx*/) override { }
  virtual void exitPseudoDestructorName(CPPParser::PseudoDestructorNameContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(CPPParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(CPPParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryOperator(CPPParser::UnaryOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryOperator(CPPParser::UnaryOperatorContext * /*ctx*/) override { }

  virtual void enterNewExpression_(CPPParser::NewExpression_Context * /*ctx*/) override { }
  virtual void exitNewExpression_(CPPParser::NewExpression_Context * /*ctx*/) override { }

  virtual void enterNewPlacement(CPPParser::NewPlacementContext * /*ctx*/) override { }
  virtual void exitNewPlacement(CPPParser::NewPlacementContext * /*ctx*/) override { }

  virtual void enterNewTypeId(CPPParser::NewTypeIdContext * /*ctx*/) override { }
  virtual void exitNewTypeId(CPPParser::NewTypeIdContext * /*ctx*/) override { }

  virtual void enterNewDeclarator_(CPPParser::NewDeclarator_Context * /*ctx*/) override { }
  virtual void exitNewDeclarator_(CPPParser::NewDeclarator_Context * /*ctx*/) override { }

  virtual void enterNoPointerNewDeclarator(CPPParser::NoPointerNewDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerNewDeclarator(CPPParser::NoPointerNewDeclaratorContext * /*ctx*/) override { }

  virtual void enterNewInitializer_(CPPParser::NewInitializer_Context * /*ctx*/) override { }
  virtual void exitNewInitializer_(CPPParser::NewInitializer_Context * /*ctx*/) override { }

  virtual void enterDeleteExpression(CPPParser::DeleteExpressionContext * /*ctx*/) override { }
  virtual void exitDeleteExpression(CPPParser::DeleteExpressionContext * /*ctx*/) override { }

  virtual void enterNoExceptExpression(CPPParser::NoExceptExpressionContext * /*ctx*/) override { }
  virtual void exitNoExceptExpression(CPPParser::NoExceptExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(CPPParser::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(CPPParser::CastExpressionContext * /*ctx*/) override { }

  virtual void enterPointerMemberExpression(CPPParser::PointerMemberExpressionContext * /*ctx*/) override { }
  virtual void exitPointerMemberExpression(CPPParser::PointerMemberExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(CPPParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(CPPParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(CPPParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(CPPParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterShiftExpression(CPPParser::ShiftExpressionContext * /*ctx*/) override { }
  virtual void exitShiftExpression(CPPParser::ShiftExpressionContext * /*ctx*/) override { }

  virtual void enterShiftOperator(CPPParser::ShiftOperatorContext * /*ctx*/) override { }
  virtual void exitShiftOperator(CPPParser::ShiftOperatorContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(CPPParser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(CPPParser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(CPPParser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(CPPParser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterAndExpression(CPPParser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(CPPParser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterExclusiveOrExpression(CPPParser::ExclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitExclusiveOrExpression(CPPParser::ExclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterInclusiveOrExpression(CPPParser::InclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitInclusiveOrExpression(CPPParser::InclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalAndExpression(CPPParser::LogicalAndExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalAndExpression(CPPParser::LogicalAndExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalOrExpression(CPPParser::LogicalOrExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalOrExpression(CPPParser::LogicalOrExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(CPPParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(CPPParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(CPPParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(CPPParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(CPPParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(CPPParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterExpression(CPPParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CPPParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterConstantExpression(CPPParser::ConstantExpressionContext * /*ctx*/) override { }
  virtual void exitConstantExpression(CPPParser::ConstantExpressionContext * /*ctx*/) override { }

  virtual void enterStatement(CPPParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CPPParser::StatementContext * /*ctx*/) override { }

  virtual void enterLabeledStatement(CPPParser::LabeledStatementContext * /*ctx*/) override { }
  virtual void exitLabeledStatement(CPPParser::LabeledStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(CPPParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(CPPParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(CPPParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(CPPParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterStatementSeq(CPPParser::StatementSeqContext * /*ctx*/) override { }
  virtual void exitStatementSeq(CPPParser::StatementSeqContext * /*ctx*/) override { }

  virtual void enterSelectionStatement(CPPParser::SelectionStatementContext * /*ctx*/) override { }
  virtual void exitSelectionStatement(CPPParser::SelectionStatementContext * /*ctx*/) override { }

  virtual void enterCondition(CPPParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(CPPParser::ConditionContext * /*ctx*/) override { }

  virtual void enterIterationStatement(CPPParser::IterationStatementContext * /*ctx*/) override { }
  virtual void exitIterationStatement(CPPParser::IterationStatementContext * /*ctx*/) override { }

  virtual void enterForInitStatement(CPPParser::ForInitStatementContext * /*ctx*/) override { }
  virtual void exitForInitStatement(CPPParser::ForInitStatementContext * /*ctx*/) override { }

  virtual void enterForRangeDeclaration(CPPParser::ForRangeDeclarationContext * /*ctx*/) override { }
  virtual void exitForRangeDeclaration(CPPParser::ForRangeDeclarationContext * /*ctx*/) override { }

  virtual void enterForRangeInitializer(CPPParser::ForRangeInitializerContext * /*ctx*/) override { }
  virtual void exitForRangeInitializer(CPPParser::ForRangeInitializerContext * /*ctx*/) override { }

  virtual void enterJumpStatement(CPPParser::JumpStatementContext * /*ctx*/) override { }
  virtual void exitJumpStatement(CPPParser::JumpStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(CPPParser::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(CPPParser::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationseq(CPPParser::DeclarationseqContext * /*ctx*/) override { }
  virtual void exitDeclarationseq(CPPParser::DeclarationseqContext * /*ctx*/) override { }

  virtual void enterDeclaration(CPPParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(CPPParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterBlockDeclaration(CPPParser::BlockDeclarationContext * /*ctx*/) override { }
  virtual void exitBlockDeclaration(CPPParser::BlockDeclarationContext * /*ctx*/) override { }

  virtual void enterAliasDeclaration(CPPParser::AliasDeclarationContext * /*ctx*/) override { }
  virtual void exitAliasDeclaration(CPPParser::AliasDeclarationContext * /*ctx*/) override { }

  virtual void enterSimpleDeclaration(CPPParser::SimpleDeclarationContext * /*ctx*/) override { }
  virtual void exitSimpleDeclaration(CPPParser::SimpleDeclarationContext * /*ctx*/) override { }

  virtual void enterStaticAssertDeclaration(CPPParser::StaticAssertDeclarationContext * /*ctx*/) override { }
  virtual void exitStaticAssertDeclaration(CPPParser::StaticAssertDeclarationContext * /*ctx*/) override { }

  virtual void enterEmptyDeclaration_(CPPParser::EmptyDeclaration_Context * /*ctx*/) override { }
  virtual void exitEmptyDeclaration_(CPPParser::EmptyDeclaration_Context * /*ctx*/) override { }

  virtual void enterAttributeDeclaration(CPPParser::AttributeDeclarationContext * /*ctx*/) override { }
  virtual void exitAttributeDeclaration(CPPParser::AttributeDeclarationContext * /*ctx*/) override { }

  virtual void enterDeclSpecifier(CPPParser::DeclSpecifierContext * /*ctx*/) override { }
  virtual void exitDeclSpecifier(CPPParser::DeclSpecifierContext * /*ctx*/) override { }

  virtual void enterDeclSpecifierSeq(CPPParser::DeclSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitDeclSpecifierSeq(CPPParser::DeclSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterStorageClassSpecifier(CPPParser::StorageClassSpecifierContext * /*ctx*/) override { }
  virtual void exitStorageClassSpecifier(CPPParser::StorageClassSpecifierContext * /*ctx*/) override { }

  virtual void enterFunctionSpecifier(CPPParser::FunctionSpecifierContext * /*ctx*/) override { }
  virtual void exitFunctionSpecifier(CPPParser::FunctionSpecifierContext * /*ctx*/) override { }

  virtual void enterTypedefName(CPPParser::TypedefNameContext * /*ctx*/) override { }
  virtual void exitTypedefName(CPPParser::TypedefNameContext * /*ctx*/) override { }

  virtual void enterTypeSpecifier(CPPParser::TypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeSpecifier(CPPParser::TypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTrailingTypeSpecifier(CPPParser::TrailingTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTrailingTypeSpecifier(CPPParser::TrailingTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTypeSpecifierSeq(CPPParser::TypeSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitTypeSpecifierSeq(CPPParser::TypeSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterTrailingTypeSpecifierSeq(CPPParser::TrailingTypeSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitTrailingTypeSpecifierSeq(CPPParser::TrailingTypeSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterSimpleTypeLengthModifier(CPPParser::SimpleTypeLengthModifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeLengthModifier(CPPParser::SimpleTypeLengthModifierContext * /*ctx*/) override { }

  virtual void enterSimpleTypeSignednessModifier(CPPParser::SimpleTypeSignednessModifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeSignednessModifier(CPPParser::SimpleTypeSignednessModifierContext * /*ctx*/) override { }

  virtual void enterSimpleTypeSpecifier(CPPParser::SimpleTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeSpecifier(CPPParser::SimpleTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTheTypeName(CPPParser::TheTypeNameContext * /*ctx*/) override { }
  virtual void exitTheTypeName(CPPParser::TheTypeNameContext * /*ctx*/) override { }

  virtual void enterDecltypeSpecifier(CPPParser::DecltypeSpecifierContext * /*ctx*/) override { }
  virtual void exitDecltypeSpecifier(CPPParser::DecltypeSpecifierContext * /*ctx*/) override { }

  virtual void enterElaboratedTypeSpecifier(CPPParser::ElaboratedTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitElaboratedTypeSpecifier(CPPParser::ElaboratedTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumName(CPPParser::EnumNameContext * /*ctx*/) override { }
  virtual void exitEnumName(CPPParser::EnumNameContext * /*ctx*/) override { }

  virtual void enterEnumSpecifier(CPPParser::EnumSpecifierContext * /*ctx*/) override { }
  virtual void exitEnumSpecifier(CPPParser::EnumSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumHead(CPPParser::EnumHeadContext * /*ctx*/) override { }
  virtual void exitEnumHead(CPPParser::EnumHeadContext * /*ctx*/) override { }

  virtual void enterOpaqueEnumDeclaration(CPPParser::OpaqueEnumDeclarationContext * /*ctx*/) override { }
  virtual void exitOpaqueEnumDeclaration(CPPParser::OpaqueEnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumkey(CPPParser::EnumkeyContext * /*ctx*/) override { }
  virtual void exitEnumkey(CPPParser::EnumkeyContext * /*ctx*/) override { }

  virtual void enterEnumbase(CPPParser::EnumbaseContext * /*ctx*/) override { }
  virtual void exitEnumbase(CPPParser::EnumbaseContext * /*ctx*/) override { }

  virtual void enterEnumeratorList(CPPParser::EnumeratorListContext * /*ctx*/) override { }
  virtual void exitEnumeratorList(CPPParser::EnumeratorListContext * /*ctx*/) override { }

  virtual void enterEnumeratorDefinition(CPPParser::EnumeratorDefinitionContext * /*ctx*/) override { }
  virtual void exitEnumeratorDefinition(CPPParser::EnumeratorDefinitionContext * /*ctx*/) override { }

  virtual void enterEnumerator(CPPParser::EnumeratorContext * /*ctx*/) override { }
  virtual void exitEnumerator(CPPParser::EnumeratorContext * /*ctx*/) override { }

  virtual void enterNamespaceName(CPPParser::NamespaceNameContext * /*ctx*/) override { }
  virtual void exitNamespaceName(CPPParser::NamespaceNameContext * /*ctx*/) override { }

  virtual void enterOriginalNamespaceName(CPPParser::OriginalNamespaceNameContext * /*ctx*/) override { }
  virtual void exitOriginalNamespaceName(CPPParser::OriginalNamespaceNameContext * /*ctx*/) override { }

  virtual void enterNamespaceDefinition(CPPParser::NamespaceDefinitionContext * /*ctx*/) override { }
  virtual void exitNamespaceDefinition(CPPParser::NamespaceDefinitionContext * /*ctx*/) override { }

  virtual void enterNamespaceAlias(CPPParser::NamespaceAliasContext * /*ctx*/) override { }
  virtual void exitNamespaceAlias(CPPParser::NamespaceAliasContext * /*ctx*/) override { }

  virtual void enterNamespaceAliasDefinition(CPPParser::NamespaceAliasDefinitionContext * /*ctx*/) override { }
  virtual void exitNamespaceAliasDefinition(CPPParser::NamespaceAliasDefinitionContext * /*ctx*/) override { }

  virtual void enterQualifiednamespacespecifier(CPPParser::QualifiednamespacespecifierContext * /*ctx*/) override { }
  virtual void exitQualifiednamespacespecifier(CPPParser::QualifiednamespacespecifierContext * /*ctx*/) override { }

  virtual void enterUsingDeclaration(CPPParser::UsingDeclarationContext * /*ctx*/) override { }
  virtual void exitUsingDeclaration(CPPParser::UsingDeclarationContext * /*ctx*/) override { }

  virtual void enterUsingDirective(CPPParser::UsingDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingDirective(CPPParser::UsingDirectiveContext * /*ctx*/) override { }

  virtual void enterAsmDefinition(CPPParser::AsmDefinitionContext * /*ctx*/) override { }
  virtual void exitAsmDefinition(CPPParser::AsmDefinitionContext * /*ctx*/) override { }

  virtual void enterLinkageSpecification(CPPParser::LinkageSpecificationContext * /*ctx*/) override { }
  virtual void exitLinkageSpecification(CPPParser::LinkageSpecificationContext * /*ctx*/) override { }

  virtual void enterAttributeSpecifierSeq(CPPParser::AttributeSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitAttributeSpecifierSeq(CPPParser::AttributeSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterAttributeSpecifier(CPPParser::AttributeSpecifierContext * /*ctx*/) override { }
  virtual void exitAttributeSpecifier(CPPParser::AttributeSpecifierContext * /*ctx*/) override { }

  virtual void enterAlignmentspecifier(CPPParser::AlignmentspecifierContext * /*ctx*/) override { }
  virtual void exitAlignmentspecifier(CPPParser::AlignmentspecifierContext * /*ctx*/) override { }

  virtual void enterAttributeList(CPPParser::AttributeListContext * /*ctx*/) override { }
  virtual void exitAttributeList(CPPParser::AttributeListContext * /*ctx*/) override { }

  virtual void enterAttribute(CPPParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(CPPParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttributeNamespace(CPPParser::AttributeNamespaceContext * /*ctx*/) override { }
  virtual void exitAttributeNamespace(CPPParser::AttributeNamespaceContext * /*ctx*/) override { }

  virtual void enterAttributeArgumentClause(CPPParser::AttributeArgumentClauseContext * /*ctx*/) override { }
  virtual void exitAttributeArgumentClause(CPPParser::AttributeArgumentClauseContext * /*ctx*/) override { }

  virtual void enterBalancedTokenSeq(CPPParser::BalancedTokenSeqContext * /*ctx*/) override { }
  virtual void exitBalancedTokenSeq(CPPParser::BalancedTokenSeqContext * /*ctx*/) override { }

  virtual void enterBalancedtoken(CPPParser::BalancedtokenContext * /*ctx*/) override { }
  virtual void exitBalancedtoken(CPPParser::BalancedtokenContext * /*ctx*/) override { }

  virtual void enterInitDeclaratorList(CPPParser::InitDeclaratorListContext * /*ctx*/) override { }
  virtual void exitInitDeclaratorList(CPPParser::InitDeclaratorListContext * /*ctx*/) override { }

  virtual void enterInitDeclarator(CPPParser::InitDeclaratorContext * /*ctx*/) override { }
  virtual void exitInitDeclarator(CPPParser::InitDeclaratorContext * /*ctx*/) override { }

  virtual void enterDeclarator(CPPParser::DeclaratorContext * /*ctx*/) override { }
  virtual void exitDeclarator(CPPParser::DeclaratorContext * /*ctx*/) override { }

  virtual void enterPointerDeclarator(CPPParser::PointerDeclaratorContext * /*ctx*/) override { }
  virtual void exitPointerDeclarator(CPPParser::PointerDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerDeclarator(CPPParser::NoPointerDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerDeclarator(CPPParser::NoPointerDeclaratorContext * /*ctx*/) override { }

  virtual void enterParametersAndQualifiers(CPPParser::ParametersAndQualifiersContext * /*ctx*/) override { }
  virtual void exitParametersAndQualifiers(CPPParser::ParametersAndQualifiersContext * /*ctx*/) override { }

  virtual void enterTrailingReturnType(CPPParser::TrailingReturnTypeContext * /*ctx*/) override { }
  virtual void exitTrailingReturnType(CPPParser::TrailingReturnTypeContext * /*ctx*/) override { }

  virtual void enterPointerOperator(CPPParser::PointerOperatorContext * /*ctx*/) override { }
  virtual void exitPointerOperator(CPPParser::PointerOperatorContext * /*ctx*/) override { }

  virtual void enterCvqualifierseq(CPPParser::CvqualifierseqContext * /*ctx*/) override { }
  virtual void exitCvqualifierseq(CPPParser::CvqualifierseqContext * /*ctx*/) override { }

  virtual void enterCvQualifier(CPPParser::CvQualifierContext * /*ctx*/) override { }
  virtual void exitCvQualifier(CPPParser::CvQualifierContext * /*ctx*/) override { }

  virtual void enterRefqualifier(CPPParser::RefqualifierContext * /*ctx*/) override { }
  virtual void exitRefqualifier(CPPParser::RefqualifierContext * /*ctx*/) override { }

  virtual void enterDeclaratorid(CPPParser::DeclaratoridContext * /*ctx*/) override { }
  virtual void exitDeclaratorid(CPPParser::DeclaratoridContext * /*ctx*/) override { }

  virtual void enterTheTypeId(CPPParser::TheTypeIdContext * /*ctx*/) override { }
  virtual void exitTheTypeId(CPPParser::TheTypeIdContext * /*ctx*/) override { }

  virtual void enterAbstractDeclarator(CPPParser::AbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractDeclarator(CPPParser::AbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterPointerAbstractDeclarator(CPPParser::PointerAbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitPointerAbstractDeclarator(CPPParser::PointerAbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerAbstractDeclarator(CPPParser::NoPointerAbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerAbstractDeclarator(CPPParser::NoPointerAbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterAbstractPackDeclarator(CPPParser::AbstractPackDeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractPackDeclarator(CPPParser::AbstractPackDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerAbstractPackDeclarator(CPPParser::NoPointerAbstractPackDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerAbstractPackDeclarator(CPPParser::NoPointerAbstractPackDeclaratorContext * /*ctx*/) override { }

  virtual void enterParameterDeclarationClause(CPPParser::ParameterDeclarationClauseContext * /*ctx*/) override { }
  virtual void exitParameterDeclarationClause(CPPParser::ParameterDeclarationClauseContext * /*ctx*/) override { }

  virtual void enterParameterDeclarationList(CPPParser::ParameterDeclarationListContext * /*ctx*/) override { }
  virtual void exitParameterDeclarationList(CPPParser::ParameterDeclarationListContext * /*ctx*/) override { }

  virtual void enterParameterDeclaration(CPPParser::ParameterDeclarationContext * /*ctx*/) override { }
  virtual void exitParameterDeclaration(CPPParser::ParameterDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(CPPParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(CPPParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionBody(CPPParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(CPPParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterInitializer(CPPParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(CPPParser::InitializerContext * /*ctx*/) override { }

  virtual void enterBraceOrEqualInitializer(CPPParser::BraceOrEqualInitializerContext * /*ctx*/) override { }
  virtual void exitBraceOrEqualInitializer(CPPParser::BraceOrEqualInitializerContext * /*ctx*/) override { }

  virtual void enterInitializerClause(CPPParser::InitializerClauseContext * /*ctx*/) override { }
  virtual void exitInitializerClause(CPPParser::InitializerClauseContext * /*ctx*/) override { }

  virtual void enterInitializerList(CPPParser::InitializerListContext * /*ctx*/) override { }
  virtual void exitInitializerList(CPPParser::InitializerListContext * /*ctx*/) override { }

  virtual void enterBracedInitList(CPPParser::BracedInitListContext * /*ctx*/) override { }
  virtual void exitBracedInitList(CPPParser::BracedInitListContext * /*ctx*/) override { }

  virtual void enterClassName(CPPParser::ClassNameContext * /*ctx*/) override { }
  virtual void exitClassName(CPPParser::ClassNameContext * /*ctx*/) override { }

  virtual void enterClassSpecifier(CPPParser::ClassSpecifierContext * /*ctx*/) override { }
  virtual void exitClassSpecifier(CPPParser::ClassSpecifierContext * /*ctx*/) override { }

  virtual void enterClassHead(CPPParser::ClassHeadContext * /*ctx*/) override { }
  virtual void exitClassHead(CPPParser::ClassHeadContext * /*ctx*/) override { }

  virtual void enterClassHeadName(CPPParser::ClassHeadNameContext * /*ctx*/) override { }
  virtual void exitClassHeadName(CPPParser::ClassHeadNameContext * /*ctx*/) override { }

  virtual void enterClassVirtSpecifier(CPPParser::ClassVirtSpecifierContext * /*ctx*/) override { }
  virtual void exitClassVirtSpecifier(CPPParser::ClassVirtSpecifierContext * /*ctx*/) override { }

  virtual void enterClassKey(CPPParser::ClassKeyContext * /*ctx*/) override { }
  virtual void exitClassKey(CPPParser::ClassKeyContext * /*ctx*/) override { }

  virtual void enterMemberSpecification(CPPParser::MemberSpecificationContext * /*ctx*/) override { }
  virtual void exitMemberSpecification(CPPParser::MemberSpecificationContext * /*ctx*/) override { }

  virtual void enterMemberdeclaration(CPPParser::MemberdeclarationContext * /*ctx*/) override { }
  virtual void exitMemberdeclaration(CPPParser::MemberdeclarationContext * /*ctx*/) override { }

  virtual void enterMemberDeclaratorList(CPPParser::MemberDeclaratorListContext * /*ctx*/) override { }
  virtual void exitMemberDeclaratorList(CPPParser::MemberDeclaratorListContext * /*ctx*/) override { }

  virtual void enterMemberDeclarator(CPPParser::MemberDeclaratorContext * /*ctx*/) override { }
  virtual void exitMemberDeclarator(CPPParser::MemberDeclaratorContext * /*ctx*/) override { }

  virtual void enterVirtualSpecifierSeq(CPPParser::VirtualSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitVirtualSpecifierSeq(CPPParser::VirtualSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterVirtualSpecifier(CPPParser::VirtualSpecifierContext * /*ctx*/) override { }
  virtual void exitVirtualSpecifier(CPPParser::VirtualSpecifierContext * /*ctx*/) override { }

  virtual void enterPureSpecifier(CPPParser::PureSpecifierContext * /*ctx*/) override { }
  virtual void exitPureSpecifier(CPPParser::PureSpecifierContext * /*ctx*/) override { }

  virtual void enterBaseClause(CPPParser::BaseClauseContext * /*ctx*/) override { }
  virtual void exitBaseClause(CPPParser::BaseClauseContext * /*ctx*/) override { }

  virtual void enterBaseSpecifierList(CPPParser::BaseSpecifierListContext * /*ctx*/) override { }
  virtual void exitBaseSpecifierList(CPPParser::BaseSpecifierListContext * /*ctx*/) override { }

  virtual void enterBaseSpecifier(CPPParser::BaseSpecifierContext * /*ctx*/) override { }
  virtual void exitBaseSpecifier(CPPParser::BaseSpecifierContext * /*ctx*/) override { }

  virtual void enterClassOrDeclType(CPPParser::ClassOrDeclTypeContext * /*ctx*/) override { }
  virtual void exitClassOrDeclType(CPPParser::ClassOrDeclTypeContext * /*ctx*/) override { }

  virtual void enterBaseTypeSpecifier(CPPParser::BaseTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitBaseTypeSpecifier(CPPParser::BaseTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterAccessSpecifier(CPPParser::AccessSpecifierContext * /*ctx*/) override { }
  virtual void exitAccessSpecifier(CPPParser::AccessSpecifierContext * /*ctx*/) override { }

  virtual void enterConversionFunctionId(CPPParser::ConversionFunctionIdContext * /*ctx*/) override { }
  virtual void exitConversionFunctionId(CPPParser::ConversionFunctionIdContext * /*ctx*/) override { }

  virtual void enterConversionTypeId(CPPParser::ConversionTypeIdContext * /*ctx*/) override { }
  virtual void exitConversionTypeId(CPPParser::ConversionTypeIdContext * /*ctx*/) override { }

  virtual void enterConversionDeclarator(CPPParser::ConversionDeclaratorContext * /*ctx*/) override { }
  virtual void exitConversionDeclarator(CPPParser::ConversionDeclaratorContext * /*ctx*/) override { }

  virtual void enterConstructorInitializer(CPPParser::ConstructorInitializerContext * /*ctx*/) override { }
  virtual void exitConstructorInitializer(CPPParser::ConstructorInitializerContext * /*ctx*/) override { }

  virtual void enterMemInitializerList(CPPParser::MemInitializerListContext * /*ctx*/) override { }
  virtual void exitMemInitializerList(CPPParser::MemInitializerListContext * /*ctx*/) override { }

  virtual void enterMemInitializer(CPPParser::MemInitializerContext * /*ctx*/) override { }
  virtual void exitMemInitializer(CPPParser::MemInitializerContext * /*ctx*/) override { }

  virtual void enterMeminitializerid(CPPParser::MeminitializeridContext * /*ctx*/) override { }
  virtual void exitMeminitializerid(CPPParser::MeminitializeridContext * /*ctx*/) override { }

  virtual void enterOperatorFunctionId(CPPParser::OperatorFunctionIdContext * /*ctx*/) override { }
  virtual void exitOperatorFunctionId(CPPParser::OperatorFunctionIdContext * /*ctx*/) override { }

  virtual void enterLiteralOperatorId(CPPParser::LiteralOperatorIdContext * /*ctx*/) override { }
  virtual void exitLiteralOperatorId(CPPParser::LiteralOperatorIdContext * /*ctx*/) override { }

  virtual void enterTemplateDeclaration(CPPParser::TemplateDeclarationContext * /*ctx*/) override { }
  virtual void exitTemplateDeclaration(CPPParser::TemplateDeclarationContext * /*ctx*/) override { }

  virtual void enterTemplateparameterList(CPPParser::TemplateparameterListContext * /*ctx*/) override { }
  virtual void exitTemplateparameterList(CPPParser::TemplateparameterListContext * /*ctx*/) override { }

  virtual void enterTemplateParameter(CPPParser::TemplateParameterContext * /*ctx*/) override { }
  virtual void exitTemplateParameter(CPPParser::TemplateParameterContext * /*ctx*/) override { }

  virtual void enterTypeParameter(CPPParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(CPPParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterSimpleTemplateId(CPPParser::SimpleTemplateIdContext * /*ctx*/) override { }
  virtual void exitSimpleTemplateId(CPPParser::SimpleTemplateIdContext * /*ctx*/) override { }

  virtual void enterTemplateId(CPPParser::TemplateIdContext * /*ctx*/) override { }
  virtual void exitTemplateId(CPPParser::TemplateIdContext * /*ctx*/) override { }

  virtual void enterTemplateName(CPPParser::TemplateNameContext * /*ctx*/) override { }
  virtual void exitTemplateName(CPPParser::TemplateNameContext * /*ctx*/) override { }

  virtual void enterTemplateArgumentList(CPPParser::TemplateArgumentListContext * /*ctx*/) override { }
  virtual void exitTemplateArgumentList(CPPParser::TemplateArgumentListContext * /*ctx*/) override { }

  virtual void enterTemplateArgument(CPPParser::TemplateArgumentContext * /*ctx*/) override { }
  virtual void exitTemplateArgument(CPPParser::TemplateArgumentContext * /*ctx*/) override { }

  virtual void enterTypeNameSpecifier(CPPParser::TypeNameSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeNameSpecifier(CPPParser::TypeNameSpecifierContext * /*ctx*/) override { }

  virtual void enterExplicitInstantiation(CPPParser::ExplicitInstantiationContext * /*ctx*/) override { }
  virtual void exitExplicitInstantiation(CPPParser::ExplicitInstantiationContext * /*ctx*/) override { }

  virtual void enterExplicitSpecialization(CPPParser::ExplicitSpecializationContext * /*ctx*/) override { }
  virtual void exitExplicitSpecialization(CPPParser::ExplicitSpecializationContext * /*ctx*/) override { }

  virtual void enterTryBlock(CPPParser::TryBlockContext * /*ctx*/) override { }
  virtual void exitTryBlock(CPPParser::TryBlockContext * /*ctx*/) override { }

  virtual void enterFunctionTryBlock(CPPParser::FunctionTryBlockContext * /*ctx*/) override { }
  virtual void exitFunctionTryBlock(CPPParser::FunctionTryBlockContext * /*ctx*/) override { }

  virtual void enterHandlerSeq(CPPParser::HandlerSeqContext * /*ctx*/) override { }
  virtual void exitHandlerSeq(CPPParser::HandlerSeqContext * /*ctx*/) override { }

  virtual void enterHandler(CPPParser::HandlerContext * /*ctx*/) override { }
  virtual void exitHandler(CPPParser::HandlerContext * /*ctx*/) override { }

  virtual void enterExceptionDeclaration(CPPParser::ExceptionDeclarationContext * /*ctx*/) override { }
  virtual void exitExceptionDeclaration(CPPParser::ExceptionDeclarationContext * /*ctx*/) override { }

  virtual void enterThrowExpression(CPPParser::ThrowExpressionContext * /*ctx*/) override { }
  virtual void exitThrowExpression(CPPParser::ThrowExpressionContext * /*ctx*/) override { }

  virtual void enterExceptionSpecification(CPPParser::ExceptionSpecificationContext * /*ctx*/) override { }
  virtual void exitExceptionSpecification(CPPParser::ExceptionSpecificationContext * /*ctx*/) override { }

  virtual void enterDynamicExceptionSpecification(CPPParser::DynamicExceptionSpecificationContext * /*ctx*/) override { }
  virtual void exitDynamicExceptionSpecification(CPPParser::DynamicExceptionSpecificationContext * /*ctx*/) override { }

  virtual void enterTypeIdList(CPPParser::TypeIdListContext * /*ctx*/) override { }
  virtual void exitTypeIdList(CPPParser::TypeIdListContext * /*ctx*/) override { }

  virtual void enterNoeExceptSpecification(CPPParser::NoeExceptSpecificationContext * /*ctx*/) override { }
  virtual void exitNoeExceptSpecification(CPPParser::NoeExceptSpecificationContext * /*ctx*/) override { }

  virtual void enterTheOperator(CPPParser::TheOperatorContext * /*ctx*/) override { }
  virtual void exitTheOperator(CPPParser::TheOperatorContext * /*ctx*/) override { }

  virtual void enterLiteral(CPPParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(CPPParser::LiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace ClamParser
