/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175bf0; name: _INIT_1278
 */


void _INIT_1278(void)

{
  if ((DAT_0487b638 & 1) == 0) {
    DAT_0487b628 = 0;
    DAT_0487b630 = 0;
    DAT_0487b618 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b618;
    DAT_0487b620 = &DAT_04689888;
    DAT_0487b638 = 1;
  }
  return;
}


