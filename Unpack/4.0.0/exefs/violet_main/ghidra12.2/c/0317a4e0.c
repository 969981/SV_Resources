/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317a4e0; name: _INIT_1423
 */


void _INIT_1423(void)

{
  if ((DAT_0487cce0 & 1) == 0) {
    DAT_0487ccd0 = 0;
    DAT_0487ccd8 = 0;
    DAT_0487ccc0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ccc0;
    DAT_0487ccc8 = &DAT_046931f0;
    DAT_0487cce0 = 1;
  }
  return;
}


