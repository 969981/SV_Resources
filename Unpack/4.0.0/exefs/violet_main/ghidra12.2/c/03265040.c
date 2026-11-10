/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03265040; name: _INIT_1867
 */


void _INIT_1867(void)

{
  if ((DAT_0488a360 & 1) == 0) {
    DAT_0488a350 = 0;
    DAT_0488a358 = 0;
    DAT_0488a340 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a340;
    DAT_0488a348 = &DAT_046c6df0;
    DAT_0488a360 = 1;
  }
  return;
}


