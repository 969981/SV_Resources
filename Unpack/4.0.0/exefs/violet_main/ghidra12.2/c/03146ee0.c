/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146ee0; name: _INIT_915
 */


void _INIT_915(void)

{
  if ((DAT_048770b8 & 1) == 0) {
    DAT_048770a0 = 1;
    DAT_048770a8 = FUN_03146b0c;
    DAT_048770b0 = 0;
    DAT_04877098 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04877098,&PTR_LOOP_04483000);
    DAT_048770b8 = 1;
  }
  return;
}


