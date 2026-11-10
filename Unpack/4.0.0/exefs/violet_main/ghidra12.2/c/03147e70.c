/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147e70; name: _INIT_943
 */


void _INIT_943(void)

{
  if ((DAT_04877518 & 1) == 0) {
    DAT_04877500 = 1;
    DAT_04877508 = FUN_031479fc;
    DAT_04877510 = 0;
    DAT_048774f8 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_048774f8,&PTR_LOOP_04483000);
    DAT_04877518 = 1;
  }
  return;
}


