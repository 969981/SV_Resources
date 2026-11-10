/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034920; name: _INIT_711
 */


void _INIT_711(void)

{
  if ((DAT_04871f78 & 1) == 0) {
    DAT_04871f68 = 0;
    DAT_04871f70 = 0;
    DAT_04871f58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871f58;
    DAT_04871f60 = &DAT_04644cc8;
    DAT_04871f78 = 1;
  }
  return;
}


