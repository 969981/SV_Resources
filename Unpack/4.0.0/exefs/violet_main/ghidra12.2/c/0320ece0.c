/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0320ece0; name: _INIT_1653
 */


void _INIT_1653(void)

{
  if ((DAT_048850b0 & 1) == 0) {
    DAT_048850a0 = 0;
    DAT_048850a8 = 0;
    DAT_04885090 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885090;
    DAT_04885098 = &DAT_046a9680;
    DAT_048850b0 = 1;
  }
  return;
}


