/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003aed10; name: FUN_003aed10
 */


long FUN_003aed10(long param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    if (*(long *)(param_1 + 0xa8) == 0) {
      return 0;
    }
    return *(long *)(*(long *)(param_1 + 0xa8) + 0x260);
  }
  if (*(long *)(param_1 + 0x688) == 0) {
    return *(long *)(*(long *)(param_1 + 0x660) + 0x120);
  }
  return *(long *)(param_1 + 0x688);
}


