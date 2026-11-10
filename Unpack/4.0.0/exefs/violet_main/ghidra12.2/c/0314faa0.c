/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314faa0; name: _INIT_1265
 */


void _INIT_1265(void)

{
  if ((DAT_0487a768 & 1) == 0) {
    DAT_0487a758 = 0;
    DAT_0487a760 = 0;
    DAT_0487a748 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a748;
    DAT_0487a750 = &DAT_04680e80;
    DAT_0487a768 = 1;
  }
  return;
}


