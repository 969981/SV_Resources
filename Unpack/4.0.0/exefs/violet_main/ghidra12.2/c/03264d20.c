/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264d20; name: _INIT_1857
 */


void _INIT_1857(void)

{
  if ((DAT_0488a1d0 & 1) == 0) {
    DAT_0488a1c0 = 0;
    DAT_0488a1c8 = 0;
    DAT_0488a1b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a1b0;
    DAT_0488a1b8 = &DAT_046c6018;
    DAT_0488a1d0 = 1;
  }
  return;
}


