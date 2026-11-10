/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6f3b8; name: FUN_00d6f3b8
 */


long FUN_00d6f3b8(long param_1)

{
  long lVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
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
  
  lVar1 = param_1 + 0x120;
  if (((((*(long *)(param_1 + 0x120) == 0) || (*(short *)(*(long *)(param_1 + 0x120) + 0x1a) == 0))
       && (*(long *)(param_1 + 0x80) != 0)) &&
      ((*(short *)(*(long *)(param_1 + 0x80) + 0x1a) != 0 &&
       (lVar10 = *(long *)(param_1 + 0x80), lVar10 != 0)))) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00d6f458;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d6f458:
        bVar12 = false;
      }
      if (bVar12) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return lVar1;
        }
        plVar9 = (long *)(lVar10 + 0xe8);
        lVar13 = *plVar9;
        lVar8 = nn::os::GetCurrentThread();
        if (lVar8 == lVar13) {
          bVar12 = true;
          goto LAB_00d6f4a8;
        }
        lVar8 = nn::os::GetCurrentThread();
        goto LAB_00d6f494;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  return lVar1;
LAB_00d6f494:
  if (*plVar9 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
          while (*plVar9 == 0) {
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar12) {
              *plVar9 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00d6f4a4;
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
LAB_00d6f4a4:
    bVar12 = false;
LAB_00d6f4a8:
    plVar9 = (long *)FUN_01e15f10(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
    if ((*(long **)(lVar10 + 0x108) == plVar9) || (*plVar9 == 0)) {
      plVar9 = (long *)FUN_01e15f10(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140))
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
      puVar6 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_48 + 3);
        do {
          sVar11 = *psVar2;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar12) {
            *psVar2 = sVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar11 == 1) {
          piVar3 = (int *)((long)local_48 + 0x1c);
          do {
            iVar7 = *piVar3;
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar12) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
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
        else if (sVar11 == 0) goto LAB_00d6f5ec;
      }
      FUN_00cacc64(lVar1,&local_58);
      puVar6 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_58 + 3);
        do {
          sVar11 = *psVar2;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar12) {
            *psVar2 = sVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar11 == 1) {
          piVar3 = (int *)((long)local_58 + 0x1c);
          do {
            iVar7 = *piVar3;
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar12) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_48 = (undefined8 *)*puVar6;
            FUN_00c44438(lVar8 + 0x8040,&local_48);
          }
        }
        else if (sVar11 == 0) {
LAB_00d6f5ec:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))();
    return lVar1;
  }
  cVar5 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar12) {
    *plVar9 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00d6f4a4;
  goto LAB_00d6f494;
}


