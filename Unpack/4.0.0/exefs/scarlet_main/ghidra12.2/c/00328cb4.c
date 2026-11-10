/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00328cb4; name: FUN_00328cb4
 */


void FUN_00328cb4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047ccbe0 + 0x10);
                    /* try { // try from 00328ccc to 00328ccf has its CatchHandler @ 00328cdc */
  FUN_0038db20(param_1 + 8);
  FUN_00328c28(param_1 + 2);
  return;
}


