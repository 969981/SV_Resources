/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003eb9c0; name: FUN_003eb9c0
 */


undefined4 FUN_003eb9c0(undefined8 *param_1)

{
  if (1 < *(int *)(param_1 + 1)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 1) == 1) {
    return *(undefined4 *)*param_1;
  }
  return 0;
}


