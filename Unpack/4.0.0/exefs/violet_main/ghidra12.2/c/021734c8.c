/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021734c8; name: FUN_021734c8
 */


bool FUN_021734c8(short *param_1)

{
  if ((*param_1 == 0x10) && (0xfe < (byte)((ushort)param_1[2] >> 8))) {
    return (param_1[2] & 0xffU) == 1;
  }
  return false;
}


