#include "VariableDeclarationSyntax.h"

#include "ExpressionSyntax.h"
#include "SyntaxToken.h"
#include "TypeClauseSyntax.h"

namespace Mamba
{
    VariableDeclarationSyntax::VariableDeclarationSyntax(
        const std::shared_ptr<const class SyntaxTree> SyntaxTree,
        const std::shared_ptr<const class SyntaxToken> Keyword,
        const std::shared_ptr<const class SyntaxToken> Identifier,
        const NullableSharedPtr<const class TypeClauseSyntax> TypeClauseSyntax,
        const std::shared_ptr<const class SyntaxToken> EqualsToken,
        const std::shared_ptr<const class ExpressionSyntax> Initializer
    ) noexcept :
        Super(SyntaxTree),
        Keyword(Keyword),
        Identifier(Identifier),
        TypeClauseSyntax(TypeClauseSyntax),
        EqualsToken(EqualsToken),
        Initializer(Initializer)
    {
    }

    SyntaxKind VariableDeclarationSyntax::Kind() const noexcept
    {
        return SyntaxKind::VariableDeclaration;
    }

    std::vector<std::shared_ptr<const class SyntaxNode>> VariableDeclarationSyntax::Children() const noexcept
    {
        return { Keyword, Identifier, TypeClauseSyntax, EqualsToken, Initializer };
    }
} // namespace Mamba