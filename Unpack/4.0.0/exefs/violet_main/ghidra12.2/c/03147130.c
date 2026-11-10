/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147130; name: _INIT_922
 */


void _INIT_922(void)

{
  if ((DAT_048771d0 & 1) == 0) {
    DAT_048771b8 = 1;
    DAT_048771c0 = FUN_0314719c;
    DAT_048771c8 = 0;
    DAT_048771b0 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_048771b0,&PTR_LOOP_04483000);
    DAT_048771d0 = 1;
  }
  return;
}


