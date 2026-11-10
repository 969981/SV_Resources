/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c8d00; name: FUN_001c8d00
 */


undefined8 FUN_001c8d00(void *param_1,size_t param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_3,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


