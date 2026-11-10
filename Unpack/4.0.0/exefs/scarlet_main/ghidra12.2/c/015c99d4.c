/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c99d4; name: FUN_015c99d4
 */


void FUN_015c99d4(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar8 = *(long *)(param_1 + 0x138);
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    plVar10 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_015c9c64;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015c9c64:
        bVar5 = false;
      }
      if (bVar5) {
        plVar10 = (long *)0x0;
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar10 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
        }
        break;
      }
      plVar10 = (long *)0x0;
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  lVar8 = *(long *)(param_1 + 0x148);
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    plVar11 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_015c9b20;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015c9b20:
        bVar5 = false;
      }
      if (bVar5) {
        plVar11 = (long *)0x0;
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar11 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
        }
        break;
      }
      plVar11 = (long *)0x0;
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_015c96b8(&local_48,param_1 + 0x230);
  puVar6 = local_48;
  plVar12 = (long *)0x0;
  if (local_48 != (undefined8 *)0x0) {
    if (*(short *)((long)local_48 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48 + 0x1a);
      sVar9 = *(short *)((long)local_48 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_015c9bb8;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_015c9bb8:
          bVar5 = false;
        }
        if (bVar5) {
          plVar12 = (long *)0x0;
          if (local_48[2] != 0) {
            plVar12 = (long *)(local_48[2] + -0x28);
          }
          goto LAB_015c9be4;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar12 = (long *)0x0;
LAB_015c9be4:
    psVar1 = (short *)(local_48 + 3);
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
      piVar2 = (int *)((long)local_48 + 0x1c);
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_38 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_38);
      }
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if ((plVar10 == (long *)0x0) || (plVar11 == (long *)0x0)) {
    if (plVar12 != (long *)0x0) goto LAB_015c9ab8;
LAB_015c9adc:
    if (plVar11 == (long *)0x0) goto LAB_015c9a50;
  }
  else if (plVar12 != (long *)0x0) {
    FUN_015c9d5c(plVar12,param_1 + 0x188);
    FUN_015c9de8(plVar12,param_1 + 0x1c0);
    if (*(undefined1 **)(param_1 + 0x228) != &DAT_cbf29ce484222645) {
      FUN_017e12b4(plVar12,param_1 + 0x228);
    }
LAB_015c9ab8:
    lVar8 = plVar12[6];
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
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar9 == 0) goto LAB_015c9cf8;
    goto LAB_015c9adc;
  }
  lVar8 = plVar11[0x13];
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
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar9 == 0) {
LAB_015c9cf8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_015c9a50:
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x60))(plVar10);
  }
  return;
}


