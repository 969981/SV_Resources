/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02943244; name: FUN_02943244
 */


void FUN_02943244(undefined2 *param_1,ushort param_2,undefined2 param_3)

{
  *param_1 = param_3;
  param_1[1] = param_1[1] & 0xc000 | param_2 & 0x7f;
  return;
}


