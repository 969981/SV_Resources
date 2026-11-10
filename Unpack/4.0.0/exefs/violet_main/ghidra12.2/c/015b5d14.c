/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


