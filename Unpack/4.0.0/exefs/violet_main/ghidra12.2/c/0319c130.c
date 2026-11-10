/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c130; name: _INIT_1521
 */


void _INIT_1521(void)

{
  if ((DAT_0487e560 & 1) == 0) {
    DAT_0487e550 = 0;
    DAT_0487e558 = 0;
    DAT_0487e540 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e540;
    DAT_0487e548 = &DAT_0469f468;
    DAT_0487e560 = 1;
  }
  return;
}


