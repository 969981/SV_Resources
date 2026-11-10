/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f23d0; name: FUN_012f23d0
 */


void FUN_012f23d0(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_8;
  
  local_40 = 0xd0026b510c56c1ee;
  pcStack_38 = "trinity_CollisionComponent";
  local_30 = 0x1a;
  local_28 = (long *)0x0;
  FUN_012f25d8(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x1017ad41eb08dd36;
  pcStack_38 = "trinity_CompoundSphereShape";
  local_30 = 0x1b;
  local_28 = (long *)0x0;
  FUN_012f26d8(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x14deaae83f209baa;
  pcStack_38 = "trinity_CompoundBoxShape";
  local_30 = 0x18;
  local_28 = (long *)0x0;
  FUN_012f27d8(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x25c1c732123c1788;
  pcStack_38 = "trinity_CompoundCapsuleShape";
  local_30 = 0x1c;
  local_28 = (long *)0x0;
  FUN_012f28d8(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xe8afe2e27a154a06;
  pcStack_38 = "trinity_CompoundPencilShape";
  local_30 = 0x1b;
  local_28 = (long *)0x0;
  FUN_012f29d8(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xd8057da83ba14ce2;
  pcStack_38 = "trinity_CollisionEventTriggerComponent";
  local_30 = 0x26;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_012f2bd8(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xde5787bacae1a9c0;
  pcStack_38 = "trinity_GroundPlaceComponent";
  local_30 = 0x1c;
  local_28 = (long *)0x0;
  FUN_012f2ad8(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


