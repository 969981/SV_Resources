/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01954954; name: FUN_01954954
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01954954(undefined1 *param_1,undefined4 param_2,undefined4 param_3,ulong param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 param_7,undefined8 param_8)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined2 local_1a3;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 auStack_190 [56];
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined1 local_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  long *local_108;
  undefined2 local_100 [4];
  long local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  char local_68 [2];
  undefined2 local_66;
  undefined8 local_48;
  
  if (((DAT_04839b78 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04839b78), iVar7 != 0)) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b78);
  }
  lVar11 = DAT_04839b68;
  DAT_04839b60 = DAT_04839b68;
  if (((DAT_04839b68 == 0) || (local_f8 = FUN_0156ca90(), local_f8 == 0)) ||
     (FUN_01077654(local_68), local_68[0] == '\0')) {
    *param_1 = 0;
  }
  else {
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_100[0] = local_66;
    local_c0 = CONCAT44(param_3,param_2);
    local_e8 = *param_5;
    uStack_e0 = param_5[1];
    uStack_b8 = param_4 & 0xffffffff;
    local_c8 = *(undefined4 *)(param_6 + 2);
    local_d8 = *param_6;
    local_d0 = param_6[1];
    uStack_a8 = _UNK_03cabe58;
    uStack_b0 = _DAT_03cabe50;
    local_90 = 1;
    local_1d0 = (undefined8 *)0x0;
    uStack_1c8 = 0;
    lStack_f0 = local_f8;
    local_a0 = param_7;
    local_98 = param_8;
    FUN_00ca1ea4(&local_88,&local_1d0);
    puVar6 = local_1d0;
    if (local_1d0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_1d0 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_1d0 + 0x1c);
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
          local_48 = *puVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_0195520c;
    }
    memcpy(&local_1d0,local_100,0x28);
    local_1a8 = (undefined4)local_d8;
    local_1a4 = local_d8._4_1_;
    local_1a3 = local_d8._5_2_;
    local_1a0 = local_d0;
    local_198 = local_c8;
    memcpy(auStack_190,&local_c0,0x32);
    local_158 = (undefined8 *)0x0;
    uStack_150 = 0;
    FUN_00ca1a48(&local_158,&local_88);
    local_140 = 0;
    local_108 = (long *)0x0;
    local_138 = (undefined8 *)0x0;
    uStack_130 = 0;
    local_128 = (undefined8 *)0x0;
    uStack_120 = 0;
    local_118 = (undefined8 *)0x0;
    uStack_110 = 0;
    uVar8 = *(ulong *)(lVar11 + 0x58);
    if (uVar8 < *(ulong *)(lVar11 + 0x60)) {
      FUN_00b1eb64(*(undefined8 *)(lVar11 + 0x68),uVar8,&local_1d0);
      *(ulong *)(lVar11 + 0x58) = uVar8 + 0xd0;
    }
    else {
      uVar13 = *(ulong *)(lVar11 + 0x70);
      lVar10 = (long)(uVar8 - *(long *)(lVar11 + 0x50)) >> 4;
      if (0x7ffffffffffffffe < uVar13) {
        uVar13 = 0x7fffffffffffffff;
      }
      uVar8 = lVar10 * 0x4ec4ec4ec4ec4ec5 + 1;
      if (uVar13 < uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar9 = (long)(*(ulong *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x50)) >> 4;
      uVar12 = lVar9 * -0x6276276276276276;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (uVar13 >> 1 <= (ulong)(lVar9 * 0x4ec4ec4ec4ec4ec5)) {
        uVar8 = uVar13;
      }
      if (uVar8 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (**(code **)(**(long **)(lVar11 + 0x68) + 0x10))
                          (*(long **)(lVar11 + 0x68),uVar8 * 0xd0,0x10);
        if (lVar9 == 0) {
          (**(code **)(**(long **)(lVar11 + 0x68) + 0xe8))();
        }
      }
      lVar16 = lVar9 + lVar10 * 0x10;
      FUN_00b1eb64(*(undefined8 *)(lVar11 + 0x68),lVar16,&local_1d0);
      lVar15 = *(long *)(lVar11 + 0x50);
      lVar14 = *(long *)(lVar11 + 0x58);
      lVar10 = lVar16 + 0xd0;
      if (lVar14 == lVar15) {
        lVar14 = lVar15;
      }
      else {
        do {
          lVar16 = lVar16 + -0xd0;
          lVar14 = lVar14 + -0xd0;
          FUN_00b1eb64(*(undefined8 *)(lVar11 + 0x68),lVar16,lVar14);
        } while (lVar15 != lVar14);
        lVar15 = *(long *)(lVar11 + 0x50);
        lVar14 = *(long *)(lVar11 + 0x58);
      }
      *(long *)(lVar11 + 0x50) = lVar16;
      *(long *)(lVar11 + 0x58) = lVar10;
      lVar10 = *(long *)(lVar11 + 0x60);
      *(ulong *)(lVar11 + 0x60) = lVar9 + uVar8 * 0xd0;
      while (lVar14 != lVar15) {
        lVar14 = lVar14 + -0xd0;
        FUN_0159e7d4(lVar14);
      }
      if (lVar15 != 0) {
        lVar10 = lVar10 - lVar15;
        plVar17 = *(long **)(lVar11 + 0x68);
        uVar8 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar15,lVar10,0x10);
        }
        else {
          FUN_00c48fe8(plVar17,lVar15,lVar10,0x10);
        }
      }
    }
    if (local_108 != (long *)0x0) {
      lVar10 = local_108[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_108 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    puVar6 = local_118;
    if (local_118 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_118 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_118 + 0x1c);
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
          local_48 = *puVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_0195520c;
    }
    puVar6 = local_128;
    if (local_128 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_128 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_128 + 0x1c);
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
          local_48 = *puVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_0195520c;
    }
    puVar6 = local_138;
    if (local_138 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_138 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_138 + 0x1c);
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
          local_48 = *puVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_0195520c;
    }
    puVar6 = local_158;
    if (local_158 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_158 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_158 + 0x1c);
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
          local_48 = *puVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_0195520c;
    }
    if (*(code **)(lVar11 + 0x140) != (code *)0x0) {
      (**(code **)(lVar11 + 0x140))(lVar11 + 0x160,local_100);
    }
    puVar6 = local_88;
    *(undefined2 *)(param_1 + 2) = local_66;
    *param_1 = 1;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
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
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_1d0 = (undefined8 *)*puVar6;
          FUN_00c44438(lVar11 + 0x8040,&local_1d0);
        }
      }
      else if (sVar3 == 0) {
LAB_0195520c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


