/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d1710; name: FUN_021d1710
 */


void FUN_021d1710(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_021d2dc0(param_1,(param_1[1] - *param_1 >> 7) * -0x5555555555555555 + 1);
  FUN_021d2e1c(auStack_58,uVar1,(param_1[1] - *param_1 >> 7) * -0x5555555555555555,param_1 + 3);
  FUN_021d1528(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x180;
  FUN_021d2eac(param_1,auStack_58);
  FUN_021d2f54(auStack_58);
  return;
}


