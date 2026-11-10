/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b7aad8; name: FUN_02b7aad8
 */


undefined2 FUN_02b7aad8(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x110) >> 1) {
    return *(undefined2 *)(*(long *)(param_1 + 0x108) + (ulong)param_2 * 2);
  }
  return 0;
}


