/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264c80; name: _INIT_1855
 */


void _INIT_1855(void)

{
  if ((DAT_0488a180 & 1) == 0) {
    DAT_0488a170 = 0;
    DAT_0488a178 = 0;
    DAT_0488a160 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a160;
    DAT_0488a168 = &DAT_046c5e58;
    DAT_0488a180 = 1;
  }
  return;
}


