/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031ca010; name: _INIT_1573
 */


void _INIT_1573(void)

{
  if ((DAT_04883408 & 1) == 0) {
    DAT_048833f8 = 0;
    DAT_04883400 = 0;
    DAT_048833e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048833e8;
    DAT_048833f0 = &DAT_046a4360;
    DAT_04883408 = 1;
  }
  return;
}


