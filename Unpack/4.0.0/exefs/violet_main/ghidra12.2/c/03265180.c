/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03265180; name: _INIT_1871
 */


void _INIT_1871(void)

{
  if ((DAT_0488a400 & 1) == 0) {
    DAT_0488a3f0 = 0;
    DAT_0488a3f8 = 0;
    DAT_0488a3e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a3e0;
    DAT_0488a3e8 = &DAT_046c71f0;
    DAT_0488a400 = 1;
  }
  return;
}


