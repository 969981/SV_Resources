/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03243000; name: _INIT_1706
 */


void _INIT_1706(void)

{
  if ((DAT_04885db8 & 1) == 0) {
    DAT_04885c48 = 1;
    DAT_04885c40 = &PTR_LAB_046acad8;
    DAT_04885db8 = 1;
  }
  return;
}


