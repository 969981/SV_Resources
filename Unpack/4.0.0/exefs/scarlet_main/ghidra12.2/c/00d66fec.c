/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d66fec; name: FUN_00d66fec
 */


void FUN_00d66fec(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  if ((*(long *)(param_1 + 0x150) == 0) || (*(short *)(*(long *)(param_1 + 0x150) + 0x1a) == 0))
  goto LAB_00d67008;
  lVar7 = *(long *)(param_1 + 0x150);
  if (lVar7 != 0) {
    if (*(short *)(lVar7 + 0x1a) != 0) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00d67080;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d67080:
          bVar5 = false;
        }
        if (bVar5) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 != 0) {
            local_40 = (undefined8 *)0x0;
            uStack_38 = 0;
            FUN_00f351dc(&local_40,lVar7 + 0x30);
            if ((local_40 == (undefined8 *)0x0) || (*(short *)((long)local_40 + 0x1a) == 0))
            goto LAB_00d670b4;
            psVar1 = (short *)((long)local_40 + 0x1a);
            sVar9 = *(short *)((long)local_40 + 0x1a);
            goto LAB_00d67254;
          }
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    goto LAB_00d670e8;
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  goto LAB_00d6703c;
  while (sVar9 = sVar3, sVar3 != 0) {
LAB_00d67254:
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d67278;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d67278:
      bVar5 = false;
    }
    if (bVar5) {
      if (local_40[2] != 0) {
        plVar11 = (long *)(local_40[2] + -0x28);
        FUN_013e0f3c(plVar11);
        (**(code **)(*plVar11 + 0x60))(plVar11);
        goto LAB_00d670bc;
      }
      break;
    }
  }
LAB_00d670b4:
  *(undefined1 *)(lVar7 + 200) = 1;
LAB_00d670bc:
  puVar10 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_18 = *puVar10;
        FUN_00c44438(lVar8 + 0x8040,&local_18);
      }
    }
    else if (sVar9 == 0) goto LAB_00d6711c;
  }
  lVar8 = *(long *)(lVar7 + 8);
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar9 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))();
  }
  else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00d670e8:
  puVar10 = *(undefined8 **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
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
        local_40 = (undefined8 *)*puVar10;
        FUN_00c44438(lVar7 + 0x8040,&local_40);
      }
    }
    else if (sVar9 == 0) {
LAB_00d6711c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_00d6703c:
  *(undefined8 *)(param_1 + 0x158) = 0;
LAB_00d67008:
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}


