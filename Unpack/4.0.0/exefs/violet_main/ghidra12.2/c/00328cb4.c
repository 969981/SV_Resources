/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00328cb4; name: FUN_00328cb4
 */


void FUN_00328cb4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047ccbe0 + 0x10);
                    /* try { // try from 00328ccc to 00328ccf has its CatchHandler @ 00328cdc */
  FUN_0038db20(param_1 + 8);
  FUN_00328c28(param_1 + 2);
  return;
}


