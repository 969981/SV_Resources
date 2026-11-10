/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031ca100; name: _INIT_1576
 */


void _INIT_1576(void)

{
  if ((DAT_04883480 & 1) == 0) {
    DAT_04883470 = 0;
    DAT_04883478 = 0;
    DAT_04883460 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04883460;
    DAT_04883468 = &DAT_046a4680;
    DAT_04883480 = 1;
  }
  return;
}


