/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314faf0; name: _INIT_1266
 */


void _INIT_1266(void)

{
  if ((DAT_0487a790 & 1) == 0) {
    DAT_0487a780 = 0;
    DAT_0487a788 = 0;
    DAT_0487a770 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a770;
    DAT_0487a778 = &DAT_04680ff8;
    DAT_0487a790 = 1;
  }
  return;
}


