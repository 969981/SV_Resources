/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d540; name: _INIT_1150
 */


void _INIT_1150(void)

{
  if ((DAT_04879570 & 1) == 0) {
    DAT_04879560 = 0;
    DAT_04879568 = 0;
    DAT_04879550 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879550;
    DAT_04879558 = &DAT_04679fe8;
    DAT_04879570 = 1;
  }
  return;
}


