/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004de900; name: FUN_004de900
 */


void FUN_004de900(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_047cd930 + 0x10);
                    /* try { // try from 004de928 to 004de92f has its CatchHandler @ 004de984 */
  FUN_005212a0(param_1 + 2);
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)PTR_DAT_047cd938 != 0) {
                    /* try { // try from 004de958 to 004de963 has its CatchHandler @ 004de968 */
    FUN_0052b230(PTR_DAT_047cd938);
  }
  return;
}


