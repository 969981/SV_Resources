/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b4e90; name: _INIT_2077
 */


void _INIT_2077(void)

{
  if ((DAT_0488e590 & 1) == 0) {
    DAT_0488e580 = 0;
    DAT_0488e588 = 0;
    DAT_0488e570 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e570;
    DAT_0488e578 = &DAT_047b4350;
    DAT_0488e590 = 1;
  }
  return;
}


