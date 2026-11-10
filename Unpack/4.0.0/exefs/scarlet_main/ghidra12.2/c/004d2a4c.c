/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d2a4c; name: FUN_004d2a4c
 */


void FUN_004d2a4c(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_047cd840 + 0x10);
                    /* try { // try from 004d2a74 to 004d2a7b has its CatchHandler @ 004d2ad0 */
  FUN_005212a0(param_1 + 2);
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)PTR_DAT_047cd848 != 0) {
                    /* try { // try from 004d2aa4 to 004d2aaf has its CatchHandler @ 004d2ab4 */
    FUN_0052b230(PTR_DAT_047cd848);
  }
  return;
}


