/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3ba40; name: FUN_02a3ba40
 */


void FUN_02a3ba40(long *param_1,long param_2,undefined4 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  long *plVar10;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  if ((param_2 != 0) && (*(short *)(param_2 + 0x1a) != 0)) {
    psVar1 = (short *)(param_2 + 0x1a);
    sVar8 = *(short *)(param_2 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02a3baa8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a3baa8:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(param_2 + 0x10);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + -0x28);
          FUN_00f1b364(local_48,plVar10,param_3);
          if (local_48[0] == (undefined8 *)0x0) {
            *param_1 = 0;
            goto LAB_02a3baec;
          }
          if (*(short *)((long)local_48[0] + 0x1a) == 0) goto LAB_02a3bb94;
          psVar1 = (short *)((long)local_48[0] + 0x1a);
          sVar8 = *(short *)((long)local_48[0] + 0x1a);
          goto LAB_02a3bb60;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  return;
LAB_02a3bb60:
  sVar3 = *psVar1;
  if (sVar3 == sVar8) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_02a3bb84;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02a3bb84:
    bVar5 = false;
  }
  if (bVar5) {
    lVar7 = 0;
    if (local_48[0][2] != 0) {
      lVar7 = local_48[0][2] + -0x28;
    }
    *param_1 = lVar7;
    goto LAB_02a3bbb0;
  }
  sVar8 = sVar3;
  if (sVar3 == 0) {
LAB_02a3bb94:
    *param_1 = 0;
LAB_02a3bbb0:
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar8 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar8 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_38 = *local_48[0];
        FUN_00c44438(lVar7 + 0x8040,&local_38);
      }
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
LAB_02a3baec:
    lVar9 = *(long *)(lVar9 + 0x70);
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  goto LAB_02a3bb60;
}


