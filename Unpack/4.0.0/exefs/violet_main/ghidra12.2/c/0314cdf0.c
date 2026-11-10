/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314cdf0; name: _INIT_1136
 */


void _INIT_1136(void)

{
  if ((DAT_04879340 & 1) == 0) {
    DAT_04879328 = 1;
    DAT_04879330 = FUN_0314ce5c;
    DAT_04879338 = 0;
    DAT_04879320 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04879320,&PTR_LOOP_04483000);
    DAT_04879340 = 1;
  }
  return;
}


