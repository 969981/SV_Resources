/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01692e50; name: FUN_01692e50
 */


int FUN_01692e50(uint param_1)

{
  if (param_1 < 0x7e000001) {
    return (uint)((ulong)param_1 * 0x8080808081 >> 0x27) + 0x10;
  }
  return 0;
}


