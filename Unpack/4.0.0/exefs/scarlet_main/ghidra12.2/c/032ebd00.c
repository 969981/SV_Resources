/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032ebd00; name: _INIT_1945
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1945(void)

{
  DAT_0488b760 = 0;
  DAT_0488b710 = &DAT_0488b720;
  DAT_0488b718 = 0x8000000400000000;
  DAT_0488b762 = 1;
  DAT_0488b770 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488b768 = "base.ver.patches";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488b710;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488b710,&PTR_LOOP_04483000);
  DAT_0488b788 = FUN_032eb7c0;
  DAT_0488b790 = 0;
  DAT_0488b778 = DAT_04883288;
  DAT_0488b780 = "Patches::V201610r1::Common";
  _DAT_0488b7a8 = 0;
  DAT_0488b798 = 0;
  DAT_0488b7a0 = PTR_DAT_047e63c8;
  DAT_04883288 = &DAT_0488b778;
  return;
}


