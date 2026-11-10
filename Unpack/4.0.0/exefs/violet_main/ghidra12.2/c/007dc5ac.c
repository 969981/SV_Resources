/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dc5ac; name: FUN_007dc5ac
 */


void FUN_007dc5ac(long param_1)

{
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_0078cc00();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


