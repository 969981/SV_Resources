/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f6e20; name: FUN_003f6e20
 */


bool FUN_003f6e20(uint param_1,ushort param_2)

{
  if (param_1 < 0x80) {
    return (*(ushort *)(&DAT_03cde1a8 + (ulong)param_1 * 2) & param_2) != 0;
  }
  return false;
}


