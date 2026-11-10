/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004dda98; name: FUN_004dda98
 */


void FUN_004dda98(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_047cd868 + 0x10);
                    /* try { // try from 004ddac4 to 004ddacb has its CatchHandler @ 004ddb30 */
  FUN_005212a0(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_047cd870 != 0) {
                    /* try { // try from 004ddb04 to 004ddb0f has its CatchHandler @ 004ddb14 */
    FUN_0052b230(PTR_DAT_047cd870);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[9] = 0;
  return;
}


