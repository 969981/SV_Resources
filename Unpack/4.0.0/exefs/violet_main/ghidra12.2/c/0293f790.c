/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293f790; name: FUN_0293f790
 */


uint FUN_0293f790(int param_1)

{
  if ((param_1 - 9U & 0xffff) < 8) {
    return 0xc3U >> (ulong)(param_1 - 9U & 0x1f) & 1;
  }
  return 0;
}


