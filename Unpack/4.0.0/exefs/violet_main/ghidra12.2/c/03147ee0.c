/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147ee0; name: _INIT_944
 */


void _INIT_944(void)

{
  if ((DAT_04877540 & 1) == 0) {
    DAT_04877530 = 0;
    DAT_04877538 = 0;
    DAT_04877520 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877520;
    DAT_04877528 = &DAT_0466d910;
    DAT_04877540 = 1;
  }
  return;
}


