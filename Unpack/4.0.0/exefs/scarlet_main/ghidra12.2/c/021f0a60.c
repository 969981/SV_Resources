/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f0a60; name: FUN_021f0a60
 */


undefined1 FUN_021f0a60(byte param_1)

{
  if (param_1 < 0x13) {
    return (&DAT_03d630a0)[(ulong)param_1 * 2];
  }
  return 0x13;
}


