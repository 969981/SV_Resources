/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030358c0; name: _INIT_761
 */


void _INIT_761(void)

{
  if ((DAT_04872748 & 1) == 0) {
    DAT_04872738 = 0;
    DAT_04872740 = 0;
    DAT_04872728 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872728;
    DAT_04872730 = &DAT_04647b78;
    DAT_04872748 = 1;
  }
  return;
}


