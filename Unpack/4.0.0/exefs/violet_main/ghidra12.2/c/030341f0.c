/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030341f0; name: _INIT_688
 */


void _INIT_688(void)

{
  if ((DAT_04871be0 & 1) == 0) {
    DAT_04871bd0 = 0;
    DAT_04871bd8 = 0;
    DAT_04871bc0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871bc0;
    DAT_04871bc8 = &DAT_04643508;
    DAT_04871be0 = 1;
  }
  return;
}


