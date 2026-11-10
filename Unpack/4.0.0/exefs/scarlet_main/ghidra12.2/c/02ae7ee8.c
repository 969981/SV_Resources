/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae7ee8; name: FUN_02ae7ee8
 */


void FUN_02ae7ee8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar5 = PTR_DAT_047d4900;
  puVar4 = PTR_DAT_047d48f8;
  plVar1 = *(long **)(lVar9 + 0x1c0);
  plVar2 = *(long **)(lVar9 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar9 = *plVar1;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar8 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar8;
      __cxa_guard_release(puVar4);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar5) goto LAB_02ae7fc4;
    }
  }
  lVar9 = 0;
LAB_02ae7fc4:
  uVar8 = *param_1;
  uVar3 = param_1[1];
  *(undefined4 *)(lVar9 + 0xe28) = *(undefined4 *)(param_1 + 2);
  *(undefined8 *)(lVar9 + 0xe20) = uVar3;
  *(undefined8 *)(lVar9 + 0xe18) = uVar8;
  return;
}


