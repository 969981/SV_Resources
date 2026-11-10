/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319bfa0; name: _INIT_1516
 */


void _INIT_1516(void)

{
  if ((DAT_0487e498 & 1) == 0) {
    DAT_0487e488 = 0;
    DAT_0487e490 = 0;
    DAT_0487e478 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e478;
    DAT_0487e480 = &DAT_0469ef90;
    DAT_0487e498 = 1;
  }
  return;
}


