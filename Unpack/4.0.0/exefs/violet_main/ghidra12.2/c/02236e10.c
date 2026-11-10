/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02236e10; name: FUN_02236e10
 */


void FUN_02236e10(undefined8 param_1)

{
  ushort uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x42ee6f2cf758cea4;
  pcStack_38 = "SkipOnly";
  local_30 = 8;
  local_28 = (long *)0x0;
  uVar1 = FUN_0141f968(param_1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if ((uVar1 & 0xff) == 0 || uVar1 < 0x100) {
    FUN_02236ea0(param_1);
  }
  return;
}


