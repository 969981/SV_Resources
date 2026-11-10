/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edac64; name: FUN_01edac64
 */


byte FUN_01edac64(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 < 0x800) {
    return *(byte *)(param_1 + (ulong)(uVar1 >> 3) + 0x7bb0) >> (ulong)(uVar1 & 7) & 1;
  }
  return 0;
}


