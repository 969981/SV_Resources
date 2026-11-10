/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324a820; name: _INIT_1728
 */


void _INIT_1728(void)

{
  if ((DAT_048883f8 & 1) == 0) {
    DAT_048883e8 = 0;
    DAT_048883f0 = 0;
    DAT_048883d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048883d8;
    DAT_048883e0 = &DAT_046ba3e8;
    DAT_048883f8 = 1;
  }
  return;
}


