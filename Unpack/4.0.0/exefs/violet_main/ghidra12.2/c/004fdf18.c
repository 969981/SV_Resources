/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fdf18; name: FUN_004fdf18
 */


void FUN_004fdf18(long *param_1,long param_2,long param_3)

{
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_047cdaf8 + 0x10);
  param_1[1] = param_3;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (param_3 != 0) {
                    /* try { // try from 004fdf68 to 004fdf73 has its CatchHandler @ 004fdfa8 */
    FUN_005008b0(param_3,param_1 + 3);
  }
  *param_1 = (long)(PTR_DAT_047cdaf0 + 0x10);
  param_1[8] = param_3;
  *(undefined4 *)(param_1 + 9) = 0;
                    /* try { // try from 004fdf90 to 004fdf93 has its CatchHandler @ 004fdfbc */
  FUN_005005b4();
  param_1[0xb] = param_2;
  return;
}


