/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178e10; name: _INIT_1394
 */


void _INIT_1394(void)

{
  if ((DAT_0487c858 & 1) == 0) {
    DAT_0487c848 = 0;
    DAT_0487c850 = 0;
    DAT_0487c838 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c838;
    DAT_0487c840 = &DAT_046916a8;
    DAT_0487c858 = 1;
  }
  return;
}


