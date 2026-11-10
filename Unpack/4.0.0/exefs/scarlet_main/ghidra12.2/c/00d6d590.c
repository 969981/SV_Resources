/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6d590; name: FUN_00d6d590
 */


void FUN_00d6d590(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  short sVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  lVar7 = *(long *)(param_2 + 0x50);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
LAB_00d6d60c:
    sVar3 = *psVar1;
    if (sVar3 == sVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d6d634;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d6d634:
      bVar5 = false;
    }
    if (!bVar5) goto code_r0x00d6d63c;
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + -0x28);
      FUN_00d52990(&local_40,plVar10,0);
      lVar7 = *(long *)(lVar7 + 0x70);
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_00d6d5b0;
    }
  }
LAB_00d6d5ac:
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
LAB_00d6d5b0:
  if (local_40 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = local_40;
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      if (local_40 == (undefined8 *)0x0) {
        *param_1 = 0;
        return;
      }
      if (*(short *)((long)local_40 + 0x1a) == 0) {
        *param_1 = 0;
        goto LAB_00d6d734;
      }
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar8 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00d6d70c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d6d70c:
          bVar5 = false;
        }
        if (bVar5) {
          lVar7 = 0;
          if (local_40[2] != 0) {
            lVar7 = local_40[2] + -0x28;
          }
          *param_1 = lVar7;
          goto LAB_00d6d734;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
  }
  *param_1 = 0;
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
LAB_00d6d734:
  psVar1 = (short *)(puVar9 + 3);
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
    piVar2 = (int *)((long)puVar9 + 0x1c);
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
      local_18 = *puVar9;
      FUN_00c44438(lVar7 + 0x8040,&local_18);
    }
  }
  else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
code_r0x00d6d63c:
  sVar8 = sVar3;
  if (sVar3 == 0) goto LAB_00d6d5ac;
  goto LAB_00d6d60c;
}


