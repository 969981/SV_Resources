/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146030; name: _INIT_883
 */


void _INIT_883(void)

{
  if ((DAT_04876bb8 & 1) == 0) {
    DAT_04876ba8 = 0;
    DAT_04876bb0 = 0;
    DAT_04876b98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876b98;
    DAT_04876ba0 = &DAT_0466a130;
    DAT_04876bb8 = 1;
  }
  return;
}


