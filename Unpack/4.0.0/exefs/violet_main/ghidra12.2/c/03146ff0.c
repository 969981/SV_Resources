/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146ff0; name: _INIT_918
 */


void _INIT_918(void)

{
  if ((DAT_04877130 & 1) == 0) {
    DAT_04877120 = 0;
    DAT_04877128 = 0;
    DAT_04877110 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877110;
    DAT_04877118 = &DAT_0466c138;
    DAT_04877130 = 1;
  }
  return;
}


