/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b01790; name: FUN_02b01790
 */


void FUN_02b01790(long *param_1)

{
  memset(param_1 + 8,0,0x150);
  param_1[0x13] = 0x4f16d9c889d098df;
  *(undefined1 *)(param_1 + 0x22) = 1;
                    /* WARNING: Could not recover jumptable at 0x02b017e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}


