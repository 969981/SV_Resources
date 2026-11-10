/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ca1f0; name: _INIT_1578
 */


void _INIT_1578(void)

{
  DAT_04883320 = 0;
  DAT_048832d0 = &DAT_048832e0;
  DAT_048832d8 = 0x8000000400000000;
  DAT_04883322 = 1;
  DAT_04883330 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_04883328 = "base.StringBuf";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_048832d0;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_048832d0,&PTR_LOOP_04483000);
  DAT_04883340 = 1;
  DAT_04883338 = &PTR_LAB_046a4718;
  return;
}


