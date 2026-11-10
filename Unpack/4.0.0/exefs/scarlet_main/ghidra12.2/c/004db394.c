/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004db394; name: FUN_004db394
 */


void FUN_004db394(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cd9d8 + 0x10);
                    /* try { // try from 004db3b0 to 004db3bb has its CatchHandler @ 004db3dc */
  FUN_004db11c();
  FUN_004ca714(param_1 + 1);
  FUN_004d2ad4(param_1 + 6);
  FUN_005212b0(param_1 + 2);
  operator_delete(param_1);
  return;
}


