/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322f550; name: _INIT_1677
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1677(void)

{
  DAT_04885610 = 0;
  DAT_048855c0 = &DAT_048855d0;
  _DAT_048855c8 = 0x8000000400000000;
  DAT_04885612 = 1;
  DAT_04885620 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_04885618 = "common.baseSystem";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_048855c0;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_048855c0,&PTR_LOOP_04483000);
  DAT_04885650 = 0;
  DAT_04885630 = "CommonInitNode";
  DAT_04885638 = &LAB_0322ed70;
  DAT_04885640 = &LAB_0322ef10;
  DAT_04885648 = &DAT_048855b0;
  return;
}


