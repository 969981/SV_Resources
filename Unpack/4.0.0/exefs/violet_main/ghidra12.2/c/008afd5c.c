/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008afd5c; name: FUN_008afd5c
 */


void FUN_008afd5c(ushort *param_1,ushort param_2,ushort param_3)

{
  *param_1 = (param_2 & 7) << 4 | (param_3 & 1) << 7 | *param_1 & 0xff0f;
  return;
}


