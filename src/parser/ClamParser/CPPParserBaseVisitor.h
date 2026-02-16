#include "CPPParserBase.h"

// Generated from CPPParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CPPParserVisitor.h"


namespace ClamParser {

/**
 * This class provides an empty implementation of CPPParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CPPParserBaseVisitor : public CPPParserVisitor {
public:

  virtual std::any visitTranslationUnit(CPPParser::TranslationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExpression(CPPParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdExpression(CPPParser::IdExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnqualifiedId(CPPParser::UnqualifiedIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedId(CPPParser::QualifiedIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNestedNameSpecifier(CPPParser::NestedNameSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaExpression(CPPParser::LambdaExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaIntroducer(CPPParser::LambdaIntroducerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaCapture(CPPParser::LambdaCaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaptureDefault(CPPParser::CaptureDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaptureList(CPPParser::CaptureListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCapture(CPPParser::CaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleCapture(CPPParser::SimpleCaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitcapture(CPPParser::InitcaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaDeclarator(CPPParser::LambdaDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixExpression(CPPParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeIdOfTheTypeId(CPPParser::TypeIdOfTheTypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionList(CPPParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPseudoDestructorName(CPPParser::PseudoDestructorNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpression(CPPParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOperator(CPPParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewExpression_(CPPParser::NewExpression_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewPlacement(CPPParser::NewPlacementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewTypeId(CPPParser::NewTypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewDeclarator_(CPPParser::NewDeclarator_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoPointerNewDeclarator(CPPParser::NoPointerNewDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewInitializer_(CPPParser::NewInitializer_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeleteExpression(CPPParser::DeleteExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoExceptExpression(CPPParser::NoExceptExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCastExpression(CPPParser::CastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerMemberExpression(CPPParser::PointerMemberExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpression(CPPParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpression(CPPParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftExpression(CPPParser::ShiftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftOperator(CPPParser::ShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpression(CPPParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityExpression(CPPParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpression(CPPParser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusiveOrExpression(CPPParser::ExclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclusiveOrExpression(CPPParser::InclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAndExpression(CPPParser::LogicalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOrExpression(CPPParser::LogicalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalExpression(CPPParser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentExpression(CPPParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentOperator(CPPParser::AssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(CPPParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantExpression(CPPParser::ConstantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(CPPParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabeledStatement(CPPParser::LabeledStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(CPPParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(CPPParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementSeq(CPPParser::StatementSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectionStatement(CPPParser::SelectionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(CPPParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIterationStatement(CPPParser::IterationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForInitStatement(CPPParser::ForInitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForRangeDeclaration(CPPParser::ForRangeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForRangeInitializer(CPPParser::ForRangeInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJumpStatement(CPPParser::JumpStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationStatement(CPPParser::DeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationseq(CPPParser::DeclarationseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(CPPParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockDeclaration(CPPParser::BlockDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasDeclaration(CPPParser::AliasDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleDeclaration(CPPParser::SimpleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStaticAssertDeclaration(CPPParser::StaticAssertDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyDeclaration_(CPPParser::EmptyDeclaration_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeDeclaration(CPPParser::AttributeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclSpecifier(CPPParser::DeclSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclSpecifierSeq(CPPParser::DeclSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStorageClassSpecifier(CPPParser::StorageClassSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionSpecifier(CPPParser::FunctionSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypedefName(CPPParser::TypedefNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifier(CPPParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailingTypeSpecifier(CPPParser::TrailingTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifierSeq(CPPParser::TypeSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailingTypeSpecifierSeq(CPPParser::TrailingTypeSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTypeLengthModifier(CPPParser::SimpleTypeLengthModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTypeSignednessModifier(CPPParser::SimpleTypeSignednessModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTypeSpecifier(CPPParser::SimpleTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheTypeName(CPPParser::TheTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecltypeSpecifier(CPPParser::DecltypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElaboratedTypeSpecifier(CPPParser::ElaboratedTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumName(CPPParser::EnumNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumSpecifier(CPPParser::EnumSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumHead(CPPParser::EnumHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpaqueEnumDeclaration(CPPParser::OpaqueEnumDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumkey(CPPParser::EnumkeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumbase(CPPParser::EnumbaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratorList(CPPParser::EnumeratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratorDefinition(CPPParser::EnumeratorDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumerator(CPPParser::EnumeratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespaceName(CPPParser::NamespaceNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOriginalNamespaceName(CPPParser::OriginalNamespaceNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespaceDefinition(CPPParser::NamespaceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespaceAlias(CPPParser::NamespaceAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespaceAliasDefinition(CPPParser::NamespaceAliasDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiednamespacespecifier(CPPParser::QualifiednamespacespecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsingDeclaration(CPPParser::UsingDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsingDirective(CPPParser::UsingDirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsmDefinition(CPPParser::AsmDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLinkageSpecification(CPPParser::LinkageSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeSpecifierSeq(CPPParser::AttributeSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeSpecifier(CPPParser::AttributeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlignmentspecifier(CPPParser::AlignmentspecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeList(CPPParser::AttributeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute(CPPParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeNamespace(CPPParser::AttributeNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeArgumentClause(CPPParser::AttributeArgumentClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBalancedTokenSeq(CPPParser::BalancedTokenSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBalancedtoken(CPPParser::BalancedtokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitDeclaratorList(CPPParser::InitDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitDeclarator(CPPParser::InitDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarator(CPPParser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerDeclarator(CPPParser::PointerDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoPointerDeclarator(CPPParser::NoPointerDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParametersAndQualifiers(CPPParser::ParametersAndQualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailingReturnType(CPPParser::TrailingReturnTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerOperator(CPPParser::PointerOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCvqualifierseq(CPPParser::CvqualifierseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCvQualifier(CPPParser::CvQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefqualifier(CPPParser::RefqualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaratorid(CPPParser::DeclaratoridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheTypeId(CPPParser::TheTypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbstractDeclarator(CPPParser::AbstractDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerAbstractDeclarator(CPPParser::PointerAbstractDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoPointerAbstractDeclarator(CPPParser::NoPointerAbstractDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbstractPackDeclarator(CPPParser::AbstractPackDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoPointerAbstractPackDeclarator(CPPParser::NoPointerAbstractPackDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterDeclarationClause(CPPParser::ParameterDeclarationClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterDeclarationList(CPPParser::ParameterDeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterDeclaration(CPPParser::ParameterDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(CPPParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionBody(CPPParser::FunctionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer(CPPParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBraceOrEqualInitializer(CPPParser::BraceOrEqualInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerClause(CPPParser::InitializerClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerList(CPPParser::InitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracedInitList(CPPParser::BracedInitListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassName(CPPParser::ClassNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassSpecifier(CPPParser::ClassSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassHead(CPPParser::ClassHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassHeadName(CPPParser::ClassHeadNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassVirtSpecifier(CPPParser::ClassVirtSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassKey(CPPParser::ClassKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberSpecification(CPPParser::MemberSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberdeclaration(CPPParser::MemberdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberDeclaratorList(CPPParser::MemberDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberDeclarator(CPPParser::MemberDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVirtualSpecifierSeq(CPPParser::VirtualSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVirtualSpecifier(CPPParser::VirtualSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPureSpecifier(CPPParser::PureSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseClause(CPPParser::BaseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseSpecifierList(CPPParser::BaseSpecifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseSpecifier(CPPParser::BaseSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassOrDeclType(CPPParser::ClassOrDeclTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseTypeSpecifier(CPPParser::BaseTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessSpecifier(CPPParser::AccessSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConversionFunctionId(CPPParser::ConversionFunctionIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConversionTypeId(CPPParser::ConversionTypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConversionDeclarator(CPPParser::ConversionDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorInitializer(CPPParser::ConstructorInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemInitializerList(CPPParser::MemInitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemInitializer(CPPParser::MemInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMeminitializerid(CPPParser::MeminitializeridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatorFunctionId(CPPParser::OperatorFunctionIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteralOperatorId(CPPParser::LiteralOperatorIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateDeclaration(CPPParser::TemplateDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateparameterList(CPPParser::TemplateparameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateParameter(CPPParser::TemplateParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParameter(CPPParser::TypeParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTemplateId(CPPParser::SimpleTemplateIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateId(CPPParser::TemplateIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateName(CPPParser::TemplateNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateArgumentList(CPPParser::TemplateArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateArgument(CPPParser::TemplateArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeNameSpecifier(CPPParser::TypeNameSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplicitInstantiation(CPPParser::ExplicitInstantiationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplicitSpecialization(CPPParser::ExplicitSpecializationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTryBlock(CPPParser::TryBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionTryBlock(CPPParser::FunctionTryBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHandlerSeq(CPPParser::HandlerSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHandler(CPPParser::HandlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionDeclaration(CPPParser::ExceptionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrowExpression(CPPParser::ThrowExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionSpecification(CPPParser::ExceptionSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDynamicExceptionSpecification(CPPParser::DynamicExceptionSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeIdList(CPPParser::TypeIdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoeExceptSpecification(CPPParser::NoeExceptSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheOperator(CPPParser::TheOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(CPPParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace ClamParser
