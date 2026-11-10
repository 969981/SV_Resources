/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035690; name: _INIT_754
 */


void _INIT_754(void)

{
  if ((DAT_04872630 & 1) == 0) {
    DAT_04872620 = 0;
    DAT_04872628 = 0;
    DAT_04872610 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872610;
    DAT_04872618 = &DAT_046474f8;
    DAT_04872630 = 1;
  }
  return;
}


