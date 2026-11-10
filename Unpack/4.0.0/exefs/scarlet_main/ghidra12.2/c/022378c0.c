/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022378c0; name: FUN_022378c0
 */


void FUN_022378c0(undefined8 param_1)

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
    FUN_02237950(param_1);
  }
  return;
}


