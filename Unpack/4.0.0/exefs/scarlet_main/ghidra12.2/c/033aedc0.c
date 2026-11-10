/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033aedc0; name: FUN_033aedc0
 */


undefined4 FUN_033aedc0(undefined8 param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_4 + 0x18))(param_4,param_3);
  uVar1 = FUN_033ae86c(param_1,param_3,uVar1,param_2,param_4);
  return uVar1;
}


