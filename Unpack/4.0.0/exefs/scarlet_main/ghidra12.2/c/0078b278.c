/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078b278; name: FUN_0078b278
 */


undefined8 FUN_0078b278(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_1 + 8),(void *)(param_2 + 8),0x10);
  if ((iVar1 == 0) && (*(short *)(param_1 + 0x18) == *(short *)(param_2 + 0x18))) {
    return 1;
  }
  return 0;
}


