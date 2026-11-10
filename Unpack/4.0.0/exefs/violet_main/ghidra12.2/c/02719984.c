/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02719984; name: FUN_02719984
 */


void FUN_02719984(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  long *local_58;
  undefined8 local_38;
  
  plVar8 = (long *)PTR_DAT_047d8b70;
  if (*param_2 != 0) {
    plVar8 = (long *)(*param_2 + 0x30);
  }
  plVar12 = (long *)PTR_DAT_047d8b70;
  if (*(long *)*param_1 != 0) {
    plVar12 = (long *)(*(long *)*param_1 + 0x30);
  }
  if (*plVar8 == *plVar12) {
    lVar13 = param_1[3];
    lVar9 = param_2[7];
    if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
      lVar14 = 0;
    }
    else {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar11 = *(short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02719d64;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02719d64:
          bVar5 = false;
        }
        if (bVar5) {
          lVar14 = 0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            lVar14 = *(long *)(lVar9 + 0x10) + -0x28;
          }
          break;
        }
        lVar14 = 0;
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
    lVar9 = *(long *)param_1[1];
    lVar15 = *(long *)param_1[2];
    plVar8 = *(long **)(lVar9 + lVar15 * 8);
    *(undefined8 *)(lVar9 + lVar15 * 8) = 0;
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))();
      }
      else if (sVar11 == 0) goto LAB_02719b50;
    }
    *(long *)(lVar9 + lVar15 * 8) = lVar14;
    lVar9 = FUN_02719890(*(long *)(*(long *)param_1[1] + *(long *)param_1[2] * 8) + 0x28);
    local_60 = (undefined8 *)param_2[6];
    FUN_02719e08(&local_70,*(undefined8 *)(lVar13 + 0x3a0),param_1[5],&local_60,lVar9 + 0x200);
    local_58 = local_70;
    local_60 = (undefined8 *)param_2[6];
    local_70 = (long *)0x0;
    FUN_02719ecc(*(long *)param_1[4] + *(long *)param_1[2] * 0x10,&local_60);
    if (local_58 != (long *)0x0) {
      lVar9 = local_58[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar11 == 0) goto LAB_02719b50;
    }
    if (local_70 != (long *)0x0) {
      lVar9 = local_70[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar11 == 0) {
LAB_02719b50:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar12 = *(long **)(*(long *)param_1[4] + *(long *)param_1[2] * 0x10 + 8);
    (**(code **)(*plVar12 + 0x18))(&local_60,plVar12);
    local_70 = (long *)0x0;
    uStack_68 = 0;
    plVar8 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plVar8 = plVar12 + 5;
    }
    if ((long *)local_60[2] == plVar8) {
      FUN_00d1f904(&local_70,&local_60);
    }
    puVar6 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar11 == 0) goto LAB_02719bbc;
    }
    FUN_00dc7a68(param_2 + 7,&local_70);
    plVar8 = local_70;
    if (local_70 != (long *)0x0) {
      plVar12 = local_70 + 3;
      do {
        sVar11 = (short)*plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_60 = (undefined8 *)*plVar8;
          FUN_00c44438(lVar9 + 0x8040,&local_60);
        }
      }
      else if (sVar11 == 0) {
LAB_02719bbc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(long *)param_1[2] = *(long *)param_1[2] + 1;
  }
  return;
}


