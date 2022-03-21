#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GenericGraphNode.h"
#include "DialogueNode.generated.h"

class UGenericGraph;
class UGenericGraphEdge;
class UGenericGraphNode;


UCLASS(Blueprintable)
class GENERICGRAPHRUNTIME_API UDialogueNode : public UGenericGraphNode
{
	GENERATED_BODY()

public:
	UDialogueNode();
	virtual ~UDialogueNode();

	//////////////////////////////////////////////////////////////////////////
#if WITH_EDITORONLY_DATA

	UPROPERTY(EditDefaultsOnly, Category = "GenericGraphNode_Editor")
	FText NodeDialogueBody;
#endif

#if WITH_EDITOR

#endif
};
