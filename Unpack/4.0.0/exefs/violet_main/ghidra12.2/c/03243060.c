/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03243060; name: _INIT_1708
 */


void _INIT_1708(void)

{
  if ((DAT_04885dc8 & 1) == 0) {
    DAT_04885ca8 = 1;
    DAT_04885ca0 = &PTR_LAB_046acba8;
    DAT_04885dc8 = 1;
  }
  return;
}


