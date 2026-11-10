/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031730; name: _INIT_551
 */


void _INIT_551(void)

{
  if ((DAT_04870688 & 1) == 0) {
    DAT_04870678 = 0;
    DAT_04870680 = 0;
    DAT_04870668 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870668;
    DAT_04870670 = &DAT_0463b380;
    DAT_04870688 = 1;
  }
  return;
}


