/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b5715c; name: FUN_00b5715c
 */


void FUN_00b5715c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),4,8)
  ;
  *puVar1 = *(undefined4 *)(param_2 + 0x50);
  FUN_01692b7c(param_1,param_2,puVar1,4,param_3,0);
  return;
}


