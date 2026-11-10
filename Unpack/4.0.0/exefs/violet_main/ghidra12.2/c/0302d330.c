/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0302d330; name: _INIT_517
 */


void _INIT_517(void)

{
  if ((DAT_04870138 & 1) == 0) {
    DAT_04870128 = 0;
    DAT_04870130 = 0;
    DAT_04870118 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870118;
    DAT_04870120 = &DAT_046394a0;
    DAT_04870138 = 1;
  }
  return;
}


