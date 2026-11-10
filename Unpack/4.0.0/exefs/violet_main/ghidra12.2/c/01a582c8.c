/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a582c8; name: FUN_01a582c8
 */


undefined4 FUN_01a582c8(char param_1)

{
  if ((byte)(param_1 - 1U) < 0x1d) {
    return *(undefined4 *)(&DAT_03d61b34 + (ulong)(byte)(param_1 - 1U) * 8);
  }
  return 0;
}


