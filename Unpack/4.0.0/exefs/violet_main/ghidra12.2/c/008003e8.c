/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008003e8; name: FUN_008003e8
 */


undefined8 FUN_008003e8(long param_1)

{
  if (*(int **)(param_1 + 0x13a0) != (int *)0x0) {
    if (2 < **(int **)(param_1 + 0x13a0) - 2U) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x13a0) = 0;
  }
  return 1;
}


