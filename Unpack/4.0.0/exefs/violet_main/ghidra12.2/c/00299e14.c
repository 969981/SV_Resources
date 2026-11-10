/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00299e14; name: FUN_00299e14
 */


void FUN_00299e14(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cc690 + 0x10);
  param_1[1] = 1;
  FUN_0038db00(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}


