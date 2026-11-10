/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034060; name: _INIT_683
 */


void _INIT_683(void)

{
  if ((DAT_04871b18 & 1) == 0) {
    DAT_04871b08 = 0;
    DAT_04871b10 = 0;
    DAT_04871af8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871af8;
    DAT_04871b00 = &DAT_04643030;
    DAT_04871b18 = 1;
  }
  return;
}


