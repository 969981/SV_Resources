/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004df144; name: FUN_004df144
 */


void FUN_004df144(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_047cd800 + 0x10);
                    /* try { // try from 004df170 to 004df177 has its CatchHandler @ 004df1d8 */
  FUN_005212a0(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_047cd808 != 0) {
                    /* try { // try from 004df1ac to 004df1b7 has its CatchHandler @ 004df1bc */
    FUN_0052b230(PTR_DAT_047cd808);
  }
  *(undefined2 *)(param_1 + 9) = 0;
  return;
}


