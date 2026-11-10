/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324aaa0; name: _INIT_1736
 */


void _INIT_1736(void)

{
  if ((DAT_04888538 & 1) == 0) {
    DAT_04888528 = 0;
    DAT_04888530 = 0;
    DAT_04888518 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888518;
    DAT_04888520 = &DAT_046bab10;
    DAT_04888538 = 1;
  }
  return;
}


