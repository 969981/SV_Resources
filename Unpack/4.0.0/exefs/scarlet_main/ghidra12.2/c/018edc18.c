/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018edc18; name: FUN_018edc18
 */


void FUN_018edc18(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_018edcbc(param_1,(param_1[1] - *param_1 >> 3) * -0xf0f0f0f0f0f0f0f + 1);
  FUN_018edd18(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0xf0f0f0f0f0f0f0f,param_1 + 3);
  FUN_018edab4(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x88;
  FUN_018edfc8(param_1,auStack_58);
  FUN_018ede70(auStack_58);
  return;
}


