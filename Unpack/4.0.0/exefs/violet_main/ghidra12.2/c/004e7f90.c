/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e7f90; name: FUN_004e7f90
 */


void FUN_004e7f90(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  *param_1 = (long)(PTR_DAT_047cd948 + 0x10);
                    /* try { // try from 004e7fb0 to 004e7fbb has its CatchHandler @ 004e7fec */
  FUN_004d8bc8();
  FUN_004ca714(param_1 + 1);
                    /* try { // try from 004e7fc0 to 004e7fc3 has its CatchHandler @ 004e7fe8 */
  FUN_004e8520(param_1 + 3);
  FUN_0049e790(PTR_LAB_047cba48,param_1);
  return;
}


