/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e41a4; name: FUN_017e41a4
 */


void FUN_017e41a4(ulong *param_1)

{
  *param_1 = ~*param_1;
  param_1[1] = ~param_1[1];
  param_1[2] = ~param_1[2];
  param_1[3] = ~param_1[3];
  param_1[4] = ~param_1[4];
  param_1[5] = ~param_1[5];
  param_1[6] = ~param_1[6];
  param_1[7] = ~param_1[7];
  param_1[8] = ~param_1[8];
  param_1[9] = ~param_1[9];
  param_1[10] = ~param_1[10];
  param_1[0xb] = ~param_1[0xb];
  param_1[0xc] = ~param_1[0xc];
  param_1[0xd] = ~param_1[0xd];
  param_1[0xe] = ~param_1[0xe];
  param_1[0xf] = param_1[0xf] ^ 0x3fffffff;
  return;
}


