/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190bbe8; name: FUN_0190bbe8
 */


long * FUN_0190bbe8(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  bool bVar12;
  long lVar13;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  plVar11 = (long *)(param_1 + 0x80);
  if ((*plVar11 == 0) || (*(short *)(*plVar11 + 0x1a) == 0)) {
    plVar7 = (long *)FUN_0190bf88();
    lVar9 = *plVar7;
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar10 = *(short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0190bc78;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0190bc78:
          bVar12 = false;
        }
        if (bVar12) {
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 == 0) {
            return plVar11;
          }
          plVar7 = (long *)(lVar9 + 0xe8);
          lVar13 = *plVar7;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 == lVar13) {
            bVar12 = true;
            goto LAB_0190bcc4;
          }
          lVar8 = nn::os::GetCurrentThread();
          goto LAB_0190bcb0;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return plVar11;
LAB_0190bcb0:
  if (*plVar7 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
          while (*plVar7 == 0) {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar12) {
              *plVar7 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0190bcc0;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar12) {
        *plVar7 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_0190bcc0:
    bVar12 = false;
LAB_0190bcc4:
    plVar7 = (long *)FUN_01fae8b0(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
    if ((*(long **)(lVar9 + 0x108) == plVar7) || (*plVar7 == 0)) {
      plVar7 = (long *)FUN_01fae8b0(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
      if (*(long **)(lVar9 + 0x140) == plVar7) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if (*plVar7 != 0) {
          lVar8 = *plVar7 + -0x20;
        }
      }
    }
    else {
      lVar8 = *plVar7 + -0x20;
    }
    if (!bVar12) {
      *(undefined8 *)(lVar9 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
    }
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x11a) != '\0')) {
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_00c43ef0(&local_50,lVar8 + 0x98);
      local_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      if (local_50[2] == lVar8 + 0x28) {
        FUN_00c92210(&local_60,&local_50);
      }
      puVar5 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_50 + 3);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_28 = *puVar5;
            FUN_00c44438(lVar8 + 0x8040,&local_28);
          }
        }
        else if (sVar10 == 0) goto LAB_0190be20;
      }
      FUN_00c93a38(plVar11,&local_60);
      puVar5 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_60 + 3);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_50 = (undefined8 *)*puVar5;
            FUN_00c44438(lVar8 + 0x8040,&local_50);
          }
        }
        else if (sVar10 == 0) {
LAB_0190be20:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
    return plVar11;
  }
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar12) {
    *plVar7 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0190bcc0;
  goto LAB_0190bcb0;
}


