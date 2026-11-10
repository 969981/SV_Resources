/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01548c60; name: FUN_01548c60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01548c60(undefined8 param_1,long *param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  short sVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar9 = *param_2;
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
LAB_01548c84:
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_00d0a71c(&local_58,param_2);
    lVar9 = FUN_01180e7c(param_1,&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_58 + 3);
      do {
        sVar13 = *psVar2;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        piVar1 = (int *)((long)local_58 + 0x1c);
        do {
          iVar6 = *piVar1;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_48 = *puVar4;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (lVar9 == 0) {
      uVar15 = _DAT_03caa980;
      uVar17 = _UNK_03caa988;
    }
    else {
      uVar15 = *(undefined8 *)(lVar9 + 0xb0);
      uVar17 = *(undefined8 *)(lVar9 + 0xb8);
    }
LAB_01548cdc:
    auVar16._8_8_ = uVar17;
    auVar16._0_8_ = uVar15;
    return auVar16;
  }
  psVar2 = (short *)(lVar9 + 0x1a);
  sVar13 = *(short *)(lVar9 + 0x1a);
LAB_01548d64:
  sVar3 = *psVar2;
  if (sVar3 == sVar13) {
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar12) {
      *psVar2 = sVar13 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_01548d8c;
    bVar12 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01548d8c:
    bVar12 = false;
  }
  if (!bVar12) goto code_r0x01548d94;
  lVar9 = *(long *)(lVar9 + 0x10);
  plVar11 = (long *)(lVar9 + -0x28);
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 0xe8);
    lVar14 = *plVar8;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 == lVar14) {
      bVar12 = true;
    }
    else {
      lVar10 = nn::os::GetCurrentThread();
      do {
        if (*plVar8 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
            while (*plVar8 == 0) {
              cVar5 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar12) {
                *plVar8 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_01548de8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar12) {
          *plVar8 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01548de8:
      bVar12 = false;
    }
    plVar7 = (long *)FUN_02119490(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
    if ((*(long **)(lVar9 + 0x108) == plVar7) || (*plVar7 == 0)) {
      plVar7 = (long *)FUN_02119490(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
      if (*(long **)(lVar9 + 0x140) == plVar7) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if (*plVar7 != 0) {
          lVar10 = *plVar7 + -0x20;
        }
      }
    }
    else {
      lVar10 = *plVar7 + -0x20;
    }
    if (!bVar12) {
      *(undefined8 *)(lVar9 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
    }
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0x280) != '\0') {
        (**(code **)(*plVar11 + 0x60))(plVar11);
        uVar15 = _DAT_03caa8e0;
        uVar17 = _UNK_03caa8e8;
        goto LAB_01548cdc;
      }
      if (*(char *)(lVar10 + 0x281) == '\0') goto LAB_01548ef0;
      uVar15 = *(undefined8 *)(lVar10 + 0x290);
      uVar17 = *(undefined8 *)(lVar10 + 0x298);
LAB_01548ff0:
      (**(code **)(*plVar11 + 0x60))(plVar11);
      goto LAB_01548cdc;
    }
LAB_01548ef0:
    lVar14 = *plVar8;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 == lVar14) {
      bVar12 = true;
    }
    else {
      lVar10 = nn::os::GetCurrentThread();
      do {
        if (*plVar8 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
            while (*plVar8 == 0) {
              cVar5 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar12) {
                *plVar8 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_01548f18;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar12) {
          *plVar8 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01548f18:
      bVar12 = false;
    }
    plVar8 = (long *)FUN_021195b0(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
    if ((*(long **)(lVar9 + 0x108) == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_021195b0(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
      if (*(long **)(lVar9 + 0x140) == plVar8) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)0x0;
        if (*plVar8 != 0) {
          plVar7 = (long *)(*plVar8 + -0x20);
        }
      }
    }
    else {
      plVar7 = (long *)(*plVar8 + -0x20);
    }
    if (!bVar12) {
      *(undefined8 *)(lVar9 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
    }
    if (plVar7 != (long *)0x0) {
      cVar5 = (**(code **)(*plVar7 + 0x130))(plVar7);
      if (cVar5 == '\x01') {
        uVar15 = _DAT_03caa980;
        uVar17 = _UNK_03caa988;
      }
      else if (cVar5 == '\x02') {
        uVar15 = _DAT_03cab650;
        uVar17 = _UNK_03cab658;
      }
      else if (cVar5 == '\x03') {
        uVar15 = _DAT_03caa8e0;
        uVar17 = _UNK_03caa8e8;
      }
      else {
        uVar15 = _DAT_03cabc20;
        uVar17 = _UNK_03cabc28;
      }
      goto LAB_01548ff0;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11);
  }
  goto LAB_01548c84;
code_r0x01548d94:
  sVar13 = sVar3;
  if (sVar3 == 0) goto LAB_01548c84;
  goto LAB_01548d64;
}


