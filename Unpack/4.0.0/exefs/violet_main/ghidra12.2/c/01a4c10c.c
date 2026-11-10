/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a4c10c; name: FUN_01a4c10c
 */


undefined1  [16] FUN_01a4c10c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long *local_70;
  uint local_68;
  undefined4 local_64;
  
  puVar8 = PTR_DAT_047d4c98;
  local_64 = 0;
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar10 = PTR_DAT_047d4ca8;
  puVar9 = PTR_DAT_047d4ca0;
  lVar15 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar15;
  puVar7 = PTR_DAT_047d4890;
  puVar6 = PTR_DAT_047d4888;
  plVar2 = *(long **)(lVar15 + 0x1c8);
  for (plVar1 = *(long **)(lVar15 + 0x1c0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar15 = *plVar1;
    plVar12 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x28))((undefined8 *)(lVar15 + 0x28));
    if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
      uVar14 = FUN_01b3fb0c();
      *(undefined8 *)puVar7 = uVar14;
      __cxa_guard_release(puVar6);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12 == (long *)puVar7) goto LAB_01a4c1c4;
    }
  }
  lVar15 = 0;
LAB_01a4c1c4:
  local_68 = FUN_0149c05c(lVar15);
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar15 = *(long *)puVar9;
  *(long *)puVar10 = lVar15;
  puVar6 = PTR_DAT_047d8f00;
  puVar8 = PTR_DAT_047d8ef8;
  plVar1 = *(long **)(lVar15 + 0x1c0);
  plVar2 = *(long **)(lVar15 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar15 = *plVar1;
    plVar12 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x28))((undefined8 *)(lVar15 + 0x28));
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
      uVar14 = FUN_01b3fb0c();
      *(undefined8 *)puVar6 = uVar14;
      __cxa_guard_release(puVar8);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12 == (long *)puVar6) goto LAB_01a4c240;
    }
  }
  lVar15 = 0;
LAB_01a4c240:
  local_70 = (long *)*param_2;
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 5;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar13 = FUN_01a4c408(lVar15,&local_70,*(undefined8 *)(param_1 + 8),&local_68,&local_64);
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 5;
    do {
      lVar15 = *plVar1;
      iVar11 = (int)lVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  auVar16._8_4_ = local_64;
  auVar16._0_8_ = uVar13 & 1 | (ulong)local_68 << 0x20;
  auVar16._12_4_ = 0;
  return auVar16;
}


