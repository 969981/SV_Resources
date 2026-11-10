/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01990e8c; name: FUN_01990e8c
 */


long * FUN_01990e8c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  bool bVar12;
  long lVar13;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  plVar7 = (long *)(param_1 + 0x68);
  if ((((*plVar7 == 0) || (*(short *)(*plVar7 + 0x1a) == 0)) &&
      (lVar10 = *(long *)(param_1 + 0x48), lVar10 != 0)) && (*(short *)(lVar10 + 0x1a) != 0)) {
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
        if (cVar4 != '\0') goto LAB_01990f10;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01990f10:
        bVar12 = false;
      }
      if (bVar12) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return plVar7;
        }
        plVar9 = (long *)(lVar10 + 0xe8);
        lVar13 = *plVar9;
        lVar8 = nn::os::GetCurrentThread();
        if (lVar8 == lVar13) {
          bVar12 = true;
          goto LAB_01990f60;
        }
        lVar8 = nn::os::GetCurrentThread();
        goto LAB_01990f4c;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return plVar7;
LAB_01990f4c:
  if (*plVar9 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
          while (*plVar9 == 0) {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar12) {
              *plVar9 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01990f5c;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar12) {
        *plVar9 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01990f5c:
    bVar12 = false;
LAB_01990f60:
    plVar9 = (long *)FUN_01df7bf0(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
    if ((*(long **)(lVar10 + 0x108) == plVar9) || (*plVar9 == 0)) {
      plVar9 = (long *)FUN_01df7bf0(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140))
      ;
      if (*(long **)(lVar10 + 0x140) == plVar9) {
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
      *(undefined8 *)(lVar10 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
    }
    if (lVar8 != 0) {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_00c43ef0(&local_48,lVar8 + 0x98);
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      if (local_48[2] == lVar8 + 0x28) {
        FUN_00c953a8(&local_58,&local_48);
      }
      puVar5 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_48 + 3);
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
          piVar2 = (int *)((long)local_48 + 0x1c);
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_38 = *puVar5;
            FUN_00c44438(lVar8 + 0x8040,&local_38);
          }
        }
        else if (sVar11 == 0) goto LAB_019910f4;
      }
      FUN_00cacc64(plVar7,&local_58);
      puVar5 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58 + 3);
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
          piVar2 = (int *)((long)local_58 + 0x1c);
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_48 = (undefined8 *)*puVar5;
            FUN_00c44438(lVar8 + 0x8040,&local_48);
          }
        }
        else if (sVar11 == 0) {
LAB_019910f4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    lVar8 = *(long *)(lVar10 + 8);
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))();
      return plVar7;
    }
    if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return plVar7;
  }
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar12) {
    *plVar9 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01990f5c;
  goto LAB_01990f4c;
}


