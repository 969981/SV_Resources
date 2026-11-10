/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003aecf0; name: FUN_003aecf0
 */


long FUN_003aecf0(long param_1)

{
  if (*(long *)(param_1 + 0x680) == 0) {
    return *(long *)(*(long *)(param_1 + 0x660) + 0x118);
  }
  return *(long *)(param_1 + 0x680);
}


