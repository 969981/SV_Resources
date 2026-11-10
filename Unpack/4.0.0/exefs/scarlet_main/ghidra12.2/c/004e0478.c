/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e0478; name: FUN_004e0478
 */


void FUN_004e0478(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_047cd960 + 0x10);
                    /* try { // try from 004e04a4 to 004e04ab has its CatchHandler @ 004e050c */
  FUN_005212a0(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_047cd968 != 0) {
                    /* try { // try from 004e04e0 to 004e04eb has its CatchHandler @ 004e04f0 */
    FUN_0052b230(PTR_DAT_047cd968);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


