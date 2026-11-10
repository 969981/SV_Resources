/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0245caf0; name: FUN_0245caf0
 */


void FUN_0245caf0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  undefined8 uVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  undefined1 auStack_40 [16];
  void *local_18;
  
  puVar3 = PTR_DAT_047d8b30;
  if (((*PTR_DAT_047d8b30 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8b30), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047e2420,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b30);
  }
  puVar4 = PTR_DAT_047d8b40;
  plVar9 = (long *)PTR_DAT_047d8b38;
  lVar11 = *(long *)PTR_DAT_047d8b38;
  *(long *)PTR_DAT_047d8b40 = lVar11;
  plVar13 = *(long **)(lVar11 + 0x58);
  if (plVar13 != (long *)0x0) {
    do {
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (plVar13[3] != 0) {
        plVar1 = (long *)(plVar13[3] + 0x30);
      }
      if (*plVar1 == *param_2) {
        if (((*puVar3 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8b30), plVar9 = (long *)PTR_DAT_047d8b38,
           iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047e2420,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8b30);
          plVar9 = (long *)PTR_DAT_047d8b38;
        }
        lVar11 = *plVar9;
        *(long *)puVar4 = lVar11;
        FUN_0135d328(auStack_40,*(undefined8 *)(lVar11 + 8),0);
        pcVar12 = (code *)plVar13[9];
        (**(code **)(*(long *)plVar13[4] + 0x10))();
        (*pcVar12)(&local_18);
        pvVar5 = local_18;
        local_18 = (void *)0x0;
        pvVar7 = (void *)plVar13[8];
        plVar13[8] = (long)pvVar5;
        if (pvVar7 == (void *)0x0) {
          local_18 = (void *)0x0;
        }
        else {
          operator_delete__(pvVar7);
          pvVar5 = local_18;
          local_18 = (void *)0x0;
          if (pvVar5 != (void *)0x0) {
            operator_delete__(pvVar5);
          }
        }
        puVar10 = (uint *)plVar13[8];
        uVar2 = *puVar10;
        uVar8 = (*(code *)plVar13[10])();
        FUN_028b3cc0(param_1,(long)puVar10 + (ulong)uVar2,uVar8);
        FUN_0135d2ec(auStack_40);
        return;
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  *param_1 = 0;
  return;
}


