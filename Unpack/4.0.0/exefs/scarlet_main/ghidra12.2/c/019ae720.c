/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ae720; name: FUN_019ae720
 */


undefined4 FUN_019ae720(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_b0 [128];
  long *plVar12;
  
  if (((*PTR_DAT_047d8550 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  lVar7 = *(long *)PTR_DAT_047d8558;
  *(long *)PTR_DAT_047d8560 = lVar7;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  puVar4 = PTR_DAT_047d8f00;
  puVar3 = PTR_DAT_047d8ef8;
  plVar12 = *(long **)(lVar11 + 0x1c8);
  for (plVar10 = *(long **)(lVar11 + 0x1c0); plVar10 != plVar12; plVar10 = plVar10 + 1) {
    lVar11 = *plVar10;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar9 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar9;
      __cxa_guard_release(puVar3);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar4) goto LAB_019ae83c;
    }
  }
  lVar11 = 0;
LAB_019ae83c:
  plVar10 = (long *)FUN_00fee8fc(auStack_b0 + 0x88,*(undefined8 *)(lVar7 + 8));
  if (plVar10 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = plVar10 + 5;
    do {
      lVar7 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = (int)lVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar7 == -1) {
LAB_019ae98c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar7 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = (int)lVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar12 = plVar10;
    if ((int)lVar7 == -1) goto LAB_019ae98c;
  }
  uVar6 = FUN_019aea00(lVar11,auStack_b0 + 0x80);
  if (plVar12 != (long *)0x0) {
    plVar8 = plVar12 + 5;
    do {
      lVar7 = *plVar8;
      iVar5 = (int)lVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_019ae9d8;
  }
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 5;
    do {
      lVar7 = *plVar12;
      iVar5 = (int)lVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar7 == 0) {
LAB_019ae9d8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return uVar6;
}


