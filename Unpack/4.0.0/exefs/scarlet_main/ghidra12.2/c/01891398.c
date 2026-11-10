/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01891398; name: FUN_01891398
 */


void FUN_01891398(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_029d5988(param_1,(param_1[1] - *param_1 >> 4) * -0x70a3d70a3d70a3d7 + 1);
  FUN_01890f3c(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * -0x70a3d70a3d70a3d7,param_1 + 3);
  FUN_01890e2c(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 400;
  FUN_01891064(param_1,auStack_58);
  FUN_01890fd0(auStack_58);
  return;
}


