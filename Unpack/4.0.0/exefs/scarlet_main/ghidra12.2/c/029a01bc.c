/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a01bc; name: FUN_029a01bc
 */


void FUN_029a01bc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [16];
  long local_58;
  
  uVar1 = FUN_029a0c08(param_1,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7 + 1);
  FUN_029a0c6c(auStack_68,uVar1,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7,param_1 + 3);
  FUN_029a009c(param_1 + 3,local_58,param_2,param_3);
  local_58 = local_58 + 0x90;
  FUN_029a0cfc(param_1,auStack_68);
  FUN_029a0da4(auStack_68);
  return;
}


