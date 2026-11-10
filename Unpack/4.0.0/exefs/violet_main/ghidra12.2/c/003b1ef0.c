/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b1ef0; name: FUN_003b1ef0
 */


undefined8 FUN_003b1ef0(long param_1)

{
  if (*(byte *)(param_1 + 0x40) < 0xc) {
    return (&DAT_047f1668)[*(byte *)(param_1 + 0x40)];
  }
  return 0;
}


