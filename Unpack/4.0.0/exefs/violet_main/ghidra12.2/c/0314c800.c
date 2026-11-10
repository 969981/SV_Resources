/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c800; name: _INIT_1117
 */


void _INIT_1117(void)

{
  if ((DAT_04879048 & 1) == 0) {
    DAT_04879038 = 0;
    DAT_04879040 = 0;
    DAT_04879028 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879028;
    DAT_04879030 = &DAT_04677f00;
    DAT_04879048 = 1;
  }
  return;
}


