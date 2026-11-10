/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03124510; name: _INIT_847
 */


void _INIT_847(void)

{
  if ((DAT_04873588 & 1) == 0) {
    DAT_04873578 = 0;
    DAT_04873580 = 0;
    DAT_04873568 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873568;
    DAT_04873570 = &DAT_0464fc00;
    DAT_04873588 = 1;
  }
  return;
}


