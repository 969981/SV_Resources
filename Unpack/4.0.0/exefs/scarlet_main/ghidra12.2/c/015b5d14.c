/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015b5d14; name: FUN_015b5d14
 */


void FUN_015b5d14(long param_1,byte param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  *(byte *)(param_1 + 0x69) = param_2 & 1;
  local_40 = 0x3db005fc539c013f;
  puStack_38 = PTR_s_ShadowClipHeightEnable_047db0a0;
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  uVar2 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  plVar1 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  (**(code **)(*plVar1 + 0x10))(uVar2,plVar1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


