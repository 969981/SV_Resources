/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264ff0; name: _INIT_1866
 */


void _INIT_1866(void)

{
  if ((DAT_0488a338 & 1) == 0) {
    DAT_0488a328 = 0;
    DAT_0488a330 = 0;
    DAT_0488a318 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a318;
    DAT_0488a320 = &DAT_046c6ca8;
    DAT_0488a338 = 1;
  }
  return;
}


