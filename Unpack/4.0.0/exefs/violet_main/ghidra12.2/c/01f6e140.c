/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6e140; name: FUN_01f6e140
 */


undefined8 FUN_01f6e140(long param_1)

{
  if (*(int *)(param_1 + 0x24) == 3) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return 1;
  }
  return 0;
}


