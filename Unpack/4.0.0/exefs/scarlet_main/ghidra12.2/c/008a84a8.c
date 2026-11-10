/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a84a8; name: FUN_008a84a8
 */


int FUN_008a84a8(long param_1)

{
  if (*(long *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  return (uint)*(ushort *)(*(long *)(param_1 + 0xa8) + 8) - (uint)(*(int *)(param_1 + 0x60) != 0);
}


