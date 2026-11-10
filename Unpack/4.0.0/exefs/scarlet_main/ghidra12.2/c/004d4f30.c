/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d4f30; name: FUN_004d4f30
 */


void FUN_004d4f30(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cd918 + 0x10);
                    /* try { // try from 004d4f48 to 004d4f53 has its CatchHandler @ 004d4f5c */
  FUN_004d4f60();
  FUN_004ca714(param_1 + 1);
  return;
}


