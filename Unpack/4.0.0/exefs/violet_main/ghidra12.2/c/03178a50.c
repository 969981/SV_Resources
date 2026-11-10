/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178a50; name: _INIT_1382
 */


void _INIT_1382(void)

{
  if ((DAT_0487c678 & 1) == 0) {
    DAT_0487c668 = 0;
    DAT_0487c670 = 0;
    DAT_0487c658 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c658;
    DAT_0487c660 = &DAT_046907f0;
    DAT_0487c678 = 1;
  }
  return;
}


