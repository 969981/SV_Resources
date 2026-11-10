/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00296c60; name: FUN_00296c60
 */


void FUN_00296c60(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047cc638 + 0x10);
  lVar1 = param_1[10];
  param_1[10] = 0;
  if (lVar1 != 0) {
    FUN_002964f8();
  }
                    /* try { // try from 00296c8c to 00296c8f has its CatchHandler @ 00296c98 */
  FUN_0038db20(param_1 + 6);
  return;
}


