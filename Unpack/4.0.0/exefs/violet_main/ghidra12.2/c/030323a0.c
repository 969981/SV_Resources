/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030323a0; name: _INIT_591
 */


void _INIT_591(void)

{
  if ((DAT_04870cb8 & 1) == 0) {
    DAT_04870ca8 = 0;
    DAT_04870cb0 = 0;
    DAT_04870c98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870c98;
    DAT_04870ca0 = &DAT_0463dac8;
    DAT_04870cb8 = 1;
  }
  return;
}


