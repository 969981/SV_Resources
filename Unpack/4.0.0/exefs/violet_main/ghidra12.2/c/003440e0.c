/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003440e0; name: FUN_003440e0
 */


byte FUN_003440e0(int *param_1,byte param_2)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 1)) {
    param_2 = param_1[4] != 0;
  }
  return param_2 & 1;
}


