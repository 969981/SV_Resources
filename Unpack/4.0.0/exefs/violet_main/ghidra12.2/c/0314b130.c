/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314b130; name: _INIT_1076
 */


void _INIT_1076(void)

{
  if ((DAT_048789e0 & 1) == 0) {
    DAT_048789d0 = 0;
    DAT_048789d8 = 0;
    DAT_048789c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048789c0;
    DAT_048789c8 = &DAT_04675ac0;
    DAT_048789e0 = 1;
  }
  return;
}


