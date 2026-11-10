/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b71f50; name: FUN_02b71f50
 */


undefined1 FUN_02b71f50(byte param_1)

{
  if (param_1 < 0x13) {
    return (&DAT_03d630a1)[(ulong)param_1 * 2];
  }
  return 0x12;
}


