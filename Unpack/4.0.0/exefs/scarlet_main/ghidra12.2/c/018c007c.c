/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c007c; name: FUN_018c007c
 */


void FUN_018c007c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_018c0120(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  FUN_018c017c(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555,param_1 + 3);
  FUN_018bfea4(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x18;
  FUN_018c0210(param_1,auStack_58);
  FUN_018c03a0(auStack_58);
  return;
}


