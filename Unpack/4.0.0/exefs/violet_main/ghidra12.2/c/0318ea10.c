/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318ea10; name: _INIT_1474
 */


void _INIT_1474(void)

{
  if ((DAT_0487d710 & 1) == 0) {
    DAT_0487d700 = 0;
    DAT_0487d708 = 0;
    DAT_0487d6f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d6f0;
    DAT_0487d6f8 = &DAT_046983a8;
    DAT_0487d710 = 1;
  }
  return;
}


