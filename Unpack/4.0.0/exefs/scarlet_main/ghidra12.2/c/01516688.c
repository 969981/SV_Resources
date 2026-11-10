/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01516688; name: FUN_01516688
 */


void FUN_01516688(long param_1,undefined8 *param_2)

{
  long **pplVar1;
  int *piVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  long **pplVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *local_88;
  undefined8 uStack_80;
  long **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  long *local_38;
  
  lVar15 = *(long *)(param_1 + 0x68);
  if (lVar15 == 0) {
    lVar15 = param_1;
  }
  else {
    lVar12 = *(long *)(lVar15 + 0x68);
    if ((lVar12 != 0) && (lVar13 = *(long *)(lVar12 + 0x68), lVar15 = lVar12, lVar13 != 0)) {
      for (lVar12 = *(long *)(lVar13 + 0x68); lVar15 = lVar13, lVar12 != 0;
          lVar12 = *(long *)(lVar12 + 0x68)) {
        lVar13 = lVar12;
      }
    }
  }
  uVar4 = *param_2;
  uVar6 = param_2[1];
  uVar5 = param_2[2];
  plVar14 = (long *)param_2[3];
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  local_78 = &local_88;
  local_88 = (long *)0x0;
  local_70 = uVar4;
  local_68 = uVar6;
  uStack_60 = uVar5;
  local_58 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  FUN_015169d8(lVar15,&local_78,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  plVar11 = local_88;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (plVar11 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x118) = *param_2;
    *(undefined8 *)(param_1 + 0x120) = param_2[1];
    *(undefined8 *)(param_1 + 0x128) = param_2[2];
    plVar14 = (long *)param_2[3];
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    plVar11 = *(long **)(param_1 + 0x130);
    *(long **)(param_1 + 0x130) = plVar14;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  else {
    (**(code **)(*plVar11 + 0x18))(&local_78,plVar11);
    local_88 = (long *)0x0;
    uStack_80 = 0;
    if (local_78[2] == plVar11 + 5) {
      FUN_01516dec(&local_88,&local_78);
    }
    pplVar9 = local_78;
    if (local_78 != (long **)0x0) {
      pplVar1 = local_78 + 3;
      do {
        sVar3 = *(short *)pplVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
        if (bVar8) {
          *(short *)pplVar1 = sVar3 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_38 = *pplVar9;
          FUN_00c44438(lVar15 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_01516804;
    }
    FUN_01517110(param_1 + 0x108,&local_88);
    plVar14 = local_88;
    if (local_88 != (long *)0x0) {
      plVar11 = local_88 + 3;
      do {
        sVar3 = (short)*plVar11;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *(short *)plVar11 = sVar3 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_78 = (long **)*plVar14;
          FUN_00c44438(lVar15 + 0x8040,&local_78);
        }
      }
      else if (sVar3 == 0) {
LAB_01516804:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


