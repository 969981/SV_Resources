/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003949e0; name: FUN_003949e0
 */


bool FUN_003949e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (param_2 == param_4) {
    iVar1 = FUN_00394a20(param_1,param_3,param_2);
    return iVar1 == 0;
  }
  return false;
}


