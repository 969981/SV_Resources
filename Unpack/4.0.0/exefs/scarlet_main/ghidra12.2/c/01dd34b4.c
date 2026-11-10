/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd34b4; name: FUN_01dd34b4
 */


void FUN_01dd34b4(long param_1,long param_2,int *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  undefined8 *local_110 [2];
  undefined8 *local_100 [2];
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  iVar7 = *param_3;
  if (*(int *)(param_2 + 4) == 0) {
    if (iVar7 == 0) {
      return;
    }
    FUN_01dd2988(param_1);
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    local_f0 = 0x7aee18080d2405b4;
    local_e8 = "PLAY_UI_BOX_MOVEMENT";
    local_e0 = 0x14;
    local_d8 = (long *)0x0;
    if (*(long *)(lVar11 + 0x48) == 0) {
      uVar8 = 0xffffffffffffffff;
    }
    else {
      uVar8 = FUN_00cf8198();
    }
    memset(&local_d0,0,0x80);
    pcVar9 = "PLAY_UI_BOX_MOVEMENT";
    plVar13 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
    pcVar10 = *(code **)(*plVar13 + 0xd0);
  }
  else {
    if (iVar7 < 0) {
      if (*(char *)(param_1 + 500) != '\0') {
        return;
      }
      if (*(int *)(param_2 + 4) == 6) {
        FUN_01dd29cc(&local_d0,param_1,3);
        puVar6 = local_d0;
        if (local_d0 != (undefined8 *)0x0) {
          if (*(short *)((long)local_d0 + 0x1a) != 0) {
            psVar1 = (short *)((long)local_d0 + 0x1a);
            sVar12 = *(short *)((long)local_d0 + 0x1a);
            do {
              sVar3 = *psVar1;
              if (sVar3 == sVar12) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar12 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_01dd36d0;
                bVar5 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_01dd36d0:
                bVar5 = false;
              }
              if (bVar5) {
                plVar13 = (long *)0x0;
                if (local_d0[2] != 0) {
                  plVar13 = (long *)(local_d0[2] + -0x28);
                }
                goto LAB_01dd3ac8;
              }
              sVar12 = sVar3;
            } while (sVar3 != 0);
          }
          plVar13 = (long *)0x0;
LAB_01dd3ac8:
          psVar1 = (short *)(local_d0 + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_d0 + 0x1c);
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
              local_f0 = *puVar6;
              FUN_00c44438(lVar11 + 0x8040,&local_f0);
            }
          }
          else if (sVar12 == 0) goto LAB_01dd3914;
          if (plVar13 != (long *)0x0) {
            FUN_014e974c(plVar13,param_1 + 0x17c,1,0);
            lVar11 = plVar13[6];
            psVar1 = (short *)(lVar11 + 0x1a);
            do {
              sVar12 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar12 == 1) {
              *(undefined8 *)(lVar11 + 0x10) = 0;
              (**(code **)(*plVar13 + 0x50))(plVar13);
            }
            else if (sVar12 == 0) goto LAB_01dd3b24;
          }
        }
      }
      else {
        FUN_01dd29cc(local_100,param_1,0);
        if (local_100[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_100[0] + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_100[0] + 0x1c);
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
              local_d0 = (undefined8 *)*local_100[0];
              FUN_00c44438(lVar11 + 0x8040,&local_d0);
            }
          }
          else if (sVar12 == 0) goto LAB_01dd3914;
        }
        local_d0 = (undefined8 *)CONCAT44(*(undefined4 *)(param_2 + 4),5);
        FUN_014e4eac(param_1,&local_d0);
      }
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar11 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar11;
      local_f0 = 0xab49936982f33827;
      local_e8 = "PLAY_UI_COMMON_SELECT";
      local_e0 = 0x15;
      local_d8 = (long *)0x0;
      if (*(long *)(lVar11 + 0x48) == 0) {
        uVar8 = 0xffffffffffffffff;
      }
      else {
        uVar8 = FUN_00cf8198();
      }
      pcVar9 = local_e8;
      memset(&local_d0,0,0x80);
      plVar13 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
      iVar7 = (**(code **)(*plVar13 + 0xd0))(plVar13,pcVar9,uVar8,1,&LAB_01080c70,lVar11,0,0,0);
      if (iVar7 != 0) {
        FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_f0,iVar7,uVar8,0,&local_d0,0);
        pcVar10 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = (undefined8 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar10)(auStack_b0);
        }
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      iVar7 = *param_3;
    }
    if (iVar7 < 1) {
      return;
    }
    if (*(char *)(param_1 + 500) != '\0') {
      return;
    }
    if (*(int *)(param_2 + 4) == 6) {
      FUN_01dd29cc(&local_d0,param_1,3);
      puVar6 = local_d0;
      if (local_d0 != (undefined8 *)0x0) {
        if (*(short *)((long)local_d0 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_d0 + 0x1a);
          sVar12 = *(short *)((long)local_d0 + 0x1a);
          do {
            sVar3 = *psVar1;
            if (sVar3 == sVar12) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_01dd3550;
              bVar5 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01dd3550:
              bVar5 = false;
            }
            if (bVar5) {
              plVar13 = (long *)0x0;
              if (local_d0[2] != 0) {
                plVar13 = (long *)(local_d0[2] + -0x28);
              }
              goto LAB_01dd3a58;
            }
            sVar12 = sVar3;
          } while (sVar3 != 0);
        }
        plVar13 = (long *)0x0;
LAB_01dd3a58:
        psVar1 = (short *)(local_d0 + 3);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          piVar2 = (int *)((long)local_d0 + 0x1c);
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
            local_f0 = *puVar6;
            FUN_00c44438(lVar11 + 0x8040,&local_f0);
          }
        }
        else if (sVar12 == 0) goto LAB_01dd3914;
        if (plVar13 != (long *)0x0) {
          FUN_014e974c(plVar13,param_1 + 0x184,1,0);
          lVar11 = plVar13[6];
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))(plVar13);
          }
          else if (sVar12 == 0) {
LAB_01dd3b24:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
    }
    else {
      FUN_01dd29cc(local_110,param_1,0);
      if (local_110[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_110[0] + 3);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          piVar2 = (int *)((long)local_110[0] + 0x1c);
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
            local_d0 = (undefined8 *)*local_110[0];
            FUN_00c44438(lVar11 + 0x8040,&local_d0);
          }
        }
        else if (sVar12 == 0) {
LAB_01dd3914:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      local_d0 = (undefined8 *)((ulong)*(uint *)(param_2 + 4) << 0x20);
      FUN_014e4eac(param_1,&local_d0);
    }
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    local_f0 = 0xab49936982f33827;
    local_e8 = "PLAY_UI_COMMON_SELECT";
    local_e0 = 0x15;
    local_d8 = (long *)0x0;
    if (*(long *)(lVar11 + 0x48) == 0) {
      uVar8 = 0xffffffffffffffff;
    }
    else {
      uVar8 = FUN_00cf8198();
    }
    pcVar9 = local_e8;
    memset(&local_d0,0,0x80);
    plVar13 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
    pcVar10 = *(code **)(*plVar13 + 0xd0);
  }
  iVar7 = (*pcVar10)(plVar13,pcVar9,uVar8,1,&LAB_01080c70,lVar11,0,0,0);
  if (iVar7 != 0) {
    FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_f0,iVar7,uVar8,0,&local_d0,0);
    pcVar10 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = (undefined8 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar10)(auStack_b0);
    }
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  return;
}


