/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148640; name: _INIT_962
 */


void _INIT_962(void)

{
  if ((DAT_04877810 & 1) == 0) {
    DAT_048777f8 = 1;
    DAT_04877800 = FUN_031486ac;
    DAT_04877808 = 0;
    DAT_048777f0 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_048777f0,&PTR_LOOP_04483000);
    DAT_04877810 = 1;
  }
  return;
}


