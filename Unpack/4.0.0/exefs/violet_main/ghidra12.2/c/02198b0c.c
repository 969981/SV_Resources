/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02198b0c; name: FUN_02198b0c
 */


void FUN_02198b0c(undefined1 *param_1,long *param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar9;
  long *plVar8;
  long lVar10;
  short sVar11;
  long *plVar12;
  undefined8 *local_50 [2];
  long local_40;
  undefined8 local_38;
  
  lVar10 = *param_2;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02198b7c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02198b7c:
        bVar6 = false;
      }
      if (bVar6) {
        if (*(long *)(lVar10 + 0x10) != 0) {
          plVar12 = (long *)(*(long *)(lVar10 + 0x10) + -8);
          (**(code **)(*plVar12 + 0x10))(plVar12);
          plVar8 = *(long **)param_2[2];
          plVar3 = (long *)((long *)param_2[2])[1];
          if (plVar8 == plVar3) goto LAB_02198d28;
          goto LAB_02198bd8;
        }
        break;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  goto LAB_02198b28;
  while (plVar8 = plVar9, plVar3 != plVar9) {
LAB_02198bd8:
    plVar9 = plVar8 + 1;
    lVar10 = *plVar8;
    plVar8 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar10 + 8) != 0) {
      plVar8 = (long *)(*(long *)(lVar10 + 8) + 0x30);
    }
    if (*plVar8 == *param_3) {
      if (*(char *)(lVar10 + 0x10) == '\b') {
        lVar10 = *(long *)(lVar10 + 0x18);
        goto LAB_02198c14;
      }
      break;
    }
  }
LAB_02198d28:
  lVar10 = 0;
LAB_02198c14:
  (**(code **)(*plVar12 + 0x18))(plVar12);
  if (lVar10 != 0) {
    FUN_00d30b9c(local_50,plVar12);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_40 = lVar10;
    FUN_00dd9f00(param_1 + 8,local_50);
    *(long *)(param_1 + 0x18) = local_40;
    *param_1 = 1;
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
      do {
        sVar11 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_38 = *local_50[0];
          FUN_00c44438(lVar10 + 0x8040,&local_38);
        }
      }
      else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
    return;
  }
  (**(code **)(*plVar12 + 0x18))(plVar12);
LAB_02198b28:
  *param_1 = 0;
  return;
}


