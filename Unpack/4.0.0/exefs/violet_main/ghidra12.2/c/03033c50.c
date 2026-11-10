/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033c50; name: _INIT_670
 */


void _INIT_670(void)

{
  if ((DAT_04871910 & 1) == 0) {
    DAT_04871900 = 0;
    DAT_04871908 = 0;
    DAT_048718f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048718f0;
    DAT_048718f8 = &DAT_046423e8;
    DAT_04871910 = 1;
  }
  return;
}


