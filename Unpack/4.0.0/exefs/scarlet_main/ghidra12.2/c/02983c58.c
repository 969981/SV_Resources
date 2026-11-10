/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02983c58; name: FUN_02983c58
 */


undefined4 FUN_02983c58(uint param_1)

{
  if ((int)param_1 < 5) {
    return *(undefined4 *)(&DAT_03d6a518 + (ulong)param_1 * 4);
  }
  return 0;
}


