/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0149cd14; name: FUN_0149cd14
 */


void FUN_0149cd14(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined2 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined1 local_74;
  undefined8 local_72;
  undefined1 auStack_68 [8];
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar14 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045412f8;
  param_1[1] = lVar14;
  param_1[4] = (long)&PTR_LAB_04541330;
  plVar12 = param_1 + 6;
  *plVar12 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar5 = PTR_DAT_047d4c98;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[9] = 0;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar5 = PTR_DAT_047d4ca0;
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar7 = PTR_DAT_047d8f00;
  puVar6 = PTR_DAT_047d8ef8;
  plVar2 = *(long **)(lVar9 + 0x1c8);
  for (plVar11 = *(long **)(lVar9 + 0x1c0); plVar11 != plVar2; plVar11 = plVar11 + 1) {
    lVar9 = *plVar11;
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      uVar13 = FUN_01b3fb0c();
      *(undefined8 *)puVar7 = uVar13;
      __cxa_guard_release(puVar6);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar7) goto LAB_0149ce38;
    }
  }
  lVar9 = 0;
LAB_0149ce38:
  FUN_0149d184(param_1 + 7,lVar9);
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)puVar5;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar6 = PTR_DAT_047d4890;
  puVar5 = PTR_DAT_047d4888;
  plVar2 = *(long **)(lVar9 + 0x1c8);
  for (plVar11 = *(long **)(lVar9 + 0x1c0); plVar11 != plVar2; plVar11 = plVar11 + 1) {
    lVar9 = *plVar11;
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
      uVar13 = FUN_01b3fb0c();
      *(undefined8 *)puVar6 = uVar13;
      __cxa_guard_release(puVar5);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar6) goto LAB_0149cec8;
    }
  }
  lVar9 = 0;
LAB_0149cec8:
  FUN_0164ca94(param_1 + 8,lVar9);
  FUN_0174fbdc(&local_c8);
  plVar11 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 5;
    do {
      lVar9 = *plVar12;
      iVar8 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_0149cfcc;
  }
  param_1[6] = local_c8;
  local_b8 = 0xffffffffffffffff;
  uStack_b0 = 0x3ffffffff;
  local_72 = 0x10001000100;
  local_a8 = 0xffffffffffffffff;
  local_88 = 0xffffffff;
  local_c8 = 0;
  local_c0 = 0;
  local_98 = 0x1ffffffffff00ff;
  uStack_90 = 0xffffffffffffffff;
  local_9e = 0;
  local_74 = 0;
  local_9a = 0;
  local_7c = 0xffff00000000;
  local_84 = 0;
  local_a0 = 0;
  lVar9 = FUN_00eebe4c(auStack_68,param_1[1],&local_c8);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar12 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar12 != (long *)0x0) {
    plVar11 = plVar12 + 5;
    do {
      lVar14 = *plVar11;
      iVar8 = (int)lVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar14 == 0) {
LAB_0149cfcc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[9] = lVar9;
  FUN_00f329b4(lVar9,param_1 + 10);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


