/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015bc54c; name: FUN_015bc54c
 */


void FUN_015bc54c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_70 = 0;
  local_68 = 0;
  local_40 = 0;
  uStack_78 = 0x1e1e1e1e1e1e1e1;
  local_38 = 0;
  uStack_48 = 0x1e1e1e1e1e1e1e1;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_60 = 0;
  uStack_58 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_80 = param_2;
  local_50 = param_2;
  memcpy(param_1 + 3,&uStack_88,0x28);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  param_1[8] = 0;
  memcpy(param_1 + 9,&uStack_58,0x28);
  local_60 = 0;
  uStack_58 = 0;
  FUN_015bc5f4(&local_a0);
  return;
}


