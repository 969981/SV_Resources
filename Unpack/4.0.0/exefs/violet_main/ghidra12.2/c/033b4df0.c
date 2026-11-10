/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b4df0; name: _INIT_2075
 */


void _INIT_2075(void)

{
  if ((DAT_0488e540 & 1) == 0) {
    DAT_0488e530 = 0;
    DAT_0488e538 = 0;
    DAT_0488e520 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e520;
    DAT_0488e528 = &DAT_047b40f8;
    DAT_0488e540 = 1;
  }
  return;
}


