/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d3350; name: FUN_004d3350
 */


void FUN_004d3350(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cd858 + 0x10);
                    /* try { // try from 004d3368 to 004d3373 has its CatchHandler @ 004d337c */
  FUN_004d3380();
  FUN_004ca714(param_1 + 1);
  return;
}


