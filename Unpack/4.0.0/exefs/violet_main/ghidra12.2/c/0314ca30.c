/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ca30; name: _INIT_1124
 */


void _INIT_1124(void)

{
  if ((DAT_04879160 & 1) == 0) {
    DAT_04879150 = 0;
    DAT_04879158 = 0;
    DAT_04879140 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879140;
    DAT_04879148 = &DAT_046785e8;
    DAT_04879160 = 1;
  }
  return;
}


