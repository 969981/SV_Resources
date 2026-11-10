/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d160; name: _INIT_1138
 */


void _INIT_1138(void)

{
  if ((DAT_04879390 & 1) == 0) {
    DAT_04879380 = 0;
    DAT_04879388 = 0;
    DAT_04879370 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879370;
    DAT_04879378 = &DAT_046793e0;
    DAT_04879390 = 1;
  }
  return;
}


