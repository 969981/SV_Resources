/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02961a60; name: FUN_02961a60
 */


uint FUN_02961a60(int param_1)

{
  if ((param_1 - 6U & 0xffff) < 9) {
    return 0x107U >> (ulong)(param_1 - 6U & 0x1f) & 1;
  }
  return 0;
}


