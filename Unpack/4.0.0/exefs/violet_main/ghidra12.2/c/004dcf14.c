/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004dcf14; name: FUN_004dcf14
 */


void FUN_004dcf14(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_047cd8d0 + 0x10);
                    /* try { // try from 004dcf40 to 004dcf47 has its CatchHandler @ 004dcfa8 */
  FUN_005212a0(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_047cd8d8 != 0) {
                    /* try { // try from 004dcf7c to 004dcf87 has its CatchHandler @ 004dcf8c */
    FUN_0052b230(PTR_DAT_047cd8d8);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}


