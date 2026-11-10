/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c73d48; name: FUN_00c73d48
 */


long * FUN_00c73d48(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  bool bVar13;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  plVar8 = (long *)(param_1 + 0xa0);
  if (((((*plVar8 == 0) || (*(short *)(*plVar8 + 0x1a) == 0)) && (*(long *)(param_1 + 0x80) != 0))
      && ((*(short *)(*(long *)(param_1 + 0x80) + 0x1a) != 0 &&
          (lVar10 = *(long *)(param_1 + 0x80), lVar10 != 0)))) && (*(short *)(lVar10 + 0x1a) != 0))
  {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00c73de8;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c73de8:
        bVar13 = false;
      }
      if (bVar13) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return plVar8;
        }
        plVar2 = (long *)(lVar10 + 0xe8);
        lVar12 = *plVar2;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 != lVar12) {
          lVar12 = nn::os::GetCurrentThread();
          goto LAB_00c73e24;
        }
        bVar13 = true;
        goto LAB_00c73e38;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  return plVar8;
LAB_00c73e24:
  if (*plVar2 != 0) {
    ClearExclusiveLocal();
    lVar9 = nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          lVar9 = nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
          while (*plVar2 == 0) {
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar13) {
              *plVar2 = lVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00c73e34;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00c73e34:
    bVar13 = false;
LAB_00c73e38:
    lVar9 = FUN_01e0e894(lVar9,lVar10 + 0x100);
    if (lVar9 == 0) {
      lVar9 = FUN_01e0e894(0,lVar10 + 0x138);
    }
    if (!bVar13) {
      *(undefined8 *)(lVar10 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
    }
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x11a) != '\0')) {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_00c43ef0(&local_48,lVar9 + 0x98);
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      if (local_48[2] == lVar9 + 0x28) {
        FUN_00d94688(&local_58,&local_48);
      }
      puVar6 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_48 + 3);
        do {
          sVar11 = *psVar1;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar11 == 1) {
          piVar3 = (int *)((long)local_48 + 0x1c);
          do {
            iVar7 = *piVar3;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
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
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_38 = *puVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_38);
          }
        }
        else if (sVar11 == 0) goto LAB_00c73f68;
      }
      FUN_00d48230(plVar8,&local_58);
      puVar6 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58 + 3);
        do {
          sVar11 = *psVar1;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar11 == 1) {
          piVar3 = (int *)((long)local_58 + 0x1c);
          do {
            iVar7 = *piVar3;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
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
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_48 = (undefined8 *)*puVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_48);
          }
        }
        else if (sVar11 == 0) {
LAB_00c73f68:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))();
    return plVar8;
  }
  cVar5 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar13) {
    *plVar2 = lVar12;
    cVar5 = ExclusiveMonitorsStatus();
  }
  lVar9 = lVar12;
  if (cVar5 == '\0') goto LAB_00c73e34;
  goto LAB_00c73e24;
}


