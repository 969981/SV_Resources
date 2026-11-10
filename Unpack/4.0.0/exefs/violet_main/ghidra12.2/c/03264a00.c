/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264a00; name: _INIT_1847
 */


void _INIT_1847(void)

{
  if ((DAT_0488a040 & 1) == 0) {
    DAT_0488a030 = 0;
    DAT_0488a038 = 0;
    DAT_0488a020 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a020;
    DAT_0488a028 = &DAT_046c5738;
    DAT_0488a040 = 1;
  }
  return;
}


