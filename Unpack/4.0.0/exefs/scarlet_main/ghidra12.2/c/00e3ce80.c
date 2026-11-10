/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e3ce80; name: FUN_00e3ce80
 */


void FUN_00e3ce80(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  bool bVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  char *pcVar21;
  long *plVar22;
  long *plVar23;
  long *local_1b0;
  undefined8 uStack_1a8;
  long *local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  long *local_188;
  long local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 auStack_130 [96];
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long local_a0;
  long *plStack_98;
  long local_78;
  long local_70 [2];
  
  uVar18 = *(ulong *)(param_2 + 0x1b0);
  local_1a0 = (long *)*param_1;
  local_188 = (long *)((ulong)local_188 & 0xffffffff00000000);
  iVar8 = (int)uVar18;
  local_198 = (undefined8 *)&DAT_1fffffffffffffff;
  local_190 = 0;
  local_78 = param_2;
  FUN_00e3c1f8(&local_b0,(long)iVar8,&local_1a0);
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_d0 = *(long *)PTR_DAT_047d3e30;
  local_c8 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_c0 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  local_b8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x18))();
  }
  if (0 < iVar8) {
    uVar20 = 0;
    plVar1 = param_1 + 0x1c;
    do {
      lVar10 = local_78;
      puVar9 = (undefined8 *)FUN_00d4fa5c(local_78,uVar20 & 0xffffffff);
      local_1a0 = (long *)*puVar9;
      local_198 = (undefined8 *)puVar9[1];
      local_190 = puVar9[2];
      local_188 = (long *)puVar9[3];
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x18))();
      }
      lVar10 = FUN_00e3d7fc(lVar10,&local_1a0);
      pcVar21 = *(char **)(lVar10 + 0x10);
      plVar23 = *(long **)(lVar10 + 0x20);
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
      if (*local_c8 == '\0') {
        lVar10 = nn::os::GetCurrentThread();
        do {
          lVar16 = *plVar1;
          lVar17 = param_1[0x1d];
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar15) {
            *plVar1 = lVar16;
            param_1[0x1d] = lVar17;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          while ((lVar16 != 0 && (lVar10 != lVar16))) {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e));
            do {
              lVar16 = *plVar1;
              lVar17 = param_1[0x1d];
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar15) {
                *plVar1 = lVar16;
                param_1[0x1d] = lVar17;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          do {
            lVar3 = *plVar1;
            if (lVar3 != lVar16 || param_1[0x1d] != lVar17) {
              bVar15 = false;
              ClearExclusiveLocal();
              goto LAB_00e3cfe4;
            }
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar15) {
              *plVar1 = lVar16;
              *(long *)((long)param_1 + 0xe4) = lVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar15 = true;
LAB_00e3cfe4:
          lVar16 = lVar3;
          lVar17 = param_1[0x1d];
        } while (!bVar15);
        for (plVar19 = (long *)param_1[7]; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
          if ((plVar19[10] != 0) && (uVar11 = FUN_00e3d990(plVar19 + 7,pcVar21), (uVar11 & 1) != 0))
          {
            local_d0 = plVar19[2];
            local_c8 = (char *)plVar19[3];
            local_c0 = plVar19[4];
            plVar19 = (long *)plVar19[5];
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 0x18))(plVar19);
            }
            if (local_b8 != (long *)0x0) {
              lVar10 = *local_b8;
              local_b8 = plVar19;
              (**(code **)(lVar10 + 0x20))();
              plVar19 = local_b8;
            }
            local_b8 = plVar19;
            uVar11 = (*(code *)*param_3)(param_3 + 4,&local_d0);
            if ((uVar11 & 1) != 0) {
              bVar15 = false;
              bVar6 = true;
              goto LAB_00e3d06c;
            }
            break;
          }
        }
        bVar6 = false;
        bVar15 = true;
