/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ec690; name: FUN_007ec690
 */


void FUN_007ec690(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d14e8 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0078f9d4();
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x28;
  return;
}


