#include "CPPParserBase.h"

// Generated from CPPParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "CPPParser.h"


namespace ClamParser {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by CPPParser.
 */
class  CPPParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CPPParser.
   */
    virtual std::any visitTranslationUnit(CPPParser::TranslationUnitContext *context) = 0;

    virtual std::any visitPrimaryExpression(CPPParser::PrimaryExpressionContext *context) = 0;

    virtual std::any visitIdExpression(CPPParser::IdExpressionContext *context) = 0;

    virtual std::any visitUnqualifiedId(CPPParser::UnqualifiedIdContext *context) = 0;

    virtual std::any visitQualifiedId(CPPParser::QualifiedIdContext *context) = 0;

    virtual std::any visitNestedNameSpecifier(CPPParser::NestedNameSpecifierContext *context) = 0;

    virtual std::any visitLambdaExpression(CPPParser::LambdaExpressionContext *context) = 0;

    virtual std::any visitLambdaIntroducer(CPPParser::LambdaIntroducerContext *context) = 0;

    virtual std::any visitLambdaCapture(CPPParser::LambdaCaptureContext *context) = 0;

    virtual std::any visitCaptureDefault(CPPParser::CaptureDefaultContext *context) = 0;

    virtual std::any visitCaptureList(CPPParser::CaptureListContext *context) = 0;

    virtual std::any visitCapture(CPPParser::CaptureContext *context) = 0;

    virtual std::any visitSimpleCapture(CPPParser::SimpleCaptureContext *context) = 0;

    virtual std::any visitInitcapture(CPPParser::InitcaptureContext *context) = 0;

    virtual std::any visitLambdaDeclarator(CPPParser::LambdaDeclaratorContext *context) = 0;

    virtual std::any visitPostfixExpression(CPPParser::PostfixExpressionContext *context) = 0;

    virtual std::any visitTypeIdOfTheTypeId(CPPParser::TypeIdOfTheTypeIdContext *context) = 0;

    virtual std::any visitExpressionList(CPPParser::ExpressionListContext *context) = 0;

    virtual std::any visitPseudoDestructorName(CPPParser::PseudoDestructorNameContext *context) = 0;

    virtual std::any visitUnaryExpression(CPPParser::UnaryExpressionContext *context) = 0;

    virtual std::any visitUnaryOperator(CPPParser::UnaryOperatorContext *context) = 0;

    virtual std::any visitNewExpression_(CPPParser::NewExpression_Context *context) = 0;

    virtual std::any visitNewPlacement(CPPParser::NewPlacementContext *context) = 0;

    virtual std::any visitNewTypeId(CPPParser::NewTypeIdContext *context) = 0;

    virtual std::any visitNewDeclarator_(CPPParser::NewDeclarator_Context *context) = 0;

    virtual std::any visitNoPointerNewDeclarator(CPPParser::NoPointerNewDeclaratorContext *context) = 0;

    virtual std::any visitNewInitializer_(CPPParser::NewInitializer_Context *context) = 0;

    virtual std::any visitDeleteExpression(CPPParser::DeleteExpressionContext *context) = 0;

    virtual std::any visitNoExceptExpression(CPPParser::NoExceptExpressionContext *context) = 0;

    virtual std::any visitCastExpression(CPPParser::CastExpressionContext *context) = 0;

