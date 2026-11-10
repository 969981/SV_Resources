/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314fa00; name: _INIT_1263
 */


void _INIT_1263(void)

{
  if ((DAT_0487a718 & 1) == 0) {
    DAT_0487a708 = 0;
    DAT_0487a710 = 0;
    DAT_0487a6f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a6f8;
    DAT_0487a700 = &DAT_04680d40;
    DAT_0487a718 = 1;
  }
  return;
}


