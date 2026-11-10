/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035550; name: _INIT_750
 */


void _INIT_750(void)

{
  if ((DAT_04872590 & 1) == 0) {
    DAT_04872580 = 0;
    DAT_04872588 = 0;
    DAT_04872570 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872570;
    DAT_04872578 = &DAT_04647158;
    DAT_04872590 = 1;
  }
  return;
}


