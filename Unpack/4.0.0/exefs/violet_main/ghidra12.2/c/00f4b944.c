/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4b944; name: FUN_00f4b944
 */


long * FUN_00f4b944(long param_1)

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
  long lVar12;
  long *plVar13;
  bool bVar14;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  plVar11 = (long *)(param_1 + 0x90);
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
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f4b9d4;
          bVar14 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f4b9d4:
          bVar14 = false;
        }
        if (bVar14) {
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 == 0) {
            return plVar11;
          }
          plVar7 = (long *)(lVar9 + 0xe8);
          lVar12 = *plVar7;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 == lVar12) {
            bVar14 = true;
            goto LAB_00f4ba20;
          }
          lVar8 = nn::os::GetCurrentThread();
          goto LAB_00f4ba0c;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return plVar11;
LAB_00f4ba0c:
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
            bVar14 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar14) {
              *plVar7 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00f4ba1c;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar14) {
        *plVar7 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00f4ba1c:
    bVar14 = false;
LAB_00f4ba20:
    plVar7 = (long *)FUN_01fae9d0(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
    if ((*(long **)(lVar9 + 0x108) == plVar7) || (*plVar7 == 0)) {
      plVar7 = (long *)FUN_01fae9d0(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
      if (*(long **)(lVar9 + 0x140) == plVar7) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = (long *)0x0;
        if (*plVar7 != 0) {
          plVar13 = (long *)(*plVar7 + -0x20);
        }
      }
    }
    else {
      plVar13 = (long *)(*plVar7 + -0x20);
    }
    if (!bVar14) {
      *(undefined8 *)(lVar9 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
    }
    if ((plVar13 != (long *)0x0) && (*(char *)((long)plVar13 + 0x11a) != '\0')) {
      (**(code **)(*plVar13 + 0x18))(local_50,plVar13);
      local_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      if ((long *)local_50[0][2] == plVar13 + 5) {
        FUN_01455c00(&local_60,local_50);
      }
      puVar5 = local_50[0];
      if (local_50[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_50[0] + 3);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          piVar2 = (int *)((long)local_50[0] + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
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
        else if (sVar10 == 0) goto LAB_00f4bb5c;
      }
      FUN_013dbf6c(plVar11,&local_60);
      puVar5 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_60 + 3);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          piVar2 = (int *)((long)local_60 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
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
            local_50[0] = (undefined8 *)*puVar5;
            FUN_00c44438(lVar8 + 0x8040,local_50);
          }
        }
        else if (sVar10 == 0) {
LAB_00f4bb5c:
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
  bVar14 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar14) {
    *plVar7 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00f4ba1c;
  goto LAB_00f4ba0c;
}


