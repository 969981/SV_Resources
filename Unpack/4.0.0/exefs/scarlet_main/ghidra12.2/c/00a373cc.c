/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a373cc; name: FUN_00a373cc
 */


void FUN_00a373cc(long param_1,undefined4 param_2,uint param_3)

{
  if (param_3 < 4) {
    *(undefined4 *)(param_1 + (ulong)param_3 * 4 + 8) = param_2;
  }
  return;
}


