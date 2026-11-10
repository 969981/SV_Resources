/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01abd158; name: FUN_01abd158
 */


void FUN_01abd158(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  bool bVar12;
  long lVar13;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  plVar9 = (long *)(param_2 + 0x50);
  if ((((*plVar9 == 0) || (*(short *)(*plVar9 + 0x1a) == 0)) &&
      (lVar10 = *(long *)(param_2 + 0x40), lVar10 != 0)) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01abd1f8;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01abd1f8:
        bVar12 = false;
      }
      if (bVar12) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          plVar8 = (long *)(lVar10 + 0xe8);
          lVar13 = *plVar8;
          lVar7 = nn::os::GetCurrentThread();
          if (lVar7 != lVar13) {
            lVar7 = nn::os::GetCurrentThread();
            goto LAB_01abd23c;
          }
          bVar12 = true;
          goto LAB_01abd250;
        }
        break;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
LAB_01abd19c:
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00c6c994(param_1,plVar9);
  return;
LAB_01abd23c:
  if (*plVar8 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar12) {
              *plVar8 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01abd24c;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar12) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01abd24c:
    bVar12 = false;
LAB_01abd250:
    plVar8 = (long *)FUN_01df7000(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
    if ((*(long **)(lVar10 + 0x108) == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_01df7000(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140))
      ;
      if (*(long **)(lVar10 + 0x140) == plVar8) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (*plVar8 != 0) {
          lVar7 = *plVar8 + -0x20;
        }
      }
    }
    else {
      lVar7 = *plVar8 + -0x20;
    }
    if (!bVar12) {
      *(undefined8 *)(lVar10 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
    }
    if (lVar7 != 0) {
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_00c43ef0(&local_50,lVar7 + 0x98);
      local_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      if (local_50[2] == lVar7 + 0x28) {
        FUN_00c953a8(&local_60,&local_50);
      }
      puVar5 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_50 + 3);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar2 = (int *)((long)local_50 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
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
            local_28 = *puVar5;
            FUN_00c44438(lVar7 + 0x8040,&local_28);
          }
        }
        else if (sVar11 == 0) goto LAB_01abd3e8;
      }
      FUN_00cacc64(plVar9,&local_60);
      puVar5 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_60 + 3);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar2 = (int *)((long)local_60 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
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
            local_50 = (undefined8 *)*puVar5;
            FUN_00c44438(lVar7 + 0x8040,&local_50);
          }
        }
        else if (sVar11 == 0) {
LAB_01abd3e8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    lVar7 = *(long *)(lVar10 + 8);
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))();
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    goto LAB_01abd19c;
  }
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar12) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01abd24c;
  goto LAB_01abd23c;
}


