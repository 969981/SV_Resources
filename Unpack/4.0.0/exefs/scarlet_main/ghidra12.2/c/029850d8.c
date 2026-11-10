/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029850d8; name: FUN_029850d8
 */


void FUN_029850d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  
  local_18 = param_5 & 0xffff;
  local_30 = param_4;
  local_28 = param_2;
  uStack_20 = param_3;
  FUN_01461214();
  uVar1 = FUN_02985700();
  FUN_0163314c(uVar1,auStack_38,&local_30);
  return;
}


