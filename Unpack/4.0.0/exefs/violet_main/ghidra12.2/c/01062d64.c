/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01062d64; name: FUN_01062d64
 */


void FUN_01062d64(long param_1)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_02768b10();
  }
  else {
    FUN_02768c10();
  }
  return;
}


