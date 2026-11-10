/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033110; name: _INIT_634
 */


void _INIT_634(void)

{
  if ((DAT_04871370 & 1) == 0) {
    DAT_04871360 = 0;
    DAT_04871368 = 0;
    DAT_04871350 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871350;
    DAT_04871358 = &DAT_04640348;
    DAT_04871370 = 1;
  }
  return;
}


