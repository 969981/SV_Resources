/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02961a30; name: FUN_02961a30
 */


uint FUN_02961a30(uint param_1)

{
  if ((param_1 & 0xffff) < 0x12) {
    return 0x241cfU >> (ulong)(param_1 & 0x1f) & 1;
  }
  return 0;
}


