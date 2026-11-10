/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b180; name: _INIT_1758
 */


void _INIT_1758(void)

{
  if ((DAT_048888a8 & 1) == 0) {
    DAT_04888898 = 0;
    DAT_048888a0 = 0;
    DAT_04888888 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888888;
    DAT_04888890 = &DAT_046bbf60;
    DAT_048888a8 = 1;
  }
  return;
}


