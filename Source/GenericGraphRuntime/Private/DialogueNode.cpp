#include "DialogueNode.h"
#include "GenericGraph.h"


UDialogueNode::UDialogueNode() : UGenericGraphNode()
{
#if WITH_EDITORONLY_DATA
	UE_LOG(LogTemp, Display, TEXT("Loading Dialogue Node?"));
	NodeDialogueBody = FText::FromString("Hi there");
#endif
}

UDialogueNode::~UDialogueNode()
{
}
