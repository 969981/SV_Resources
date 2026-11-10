/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d200; name: _INIT_1140
 */


void _INIT_1140(void)

{
  if ((DAT_048793e0 & 1) == 0) {
    DAT_048793c8 = 1;
    DAT_048793d0 = FUN_0314ce5c;
    DAT_048793d8 = 0;
    DAT_048793c0 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_048793c0,&PTR_LOOP_04483000);
    DAT_048793e0 = 1;
  }
  return;
}


