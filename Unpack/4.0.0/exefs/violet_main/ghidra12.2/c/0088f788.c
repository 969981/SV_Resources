/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088f788; name: FUN_0088f788
 */


undefined2 FUN_0088f788(long param_1)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  return *(undefined2 *)(*(long *)(param_1 + 0x18) + 0xc);
}


