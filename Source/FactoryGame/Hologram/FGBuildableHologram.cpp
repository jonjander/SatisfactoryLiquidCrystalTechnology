// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableHologram.h"

void AFGBuildableHologram::GetLifetimeReplicatedProps( TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
AFGBuildableHologram::AFGBuildableHologram(){ }
void AFGBuildableHologram::SetBuildableClass( TSubclassOf<  AFGBuildable > buildableClass){ }
void AFGBuildableHologram::BeginPlay(){ }
void AFGBuildableHologram::SetHologramLocationAndRotation( const FHitResult& hitResult){ }
void AFGBuildableHologram::AdjustForGround( const FHitResult& hitResult, FVector& out_adjustedLocation, FRotator& out_adjustedRotation){ }
AActor* AFGBuildableHologram::Construct( TArray< AActor* >& out_children){ return nullptr; }
TSubclassOf< AActor > AFGBuildableHologram::GetActorClass() const{ return TSubclassOf<AActor>(); }
USceneComponent* AFGBuildableHologram::SetupComponent( USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
void AFGBuildableHologram::CheckValidPlacement(){ }
int32 AFGBuildableHologram::GetRotationStep() const{ return int32(); }
void AFGBuildableHologram::SnapToFloor(  AFGBuildableFactoryBuilding* floor, FVector& location, FRotator& rotation){ }
void AFGBuildableHologram::CheckValidFloor(){ }
void AFGBuildableHologram::CheckClearance(){ }
bool AFGBuildableHologram::CheckClearanceForPrimitive( UPrimitiveComponent* comp, const FComponentQueryParams& params ){ return bool(); }
void AFGBuildableHologram::ConfigureSnappedBuilding(  AFGBuildable* inBuildable) const{ }
void AFGBuildableHologram::ConfigureSnappedPower(  AFGBuildable* inBuildable) const{ }
void AFGBuildableHologram::ConfigureActor(  AFGBuildable* inBuildable) const{ }
void AFGBuildableHologram::ConfigureComponents(  AFGBuildable* inBuildable) const{ }
void AFGBuildableHologram::ConfigureBuildEffect(  AFGBuildable* inBuildable){ }
void AFGBuildableHologram::SetupClearance(  UBoxComponent* boxComponent){ }
void AFGBuildableHologram::SetupFactoryConnectionMesh(  UFGFactoryConnectionComponent* connectionComponent){ }
void AFGBuildableHologram::SetupPowerConnectionMesh(  UFGPowerConnectionComponent* connectionComponent){ }
FName AFGBuildableHologram::mInputConnectionMeshTag = FName();
FName AFGBuildableHologram::mOutputConnectionMeshTag = FName();
FName AFGBuildableHologram::mClearanceComponentName = FName();
FName AFGBuildableHologram::mPowerConnectionMeshTag = FName();
