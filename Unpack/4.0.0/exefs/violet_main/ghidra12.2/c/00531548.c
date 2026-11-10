/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00531548; name: FUN_00531548
 */


void FUN_00531548(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    if (*(long *)(*(long *)(param_1 + 8) + -8) == 0) {
      FUN_0049e700();
      return;
    }
  }
  return;
}


