/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a4e60; name: FUN_015a4e60
 */


bool FUN_015a4e60(undefined4 param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (((DAT_04840580 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04840580), iVar6 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  DAT_04840568 = DAT_04840570;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar4 = PTR_DAT_047dcbb8;
  puVar3 = PTR_DAT_047dcbb0;
  plVar1 = *(long **)(lVar9 + 0x1c0);
  plVar2 = *(long **)(lVar9 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar9 = *plVar1;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
      uVar8 = FUN_020e6640();
      *(undefined8 *)puVar4 = uVar8;
      __cxa_guard_release(puVar3);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar4) goto LAB_015a4f90;
    }
  }
  lVar9 = 0;
LAB_015a4f90:
  lVar9 = FUN_015a5034(lVar9,param_1);
  if (lVar9 == 0) {
    bVar5 = true;
  }
  else {
    bVar5 = *(char *)(lVar9 + 8) != '\0';
  }
  return bVar5;
}


