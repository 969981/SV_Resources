/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f8d10; name: FUN_003f8d10
 */


undefined8 FUN_003f8d10(int *param_1)

{
  if (*param_1 == 1) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x28);
  }
  if (*param_1 == 0) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x30);
  }
  return 0;
}


