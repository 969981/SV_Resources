/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030323f0; name: _INIT_592
 */


void _INIT_592(void)

{
  if ((DAT_04870ce0 & 1) == 0) {
    DAT_04870cd0 = 0;
    DAT_04870cd8 = 0;
    DAT_04870cc0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870cc0;
    DAT_04870cc8 = &DAT_0463dbd8;
    DAT_04870ce0 = 1;
  }
  return;
}


