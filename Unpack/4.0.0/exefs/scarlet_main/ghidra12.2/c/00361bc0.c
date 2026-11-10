/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00361bc0; name: FUN_00361bc0
 */


void FUN_00361bc0(ulong param_1)

{
  if ((param_1 & 1) == 0) {
    FUN_00361a70();
    return;
  }
  FUN_0038db40(&DAT_047ef840);
  if ((DAT_047ef800 & 1) == 0) {
    DAT_047ef800 = 1;
    FUN_00361c60();
    return;
  }
  FUN_0038db60(&DAT_047ef840);
  return;
}


