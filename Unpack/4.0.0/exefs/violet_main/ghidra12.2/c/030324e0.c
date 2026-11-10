/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030324e0; name: _INIT_595
 */


void _INIT_595(void)

{
  if ((DAT_04870d58 & 1) == 0) {
    DAT_04870d48 = 0;
    DAT_04870d50 = 0;
    DAT_04870d38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870d38;
    DAT_04870d40 = &DAT_0463de58;
    DAT_04870d58 = 1;
  }
  return;
}


