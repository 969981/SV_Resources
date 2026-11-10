/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314f500; name: _INIT_1247
 */


void _INIT_1247(void)

{
  if ((DAT_0487a498 & 1) == 0) {
    DAT_0487a488 = 0;
    DAT_0487a490 = 0;
    DAT_0487a478 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a478;
    DAT_0487a480 = &DAT_04680060;
    DAT_0487a498 = 1;
  }
  return;
}


