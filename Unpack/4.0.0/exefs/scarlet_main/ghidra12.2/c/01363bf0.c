/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01363bf0; name: FUN_01363bf0
 */


undefined4 FUN_01363bf0(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x10)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 0x10 + 8);
  }
  return 0;
}


