/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015bdcb0; name: FUN_015bdcb0
 */


long FUN_015bdcb0(long *param_1,long param_2,long *param_3,long param_4)

{
  if (param_4 == param_2) {
    return 0;
  }
  return ((long)param_3 - (long)param_1 >> 3) * 0x5d +
         (param_4 - *param_3 >> 2) * 0x2e8ba2e8ba2e8ba3 +
         (param_2 - *param_1 >> 2) * -0x2e8ba2e8ba2e8ba3;
}


