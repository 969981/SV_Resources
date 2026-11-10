/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298da60; name: FUN_0298da60
 */


undefined8 FUN_0298da60(long param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffff8;
  return 1;
}


