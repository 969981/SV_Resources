/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018a6940; name: FUN_018a6940
 */


void FUN_018a6940(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [16];
  long local_58;
  
  uVar1 = FUN_018a6b34(param_1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555 + 1);
  FUN_018a69f4(auStack_68,uVar1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555,param_1 + 3);
  FUN_018a6b90(param_1 + 3,local_58,param_2,param_3);
  local_58 = local_58 + 0x30;
  FUN_018a6c98(param_1,auStack_68);
  FUN_018a6a88(auStack_68);
  return;
}


