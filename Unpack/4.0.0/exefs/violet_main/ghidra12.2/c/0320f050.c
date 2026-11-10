/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0320f050; name: _INIT_1664
 */


void _INIT_1664(void)

{
  if ((DAT_04885268 & 1) == 0) {
    DAT_04885258 = 0;
    DAT_04885260 = 0;
    DAT_04885248 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885248;
    DAT_04885250 = &DAT_046aa130;
    DAT_04885268 = 1;
  }
  return;
}


