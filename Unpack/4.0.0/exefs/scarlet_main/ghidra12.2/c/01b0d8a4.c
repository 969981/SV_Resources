/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b0d8a4; name: FUN_01b0d8a4
 */


undefined2 FUN_01b0d8a4(long param_1,byte param_2,byte param_3)

{
  if ((param_2 < 5) && (param_3 < 6)) {
    return *(undefined2 *)(param_1 + (ulong)param_2 * 0x60 + (ulong)param_3 * 0x10 + 0x14);
  }
  return 0;
}


