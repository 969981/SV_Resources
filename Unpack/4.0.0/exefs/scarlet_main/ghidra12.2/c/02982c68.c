/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02982c68; name: FUN_02982c68
 */


void FUN_02982c68(undefined8 param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4,
                 byte param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  byte local_1c;
  undefined4 local_18;
  
  local_1c = param_5 & 1;
  local_20 = param_2;
  local_1e = param_3;
  local_1d = param_4;
  local_18 = param_6;
  FUN_01461214();
  uVar1 = FUN_02982cac();
  FUN_02982cb4(uVar1,auStack_28,&local_20);
  return;
}


