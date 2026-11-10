/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324af00; name: _INIT_1750
 */


void _INIT_1750(void)

{
  if ((DAT_04888768 & 1) == 0) {
    DAT_04888758 = 0;
    DAT_04888760 = 0;
    DAT_04888748 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888748;
    DAT_04888750 = &DAT_046bb730;
    DAT_04888768 = 1;
  }
  return;
}


