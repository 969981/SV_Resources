/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148cf0; name: _INIT_978
 */


void _INIT_978(void)

{
  if ((DAT_04877a90 & 1) == 0) {
    DAT_04877a80 = 0;
    DAT_04877a88 = 0;
    DAT_04877a70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877a70;
    DAT_04877a78 = &DAT_0466fb10;
    DAT_04877a90 = 1;
  }
  return;
}


