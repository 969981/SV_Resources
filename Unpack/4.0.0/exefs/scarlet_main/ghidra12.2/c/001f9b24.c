/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f9b24; name: FUN_001f9b24
 */


void FUN_001f9b24(long param_1,long param_2)

{
  long lVar1;
  
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + *(int *)(param_2 + 0xd0);
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    *(long *)(param_2 + 0x88) = lVar1;
    *(long *)(lVar1 + 0x80) = param_2;
  }
  *(long *)(param_1 + 0x78) = param_2;
  *(long *)(param_2 + 0x70) = param_1;
  return;
}


