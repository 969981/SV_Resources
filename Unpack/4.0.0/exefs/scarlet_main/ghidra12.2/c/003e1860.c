/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e1860; name: FUN_003e1860
 */


undefined8 FUN_003e1860(uint param_1)

{
  if (param_1 < 0x1f) {
    return *(undefined8 *)(&DAT_03cdd430 + (ulong)param_1 * 8);
  }
  return 0;
}


