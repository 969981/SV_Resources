/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314cc60; name: _INIT_1131
 */


void _INIT_1131(void)

{
  if ((DAT_04879278 & 1) == 0) {
    DAT_04879268 = 0;
    DAT_04879270 = 0;
    DAT_04879258 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879258;
    DAT_04879260 = &DAT_04678c58;
    DAT_04879278 = 1;
  }
  return;
}


