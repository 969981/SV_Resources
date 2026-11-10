/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ff4c4; name: FUN_026ff4c4
 */


void FUN_026ff4c4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_02700f04(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  FUN_02700f60(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555,param_1 + 3);
  FUN_026ff3d8(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x18;
  FUN_02700ff0(param_1,auStack_58);
  FUN_02701098(auStack_58);
  return;
}


