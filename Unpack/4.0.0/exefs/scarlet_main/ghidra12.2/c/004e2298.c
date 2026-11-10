/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e2298; name: FUN_004e2298
 */


void FUN_004e2298(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cd9a0 + 0x10);
                    /* try { // try from 004e22b4 to 004e22bf has its CatchHandler @ 004e22d8 */
  FUN_004e21a8();
  FUN_004ca714(param_1 + 1);
  FUN_004e207c(param_1 + 3);
  operator_delete(param_1);
  return;
}


