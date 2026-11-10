/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02985114; name: FUN_02985114
 */


void FUN_02985114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  undefined1 local_14;
  
  local_18 = param_6 & 0xffff;
  local_14 = 1;
  local_38 = param_5;
  uStack_30 = param_4;
  local_28 = param_2;
  uStack_20 = param_3;
  FUN_01461214();
  uVar1 = FUN_02985708();
  FUN_01633028(uVar1,auStack_40,&local_38);
  return;
}


