/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012da004; name: FUN_012da004
 */


void FUN_012da004(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_028f9e7c(param_1,(param_1[1] - *param_1 >> 4) * -0x3333333333333333 + 1);
  FUN_028f9ed8(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * -0x3333333333333333,param_1 + 3);
  FUN_012d2afc(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x50;
  FUN_012d2fc0(param_1,auStack_58);
  FUN_012d3068(auStack_58);
  return;
}


