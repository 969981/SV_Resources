/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd4530; name: FUN_01dd4530
 */


void FUN_01dd4530(long param_1,int *param_2,int *param_3)

{
  ulong *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  code *pcVar14;
  ulong uVar15;
  short sVar16;
  long lVar17;
  ulong *local_110 [2];
  ulong *local_100 [2];
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  ulong *local_d0 [2];
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  undefined8 local_28;
  
  if (param_3[1] < 1) {
    if (param_3[1] < 0) {
      FUN_01dd29cc(&local_c0,param_1,0);
      puVar13 = local_c0;
      if (local_c0 == (undefined8 *)0x0) {
        return;
      }
      if (*(short *)((long)local_c0 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_c0 + 0x1a);
        sVar16 = *(short *)((long)local_c0 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar16) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar16 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01dd4770;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01dd4770:
            bVar6 = false;
          }
          if (bVar6) {
            plVar11 = (long *)0x0;
            if (local_c0[2] != 0) {
              plVar11 = (long *)(local_c0[2] + -0x28);
            }
            goto LAB_01dd4950;
          }
          sVar16 = sVar4;
        } while (sVar4 != 0);
      }
      plVar11 = (long *)0x0;
LAB_01dd4950:
      psVar2 = (short *)(local_c0 + 3);
      do {
        sVar16 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar16 == 1) {
        piVar3 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_f0 = *puVar13;
          FUN_00c44438(lVar17 + 0x8040,&local_f0);
        }
      }
      else if (sVar16 == 0) goto LAB_01dd46e8;
      if (plVar11 == (long *)0x0) {
        return;
      }
      local_28 = FUN_01dcd22c(plVar11);
      iVar8 = *param_2;
      if (local_28 >> 0x20 == 0) {
        if (iVar8 == 0) {
          iVar8 = *(int *)(param_1 + 0x1e8);
          if (2 < iVar8) goto LAB_01dd4b70;
LAB_01dd4b5c:
          local_c0 = (undefined8 *)CONCAT44(5,iVar8);
LAB_01dd49c8:
          puVar13 = &local_c0;
          goto LAB_01dd49cc;
        }
        if (iVar8 == 1) {
          iVar8 = *(int *)(param_1 + 0x1e8);
          if (iVar8 < 3) goto LAB_01dd49bc;
          goto LAB_01dd4b5c;
        }
      }
      else {
        iVar9 = (int)local_28;
        if (iVar8 == 0) {
          if (2 < iVar9) {
LAB_01dd4b70:
            uVar15 = 3;
            goto LAB_01dd49c0;
          }
        }
        else if ((iVar9 < 3) && (iVar8 == 1)) {
LAB_01dd49bc:
          uVar15 = 2;
LAB_01dd49c0:
          local_c0 = (undefined8 *)(uVar15 | 0x500000000);
          goto LAB_01dd49c8;
        }
        local_28 = CONCAT44(5,iVar9);
        puVar13 = &local_28;
LAB_01dd49cc:
        FUN_014e4eac(param_1,puVar13);
      }
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar17 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar17;
      local_f0 = 0xab49936982f33827;
      local_e8 = "PLAY_UI_COMMON_SELECT";
      local_e0 = 0x15;
      local_d8 = (long *)0x0;
      if (*(long *)(lVar17 + 0x48) == 0) {
        uVar10 = 0xffffffffffffffff;
      }
      else {
        uVar10 = FUN_00cf8198();
      }
      pcVar7 = local_e8;
      memset(&local_c0,0,0x80);
      plVar12 = *(long **)(*(long *)(lVar17 + 0x200) + 0x60);
      iVar8 = (**(code **)(*plVar12 + 0xd0))(plVar12,pcVar7,uVar10,1,&LAB_01080c70,lVar17,0,0,0);
      if (iVar8 != 0) {
        FUN_0104f218(*(undefined8 *)(lVar17 + 0x220),&local_f0,iVar8,uVar10,0,&local_c0,0);
        pcVar14 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = (undefined8 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar14)(auStack_a0);
        }
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      lVar17 = plVar11[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar16 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar16 != 1) {
        if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      *(undefined8 *)(lVar17 + 0x10) = 0;
      pcVar14 = *(code **)(*plVar11 + 0x50);
      goto LAB_01dd47a0;
    }
    if (*param_3 < 1) {
      if (-1 < *param_3) {
        return;
      }
      if (*param_2 != 0) {
        return;
      }
    }
    else if (*param_2 != 1) {
      return;
    }
    local_28 = 0x500000000;
    if (*(uint *)(param_1 + 0x298) < 2) {
      FUN_01dd29cc(local_100,param_1,1);
      if (local_100[0] != (ulong *)0x0) {
        puVar1 = local_100[0] + 3;
        do {
          sVar16 = (short)*puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *(short *)puVar1 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar16 == 1) {
          piVar3 = (int *)((long)local_100[0] + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar17 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar17;
            local_c0 = (undefined8 *)*local_100[0];
            FUN_00c44438(lVar17 + 0x8040,&local_c0);
          }
        }
        else if (sVar16 == 0) goto LAB_01dd46e8;
      }
    }
    else if (*(uint *)(param_1 + 0x298) == 2) {
      FUN_01dd29cc(local_110,param_1,2);
      if (local_110[0] != (ulong *)0x0) {
        puVar1 = local_110[0] + 3;
        do {
          sVar16 = (short)*puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *(short *)puVar1 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar16 == 1) {
          piVar3 = (int *)((long)local_110[0] + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar17 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar17;
            local_c0 = (undefined8 *)*local_110[0];
            FUN_00c44438(lVar17 + 0x8040,&local_c0);
          }
        }
        else if (sVar16 == 0) goto LAB_01dd46e8;
      }
      local_28 = CONCAT44(6,(undefined4)local_28);
    }
    puVar13 = &local_28;
  }
  else {
    FUN_01dd29cc(local_d0,param_1,0);
    if (local_d0[0] != (ulong *)0x0) {
      puVar1 = local_d0[0] + 3;
      do {
        sVar16 = (short)*puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *(short *)puVar1 = sVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar16 == 1) {
        piVar3 = (int *)((long)local_d0[0] + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_c0 = (undefined8 *)*local_d0[0];
          FUN_00c44438(lVar17 + 0x8040,&local_c0);
        }
      }
      else if (sVar16 == 0) {
LAB_01dd46e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    puVar13 = (undefined8 *)(param_1 + 0x174);
  }
  FUN_014e4eac(param_1,puVar13);
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar17 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar17;
  local_f0 = 0xab49936982f33827;
  local_e8 = "PLAY_UI_COMMON_SELECT";
  local_e0 = 0x15;
  local_d8 = (long *)0x0;
  if (*(long *)(lVar17 + 0x48) == 0) {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    uVar10 = FUN_00cf8198();
  }
  pcVar7 = local_e8;
  memset(&local_c0,0,0x80);
  plVar11 = *(long **)(*(long *)(lVar17 + 0x200) + 0x60);
  iVar8 = (**(code **)(*plVar11 + 0xd0))(plVar11,pcVar7,uVar10,1,&LAB_01080c70,lVar17,0,0,0);
  if (iVar8 != 0) {
    FUN_0104f218(*(undefined8 *)(lVar17 + 0x220),&local_f0,iVar8,uVar10,0,&local_c0,0);
    pcVar14 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = (undefined8 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar14)(auStack_a0);
    }
  }
  if (local_d8 == (long *)0x0) {
    return;
  }
  pcVar14 = *(code **)(*local_d8 + 0x20);
  plVar11 = local_d8;
LAB_01dd47a0:
  (*pcVar14)(plVar11);
  return;
}


