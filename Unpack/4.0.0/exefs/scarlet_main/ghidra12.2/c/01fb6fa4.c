/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb6fa4; name: FUN_01fb6fa4
 */


undefined8 FUN_01fb6fa4(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar9 = *param_1;
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
        if (cVar4 != '\0') goto LAB_01fb7014;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01fb7014:
        bVar14 = false;
      }
      if (bVar14) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return 0;
        }
        plVar8 = (long *)(lVar9 + 0xe8);
        lVar11 = *plVar8;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 == lVar11) {
          bVar14 = true;
          goto LAB_01fb7064;
        }
        lVar7 = nn::os::GetCurrentThread();
        goto LAB_01fb7050;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  return 0;
LAB_01fb7050:
  if (*plVar8 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar14) {
              *plVar8 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01fb7060;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar14) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01fb7060:
    bVar14 = false;
LAB_01fb7064:
    plVar8 = (long *)FUN_01fb7340(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
    if ((*(long **)(lVar9 + 0x108) == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_01fb7340(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
      if (*(long **)(lVar9 + 0x140) == plVar8) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = (long *)0x0;
        if (*plVar8 != 0) {
          plVar12 = (long *)(*plVar8 + -0x20);
        }
      }
    }
    else {
      plVar12 = (long *)(*plVar8 + -0x20);
    }
    if (!bVar14) {
      *(undefined8 *)(lVar9 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
    }
    param_1[2] = (long)plVar12;
    uVar13 = 0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(local_48,plVar12);
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      if ((long *)local_48[0][2] == plVar12 + 5) {
        FUN_014c78e4(&local_58,local_48);
      }
      puVar5 = local_48[0];
      if (local_48[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_48[0] + 3);
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
          piVar2 = (int *)((long)local_48[0] + 0x1c);
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
            lVar7 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar7;
            local_38 = *puVar5;
            FUN_00c44438(lVar7 + 0x8040,&local_38);
          }
        }
        else if (sVar10 == 0) goto LAB_01fb71a8;
      }
      FUN_013dc33c(param_1 + 3,&local_58);
      puVar5 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58 + 3);
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
          piVar2 = (int *)((long)local_58 + 0x1c);
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
            lVar7 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar7;
            local_48[0] = (undefined8 *)*puVar5;
            FUN_00c44438(lVar7 + 0x8040,local_48);
          }
        }
        else if (sVar10 == 0) {
LAB_01fb71a8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      uVar13 = 1;
    }
    (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
    return uVar13;
  }
  cVar4 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar14) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01fb7060;
  goto LAB_01fb7050;
}


