/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b090; name: _INIT_1755
 */


void _INIT_1755(void)

{
  if ((DAT_04888830 & 1) == 0) {
    DAT_04888820 = 0;
    DAT_04888828 = 0;
    DAT_04888810 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888810;
    DAT_04888818 = &DAT_046bbcf0;
    DAT_04888830 = 1;
  }
  return;
}


