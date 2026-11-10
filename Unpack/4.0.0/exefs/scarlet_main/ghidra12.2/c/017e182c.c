/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e182c; name: FUN_017e182c
 */


void FUN_017e182c(long param_1)

{
  short *psVar1;
  int *piVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  ushort uVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ushort *puVar21;
  short sVar22;
  uint uVar23;
  int *piVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  undefined8 *puVar28;
  char *pcVar29;
  ulong uVar30;
  float fVar31;
  undefined *local_150;
  undefined8 uStack_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  int *local_128;
  int *local_120;
  undefined *local_110;
  char *local_108;
  long local_100;
  long *local_f8;
  undefined1 auStack_f0 [24];
  long *local_d8;
  long *local_d0;
  long local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  long *local_a0;
  char local_98;
  undefined7 uStack_97;
  long *local_90 [2];
  long *local_80;
  long *local_68;
  
  lVar18 = *(long *)(param_1 + 0x138);
  if ((lVar18 == 0) || (*(short *)(lVar18 + 0x1a) == 0)) {
    plVar25 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar18 + 0x1a);
    sVar22 = *(short *)(lVar18 + 0x1a);
    do {
      sVar7 = *psVar1;
      if (sVar7 == sVar22) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar22 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_017e1e24;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_017e1e24:
        bVar9 = false;
      }
      if (bVar9) {
        plVar25 = (long *)0x0;
        if (*(long *)(lVar18 + 0x10) != 0) {
          plVar25 = (long *)(*(long *)(lVar18 + 0x10) + -0x28);
        }
        break;
      }
      plVar25 = (long *)0x0;
      sVar22 = sVar7;
    } while (sVar7 != 0);
  }
  lVar18 = *(long *)(param_1 + 0x148);
  if ((lVar18 == 0) || (*(short *)(lVar18 + 0x1a) == 0)) {
    plVar26 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar18 + 0x1a);
    sVar22 = *(short *)(lVar18 + 0x1a);
    do {
      sVar7 = *psVar1;
      if (sVar7 == sVar22) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar22 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_017e1bb0;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_017e1bb0:
        bVar9 = false;
      }
      if (bVar9) {
        plVar26 = (long *)0x0;
        if (*(long *)(lVar18 + 0x10) != 0) {
          plVar26 = (long *)(*(long *)(lVar18 + 0x10) + -0x28);
        }
        break;
      }
      plVar26 = (long *)0x0;
      sVar22 = sVar7;
    } while (sVar7 != 0);
  }
  if (plVar25 != (long *)0x0) {
    if (plVar26 == (long *)0x0) goto LAB_017e1b38;
    FUN_016af144(&local_98,*(undefined8 *)(param_1 + 8));
    plVar14 = *(long **)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x198) = 0;
    if (plVar14 != (long *)0x0) {
      lVar18 = plVar14[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar22 = *psVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar22 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))();
      }
      else if (sVar22 == 0) goto LAB_017e1bec;
    }
    *(ulong *)(param_1 + 0x198) = CONCAT71(uStack_97,local_98);
    lVar18 = plVar26[0x24];
    if (((lVar18 == 0) || (*(long **)(lVar18 + 0x28) == *(long **)(lVar18 + 0x20))) ||
       (lVar18 = **(long **)(lVar18 + 0x20), lVar18 == 0)) {
      local_d8 = (long *)0x0;
      local_d0 = (long *)0x0;
    }
    else {
      (**(code **)(plVar26[4] + 0x20))(&local_98);
      puVar10 = PTR_DAT_047d39b8;
      local_d8 = (long *)0x0;
      local_d0 = (long *)0x0;
      if (CONCAT71(uStack_97,local_98) != 0) {
        puVar28 = *(undefined8 **)(CONCAT71(uStack_97,local_98) + 8);
        if (puVar28 != (undefined8 *)0x0) {
          if ((*PTR_DAT_047d39b0 & 1) == 0) {
            iVar13 = __cxa_guard_acquire(PTR_DAT_047d39b0);
            puVar3 = PTR_DAT_047d39c8;
            if (iVar13 != 0) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar13 != 0)) {
                *(undefined8 *)puVar3 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar10 = puVar3;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
          }
          do {
            if (puVar28 == (undefined8 *)puVar10) {
              FUN_00d30d98(&local_d8,&local_98);
              break;
            }
            puVar28 = (undefined8 *)*puVar28;
          } while (puVar28 != (undefined8 *)0x0);
        }
        puVar28 = (undefined8 *)CONCAT71(uStack_97,local_98);
        if (puVar28 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar28 + 3);
          do {
            sVar22 = *psVar1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar22 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar22 == 1) {
            piVar2 = (int *)((long)puVar28 + 0x1c);
            do {
              iVar13 = *piVar2;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar9) {
                *piVar2 = -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar19 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar19;
              local_b8 = (long *)*puVar28;
              FUN_00c44438(lVar19 + 0x8040,&local_b8);
            }
          }
          else if (sVar22 == 0) goto LAB_017e2c68;
        }
      }
      local_c8 = lVar18;
    }
    local_b8 = (long *)&DAT_f44c6d62b8673425;
    local_b0 = (undefined8 *)&DAT_03c68983;
    local_a8 = 4;
    local_a0 = (long *)0x0;
    FUN_01810848(&local_98,&local_d8,&local_b8);
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    plVar14 = local_d8;
    if (local_d8 != (long *)0x0) {
      plVar5 = local_d8 + 3;
      do {
        sVar22 = (short)*plVar5;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *(short *)plVar5 = sVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar22 == 1) {
        piVar2 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar13 = *piVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_b8 = (long *)*plVar14;
          FUN_00c44438(lVar18 + 0x8040,&local_b8);
        }
      }
      else if (sVar22 == 0) goto LAB_017e2c68;
    }
    puVar10 = PTR_DAT_047d8b70;
    if (local_98 != '\0') {
      if (local_90[0] != (long *)0x0) {
        uVar27 = 0;
        puVar3 = PTR_DAT_047daf70 + 0x10;
LAB_017e1ea0:
        if (*(short *)((long)local_90[0] + 0x1a) != 0) {
          psVar1 = (short *)((long)local_90[0] + 0x1a);
          sVar22 = *(short *)((long)local_90[0] + 0x1a);
          do {
            sVar7 = *psVar1;
            if (sVar7 == sVar22) {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar22 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 != '\0') goto LAB_017e1ed4;
              bVar9 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_017e1ed4:
              bVar9 = false;
            }
            if (bVar9) goto LAB_017e1ee8;
            sVar22 = sVar7;
            if (sVar7 == 0) break;
          } while( true );
        }
      }
