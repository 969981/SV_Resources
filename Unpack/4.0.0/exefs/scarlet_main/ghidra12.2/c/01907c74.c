/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01907c74; name: FUN_01907c74
 */


void FUN_01907c74(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined8 param_6,byte param_7)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  byte local_18;
  
  local_18 = param_7 & 1;
  local_38 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  local_28 = param_5;
  local_20 = param_6;
  FUN_01461214();
  uVar1 = FUN_01907cbc();
  FUN_0124af54(uVar1,auStack_40,&local_38);
  return;
}


