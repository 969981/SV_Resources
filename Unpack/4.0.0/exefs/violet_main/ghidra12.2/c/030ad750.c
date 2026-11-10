/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030ad750; name: _INIT_840
 */


void _INIT_840(void)

{
  if ((DAT_04873468 & 1) == 0) {
    DAT_04873458 = 0;
    DAT_04873460 = 0;
    DAT_04873448 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873448;
    DAT_04873450 = &DAT_0464d3f8;
    DAT_04873468 = 1;
  }
  return;
}


