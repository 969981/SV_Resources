/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c394a0; name: FUN_01c394a0
 */


short * FUN_01c394a0(short *param_1)

{
  if (*param_1 == 0x10) {
    param_1 = param_1 + (ulong)(ushort)param_1[1] + 2;
  }
  return param_1;
}