LAB_00e3d06c:
        do {
          lVar10 = *plVar1;
          lVar16 = param_1[0x1d];
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar10;
            param_1[0x1d] = lVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          lVar17 = *plVar1;
          lVar3 = param_1[0x1d];
          if (lVar17 != lVar10 || lVar3 != lVar16) {
            bVar14 = false;
            ClearExclusiveLocal();
            goto LAB_00e3d09c;
          }
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar10;
            *(long *)((long)param_1 + 0xe4) = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar14 = true;
LAB_00e3d09c:
        if (!bVar14) {
          do {
            lVar10 = *plVar1;
            lVar16 = param_1[0x1d];
            if (lVar10 != lVar17 || lVar16 != lVar3) {
              bVar14 = false;
              ClearExclusiveLocal();
              goto joined_r0x00e3d56c;
            }
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *plVar1 = lVar17;
              *(long *)((long)param_1 + 0xe4) = lVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar14 = true;
joined_r0x00e3d56c:
          if (!bVar14) {
            do {
              lVar17 = *plVar1;
              lVar3 = param_1[0x1d];
              if (lVar17 != lVar10 || lVar3 != lVar16) {
                bVar14 = false;
                ClearExclusiveLocal();
                lVar10 = lVar17;
                lVar16 = lVar3;
                goto joined_r0x00e3d56c;
              }
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar14) {
                *plVar1 = lVar10;
                *(long *)((long)param_1 + 0xe4) = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar14 = true;
            lVar10 = lVar17;
            lVar16 = lVar3;
            goto joined_r0x00e3d56c;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e));
        if (bVar15) goto LAB_00e3d0ac;
      }
      else {
LAB_00e3d0ac:
        if (*pcVar21 == '\0') {
          plVar19 = (long *)FUN_00d44228();
          if (plVar19 != (long *)0x0) {
            (**(code **)(*plVar19 + 0x18))(plVar19);
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar12 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar12;
          FUN_00cf9884(&local_1b0,uVar12,pcVar21);
          plVar19 = local_1b0;
        }
        plVar22 = local_b0;
        plVar13 = (long *)local_b0[uVar20];
        local_b0[uVar20] = 0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))();
        }
        bVar6 = false;
        plVar22[uVar20] = (long)plVar19;
      }
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x20))();
      }
      if (bVar6) goto LAB_00e3d404;
      uVar20 = uVar20 + 1;
    } while (uVar20 != (uVar18 & 0xffffffff));
  }
  plVar1 = param_1 + 0x1c;
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[0x1d] == 0) {
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar15) {
      *plVar1 = lVar10;
      param_1[0x1d] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00e3d1fc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e));
  do {
    if (*plVar1 != 0 || param_1[0x1d] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e));
        while (*plVar1 == 0 && param_1[0x1d] == 0) {
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar15) {
            *plVar1 = lVar10;
            param_1[0x1d] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00e3d1fc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar15) {
      *plVar1 = lVar10;
      param_1[0x1d] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00e3d1fc:
  plVar23 = (long *)param_1[0x14];
  lVar10 = local_78;
  while (local_78 = lVar10, plVar23 != (long *)0x0) {
    if ((plVar23[4] == 0) || (*(short *)(plVar23[4] + 0x1a) == 0)) {
      plVar23 = (long *)*plVar23;
      FUN_00e3bec0(&local_1a0,param_1 + 0xe);
      plVar19 = local_1a0;
      local_1a0 = (long *)0x0;
      lVar10 = local_78;
      if (plVar19 != (long *)0x0) {
        if ((char)local_190 != '\0') {
          FUN_00e3c020(plVar19 + 4);
        }
        plVar22 = (long *)*local_198;
        uVar18 = (**(code **)(*plVar22 + 0xf8))(plVar22);
        if (((uVar18 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar22 + 0x18))(plVar22,plVar19,0xf0,0x10);
          lVar10 = local_78;
        }
        else {
          FUN_00c48fe8(plVar22,plVar19,0xf0,0x10);
          lVar10 = local_78;
        }
      }
    }
    else {
      plVar23 = (long *)*plVar23;
    }
  }
  local_1a0 = (long *)0x0;
  local_198 = (undefined8 *)0x0;
  FUN_00c43ef0(&local_1a0,lVar10 + 0x98);
  local_1b0 = (long *)0x0;
  uStack_1a8 = 0;
  lVar16 = 0;
  if (lVar10 != 0) {
    lVar16 = lVar10 + 0x28;
  }
  if (local_1a0[2] == lVar16) {
    FUN_00c953a8(&local_1b0,&local_1a0);
  }
  plVar23 = local_1a0;
  if (local_1a0 != (long *)0x0) {
    plVar19 = local_1a0 + 3;
    do {
      sVar4 = (short)*plVar19;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar15) {
        *(short *)plVar19 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_1a0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_70[0] = *plVar23;
        FUN_00c44438(lVar10 + 0x8040,local_70);
      }
    }
    else if (sVar4 == 0) goto LAB_00e3d4e8;
  }
  local_1a0 = (long *)0x0;
  local_198 = (undefined8 *)0x0;
  FUN_00e3c52c(&local_1a0,&local_1b0);
  FUN_00e3c378(&local_190,&local_b0);
  local_158 = local_d0;
  local_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_130);
    local_138 = param_3[3];
    local_148 = param_3[1];
    local_150 = *param_3;
    uStack_140 = param_3[2];
  }
  FUN_00e3c8fc(param_1 + 0xe,&local_78,&local_1a0);
  FUN_00e3c020(&local_1a0);
  plVar23 = local_1b0;
  if (local_1b0 != (long *)0x0) {
    plVar19 = local_1b0 + 3;
    do {
      sVar4 = (short)*plVar19;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar15) {
        *(short *)plVar19 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_1b0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_70[0] = *plVar23;
        FUN_00c44438(lVar10 + 0x8040,local_70);
      }
    }
    else if (sVar4 == 0) {
LAB_00e3d4e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  do {
    lVar10 = *plVar1;
    lVar16 = param_1[0x1d];
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar15) {
      *plVar1 = lVar10;
      param_1[0x1d] = lVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar17 = *plVar1;
    lVar3 = param_1[0x1d];
    if (lVar17 != lVar10 || lVar3 != lVar16) {
      bVar15 = false;
      ClearExclusiveLocal();
      goto LAB_00e3d3f4;
    }
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar15) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0xe4) = lVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar15 = true;
LAB_00e3d3f4:
  if (!bVar15) {
    do {
      lVar10 = *plVar1;
      lVar16 = param_1[0x1d];
      if (lVar10 != lVar17 || lVar16 != lVar3) {
        bVar15 = false;
        ClearExclusiveLocal();
        goto joined_r0x00e3d744;
      }
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar15) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0xe4) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar15 = true;
joined_r0x00e3d744:
    if (!bVar15) {
      do {
        lVar17 = *plVar1;
        lVar3 = param_1[0x1d];
        if (lVar17 != lVar10 || lVar3 != lVar16) {
          bVar15 = false;
          ClearExclusiveLocal();
          lVar10 = lVar17;
          lVar16 = lVar3;
          goto joined_r0x00e3d744;
        }
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar15) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0xe4) = lVar16;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar15 = true;
      lVar10 = lVar17;
      lVar16 = lVar3;
      goto joined_r0x00e3d744;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e));
LAB_00e3d404:
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar23 = local_a8;
    if (local_a8 == local_b0) {
      plVar23 = local_b0;
    }
    else {
      do {
        plVar23 = plVar23 + -1;
        if ((long *)*plVar23 != (long *)0x0) {
          (**(code **)(*(long *)*plVar23 + 0x20))();
        }
      } while (plVar1 != plVar23);
      plVar23 = local_b0;
    }
    local_a8 = plVar1;
    uVar18 = (**(code **)(*plStack_98 + 0xf8))(plStack_98);
    if (((uVar18 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plStack_98 + 0x18))(plStack_98,plVar23,local_a0 - (long)plVar23,8);
    }
    else {
      FUN_00c48fe8(plStack_98,plVar23,local_a0 - (long)plVar23,8);
    }
  }
  return;
}


