/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031bc820; name: _INIT_1564
 */


void _INIT_1564(void)

{
  DAT_04882ff8 = 0;
  FUN_00100190(&LAB_031bc5f8,&DAT_04882ff8,&PTR_LOOP_04483000);
  DAT_04883000 = "$hkProcessFactory";
  DAT_04883008 = &LAB_031bc600;
  DAT_04883010 = &LAB_031bc750;
  DAT_04883018 = &DAT_04882ff8;
  DAT_04883020 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_04883000;
  return;
}


