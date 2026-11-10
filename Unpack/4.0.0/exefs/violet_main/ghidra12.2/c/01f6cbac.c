/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6cbac; name: FUN_01f6cbac
 */


void FUN_01f6cbac(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long *local_50;
  long *local_48;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    FUN_0174fbdc(&local_50);
    (**(code **)(*local_50 + 0x38))
              (local_50,*(undefined2 *)(param_1 + 0x6a),*(undefined8 *)(param_1 + 0x70));
    if (local_50 == (long *)0x0) goto LAB_01f6ccd4;
    plVar1 = local_50 + 5;
    do {
      iVar11 = (int)*plVar1;
      iVar7 = iVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar14 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar14;
    puVar10 = PTR_DAT_047d8f00;
    puVar9 = PTR_DAT_047d8ef8;
    plVar2 = *(long **)(lVar14 + 0x1c8);
    for (plVar1 = *(long **)(lVar14 + 0x1c0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar14 = *plVar1;
      plVar12 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x28))((undefined8 *)(lVar14 + 0x28));
      if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
        uVar13 = FUN_01b3fb0c();
        *(undefined8 *)puVar10 = uVar13;
        __cxa_guard_release(puVar9);
      }
      for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        if (plVar12 == (long *)puVar10) goto LAB_01f6cc64;
      }
    }
    lVar14 = 0;
LAB_01f6cc64:
    FUN_01f6ce00(lVar14,*(undefined2 *)(param_1 + 0x68),*(undefined2 *)(param_1 + 0x6a));
    uVar3 = *(undefined2 *)(param_1 + 0x68);
    uVar4 = *(undefined2 *)(param_1 + 0x6a);
    local_48 = *(long **)(param_1 + 0x70);
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 5;
      do {
        lVar8 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)lVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_0152e9a8(lVar14,uVar3,uVar4,&local_48);
    if (local_48 == (long *)0x0) goto LAB_01f6ccd4;
    plVar1 = local_48 + 5;
    do {
      iVar11 = (int)*plVar1;
      iVar7 = iVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
      local_50 = local_48;
    } while (cVar5 != '\0');
  }
  if (iVar7 == 0) {
    (**(code **)(*local_50 + 0x10))();
  }
  else if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_01f6ccd4:
  FUN_01f6ce08(10);
  return;
}


