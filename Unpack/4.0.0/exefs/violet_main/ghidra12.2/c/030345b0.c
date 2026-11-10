/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030345b0; name: _INIT_700
 */


void _INIT_700(void)

{
  if ((DAT_04871dc0 & 1) == 0) {
    DAT_04871db0 = 0;
    DAT_04871db8 = 0;
    DAT_04871da0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871da0;
    DAT_04871da8 = &DAT_046441c8;
    DAT_04871dc0 = 1;
  }
  return;
}


