/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030369a0; name: _INIT_815
 */


void _INIT_815(void)

{
  if ((DAT_04872fb8 & 1) == 0) {
    DAT_04872fb0 = 0;
    DAT_04872fa0 = 1;
    DAT_04872fa8 = FUN_030369e4;
    DAT_04872fb8 = 1;
    DAT_04872f98 = PTR_DAT_047e4e78 + 0x10;
  }
  return;
}


