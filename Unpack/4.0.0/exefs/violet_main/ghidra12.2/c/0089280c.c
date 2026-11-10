/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089280c; name: FUN_0089280c
 */


void FUN_0089280c(undefined2 *param_1)

{
  if (*(long *)(param_1 + 4) != 0) {
    FUN_00896e98();
    *(undefined8 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  return;
}


