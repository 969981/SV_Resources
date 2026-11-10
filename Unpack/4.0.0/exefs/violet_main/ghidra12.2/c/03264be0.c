/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264be0; name: _INIT_1853
 */


void _INIT_1853(void)

{
  if ((DAT_0488a130 & 1) == 0) {
    DAT_0488a120 = 0;
    DAT_0488a128 = 0;
    DAT_0488a110 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a110;
    DAT_0488a118 = &DAT_046c5ce8;
    DAT_0488a130 = 1;
  }
  return;
}


