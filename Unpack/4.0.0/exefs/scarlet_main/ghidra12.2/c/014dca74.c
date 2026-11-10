/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014dca74; name: FUN_014dca74
 */


void FUN_014dca74(undefined8 param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  code *local_b8;
  undefined1 auStack_a0 [96];
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_b8 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_a0);
    local_b8 = *(code **)(param_3 + 8);
  }
  local_40 = 0x42ee6f2cf758cea4;
  pcStack_38 = "SkipOnly";
  local_30 = 8;
  local_28 = (long *)0x0;
  uVar1 = FUN_0141f968(param_2,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if ((uVar1 & 0xff) == 0 || uVar1 < 0x100) {
    FUN_014dcb60(param_2);
  }
  if (local_b8 != (code *)0x0) {
    (*local_b8)(auStack_a0);
  }
  return;
}


