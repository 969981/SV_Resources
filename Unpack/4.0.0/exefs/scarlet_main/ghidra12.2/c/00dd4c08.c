/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dd4c08; name: FUN_00dd4c08
 */


void FUN_00dd4c08(long param_1)

{
  FUN_015a7af4(*(long *)(*(long *)(param_1 + 8) +
                        (*(ulong *)(param_1 + 0x40) >> 6 & 0x3fffffffffffff8)) +
               (*(ulong *)(param_1 + 0x40) & 0x1ff) * 8);
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  FUN_021635a8(param_1);
  return;
}


