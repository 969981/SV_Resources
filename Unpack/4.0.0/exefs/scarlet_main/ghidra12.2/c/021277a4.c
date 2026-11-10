/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021277a4; name: FUN_021277a4
 */


void FUN_021277a4(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_18 [8];
  
  FUN_00d1a22c(param_1,0xd);
  *param_1 = &PTR_FUN_045a1588;
  param_1[0x24] = 0;
  param_1[4] = &PTR_LAB_045a16c8;
  param_1[5] = &DAT_045a17f0;
  puVar1 = param_1 + 0x24;
  param_1[6] = &PTR_LAB_045a1848;
  param_1[7] = &PTR_LAB_045a1870;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  *(undefined8 *)PTR_DAT_047d4e08 = *(undefined8 *)PTR_DAT_047d4e00;
  FUN_0179d050(auStack_18);
  FUN_0179d008(puVar1,auStack_18);
  FUN_0179cff8(auStack_18);
  FUN_0179d79c(*param_2,puVar1);
  FUN_0179d934(param_2[1],puVar1);
  FUN_0179dacc(param_2[2],puVar1);
  FUN_0179dc64(param_2[3],puVar1);
  return;
}


