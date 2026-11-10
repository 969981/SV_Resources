/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a7f0; name: _INIT_1052
 */


void _INIT_1052(void)

{
  if ((DAT_04878620 & 1) == 0) {
    DAT_04878610 = 0;
    DAT_04878618 = 0;
    DAT_04878600 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878600;
    DAT_04878608 = &DAT_046744d0;
    DAT_04878620 = 1;
  }
  return;
}


