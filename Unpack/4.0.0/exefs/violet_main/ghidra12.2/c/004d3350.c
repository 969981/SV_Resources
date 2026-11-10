/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d3350; name: FUN_004d3350
 */


void FUN_004d3350(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cd858 + 0x10);
                    /* try { // try from 004d3368 to 004d3373 has its CatchHandler @ 004d337c */
  FUN_004d3380();
  FUN_004ca714(param_1 + 1);
  return;
}


