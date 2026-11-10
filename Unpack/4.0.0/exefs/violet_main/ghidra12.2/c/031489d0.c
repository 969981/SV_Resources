/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031489d0; name: _INIT_968
 */


void _INIT_968(void)

{
  if ((DAT_04877900 & 1) == 0) {
    DAT_048778f0 = 0;
    DAT_048778f8 = 0;
    DAT_048778e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048778e0;
    DAT_048778e8 = &DAT_0466ef90;
    DAT_04877900 = 1;
  }
  return;
}


