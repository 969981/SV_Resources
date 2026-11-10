/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009f275c; name: FUN_009f275c
 */


long FUN_009f275c(long param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < 4) {
    *(undefined4 *)(param_1 + (ulong)param_2 * 4) = param_3;
    return param_1;
  }
  FUN_00975e50();
  return 4;
}


