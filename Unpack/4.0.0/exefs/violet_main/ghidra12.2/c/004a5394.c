/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a5394; name: FUN_004a5394
 */


undefined8 FUN_004a5394(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x4b) == '\0') {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x28);
}


