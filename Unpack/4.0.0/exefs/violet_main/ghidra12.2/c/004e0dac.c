/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e0dac; name: FUN_004e0dac
 */


void FUN_004e0dac(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_047cd900 + 0x10);
                    /* try { // try from 004e0dd8 to 004e0ddf has its CatchHandler @ 004e0e40 */
  FUN_005212a0(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_047cd908 != 0) {
                    /* try { // try from 004e0e14 to 004e0e1f has its CatchHandler @ 004e0e24 */
    FUN_0052b230(PTR_DAT_047cd908);
  }
  param_1[9] = 0;
  return;
}


