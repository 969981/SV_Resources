/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e3b568; name: FUN_00e3b568
 */


void FUN_00e3b568(undefined8 *param_1,long param_2,undefined8 *param_3)

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
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  bool bVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  char *pcVar23;
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
    uVar19 = 0;
    plVar1 = param_1 + 0x1c;
    do {
      lVar10 = local_78;
      puVar9 = (undefined8 *)FUN_00d4fa5c(local_78,uVar19 & 0xffffffff);
      local_1a0 = (long *)*puVar9;
      local_198 = (undefined8 *)puVar9[1];
      local_190 = puVar9[2];
      local_188 = (long *)puVar9[3];
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x18))();
      }
      lVar10 = FUN_00e3d7fc(lVar10,&local_1a0);
      pcVar23 = *(char **)(lVar10 + 0x10);
      plVar22 = *(long **)(lVar10 + 0x20);
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x18))(plVar22);
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
              goto LAB_00e3b6c4;
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
LAB_00e3b6c4:
          lVar16 = lVar3;
          lVar17 = param_1[0x1d];
        } while (!bVar15);
        for (plVar20 = (long *)param_1[7]; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
          if ((plVar20[10] != 0) && (uVar13 = FUN_00e3d990(plVar20 + 7,pcVar23), (uVar13 & 1) != 0))
          {
            local_d0 = plVar20[2];
            local_c8 = (char *)plVar20[3];
            local_c0 = plVar20[4];
            plVar20 = (long *)plVar20[5];
            if (plVar20 != (long *)0x0) {
              (**(code **)(*plVar20 + 0x18))(plVar20);
            }
            if (local_b8 != (long *)0x0) {
              lVar10 = *local_b8;
              local_b8 = plVar20;
              (**(code **)(lVar10 + 0x20))();
              plVar20 = local_b8;
            }
            local_b8 = plVar20;
            uVar13 = (*(code *)*param_3)(param_3 + 4,&local_d0);
            if ((uVar13 & 1) != 0) {
              bVar15 = false;
              bVar6 = true;
              goto LAB_00e3b6e0;
            }
            break;
          }
        }
        bVar6 = false;
        bVar15 = true;
LAB_00e3b6e0:
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
            goto LAB_00e3b71c;
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
LAB_00e3b71c:
        if (!bVar14) {
          do {
            lVar10 = *plVar1;
            lVar16 = param_1[0x1d];
            if (lVar10 != lVar17 || lVar16 != lVar3) {
              bVar14 = false;
              ClearExclusiveLocal();
              goto joined_r0x00e3bc94;
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
joined_r0x00e3bc94:
          if (!bVar14) {
            do {
              lVar17 = *plVar1;
              lVar3 = param_1[0x1d];
              if (lVar17 != lVar10 || lVar3 != lVar16) {
                bVar14 = false;
                ClearExclusiveLocal();
                lVar10 = lVar17;
                lVar16 = lVar3;
                goto joined_r0x00e3bc94;
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
            goto joined_r0x00e3bc94;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e));
        if (bVar15) goto LAB_00e3b72c;
      }
      else {
LAB_00e3b72c:
        if (*pcVar23 == '\0') {
          plVar20 = (long *)FUN_00d44228();
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x18))(plVar20);
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar11 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar11;
          FUN_00cf9884(&local_1b0,uVar11,pcVar23);
          plVar20 = local_1b0;
        }
        plVar21 = local_b0;
        plVar12 = (long *)local_b0[uVar19];
        local_b0[uVar19] = 0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        bVar6 = false;
        plVar21[uVar19] = (long)plVar20;
      }
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x20))();
      }
      if (bVar6) goto LAB_00e3ba1c;
      uVar19 = uVar19 + 1;
    } while (uVar19 != (uVar18 & 0xffffffff));
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
    if (cVar5 == '\0') goto LAB_00e3b7f8;
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
          if (cVar5 == '\0') goto LAB_00e3b7f8;
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
LAB_00e3b7f8:
  plVar22 = (long *)param_1[0x14];
  lVar10 = local_78;
  while (local_78 = lVar10, plVar22 != (long *)0x0) {
    if ((plVar22[4] == 0) || (*(short *)(plVar22[4] + 0x1a) == 0)) {
      plVar22 = (long *)*plVar22;
      FUN_00e3bec0(&local_1a0,param_1 + 0xe);
      plVar20 = local_1a0;
      local_1a0 = (long *)0x0;
      lVar10 = local_78;
      if (plVar20 != (long *)0x0) {
        if ((char)local_190 != '\0') {
          FUN_00e3c020(plVar20 + 4);
        }
        plVar21 = (long *)*local_198;
        uVar18 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar18 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,plVar20,0xf0,0x10);
          lVar10 = local_78;
        }
        else {
          FUN_00c48fe8(plVar21,plVar20,0xf0,0x10);
          lVar10 = local_78;
        }
      }
    }
    else {
      plVar22 = (long *)*plVar22;
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
  plVar22 = local_1a0;
  if (local_1a0 != (long *)0x0) {
    plVar20 = local_1a0 + 3;
    do {
      sVar4 = (short)*plVar20;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar15) {
        *(short *)plVar20 = sVar4 + -1;
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
        local_70[0] = *plVar22;
        FUN_00c44438(lVar10 + 0x8040,local_70);
      }
    }
    else if (sVar4 == 0) goto LAB_00e3bb00;
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
  plVar22 = local_1b0;
  if (local_1b0 != (long *)0x0) {
    plVar20 = local_1b0 + 3;
    do {
      sVar4 = (short)*plVar20;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar15) {
        *(short *)plVar20 = sVar4 + -1;
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
        local_70[0] = *plVar22;
        FUN_00c44438(lVar10 + 0x8040,local_70);
      }
    }
    else if (sVar4 == 0) {
LAB_00e3bb00:
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
      goto LAB_00e3ba10;
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
LAB_00e3ba10:
  if (!bVar15) {
    do {
      lVar10 = *plVar1;
      lVar16 = param_1[0x1d];
      if (lVar10 != lVar17 || lVar16 != lVar3) {
        bVar15 = false;
        ClearExclusiveLocal();
        goto joined_r0x00e3be08;
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
joined_r0x00e3be08:
    if (!bVar15) {
      do {
        lVar17 = *plVar1;
        lVar3 = param_1[0x1d];
        if (lVar17 != lVar10 || lVar3 != lVar16) {
          bVar15 = false;
          ClearExclusiveLocal();
          lVar10 = lVar17;
          lVar16 = lVar3;
          goto joined_r0x00e3be08;
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
      goto joined_r0x00e3be08;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e));
LAB_00e3ba1c:
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar22 = local_a8;
    if (local_a8 == local_b0) {
      plVar22 = local_b0;
    }
    else {
      do {
        plVar22 = plVar22 + -1;
        if ((long *)*plVar22 != (long *)0x0) {
          (**(code **)(*(long *)*plVar22 + 0x20))();
        }
      } while (plVar1 != plVar22);
      plVar22 = local_b0;
    }
    local_a8 = plVar1;
    uVar18 = (**(code **)(*plStack_98 + 0xf8))(plStack_98);
    if (((uVar18 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plStack_98 + 0x18))(plStack_98,plVar22,local_a0 - (long)plVar22,8);
    }
    else {
      FUN_00c48fe8(plStack_98,plVar22,local_a0 - (long)plVar22,8);
    }
  }
  return;
}


