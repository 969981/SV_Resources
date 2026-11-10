/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b5510; name: FUN_003b5510
 */


undefined8 FUN_003b5510(long param_1,ulong param_2)

{
  if (param_2 == 1) {
    param_2 = 0;
  }
  else if (0x4000 < param_2) {
    return 0;
  }
  *(ulong *)(param_1 + 0x3a0) = param_2;
  return 1;
}


