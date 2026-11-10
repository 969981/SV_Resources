/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029598a0; name: FUN_029598a0
 */


uint FUN_029598a0(int param_1)

{
  if ((param_1 - 7U & 0xffff) < 0x11) {
    return 0x10171U >> (ulong)(param_1 - 7U & 0x1f) & 1;
  }
  return 0;
}


