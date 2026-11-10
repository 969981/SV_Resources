/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033840; name: _INIT_657
 */


void _INIT_657(void)

{
  if ((DAT_04871708 & 1) == 0) {
    DAT_048716f8 = 0;
    DAT_04871700 = 0;
    DAT_048716e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048716e8;
    DAT_048716f0 = &DAT_04641680;
    DAT_04871708 = 1;
  }
  return;
}


