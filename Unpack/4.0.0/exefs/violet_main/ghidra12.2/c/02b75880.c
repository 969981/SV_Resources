/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b75880; name: _INIT_407
 */


void _INIT_407(void)

{
  if ((DAT_04842638 & 1) == 0) {
    DAT_04842628 = 0;
    DAT_04842630 = 0;
    DAT_04842618 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04842618;
    DAT_04842620 = &DAT_045aad20;
    DAT_04842638 = 1;
  }
  return;
}


