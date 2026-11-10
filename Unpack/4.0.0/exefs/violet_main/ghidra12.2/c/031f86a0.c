/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f86a0; name: _INIT_1638
 */


void _INIT_1638(void)

{
  if ((DAT_04884da0 & 1) == 0) {
    DAT_04884d90 = 0;
    DAT_04884d98 = 0;
    DAT_04884d80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884d80;
    DAT_04884d88 = &DAT_046a7c48;
    DAT_04884da0 = 1;
  }
  return;
}


