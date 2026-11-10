/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193b3f4; name: FUN_0193b3f4
 */


undefined8 FUN_0193b3f4(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (((*(int *)(lVar1 + 0x40) == *(int *)(param_1 + 0x40)) &&
      (*(int *)(lVar1 + 0x44) == *(int *)(param_1 + 0x44))) &&
     (*(int *)(lVar1 + 0x48) == *(int *)(param_1 + 0x48))) {
    return 1;
  }
  return 0;
}


