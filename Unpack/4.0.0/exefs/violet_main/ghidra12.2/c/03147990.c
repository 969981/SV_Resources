/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147990; name: _INIT_939
 */


void _INIT_939(void)

{
  if ((DAT_04877478 & 1) == 0) {
    DAT_04877460 = 1;
    DAT_04877468 = FUN_031479fc;
    DAT_04877470 = 0;
    DAT_04877458 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04877458,&PTR_LOOP_04483000);
    DAT_04877478 = 1;
  }
  return;
}


