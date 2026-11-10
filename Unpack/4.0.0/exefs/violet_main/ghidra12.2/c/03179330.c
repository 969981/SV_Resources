/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179330; name: _INIT_1405
 */


void _INIT_1405(void)

{
  if ((DAT_0487ca10 & 1) == 0) {
    DAT_0487c9f8 = 1;
    DAT_0487ca00 = FUN_0317939c;
    DAT_0487ca08 = 0;
    DAT_0487c9f0 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487c9f0,&PTR_LOOP_04483000);
    DAT_0487ca10 = 1;
  }
  return;
}


