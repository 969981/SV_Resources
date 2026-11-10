/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03177730; name: _INIT_1339
 */


void _INIT_1339(void)

{
  if ((DAT_0487bfc0 & 1) == 0) {
    DAT_0487bfa8 = 1;
    DAT_0487bfb0 = FUN_0317779c;
    DAT_0487bfb8 = 0;
    DAT_0487bfa0 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487bfa0,&PTR_LOOP_04483000);
    DAT_0487bfc0 = 1;
  }
  return;
}


