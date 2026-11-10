/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033700; name: _INIT_653
 */


void _INIT_653(void)

{
  if ((DAT_04871668 & 1) == 0) {
    DAT_04871658 = 0;
    DAT_04871660 = 0;
    DAT_04871648 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871648;
    DAT_04871650 = &DAT_046413a0;
    DAT_04871668 = 1;
  }
  return;
}


