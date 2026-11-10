/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015f4b2c; name: FUN_015f4b2c
 */


long * FUN_015f4b2c(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  short sVar10;
  long lVar11;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  lVar11 = *(long *)(param_2 + 8);
  FUN_015f4808(local_38,lVar11);
  if ((local_38[0] != (undefined8 *)0x0) && (*(short *)((long)local_38[0] + 0x1a) != 0)) {
    psVar1 = (short *)((long)local_38[0] + 0x1a);
    sVar10 = *(short *)((long)local_38[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_015f4c38;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015f4c38:
        bVar9 = false;
      }
      if (bVar9) {
        lVar7 = local_38[0][2];
        if (lVar7 != 0) {
          plVar6 = (long *)*param_1;
          *param_1 = 0;
          if (plVar6 != (long *)0x0) {
            lVar8 = plVar6[6];
            psVar1 = (short *)(lVar8 + 0x1a);
            do {
              sVar10 = *psVar1;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar10 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*plVar6 + 0x50))();
            }
            else if (sVar10 == 0) goto LAB_015f4d0c;
          }
          *param_1 = lVar7 + -0x28;
          goto LAB_015f4b6c;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  plVar6 = (long *)*param_1;
  lVar11 = 0;
  *param_1 = 0;
  if (plVar6 != (long *)0x0) {
    lVar11 = plVar6[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar10 == 0) {
LAB_015f4d0c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    lVar11 = 0;
  }
LAB_015f4b6c:
  param_1[1] = lVar11;
  if (local_38[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_38[0] + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_38[0] + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *local_38[0];
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return param_1;
}


