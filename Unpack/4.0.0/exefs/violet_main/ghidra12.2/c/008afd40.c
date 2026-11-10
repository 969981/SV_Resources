/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008afd40; name: FUN_008afd40
 */


void FUN_008afd40(ushort *param_1,ushort param_2,ushort param_3)

{
  *param_1 = param_2 & 3 | (param_3 & 3) << 2 | *param_1 & 0xfff0;
  return;
}


