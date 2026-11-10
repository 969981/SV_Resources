/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034cb60; name: FUN_0034cb60
 */


undefined8 FUN_0034cb60(uint param_1)

{
  if (param_1 < 3) {
    return *(undefined8 *)
            (*(long *)PTR_DAT_047ccae0 + *(long *)(&DAT_03cd7570 + (long)(int)param_1 * 8) * 8);
  }
  return 0;
}


