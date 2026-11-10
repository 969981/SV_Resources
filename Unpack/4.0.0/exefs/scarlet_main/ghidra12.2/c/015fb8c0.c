/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fb8c0; name: FUN_015fb8c0
 */


void FUN_015fb8c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 auStack_58 [40];
  
  local_a0 = *param_1;
  uStack_98 = param_1[1];
  local_90 = param_1[2];
  memcpy(auStack_88,param_1 + 3,0x28);
  local_60 = param_1[8];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  memcpy(auStack_58,param_1 + 9,0x28);
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_015fb960(param_1,param_2);
  FUN_015fb960(param_2,&local_a0);
  FUN_015bca58(&local_a0);
  return;
}


