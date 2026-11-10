/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f4ca44; name: FUN_00f4ca44
 */


long * FUN_00f4ca44(long param_1)

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
  long lVar12;
  long *plVar13;
  bool bVar14;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  plVar7 = (long *)(param_1 + 0x98);
  if ((((*plVar7 == 0) || (*(short *)(*plVar7 + 0x1a) == 0)) &&
      (lVar10 = *(long *)(param_1 + 0x40), lVar10 != 0)) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00f4cac8;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f4cac8:
        bVar14 = false;
      }
      if (bVar14) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return plVar7;
        }
        plVar9 = (long *)(lVar10 + 0xe8);
        lVar12 = *plVar9;
        lVar8 = nn::os::GetCurrentThread();
        if (lVar8 == lVar12) {
          bVar14 = true;
          goto LAB_00f4cb18;
        }
        lVar8 = nn::os::GetCurrentThread();
        goto LAB_00f4cb04;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return plVar7;
LAB_00f4cb04:
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
            bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar14) {
              *plVar9 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00f4cb14;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00f4cb14:
    bVar14 = false;
LAB_00f4cb18:
    plVar9 = (long *)FUN_01fad960(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
    if ((*(long **)(lVar10 + 0x108) == plVar9) || (*plVar9 == 0)) {
      plVar9 = (long *)FUN_01fad960(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140))
      ;
      if (*(long **)(lVar10 + 0x140) == plVar9) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = (long *)0x0;
        if (*plVar9 != 0) {
          plVar13 = (long *)(*plVar9 + -0x20);
        }
      }
    }
    else {
      plVar13 = (long *)(*plVar9 + -0x20);
    }
    if (!bVar14) {
      *(undefined8 *)(lVar10 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
    }
    if ((plVar13 != (long *)0x0) && (*(char *)((long)plVar13 + 0x11a) != '\0')) {
      (**(code **)(*plVar13 + 0x18))(local_48,plVar13);
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      if ((long *)local_48[0][2] == plVar13 + 5) {
        FUN_01455c00(&local_58,local_48);
      }
      puVar5 = local_48[0];
      if (local_48[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_48[0] + 3);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_38 = *puVar5;
            FUN_00c44438(lVar8 + 0x8040,&local_38);
          }
        }
        else if (sVar11 == 0) goto LAB_00f4cc58;
      }
      FUN_013dbf6c(plVar7,&local_58);
      puVar5 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58 + 3);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_48[0] = (undefined8 *)*puVar5;
            FUN_00c44438(lVar8 + 0x8040,local_48);
          }
        }
        else if (sVar11 == 0) {
LAB_00f4cc58:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))();
    return plVar7;
  }
  cVar4 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar14) {
    *plVar9 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00f4cb14;
  goto LAB_00f4cb04;
}


