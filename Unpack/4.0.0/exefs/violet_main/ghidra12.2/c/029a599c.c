/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a599c; name: FUN_029a599c
 */


void FUN_029a599c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  byte *pbVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  
  plVar18 = *(long **)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar13 = PTR_LAB_047d89a8;
  puVar12 = PTR_DAT_047d8290;
  puVar11 = PTR_DAT_047d8288;
  puVar10 = PTR_DAT_047d8280;
  pbVar7 = PTR_DAT_047d8280;
  puVar16 = (undefined8 *)PTR_DAT_047d8288;
  puVar4 = (undefined8 *)PTR_DAT_047d8290;
  puVar8 = PTR_LAB_047d89a8;
  for (; PTR_DAT_047d8280 = pbVar7, PTR_DAT_047d8288 = (undefined *)puVar16,
      PTR_DAT_047d8290 = (undefined *)puVar4, PTR_LAB_047d89a8 = puVar8, plVar18 != (long *)0x0;
      plVar18 = (long *)*plVar18) {
    plVar17 = (long *)plVar18[3];
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 5;
      do {
        lVar9 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)lVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar9 == -1) goto LAB_029a5c50;
      do {
        lVar9 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)lVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar9 == -1) goto LAB_029a5c50;
    }
    if ((int)plVar17[7] != 0) {
      if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
        FUN_00100190(puVar13,puVar11,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar10);
      }
      uVar15 = *(undefined8 *)puVar11;
      *(undefined8 *)puVar12 = uVar15;
      FUN_013ec58c(uVar15,(int)plVar17[7]);
    }
    plVar1 = plVar17 + 5;
    do {
      lVar9 = *plVar1;
      iVar14 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    else if ((int)lVar9 == 0) goto LAB_029a5c78;
    do {
      lVar9 = *plVar1;
      iVar14 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    else if ((int)lVar9 == 0) goto LAB_029a5c78;
    pbVar7 = PTR_DAT_047d8280;
    puVar16 = (undefined8 *)PTR_DAT_047d8288;
    puVar4 = (undefined8 *)PTR_DAT_047d8290;
    puVar8 = PTR_LAB_047d89a8;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x150);
  puVar3 = *(undefined8 **)(param_1 + 0x158);
  do {
    if (puVar2 == puVar3) {
      puVar4 = *(undefined8 **)(param_1 + 0xb8);
      for (puVar16 = *(undefined8 **)(param_1 + 0xb0); puVar16 != puVar4; puVar16 = puVar16 + 1) {
        FUN_029a5cd0(*puVar16);
      }
      FUN_0160216c(param_1 + 0xe8);
      FUN_00d9d73c(param_1 + 0x150,*(undefined8 *)(param_1 + 0x150));
      return;
    }
    plVar18 = (long *)*puVar2;
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 5;
      do {
        lVar9 = *plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)lVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar9 == -1) {
LAB_029a5c50:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      do {
        lVar9 = *plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)lVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar9 == -1) goto LAB_029a5c50;
    }
    if ((int)plVar18[7] != 0) {
      if (((*pbVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar7), iVar14 != 0)) {
        FUN_00100190(puVar8,puVar16,&PTR_LOOP_04483000);
        __cxa_guard_release(pbVar7);
      }
      uVar15 = *puVar16;
      *puVar4 = uVar15;
      FUN_013ec58c(uVar15,(int)plVar18[7]);
    }
    plVar17 = plVar18 + 5;
    do {
      lVar9 = *plVar17;
      iVar14 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    else if ((int)lVar9 == 0) {
LAB_029a5c78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    do {
      lVar9 = *plVar17;
      iVar14 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    else if ((int)lVar9 == 0) goto LAB_029a5c78;
    puVar2 = puVar2 + 1;
  } while( true );
}


