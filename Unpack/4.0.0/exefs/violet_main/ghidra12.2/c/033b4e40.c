/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b4e40; name: _INIT_2076
 */


void _INIT_2076(void)

{
  if ((DAT_0488e568 & 1) == 0) {
    DAT_0488e558 = 0;
    DAT_0488e560 = 0;
    DAT_0488e548 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e548;
    DAT_0488e550 = &DAT_047b4270;
    DAT_0488e568 = 1;
  }
  return;
}


