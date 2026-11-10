/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318e8d0; name: _INIT_1470
 */


void _INIT_1470(void)

{
  if ((DAT_0487d670 & 1) == 0) {
    DAT_0487d660 = 0;
    DAT_0487d668 = 0;
    DAT_0487d650 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d650;
    DAT_0487d658 = &DAT_04697ed8;
    DAT_0487d670 = 1;
  }
  return;
}


