/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297ebcc; name: FUN_0297ebcc
 */


void FUN_0297ebcc(undefined8 param_1,undefined4 param_2,byte param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 local_50;
  byte local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 auStack_8 [8];
  
  local_4c = param_3 & 1;
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = param_2;
  FUN_0297eca8(&local_48,param_4);
  FUN_01461214(param_1);
  uVar1 = FUN_01907950();
  FUN_0124aab0(uVar1,auStack_8,&local_50);
  return;
}