    virtual std::any visitPointerMemberExpression(CPPParser::PointerMemberExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(CPPParser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(CPPParser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitShiftExpression(CPPParser::ShiftExpressionContext *context) = 0;

    virtual std::any visitShiftOperator(CPPParser::ShiftOperatorContext *context) = 0;

    virtual std::any visitRelationalExpression(CPPParser::RelationalExpressionContext *context) = 0;

    virtual std::any visitEqualityExpression(CPPParser::EqualityExpressionContext *context) = 0;

    virtual std::any visitAndExpression(CPPParser::AndExpressionContext *context) = 0;

    virtual std::any visitExclusiveOrExpression(CPPParser::ExclusiveOrExpressionContext *context) = 0;

    virtual std::any visitInclusiveOrExpression(CPPParser::InclusiveOrExpressionContext *context) = 0;

    virtual std::any visitLogicalAndExpression(CPPParser::LogicalAndExpressionContext *context) = 0;

    virtual std::any visitLogicalOrExpression(CPPParser::LogicalOrExpressionContext *context) = 0;

    virtual std::any visitConditionalExpression(CPPParser::ConditionalExpressionContext *context) = 0;

    virtual std::any visitAssignmentExpression(CPPParser::AssignmentExpressionContext *context) = 0;

    virtual std::any visitAssignmentOperator(CPPParser::AssignmentOperatorContext *context) = 0;

    virtual std::any visitExpression(CPPParser::ExpressionContext *context) = 0;

    virtual std::any visitConstantExpression(CPPParser::ConstantExpressionContext *context) = 0;

    virtual std::any visitStatement(CPPParser::StatementContext *context) = 0;

    virtual std::any visitLabeledStatement(CPPParser::LabeledStatementContext *context) = 0;

    virtual std::any visitExpressionStatement(CPPParser::ExpressionStatementContext *context) = 0;

    virtual std::any visitCompoundStatement(CPPParser::CompoundStatementContext *context) = 0;

    virtual std::any visitStatementSeq(CPPParser::StatementSeqContext *context) = 0;

    virtual std::any visitSelectionStatement(CPPParser::SelectionStatementContext *context) = 0;

    virtual std::any visitCondition(CPPParser::ConditionContext *context) = 0;

    virtual std::any visitIterationStatement(CPPParser::IterationStatementContext *context) = 0;

    virtual std::any visitForInitStatement(CPPParser::ForInitStatementContext *context) = 0;

    virtual std::any visitForRangeDeclaration(CPPParser::ForRangeDeclarationContext *context) = 0;

    virtual std::any visitForRangeInitializer(CPPParser::ForRangeInitializerContext *context) = 0;

    virtual std::any visitJumpStatement(CPPParser::JumpStatementContext *context) = 0;

    virtual std::any visitDeclarationStatement(CPPParser::DeclarationStatementContext *context) = 0;

    virtual std::any visitDeclarationseq(CPPParser::DeclarationseqContext *context) = 0;

    virtual std::any visitDeclaration(CPPParser::DeclarationContext *context) = 0;

    virtual std::any visitBlockDeclaration(CPPParser::BlockDeclarationContext *context) = 0;

    virtual std::any visitAliasDeclaration(CPPParser::AliasDeclarationContext *context) = 0;

    virtual std::any visitSimpleDeclaration(CPPParser::SimpleDeclarationContext *context) = 0;

    virtual std::any visitStaticAssertDeclaration(CPPParser::StaticAssertDeclarationContext *context) = 0;

    virtual std::any visitEmptyDeclaration_(CPPParser::EmptyDeclaration_Context *context) = 0;

    virtual std::any visitAttributeDeclaration(CPPParser::AttributeDeclarationContext *context) = 0;

    virtual std::any visitDeclSpecifier(CPPParser::DeclSpecifierContext *context) = 0;

    virtual std::any visitDeclSpecifierSeq(CPPParser::DeclSpecifierSeqContext *context) = 0;

    virtual std::any visitStorageClassSpecifier(CPPParser::StorageClassSpecifierContext *context) = 0;

    virtual std::any visitFunctionSpecifier(CPPParser::FunctionSpecifierContext *context) = 0;

    virtual std::any visitTypedefName(CPPParser::TypedefNameContext *context) = 0;

    virtual std::any visitTypeSpecifier(CPPParser::TypeSpecifierContext *context) = 0;

    virtual std::any visitTrailingTypeSpecifier(CPPParser::TrailingTypeSpecifierContext *context) = 0;

    virtual std::any visitTypeSpecifierSeq(CPPParser::TypeSpecifierSeqContext *context) = 0;

    virtual std::any visitTrailingTypeSpecifierSeq(CPPParser::TrailingTypeSpecifierSeqContext *context) = 0;

    virtual std::any visitSimpleTypeLengthModifier(CPPParser::SimpleTypeLengthModifierContext *context) = 0;

    virtual std::any visitSimpleTypeSignednessModifier(CPPParser::SimpleTypeSignednessModifierContext *context) = 0;

    virtual std::any visitSimpleTypeSpecifier(CPPParser::SimpleTypeSpecifierContext *context) = 0;

    virtual std::any visitTheTypeName(CPPParser::TheTypeNameContext *context) = 0;

    virtual std::any visitDecltypeSpecifier(CPPParser::DecltypeSpecifierContext *context) = 0;

    virtual std::any visitElaboratedTypeSpecifier(CPPParser::ElaboratedTypeSpecifierContext *context) = 0;

    virtual std::any visitEnumName(CPPParser::EnumNameContext *context) = 0;

    virtual std::any visitEnumSpecifier(CPPParser::EnumSpecifierContext *context) = 0;

    virtual std::any visitEnumHead(CPPParser::EnumHeadContext *context) = 0;

    virtual std::any visitOpaqueEnumDeclaration(CPPParser::OpaqueEnumDeclarationContext *context) = 0;

    virtual std::any visitEnumkey(CPPParser::EnumkeyContext *context) = 0;

    virtual std::any visitEnumbase(CPPParser::EnumbaseContext *context) = 0;

    virtual std::any visitEnumeratorList(CPPParser::EnumeratorListContext *context) = 0;

    virtual std::any visitEnumeratorDefinition(CPPParser::EnumeratorDefinitionContext *context) = 0;

    virtual std::any visitEnumerator(CPPParser::EnumeratorContext *context) = 0;

    virtual std::any visitNamespaceName(CPPParser::NamespaceNameContext *context) = 0;

    virtual std::any visitOriginalNamespaceName(CPPParser::OriginalNamespaceNameContext *context) = 0;

    virtual std::any visitNamespaceDefinition(CPPParser::NamespaceDefinitionContext *context) = 0;

    virtual std::any visitNamespaceAlias(CPPParser::NamespaceAliasContext *context) = 0;

    virtual std::any visitNamespaceAliasDefinition(CPPParser::NamespaceAliasDefinitionContext *context) = 0;

    virtual std::any visitQualifiednamespacespecifier(CPPParser::QualifiednamespacespecifierContext *context) = 0;

    virtual std::any visitUsingDeclaration(CPPParser::UsingDeclarationContext *context) = 0;

    virtual std::any visitUsingDirective(CPPParser::UsingDirectiveContext *context) = 0;

    virtual std::any visitAsmDefinition(CPPParser::AsmDefinitionContext *context) = 0;

    virtual std::any visitLinkageSpecification(CPPParser::LinkageSpecificationContext *context) = 0;

    virtual std::any visitAttributeSpecifierSeq(CPPParser::AttributeSpecifierSeqContext *context) = 0;

    virtual std::any visitAttributeSpecifier(CPPParser::AttributeSpecifierContext *context) = 0;

    virtual std::any visitAlignmentspecifier(CPPParser::AlignmentspecifierContext *context) = 0;

    virtual std::any visitAttributeList(CPPParser::AttributeListContext *context) = 0;

    virtual std::any visitAttribute(CPPParser::AttributeContext *context) = 0;

    virtual std::any visitAttributeNamespace(CPPParser::AttributeNamespaceContext *context) = 0;

    virtual std::any visitAttributeArgumentClause(CPPParser::AttributeArgumentClauseContext *context) = 0;

    virtual std::any visitBalancedTokenSeq(CPPParser::BalancedTokenSeqContext *context) = 0;

    virtual std::any visitBalancedtoken(CPPParser::BalancedtokenContext *context) = 0;

    virtual std::any visitInitDeclaratorList(CPPParser::InitDeclaratorListContext *context) = 0;

    virtual std::any visitInitDeclarator(CPPParser::InitDeclaratorContext *context) = 0;

    virtual std::any visitDeclarator(CPPParser::DeclaratorContext *context) = 0;

    virtual std::any visitPointerDeclarator(CPPParser::PointerDeclaratorContext *context) = 0;

    virtual std::any visitNoPointerDeclarator(CPPParser::NoPointerDeclaratorContext *context) = 0;

    virtual std::any visitParametersAndQualifiers(CPPParser::ParametersAndQualifiersContext *context) = 0;

    virtual std::any visitTrailingReturnType(CPPParser::TrailingReturnTypeContext *context) = 0;

    virtual std::any visitPointerOperator(CPPParser::PointerOperatorContext *context) = 0;

    virtual std::any visitCvqualifierseq(CPPParser::CvqualifierseqContext *context) = 0;

    virtual std::any visitCvQualifier(CPPParser::CvQualifierContext *context) = 0;

    virtual std::any visitRefqualifier(CPPParser::RefqualifierContext *context) = 0;

    virtual std::any visitDeclaratorid(CPPParser::DeclaratoridContext *context) = 0;

    virtual std::any visitTheTypeId(CPPParser::TheTypeIdContext *context) = 0;

    virtual std::any visitAbstractDeclarator(CPPParser::AbstractDeclaratorContext *context) = 0;

    virtual std::any visitPointerAbstractDeclarator(CPPParser::PointerAbstractDeclaratorContext *context) = 0;

    virtual std::any visitNoPointerAbstractDeclarator(CPPParser::NoPointerAbstractDeclaratorContext *context) = 0;

    virtual std::any visitAbstractPackDeclarator(CPPParser::AbstractPackDeclaratorContext *context) = 0;

    virtual std::any visitNoPointerAbstractPackDeclarator(CPPParser::NoPointerAbstractPackDeclaratorContext *context) = 0;

    virtual std::any visitParameterDeclarationClause(CPPParser::ParameterDeclarationClauseContext *context) = 0;

    virtual std::any visitParameterDeclarationList(CPPParser::ParameterDeclarationListContext *context) = 0;

    virtual std::any visitParameterDeclaration(CPPParser::ParameterDeclarationContext *context) = 0;

    virtual std::any visitFunctionDefinition(CPPParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitFunctionBody(CPPParser::FunctionBodyContext *context) = 0;

    virtual std::any visitInitializer(CPPParser::InitializerContext *context) = 0;

    virtual std::any visitBraceOrEqualInitializer(CPPParser::BraceOrEqualInitializerContext *context) = 0;

    virtual std::any visitInitializerClause(CPPParser::InitializerClauseContext *context) = 0;

    virtual std::any visitInitializerList(CPPParser::InitializerListContext *context) = 0;

    virtual std::any visitBracedInitList(CPPParser::BracedInitListContext *context) = 0;

    virtual std::any visitClassName(CPPParser::ClassNameContext *context) = 0;

    virtual std::any visitClassSpecifier(CPPParser::ClassSpecifierContext *context) = 0;

    virtual std::any visitClassHead(CPPParser::ClassHeadContext *context) = 0;

    virtual std::any visitClassHeadName(CPPParser::ClassHeadNameContext *context) = 0;

    virtual std::any visitClassVirtSpecifier(CPPParser::ClassVirtSpecifierContext *context) = 0;

    virtual std::any visitClassKey(CPPParser::ClassKeyContext *context) = 0;

    virtual std::any visitMemberSpecification(CPPParser::MemberSpecificationContext *context) = 0;

    virtual std::any visitMemberdeclaration(CPPParser::MemberdeclarationContext *context) = 0;

    virtual std::any visitMemberDeclaratorList(CPPParser::MemberDeclaratorListContext *context) = 0;

    virtual std::any visitMemberDeclarator(CPPParser::MemberDeclaratorContext *context) = 0;

    virtual std::any visitVirtualSpecifierSeq(CPPParser::VirtualSpecifierSeqContext *context) = 0;

    virtual std::any visitVirtualSpecifier(CPPParser::VirtualSpecifierContext *context) = 0;

    virtual std::any visitPureSpecifier(CPPParser::PureSpecifierContext *context) = 0;

    virtual std::any visitBaseClause(CPPParser::BaseClauseContext *context) = 0;

    virtual std::any visitBaseSpecifierList(CPPParser::BaseSpecifierListContext *context) = 0;

    virtual std::any visitBaseSpecifier(CPPParser::BaseSpecifierContext *context) = 0;

    virtual std::any visitClassOrDeclType(CPPParser::ClassOrDeclTypeContext *context) = 0;

    virtual std::any visitBaseTypeSpecifier(CPPParser::BaseTypeSpecifierContext *context) = 0;

    virtual std::any visitAccessSpecifier(CPPParser::AccessSpecifierContext *context) = 0;

    virtual std::any visitConversionFunctionId(CPPParser::ConversionFunctionIdContext *context) = 0;

    virtual std::any visitConversionTypeId(CPPParser::ConversionTypeIdContext *context) = 0;

    virtual std::any visitConversionDeclarator(CPPParser::ConversionDeclaratorContext *context) = 0;

    virtual std::any visitConstructorInitializer(CPPParser::ConstructorInitializerContext *context) = 0;

    virtual std::any visitMemInitializerList(CPPParser::MemInitializerListContext *context) = 0;

    virtual std::any visitMemInitializer(CPPParser::MemInitializerContext *context) = 0;

    virtual std::any visitMeminitializerid(CPPParser::MeminitializeridContext *context) = 0;

    virtual std::any visitOperatorFunctionId(CPPParser::OperatorFunctionIdContext *context) = 0;

    virtual std::any visitLiteralOperatorId(CPPParser::LiteralOperatorIdContext *context) = 0;

    virtual std::any visitTemplateDeclaration(CPPParser::TemplateDeclarationContext *context) = 0;

    virtual std::any visitTemplateparameterList(CPPParser::TemplateparameterListContext *context) = 0;

    virtual std::any visitTemplateParameter(CPPParser::TemplateParameterContext *context) = 0;

    virtual std::any visitTypeParameter(CPPParser::TypeParameterContext *context) = 0;

    virtual std::any visitSimpleTemplateId(CPPParser::SimpleTemplateIdContext *context) = 0;

    virtual std::any visitTemplateId(CPPParser::TemplateIdContext *context) = 0;

    virtual std::any visitTemplateName(CPPParser::TemplateNameContext *context) = 0;

    virtual std::any visitTemplateArgumentList(CPPParser::TemplateArgumentListContext *context) = 0;

    virtual std::any visitTemplateArgument(CPPParser::TemplateArgumentContext *context) = 0;

    virtual std::any visitTypeNameSpecifier(CPPParser::TypeNameSpecifierContext *context) = 0;

    virtual std::any visitExplicitInstantiation(CPPParser::ExplicitInstantiationContext *context) = 0;

    virtual std::any visitExplicitSpecialization(CPPParser::ExplicitSpecializationContext *context) = 0;

    virtual std::any visitTryBlock(CPPParser::TryBlockContext *context) = 0;

    virtual std::any visitFunctionTryBlock(CPPParser::FunctionTryBlockContext *context) = 0;

    virtual std::any visitHandlerSeq(CPPParser::HandlerSeqContext *context) = 0;

    virtual std::any visitHandler(CPPParser::HandlerContext *context) = 0;

    virtual std::any visitExceptionDeclaration(CPPParser::ExceptionDeclarationContext *context) = 0;

    virtual std::any visitThrowExpression(CPPParser::ThrowExpressionContext *context) = 0;

    virtual std::any visitExceptionSpecification(CPPParser::ExceptionSpecificationContext *context) = 0;

    virtual std::any visitDynamicExceptionSpecification(CPPParser::DynamicExceptionSpecificationContext *context) = 0;

    virtual std::any visitTypeIdList(CPPParser::TypeIdListContext *context) = 0;

    virtual std::any visitNoeExceptSpecification(CPPParser::NoeExceptSpecificationContext *context) = 0;

    virtual std::any visitTheOperator(CPPParser::TheOperatorContext *context) = 0;

    virtual std::any visitLiteral(CPPParser::LiteralContext *context) = 0;


};

}  // namespace ClamParser
