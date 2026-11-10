/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033d90; name: _INIT_674
 */


void _INIT_674(void)

{
  if ((DAT_048719b0 & 1) == 0) {
    DAT_048719a0 = 0;
    DAT_048719a8 = 0;
    DAT_04871990 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871990;
    DAT_04871998 = &DAT_046427c8;
    DAT_048719b0 = 1;
  }
  return;
}


