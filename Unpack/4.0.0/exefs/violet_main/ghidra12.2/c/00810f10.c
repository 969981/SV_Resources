/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00810f10; name: FUN_00810f10
 */


void FUN_00810f10(long param_1,long param_2)

{
  *(long *)(param_1 + 0x20) = param_2;
  *(bool *)(param_1 + 0x28) = param_2 != 0;
  return;
}


