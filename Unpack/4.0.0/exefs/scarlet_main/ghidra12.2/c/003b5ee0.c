/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b5ee0; name: FUN_003b5ee0
 */


int FUN_003b5ee0(long param_1)

{
  uint uVar1;
  
  if ((*(long *)(param_1 + 0x5d0) == 0) ||
     (uVar1 = *(byte *)(*(long *)(param_1 + 0x5d0) + 0x250) - 1, 3 < uVar1)) {
    return *(int *)(param_1 + 0x6c0);
  }
  return 0x200 << (ulong)(uVar1 & 0x1f);
}


