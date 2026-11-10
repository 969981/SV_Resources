/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322eb60; name: _INIT_1676
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1676(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_047e3f18;
  DAT_04885510 = "Register hkLog Sources";
  DAT_04885518 = &LAB_0322c0b0;
  DAT_04885520 = &LAB_0322c0f0;
  DAT_04885528 = &DAT_04885508;
  DAT_04885530 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_04885510;
  nn::os::InitializeMutex((MutexType *)&DAT_04885538,true,0);
  FUN_00100190(&LAB_0322c2f0,&DAT_04885538,&PTR_LOOP_04483000);
  puVar2 = PTR_DAT_047e4880;
  DAT_048855ac = *(int *)(PTR_DAT_047e4880 + 4);
  DAT_04885568 = &DAT_03d7702c;
  *(int *)(PTR_DAT_047e4880 + 4) = DAT_048855ac + 1;
  DAT_04885570 = 0;
  DAT_04885558 = 0;
  _DAT_04885560 = 0x8000000000000000;
  FUN_00100190(FUN_0322c62c,&DAT_04885558,&PTR_LOOP_04483000);
  DAT_04885578 = 0;
  FUN_00100190(&LAB_0322c6c4,&DAT_04885578,&PTR_LOOP_04483000);
  DAT_04885580 = "$Registry";
  DAT_04885588 = &LAB_0322c6d0;
  DAT_048855a0 = *(undefined8 *)puVar1;
  DAT_04885590 = &LAB_0322c7d0;
  DAT_04885598 = &DAT_04885578;
  *(char ***)puVar1 = &DAT_04885580;
  DAT_048855a8 = *(int *)(puVar2 + 4);
  *(int *)(puVar2 + 4) = DAT_048855a8 + 1;
  return;
}


