/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02135b4c; name: FUN_02135b4c
 */


void FUN_02135b4c(long param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  uint uVar13;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  ulong uStack_78;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_28;
  
  if ((1 < param_2 - 0x1bU) && (*(int *)(param_1 + 0x2c) != param_2)) {
    FUN_018be5ac(param_1);
    lVar8 = *(long *)(param_1 + 0x88);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar11 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02135be0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02135be0:
          bVar5 = false;
        }
        if (bVar5) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
            return;
          }
          lVar9 = *(long *)(param_1 + 0x78);
          if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) goto LAB_02135c08;
          psVar1 = (short *)(lVar9 + 0x1a);
          sVar11 = *(short *)(lVar9 + 0x1a);
          goto LAB_02135e8c;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return;
LAB_02135e8c:
  sVar3 = *psVar1;
  if (sVar3 == sVar11) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_02135eb0;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02135eb0:
    bVar5 = false;
  }
  if (bVar5) {
    lVar9 = *(long *)(lVar9 + 0x10);
    if (lVar9 != 0) {
      local_60 = *(undefined8 **)(param_1 + 0x48);
      uStack_58 = *(undefined8 *)(param_1 + 0x50);
      local_50 = *(undefined8 *)(param_1 + 0x58);
      local_48 = (long *)0x0;
      FUN_0196f180(&local_60);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      FUN_00ef8710(&local_60,0);
      FUN_00ca1ea4((long *)(param_1 + 0x78),&local_60);
      puVar6 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_60 + 3);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar2 = (int *)((long)local_60 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_80 = (undefined8 *)*puVar6;
            FUN_00c44438(lVar10 + 0x8040,&local_80);
          }
        }
        else if (sVar11 == 0) goto LAB_02135d24;
      }
      lVar10 = *(long *)(lVar9 + 8);
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))();
      }
      else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    goto LAB_02135c08;
  }
  sVar11 = sVar3;
  if (sVar3 == 0) {
LAB_02135c08:
    plVar12 = (long *)(lVar8 + -0x28);
    local_68 = plVar12;
    (**(code **)(*plVar12 + 0x58))(plVar12);
    local_60 = *(undefined8 **)(param_1 + 0x48);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    local_50 = *(undefined8 *)(param_1 + 0x58);
    local_48 = (long *)0x0;
    uVar13 = *(uint *)(param_1 + 0x28);
    local_80 = (undefined8 *)CONCAT44(uVar13,uVar13);
    uStack_78 = (ulong)uVar13;
    FUN_0190c650(param_2,&local_68,&local_60,&local_80,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x60))();
    }
    *(int *)(param_1 + 0x2c) = param_2;
    (**(code **)(**(long **)(param_1 + 0x98) + 0x70))(*(long **)(param_1 + 0x98),0);
    local_88 = FUN_017516e8();
    FUN_0175164c(&local_60,&local_88);
    local_a8 = 0x3ff82c3de12efbb4;
    pcStack_a0 = "BallChange";
    local_98 = 10;
    local_90 = (long *)0x0;
    FUN_01751920(&local_80,&local_60,&local_a8,1,1);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if ((local_80 != (undefined8 *)0x0) &&
       ((local_80[2] == 0 ||
        (FUN_019437fc(local_80[2] + -0x28,*(undefined4 *)(param_1 + 0x2c)),
        local_80 != (undefined8 *)0x0)))) {
      puVar6 = local_80;
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_02135d24;
    }
    puVar6 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_80 = (undefined8 *)*puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_80);
        }
      }
      else if (sVar11 == 0) {
LAB_02135d24:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    (**(code **)(*plVar12 + 0x60))(plVar12);
    return;
  }
  goto LAB_02135e8c;
}


