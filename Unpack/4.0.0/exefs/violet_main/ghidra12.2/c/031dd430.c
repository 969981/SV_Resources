/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031dd430; name: _INIT_1607
 */


void _INIT_1607(void)

{
  if ((DAT_04884478 & 1) == 0) {
    DAT_04884468 = 0;
    DAT_04884470 = 0;
    DAT_04884458 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884458;
    DAT_04884460 = &DAT_046a5cc0;
    DAT_04884478 = 1;
  }
  return;
}


