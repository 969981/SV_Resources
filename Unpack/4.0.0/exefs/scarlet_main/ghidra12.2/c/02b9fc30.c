/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9fc30; name: FUN_02b9fc30
 */


ulong FUN_02b9fc30(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x210);
  return (ulong)(*(long *)(lVar1 + 0xe0) - *(long *)(lVar1 + 0xd8)) >> 5;
}


