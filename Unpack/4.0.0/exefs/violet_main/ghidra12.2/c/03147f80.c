/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147f80; name: _INIT_946
 */


void _INIT_946(void)

{
  if ((DAT_04877590 & 1) == 0) {
    DAT_04877580 = 0;
    DAT_04877588 = 0;
    DAT_04877570 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877570;
    DAT_04877578 = &DAT_0466daf0;
    DAT_04877590 = 1;
  }
  return;
}


