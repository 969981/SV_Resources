/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b0e0; name: _INIT_1756
 */


void _INIT_1756(void)

{
  if ((DAT_04888858 & 1) == 0) {
    DAT_04888848 = 0;
    DAT_04888850 = 0;
    DAT_04888838 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888838;
    DAT_04888840 = &DAT_046bbdc0;
    DAT_04888858 = 1;
  }
  return;
}


