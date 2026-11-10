/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032a30; name: _INIT_612
 */


void _INIT_612(void)

{
  if ((DAT_04871000 & 1) == 0) {
    DAT_04870ff0 = 0;
    DAT_04870ff8 = 0;
    DAT_04870fe0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870fe0;
    DAT_04870fe8 = &DAT_0463eeb0;
    DAT_04871000 = 1;
  }
  return;
}


