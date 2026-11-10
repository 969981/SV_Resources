/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02983a54; name: FUN_02983a54
 */


undefined1 FUN_02983a54(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  byte local_18;
  
  local_18 = param_3 & 1;
  local_20 = param_2;
  FUN_01461214();
  uVar1 = FUN_012481a8();
  FUN_01248678(uVar1,local_28,&local_20);
  return local_28[0];
}


