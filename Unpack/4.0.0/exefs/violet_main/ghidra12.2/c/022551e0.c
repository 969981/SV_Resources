/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022551e0; name: FUN_022551e0
 */


short FUN_022551e0(short *param_1,uint param_2)

{
  if (((*param_1 == 0x10) && ((ushort)param_1[1] != 0)) && (param_2 < (ushort)param_1[1] - 1)) {
    return param_1[param_2 + 3];
  }
  return 0;
}


