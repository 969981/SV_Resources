/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e723c; name: FUN_019e723c
 */


void FUN_019e723c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_019e72e0(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  FUN_019e733c(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333,param_1 + 3);
  FUN_019e76bc(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x28;
  FUN_019e73cc(param_1,auStack_58);
  FUN_019e7474(auStack_58);
  return;
}


