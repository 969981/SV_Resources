/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324aaf0; name: _INIT_1737
 */


void _INIT_1737(void)

{
  if ((DAT_04888560 & 1) == 0) {
    DAT_04888550 = 0;
    DAT_04888558 = 0;
    DAT_04888540 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888540;
    DAT_04888548 = &DAT_046babb0;
    DAT_04888560 = 1;
  }
  return;
}


