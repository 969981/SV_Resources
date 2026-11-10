/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0272c954; name: FUN_0272c954
 */


void FUN_0272c954(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [16];
  long local_58;
  
  uVar1 = FUN_0272e79c(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  FUN_0272e7f8(auStack_68,uVar1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333,param_1 + 3);
  FUN_0272c84c(param_1 + 3,local_58,param_2,param_3);
  local_58 = local_58 + 0x28;
  FUN_0272e888(param_1,auStack_68);
  FUN_0272e930(auStack_68);
  return;
}


