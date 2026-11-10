/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb87cc; name: FUN_01eb87cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01eb87cc(long param_1)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_148;
  undefined8 uStack_140;
  long local_138;
  undefined1 local_130;
  undefined2 local_128 [4];
  undefined8 *local_120;
  undefined8 uStack_118;
  long local_110;
  undefined1 local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined1 local_e8;
  undefined8 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [4];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 *local_60;
  undefined8 uStack_58;
  long local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_00d8e6c4(&local_60);
  FUN_019c79f8(local_50,&local_60);
  puVar6 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar4 = *psVar1;
      cVar9 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar4 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar9 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_e0 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar11 + 0x8040,&local_e0);
      }
    }
    else if (sVar4 == 0) goto LAB_01eb8848;
  }
  if (((local_50[0] != 0) && (*(short *)(local_50[0] + 0x1a) != 0)) &&
     (cVar9 = FUN_019c7a20(local_50), cVar9 == '\x06')) {
    lVar11 = param_1 + 0x40;
    FUN_00d8e6c4(lVar11,local_50);
    FUN_01c45238(param_1 + 0x50,local_40);
    local_e0 = (undefined8 *)&LAB_01eb9908;
    local_d8 = FUN_00b1d5e4;
    local_d0 = &LAB_00b1d5e8;
    local_c8 = &LAB_00b1d5f4;
    alStack_c0[0] = param_1;
    FUN_01a47180(lVar11,&local_e0);
    pcVar7 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (undefined8 *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar7)(alStack_c0);
    }
    lVar3 = 0;
    if (param_1 != 0) {
      lVar3 = param_1 + 0x28;
    }
    local_100 = (undefined8 *)0x0;
    uStack_f8 = 0;
    local_e8 = 1;
    local_f0 = lVar3;
    FUN_01e66630(&local_e0,lVar11,0x2c,&local_100);
    FUN_0178f674(param_1 + 0xd8,&local_e0);
    puVar6 = local_e0;
    if (local_e0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_e0 + 3);
      do {
        sVar4 = *psVar1;
        cVar9 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar4 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar9 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_38 = *puVar6;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_01eb8848;
    }
    puVar6 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_100 + 3);
      do {
        sVar4 = *psVar1;
        cVar9 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar4 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_100 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar9 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_38 = *puVar6;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_01eb8848;
    }
    local_108 = 1;
    local_120 = (undefined8 *)0x0;
    uStack_118 = 0;
    local_110 = lVar3;
    FUN_01eb4c58(&local_e0,lVar11,0x2d,&local_120);
    FUN_0178f674(param_1 + 0xe8,&local_e0);
    puVar6 = local_e0;
    if (local_e0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_e0 + 3);
      do {
        sVar4 = *psVar1;
        cVar9 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar4 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar9 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *puVar6;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_01eb8848;
    }
    puVar6 = local_120;
    if (local_120 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_120 + 3);
      do {
        sVar4 = *psVar1;
        cVar9 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar4 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_120 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar9 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *puVar6;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_01eb8848;
    }
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar11 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar11;
    if ((lVar11 != 0) && (*(long *)(param_1 + 0xd0) == 0)) {
      local_128[0] = 0x2b;
      local_148 = (undefined8 *)0x0;
      uStack_140 = 0;
      local_130 = 1;
      local_138 = lVar3;
      FUN_0178e4dc(&local_38,lVar11,local_128,&local_148);
      plVar12 = *(long **)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if (plVar12 != (long *)0x0) {
        lVar11 = plVar12[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar9 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar4 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      uVar8 = local_38;
      puVar6 = local_148;
      local_38 = 0;
      *(undefined8 *)(param_1 + 0xd0) = uVar8;
      if (local_148 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_148 + 3);
        do {
          sVar4 = *psVar1;
          cVar9 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar4 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_148 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar9 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_e0 = (undefined8 *)*puVar6;
            FUN_00c44438(lVar11 + 0x8040,&local_e0);
          }
        }
        else if (sVar4 == 0) {
LAB_01eb8848:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    local_e0 = (undefined8 *)0x0;
    local_d8 = (code *)0x0;
    FUN_01667884(&local_d0);
    local_90 = 0x33000000;
    uStack_98 = _UNK_03cabe58;
    local_a0 = _DAT_03cabe50;
    FUN_01e97e40(local_50,&local_e0,0x60);
    if (*(char *)(param_1 + 0x60) == '\0') {
      memcpy((void *)(param_1 + 0x70),&local_e0,0x60);
      *(undefined1 *)(param_1 + 0x60) = 1;
    }
    else {
      memcpy((void *)(param_1 + 0x70),&local_e0,0x54);
    }
  }
  FUN_00d8e444(local_50);
  return;
}


