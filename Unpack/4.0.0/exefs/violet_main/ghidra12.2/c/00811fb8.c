/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00811fb8; name: FUN_00811fb8
 */


void FUN_00811fb8(long param_1)

{
  if ((*(int **)(param_1 + 0x58) != (int *)0x0) && (**(int **)(param_1 + 0x58) == 1)) {
    FUN_0078cc00();
  }
  FUN_00810f24(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


