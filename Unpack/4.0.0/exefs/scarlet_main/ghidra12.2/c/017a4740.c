/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a4740; name: FUN_017a4740
 */


void FUN_017a4740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  FUN_00d1a22c(param_1,0);
  *param_1 = &PTR_LAB_045a6e48;
  param_1[4] = &PTR_LAB_045a6f90;
  param_1[5] = &DAT_045a70b8;
  param_1[6] = &PTR_LAB_045a7110;
  param_1[7] = &PTR_LAB_045a7138;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 2);
  param_1[0x24] = uVar1;
  param_1[0x25] = uVar2;
  if (((*PTR_DAT_047d8a30 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8a30), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047dcb50,PTR_DAT_047d8a38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a30);
  }
  lVar4 = *(long *)PTR_DAT_047d8a38;
  *(long *)PTR_DAT_047d8a40 = lVar4;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(lVar4 + 0x88) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(lVar4 + 0x78) = uVar1;
  *(undefined8 *)(lVar4 + 0x80) = uVar2;
  return;
}


