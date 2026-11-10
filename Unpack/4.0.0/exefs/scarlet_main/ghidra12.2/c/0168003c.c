/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168003c; name: FUN_0168003c
 */


undefined8 FUN_0168003c(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xa8);
  if (bVar1 < *(byte *)(param_1 + 0xa6)) {
    *(byte *)(param_1 + 0xa8) = bVar1 + 1;
    return *(undefined8 *)(param_1 + (ulong)bVar1 * 8);
  }
  return 0;
}


