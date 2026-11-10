/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b3978; name: FUN_002b3978
 */


void FUN_002b3978(long *param_1,long *param_2,long param_3)

{
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_047cc780 + 0x10);
  param_1[1] = 1;
  param_1[2] = *param_2;
  *param_2 = 0;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 002b39bc to 002b39d3 has its CatchHandler @ 002b39d4 */
  FUN_002b3a58(param_1);
  return;
}


