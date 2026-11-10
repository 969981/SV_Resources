/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030315a0; name: _INIT_546
 */


void _INIT_546(void)

{
  if ((DAT_048705c0 & 1) == 0) {
    DAT_048705b0 = 0;
    DAT_048705b8 = 0;
    DAT_048705a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048705a0;
    DAT_048705a8 = &DAT_0463af08;
    DAT_048705c0 = 1;
  }
  return;
}


