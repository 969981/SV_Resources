/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264eb0; name: _INIT_1862
 */


void _INIT_1862(void)

{
  if ((DAT_0488a298 & 1) == 0) {
    DAT_0488a288 = 0;
    DAT_0488a290 = 0;
    DAT_0488a278 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a278;
    DAT_0488a280 = &DAT_046c66d0;
    DAT_0488a298 = 1;
  }
  return;
}


