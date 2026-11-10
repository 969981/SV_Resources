/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01637d50; name: FUN_01637d50
 */


void FUN_01637d50(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  puVar3 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar5 = PTR_DAT_047d4ca8;
  puVar4 = PTR_DAT_047d4ca0;
  uVar7 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  local_50 = 4;
  local_48 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar7;
  FUN_01637f0c(uVar7,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)puVar4;
  *(long *)puVar5 = lVar9;
  puVar4 = PTR_DAT_047dcc00;
  puVar3 = PTR_DAT_047dcbf8;
  plVar1 = *(long **)(lVar9 + 0x1c0);
  plVar2 = *(long **)(lVar9 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar9 = *plVar1;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar4) goto LAB_01637e38;
    }
  }
  lVar9 = 0;
LAB_01637e38:
  FUN_01638108(lVar9);
  return;
}


