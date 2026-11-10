/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03393700; name: _INIT_2066
 */


void _INIT_2066(void)

{
  if ((DAT_0488e090 & 1) == 0) {
    DAT_0488e080 = 0;
    DAT_0488e088 = 0;
    DAT_0488e070 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e070;
    DAT_0488e078 = &DAT_047b2da0;
    DAT_0488e090 = 1;
  }
  return;
}


