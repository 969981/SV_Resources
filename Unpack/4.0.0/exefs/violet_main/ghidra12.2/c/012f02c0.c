/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f02c0; name: FUN_012f02c0
 */


void FUN_012f02c0(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_8;
  
  FUN_012f0584();
  local_40 = 0x9ebc6b30366a841c;
  pcStack_38 = "trinity_AnimationComponent";
  local_30 = 0x1a;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_012f0478(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x64d3cc058158391f;
  pcStack_38 = "trinity_CameraAnimationComponent";
  local_30 = 0x20;
  local_28 = (long *)0x0;
  FUN_012f0378(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