LAB_017e19dc:
      if (((DAT_0483ada0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0483ada0), iVar13 != 0)) {
        FUN_00100190(0x2a27460,0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0483ada0);
      }
      puVar12 = PTR_DAT_047d4250;
      puVar11 = PTR_DAT_047d4248;
      puVar3 = PTR_DAT_047d4240;
      lVar18 = 8;
      do {
        pcVar29 = *(char **)(lVar18 + 0x4567160);
        local_d8 = (long *)0x0;
        if (*pcVar29 == '\0') {
          plVar14 = (long *)FUN_00d44228();
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
        }
        else {
          if (((*puVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar3), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,puVar11,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar3);
          }
          uVar15 = *(undefined8 *)puVar11;
          *(undefined8 *)puVar12 = uVar15;
          FUN_00cf9884(&local_b8,uVar15,pcVar29);
          plVar14 = local_d8;
          local_d8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x20))();
          }
          plVar14 = local_b8;
        }
        plVar5 = (long *)puVar10;
        if (plVar14 != (long *)0x0) {
          plVar5 = plVar14 + 6;
        }
        local_d8 = plVar14;
        FUN_012a7dd0(*(undefined8 *)(param_1 + 0x198),plVar5);
        FUN_02a27748(param_1,&local_d8,0);
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
        lVar18 = lVar18 + 0x20;
      } while (lVar18 != 0xc08);
      if (local_98 != '\0') {
        if (local_90[0] != (long *)0x0) {
          plVar14 = local_90[0] + 3;
          do {
            sVar22 = (short)*plVar14;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *(short *)plVar14 = sVar22 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar22 == 1) {
            piVar2 = (int *)((long)local_90[0] + 0x1c);
            do {
              iVar13 = *piVar2;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar9) {
                *piVar2 = -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar18 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar18;
              local_b8 = (long *)*local_90[0];
              FUN_00c44438(lVar18 + 0x8040,&local_b8);
            }
          }
          else if (sVar22 == 0) {
LAB_017e2c68:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        local_98 = '\0';
      }
    }
  }
  if (plVar26 != (long *)0x0) {
    lVar18 = plVar26[0x13];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar22 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar22 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar22 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar26 + 0x50))(plVar26);
    }
    else if (sVar22 == 0) {
LAB_017e1bec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (plVar25 == (long *)0x0) {
    return;
  }
LAB_017e1b38:
  (**(code **)(*plVar25 + 0x60))(plVar25);
  return;
LAB_017e1ee8:
  if ((local_90[0][2] == 0) ||
     (lVar18 = *local_80, lVar19 = local_80[1],
     (**(code **)(*(long *)(local_90[0][2] + -8) + 0x18))(), (ulong)(lVar19 - lVar18 >> 3) <= uVar27
     )) goto LAB_017e19dc;
  puVar28 = (undefined8 *)FUN_01f98924(local_90,uVar27);
  plVar14 = (long *)*puVar28;
  local_68 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  plVar5 = (long *)puVar10;
  if (plVar14 != (long *)0x0) {
    plVar5 = plVar14 + 6;
  }
  local_d8 = (long *)*plVar5;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (plVar14 != (long *)0x0) {
    plVar4 = plVar14 + 7;
  }
  local_d0 = (long *)*plVar4;
  if (plVar14 == (long *)0x0) {
    local_c8 = 0;
  }
  else {
    local_c8 = plVar14[8];
    local_c0 = (long *)0x0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  local_c0 = plVar14;
  FUN_01810848(&local_b8,local_90,&local_d8);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if ((char)local_b8 != '\0') {
    FUN_012a7dd0(*(undefined8 *)(param_1 + 0x198),plVar5);
    local_d8 = (long *)*plVar5;
    local_d0 = (long *)*plVar4;
    if (plVar14 == (long *)0x0) {
      local_c8 = 0;
    }
    else {
      local_c8 = plVar14[8];
      local_c0 = (long *)0x0;
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    local_c0 = plVar14;
    FUN_00d996a8(auStack_f0,param_1 + 0x170,&local_d8);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_b0 != (undefined8 *)0x0) {
      uVar30 = 0;
LAB_017e20f8:
      if (*(short *)((long)local_b0 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_b0 + 0x1a);
        sVar22 = *(short *)((long)local_b0 + 0x1a);
        do {
          sVar7 = *psVar1;
          if (sVar7 == sVar22) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar22 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 != '\0') goto LAB_017e212c;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_017e212c:
            bVar9 = false;
          }
          if (bVar9) goto LAB_017e2140;
          sVar22 = sVar7;
          if (sVar7 == 0) break;
        } while( true );
      }
    }
LAB_017e1ffc:
    puVar28 = local_b0;
    if ((char)local_b8 != '\0') {
      if (local_b0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_b0 + 3);
        do {
          sVar22 = *psVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar22 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar22 == 1) {
          piVar2 = (int *)((long)local_b0 + 0x1c);
          do {
            iVar13 = *piVar2;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_d8 = (long *)*puVar28;
            FUN_00c44438(lVar18 + 0x8040,&local_d8);
          }
        }
        else if (sVar22 == 0) goto LAB_017e2c68;
      }
      local_b8 = (long *)((ulong)local_b8 & 0xffffffffffffff00);
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar27 = uVar27 + 1;
  if (local_90[0] == (long *)0x0) goto LAB_017e19dc;
  goto LAB_017e1ea0;
LAB_017e2140:
  if ((local_b0[2] == 0) ||
     (lVar18 = *local_a0, lVar19 = local_a0[1], (**(code **)(*(long *)(local_b0[2] + -8) + 0x18))(),
     (ulong)(lVar19 - lVar18 >> 3) <= uVar30)) goto LAB_017e1ffc;
  plVar14 = (long *)FUN_01f98924(&local_b0,uVar30);
  plVar14 = (long *)*plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))();
  }
  plVar5 = (long *)puVar10;
  if (plVar14 != (long *)0x0) {
    plVar5 = plVar14 + 6;
  }
  local_110 = (undefined *)*plVar5;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (plVar14 != (long *)0x0) {
    plVar4 = plVar14 + 7;
  }
  local_108 = (char *)*plVar4;
  if (plVar14 == (long *)0x0) {
    local_100 = 0;
  }
  else {
    local_100 = plVar14[8];
    local_f8 = (long *)0x0;
    (**(code **)(*plVar14 + 0x18))();
  }
  local_f8 = plVar14;
  FUN_01810848(&local_d8,&local_b0,&local_110);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if ((char)local_d8 == '\0') goto LAB_017e2b50;
  local_110 = (undefined *)*plVar5;
  local_108 = (char *)*plVar4;
  if (plVar14 == (long *)0x0) {
    local_100 = 0;
  }
  else {
    local_100 = plVar14[8];
    local_f8 = (long *)0x0;
    (**(code **)(*plVar14 + 0x18))();
  }
  local_f8 = plVar14;
  FUN_00d996a8(&local_128,auStack_f0,&local_110);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  fVar31 = 0.0;
  local_140 = (undefined *)0x0;
  local_138 = (undefined *)0x0;
  local_130 = 0;
  if (local_120 != (int *)0x0) {
    fVar31 = 0.0;
    if (6 < *(ushort *)((long)local_120 - (long)*local_120)) {
      uVar20 = (ulong)((ushort *)((long)local_120 - (long)*local_120))[3];
      fVar31 = 0.0;
      if (uVar20 != 0) {
        puVar16 = (uint *)((long)local_120 + uVar20);
        puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
        local_110 = &DAT_03c5a90a;
        puVar16 = bsearch(&local_110,puVar16 + 1,(ulong)*puVar16,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar16 == (uint *)0x0) {
          fVar31 = 0.0;
        }
        else {
          fVar31 = 0.0;
          if (local_128 != (int *)0x0) {
            piVar2 = (int *)((long)puVar16 + (ulong)*puVar16);
            puVar21 = (ushort *)((long)piVar2 - (long)*piVar2);
            uVar6 = *puVar21;
            if (uVar6 < 7) {
              piVar24 = (int *)0x0;
            }
            else {
              piVar24 = (int *)0x0;
              if ((ulong)puVar21[3] != 0) {
                puVar16 = (uint *)((long)piVar2 + (ulong)puVar21[3]);
                piVar24 = (int *)((long)puVar16 + (ulong)*puVar16);
              }
            }
            if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
               (uVar20 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar20 == 0)) {
              uVar20 = 0;
            }
            else {
              uVar20 = (long)*(char *)((long)piVar24 + uVar20) & 0xffffffff;
            }
            if (*(long *)(PTR_DAT_047d5608 + uVar20 * 8) == 4) {
              if (uVar6 < 0xb) {
                uVar23 = 0;
LAB_017e23d4:
                fVar31 = 0.0;
              }
              else {
                uVar23 = 0;
                if ((ulong)puVar21[5] != 0) {
                  uVar23 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar21[5]);
                }
                if ((uVar6 < 0xf) || ((ulong)puVar21[7] == 0)) goto LAB_017e23d4;
                fVar31 = (float)*(double *)((long)piVar2 + (ulong)puVar21[7]);
              }
              if ((uVar23 < *(ushort *)((long)local_128 - (long)*local_128)) &&
                 (uVar20 = (ulong)*(ushort *)(((long)local_128 - (long)*local_128) + (ulong)uVar23),
                 uVar20 != 0)) {
                fVar31 = *(float *)((long)local_128 + uVar20);
              }
            }
            else {
              fVar31 = 0.0;
              if (0xe < uVar6) {
                fVar31 = 0.0;
                if ((ulong)puVar21[7] != 0) {
                  fVar31 = (float)*(double *)((long)piVar2 + (ulong)puVar21[7]);
                }
              }
            }
          }
        }
      }
    }
  }
  local_130 = CONCAT44(local_130._4_4_,fVar31);
  local_110 = (undefined *)0x32970ea295b1483d;
  local_f8 = (long *)0x0;
  local_108 = "easeFunc";
  local_100 = 8;
  uStack_148 = FUN_00d27b5c(&local_128,&local_110);
  local_150 = puVar3;
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  FUN_01f98ab8(&local_110,&local_150);
  if (local_110 == (undefined *)0x7d4f5b9d44649fe6) {
    uVar17 = 8;
  }
  else {
    uVar17 = 0;
    if ((long)local_110 < 0x8b4a27120118128) {
      if ((long)local_110 < -0x53cde31d03fd8510) {
        if ((long)local_110 < -0x7a0137779f922ba1) {
          if (local_110 == (undefined *)0x819450d812bad43c) {
            uVar17 = 0x15;
          }
          else if (local_110 == (undefined *)0x83b7ba09e0ff3eaa) {
            uVar17 = 0x19;
          }
          else if (local_110 == (undefined *)0x85159fb1539625d3) {
            uVar17 = 0x1a;
          }
        }
        else if ((long)local_110 < -0x5b63e0358c222edd) {
          if (local_110 == (undefined *)0x85fec888606dd45f) {
            uVar17 = 0x14;
          }
          else if (local_110 == (undefined *)0x8f29e118140a8e94) {
            uVar17 = 4;
          }
        }
        else if (local_110 == (undefined *)0xa49c1fca73ddd123) {
          uVar17 = 0x12;
        }
        else if (local_110 == (undefined *)0xa7c84d4740f29c2b) {
          uVar17 = 7;
        }
      }
      else if ((long)local_110 < -0x2a706f75be464e48) {
        if (local_110 == (undefined *)0xac321ce2fc027af0) {
          uVar17 = 0x18;
        }
        else if (local_110 == (undefined *)0xb4a4ae7ef2d0bd5b) {
          uVar17 = 0x1c;
        }
        else if (local_110 == (undefined *)0xb4fe9f4003706878) {
          uVar17 = 0x1d;
        }
      }
      else if ((long)local_110 < -0x23b079c6825dd9e6) {
        if (local_110 == (undefined *)0xd58f908a41b9b1b8) {
          uVar17 = 0x13;
        }
        else if (local_110 == (undefined *)0xd60a2f5fea2189a2) {
          uVar17 = 3;
        }
      }
      else if (local_110 == (undefined *)0xdc4f86397da2261a) {
        uVar17 = 0xc;
      }
      else if (local_110 == (undefined *)0xf23f16cedca5f20f) {
        uVar17 = 9;
      }
    }
    else if ((long)local_110 < 0x3d41ca4303d638ce) {
      if ((long)local_110 < 0x26f096fae1bb1a7f) {
        if (local_110 == (undefined *)0x8b4a27120118128) {
          uVar17 = 6;
        }
        else if (local_110 == (undefined *)0x98e07e9e6cce4fa) {
          uVar17 = 0xd;
        }
        else if (local_110 == (undefined *)0x2391ce39a68c880e) {
          uVar17 = 0xf;
        }
      }
      else if ((long)local_110 < 0x314bb70b501c041d) {
        if (local_110 == (undefined *)0x26f096fae1bb1a7f) {
          uVar17 = 0xb;
        }
        else if (local_110 == (undefined *)0x2aca9607527f072e) {
          uVar17 = 1;
        }
      }
      else if (local_110 == (undefined *)0x314bb70b501c041d) {
        uVar17 = 2;
      }
      else if (local_110 == (undefined *)0x3a2423fda25bc4e7) {
        uVar17 = 5;
      }
    }
    else if ((long)local_110 < 0x4e7a8fea0dbbbdde) {
      if ((long)local_110 < 0x461ed198c5097d00) {
        if (local_110 == (undefined *)0x3d41ca4303d638ce) {
          uVar17 = 0x1b;
        }
        else if (local_110 == (undefined *)0x3e88ec803ce4fbfb) {
          uVar17 = 0x17;
        }
      }
      else if (local_110 == (undefined *)0x461ed198c5097d00) {
        uVar17 = 0x11;
      }
      else if (local_110 == (undefined *)0x4ce67701ae7fdf5f) {
        uVar17 = 0x1e;
      }
    }
    else if ((long)local_110 < 0x6c8e57bf04f4ad2f) {
      if (local_110 == (undefined *)0x4e7a8fea0dbbbdde) {
        uVar17 = 10;
      }
      else if (local_110 == (undefined *)0x6ae92efb07db561b) {
        uVar17 = 0xe;
      }
    }
    else if (local_110 == (undefined *)0x6c8e57bf04f4ad2f) {
      uVar17 = 0x10;
    }
    else if (local_110 == (undefined *)0x7595ac94dc816dbc) {
      uVar17 = 0x16;
    }
  }
  local_130 = CONCAT44(uVar17,(undefined4)local_130);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  local_f8 = (long *)0x0;
  local_110 = (undefined *)0x5e152411f5da3b3f;
  local_108 = "event";
  local_100 = 5;
  uStack_148 = FUN_00d27b5c(&local_128,&local_110);
  local_150 = PTR_DAT_047daf70 + 0x10;
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  FUN_01f98ab8(&local_110,&local_150);
  local_140 = local_110;
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  local_f8 = (long *)0x0;
  local_110 = (undefined *)0x128d3907bdb769c4;
  local_108 = "to";
  local_100 = 2;
  uStack_148 = FUN_00d27b5c(&local_128,&local_110);
  local_150 = PTR_DAT_047daf70 + 0x10;
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  FUN_01f98ab8(&local_110,&local_150);
  local_138 = local_110;
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  plVar5 = (long *)puVar10;
  if (local_68 != (long *)0x0) {
    plVar5 = local_68 + 6;
  }
  FUN_012a70a8(*(undefined8 *)(param_1 + 0x198),plVar5,&local_138,&local_140);
  FUN_02a27748(param_1,&local_68,1);
  plVar5 = local_d0;
  if ((char)local_d8 != '\0') {
    if (local_d0 != (long *)0x0) {
      plVar4 = local_d0 + 3;
      do {
        sVar22 = (short)*plVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar9) {
          *(short *)plVar4 = sVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar22 == 1) {
        piVar2 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar13 = *piVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_110 = (undefined *)*plVar5;
          FUN_00c44438(lVar18 + 0x8040,&local_110);
        }
      }
      else if (sVar22 == 0) goto LAB_017e2c68;
    }
    local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
  }
LAB_017e2b50:
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  uVar30 = uVar30 + 1;
  if (local_b0 == (undefined8 *)0x0) goto LAB_017e1ffc;
  goto LAB_017e20f8;
}


