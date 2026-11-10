/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0010c6e0; name: FUN_0010c6e0
 */


bool FUN_0010c6e0(int param_1)

{
  if ((param_1 + 0x99b4b6beU >> 0x18 | (param_1 + 0x99b4b6beU) * 0x100) < 4) {
    return true;
  }
  return param_1 == 0x6b4b4942;
}


