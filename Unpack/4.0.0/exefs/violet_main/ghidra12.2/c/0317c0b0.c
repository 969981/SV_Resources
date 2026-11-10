/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317c0b0; name: _INIT_1453
 */


void _INIT_1453(void)

{
  if ((DAT_0487d190 & 1) == 0) {
    DAT_0487d180 = 0;
    DAT_0487d188 = 0;
    DAT_0487d170 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d170;
    DAT_0487d178 = &DAT_04694cc0;
    DAT_0487d190 = 1;
  }
  return;
}


