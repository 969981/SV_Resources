/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00305cc4; name: FUN_00305cc4
 */


void FUN_00305cc4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cca90 + 0x10);
  param_1[1] = 1;
  FUN_0038db00(param_1 + 2);
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = (long)PTR_FUN_047cca98;
  param_1[0xf] = (long)param_1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}


