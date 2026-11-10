/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003de390; name: FUN_003de390
 */


uint FUN_003de390(uint *param_1)

{
  if (((*param_1 | 4) == 5) || (*(long *)(param_1 + 2) != 0)) {
    return *param_1;
  }
  return 0;
}


