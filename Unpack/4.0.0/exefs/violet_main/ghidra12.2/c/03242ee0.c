/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03242ee0; name: _INIT_1700
 */


void _INIT_1700(void)

{
  if ((DAT_04885d88 & 1) == 0) {
    DAT_04885b28 = 1;
    DAT_04885b20 = &PTR_LAB_046ac868;
    DAT_04885d88 = 1;
  }
  return;
}


