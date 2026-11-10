/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147fd0; name: _INIT_947
 */


void _INIT_947(void)

{
  if ((DAT_048775b8 & 1) == 0) {
    DAT_048775a8 = 0;
    DAT_048775b0 = 0;
    DAT_04877598 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877598;
    DAT_048775a0 = &DAT_0466dbb0;
    DAT_048775b8 = 1;
  }
  return;
}


