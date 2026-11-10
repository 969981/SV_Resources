/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f46f4; name: FUN_011f46f4
 */


undefined8 FUN_011f46f4(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined2 uVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 0xe8);
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x48);
  }
  plVar9 = (long *)(lVar11 + 0x110);
  lVar13 = *plVar9;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar13) {
    lVar8 = nn::os::GetCurrentThread();
LAB_011f473c:
    if (*plVar9 == 0) goto code_r0x011f4744;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
          while (*plVar9 == 0) {
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar12) {
              *plVar9 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_011f474c;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar12) {
        *plVar9 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_011f474c:
    bVar12 = false;
    goto LAB_011f4750;
  }
  bVar12 = true;
LAB_011f4750:
  plVar9 = (long *)FUN_011f4a90(*(undefined8 *)(lVar11 + 0x128),*(undefined8 *)(lVar11 + 0x130));
  if ((*(long **)(lVar11 + 0x130) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_011f4a90(*(undefined8 *)(lVar11 + 0x160),*(undefined8 *)(lVar11 + 0x168));
    if (*(long **)(lVar11 + 0x168) == plVar9) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + -0x20;
      }
    }
  }
  else {
    lVar8 = *plVar9 + -0x20;
  }
  if (!bVar12) {
    *(undefined8 *)(lVar11 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
  }
  if (lVar8 == 0) {
    uVar10 = 0;
  }
  else {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00c43ef0(&local_50,lVar8 + 0x98);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if (local_50[2] == lVar8 + 0x28) {
      FUN_00c953a8(&local_60,&local_50);
    }
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
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
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_28 = *puVar6;
          FUN_00c44438(lVar11 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) goto LAB_011f48ec;
    }
    FUN_00cacc64(param_1 + 0x60,&local_60);
    puVar6 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
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
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_50 = (undefined8 *)*puVar6;
          FUN_00c44438(lVar11 + 0x8040,&local_50);
        }
      }
      else if (sVar3 == 0) {
LAB_011f48ec:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(undefined4 *)(param_1 + 0x48) = 8;
    lVar11 = *(long *)(param_1 + 0x50);
    if ((lVar11 != 0) && ((*(char *)(lVar11 + 0x58) != '\t' || (*(char *)(lVar11 + 0x59) != '\t'))))
    {
      uVar4 = *(undefined2 *)(lVar11 + 0x58);
      plVar9 = (long *)(lVar11 + 0x38);
      *(undefined2 *)(lVar11 + 0x58) = 0x909;
      if (*(long *)(lVar11 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(lVar11 + 0x48),plVar9);
      }
      (**(code **)(*plVar9 + 0x20))(plVar9,uVar4);
    }
    uVar10 = 1;
  }
  return uVar10;
code_r0x011f4744:
  cVar5 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar12) {
    *plVar9 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_011f474c;
  goto LAB_011f473c;
}


