/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004dfb44; name: FUN_004dfb44
 */


void FUN_004dfb44(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_047cd830 + 0x10);
                    /* try { // try from 004dfb70 to 004dfb77 has its CatchHandler @ 004dfbd8 */
  FUN_005212a0(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_047cd838 != 0) {
                    /* try { // try from 004dfbac to 004dfbb7 has its CatchHandler @ 004dfbbc */
    FUN_0052b230(PTR_DAT_047cd838);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


