/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03364a00; name: _INIT_2050
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2050(void)

{
  DAT_0488d8c8 = 0;
  DAT_0488d878 = &DAT_0488d888;
  DAT_0488d880 = 0x8000000400000000;
  DAT_0488d8ca = 1;
  DAT_0488d8d8 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488d8d0 = "base.ver.bundle";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488d878;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488d878,&PTR_LOOP_04483000);
  DAT_0488d8e0 = DAT_04883288;
  DAT_0488d900 = FUN_0334c340;
  DAT_0488d908 = 0;
  DAT_04883288 = &DAT_0488d8e0;
  _DAT_0488d910 = 0;
  DAT_0488d8f0 = 0;
  DAT_0488d8f8 = PTR_DAT_047e6758;
  DAT_0488d8e8 = "Common::VersionBundle";
  return;
}


