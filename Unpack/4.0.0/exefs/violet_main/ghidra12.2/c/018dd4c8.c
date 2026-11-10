/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dd4c8; name: FUN_018dd4c8
 */


undefined4 * FUN_018dd4c8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  memcpy(param_1 + 1,param_2 + 1,0x10);
  return param_1;
}


