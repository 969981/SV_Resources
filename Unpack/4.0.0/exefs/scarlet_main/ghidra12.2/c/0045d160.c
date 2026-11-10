/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045d160; name: FUN_0045d160
 */


int FUN_0045d160(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14);
  if (iVar1 == 0) {
    iVar1 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),
                   (long)*(int *)(param_1 + 0x14));
    return iVar1;
  }
  return iVar1;
}


