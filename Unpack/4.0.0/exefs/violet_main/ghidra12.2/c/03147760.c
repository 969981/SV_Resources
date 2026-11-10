/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147760; name: _INIT_932
 */


void _INIT_932(void)

{
  if ((DAT_04877360 & 1) == 0) {
    DAT_04877350 = 0;
    DAT_04877358 = 0;
    DAT_04877340 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877340;
    DAT_04877348 = &DAT_0466cd88;
    DAT_04877360 = 1;
  }
  return;
}


