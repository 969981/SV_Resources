/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018a90b4; name: FUN_018a90b4
 */


void FUN_018a90b4(long param_1,long *param_2,byte param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puVar28;
  float fVar29;
  long *local_158;
  ulong local_150;
  long *local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_110;
  undefined8 uStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 *local_98 [2];
  undefined1 local_88;
  undefined8 *local_80;
  long *local_70 [2];
  
  memset(&local_100,0,0x90);
  FUN_00e4a310(&local_100);
  local_130 = (long *)0x0;
  local_128 = (long *)0x0;
  FUN_00c43ef0(&local_130,param_1 + 0x30);
  local_110 = (long *)0x0;
  uStack_108 = 0;
  lVar12 = 0;
  if (param_1 != 0) {
    lVar12 = param_1 + 0x28;
  }
  if (local_130[2] == lVar12) {
    FUN_013d84a8(&local_110,&local_130);
  }
  plVar11 = local_130;
  if (local_130 != (long *)0x0) {
    plVar20 = local_130 + 3;
    do {
      sVar4 = (short)*plVar20;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar9) {
        *(short *)plVar20 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_130 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_70[0] = (long *)*plVar11;
        FUN_00c44438(lVar12 + 0x8040,local_70);
      }
    }
    else if (sVar4 == 0) goto LAB_018a986c;
  }
  FUN_014b913c(local_98,&local_110);
  plVar11 = local_110;
  if (local_110 != (long *)0x0) {
    plVar20 = local_110 + 3;
    do {
      sVar4 = (short)*plVar20;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar9) {
        *(short *)plVar20 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_110 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_130 = (long *)*plVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_130);
      }
    }
    else if (sVar4 == 0) {
LAB_018a986c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  local_100 = *param_2;
  lStack_f8 = param_2[1];
  local_f0 = param_2[2];
  plVar11 = (long *)param_2[3];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if (local_e8 != (long *)0x0) {
    lVar12 = *local_e8;
    local_e8 = plVar11;
    (**(code **)(lVar12 + 0x20))();
    plVar11 = local_e8;
  }
  local_e8 = plVar11;
  local_e0 = *(undefined8 *)(param_1 + 0x48);
  uStack_d8 = *(undefined8 *)(param_1 + 0x50);
  local_d0 = *(undefined8 *)(param_1 + 0x58);
  plVar11 = *(long **)(param_1 + 0x60);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if (local_c8 != (long *)0x0) {
    lVar12 = *local_c8;
    local_c8 = plVar11;
    (**(code **)(lVar12 + 0x20))();
    plVar11 = local_c8;
  }
  local_c8 = plVar11;
  local_c0 = *(undefined8 *)(param_1 + 0x68);
  uStack_b8 = *(undefined8 *)(param_1 + 0x70);
  local_b0 = *(undefined8 *)(param_1 + 0x78);
  plVar11 = *(long **)(param_1 + 0x80);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if (local_a8 != (long *)0x0) {
    lVar12 = *local_a8;
    local_a8 = plVar11;
    (**(code **)(lVar12 + 0x20))();
    plVar11 = local_a8;
  }
  local_a8 = plVar11;
  plVar20 = *(long **)(param_1 + 8);
  local_88 = *(undefined1 *)(param_1 + 0xb8);
  local_a0 = plVar20;
  plVar11 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x48,8);
  puVar24 = PTR_DAT_047d3e30;
  puVar28 = PTR_DAT_047d3e28;
  if (plVar11 == (long *)0x0) {
    local_120 = 0;
    local_118 = 0;
    local_130 = (long *)0x0;
    local_128 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_018aa594;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar20;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    memset(plVar11,0,0x48);
    if (((*puVar28 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    *plVar11 = *(long *)puVar24;
    plVar11[1] = *(long *)(puVar24 + 8);
    plVar11[2] = *(long *)(puVar24 + 0x10);
    plVar13 = *(long **)(puVar24 + 0x18);
    plVar11[3] = (long)plVar13;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))();
    }
    *(undefined1 *)(plVar11 + 4) = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    local_120 = 0x48;
    local_118 = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    local_130 = plVar11;
    local_128 = plVar20;
  }
  plVar20 = *(long **)(param_1 + 8);
  lVar12 = (**(code **)(*plVar20 + 0x10))(plVar20,0x20,8);
  if (lVar12 == 0) {
    lVar14 = 0;
    lVar27 = 0;
    plVar20 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_018aa594:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar20;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    FUN_00e4e5a0(lVar12,&local_100);
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    lVar27 = 0x20;
    lVar14 = 8;
    plVar11 = local_130;
  }
  lVar23 = plVar11[5];
  plVar11[5] = lVar12;
  if (lVar23 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar6 = *(int *)(lVar12 + 0x12c8);
    iVar10 = iVar6 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar10;
    if (*(int *)(lVar12 + 0x12cc) <= iVar6) {
      *(int *)(lVar12 + 0x12cc) = iVar10;
    }
    FUN_01449c9c(lVar23);
    plVar13 = (long *)plVar11[6];
    lVar12 = plVar11[7];
    lVar25 = plVar11[8];
    uVar16 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar16 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar23,lVar12,lVar25);
    }
    else {
      FUN_00c48fe8(plVar13,lVar23,lVar12,lVar25);
    }
    lVar12 = FUN_00c4e600();
    iVar10 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_70[0] = plVar13 + plVar13[600] * 3;
        local_110 = plVar13;
        FUN_00c4ea30(&local_110,local_70);
        plVar15 = (long *)*plVar13;
        plVar19 = plVar13;
        if (plVar13[600] != 0) {
          plVar19 = plVar13 + plVar13[600] * 3;
        }
        if (plVar19 == plVar13) {
          local_150 = 0;
          uVar16 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar13,plVar13);
            plVar15 = (long *)*plVar13;
          }
          plVar3 = plVar13 + 3;
          if (plVar19 == plVar3) {
            local_150 = 0;
            uVar16 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar9 = (long *)*plVar3 != plVar15;
            if (bVar9) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar13,plVar13 + 3);
              plVar15 = (long *)plVar13[3];
            }
            local_150 = (ulong)bVar9;
            plVar3 = plVar13 + 6;
            if (plVar19 == plVar3) {
              uVar16 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_150 * 3,plVar13 + 6);
                plVar15 = (long *)plVar13[6];
                local_150 = 2;
              }
              plVar3 = plVar13 + 9;
              if (plVar19 == plVar3) {
                uVar16 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_150 * 3,plVar13 + 9);
                  plVar15 = (long *)plVar13[9];
                  local_150 = 3;
                }
                plVar3 = plVar13 + 0xc;
                if (plVar19 == plVar3) {
                  uVar16 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_150 * 3,plVar13 + 0xc);
                    plVar15 = (long *)plVar13[0xc];
                    local_150 = 4;
                  }
                  plVar3 = plVar13 + 0xf;
                  if (plVar19 == plVar3) {
                    uVar16 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_150 * 3,plVar13 + 0xf)
                      ;
                      plVar15 = (long *)plVar13[0xf];
                      local_150 = 5;
                    }
                    local_158 = plVar13 + 0x12;
                    uVar16 = 6;
                    if (plVar19 != local_158) {
                      do {
                        (**(code **)(*(long *)*local_158 + 0xd0))();
                        if ((long *)*local_158 != plVar15) {
                          (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_150 * 3,local_158)
                          ;
                          plVar15 = (long *)*local_158;
                          local_150 = uVar16;
                        }
                        local_158 = local_158 + 3;
                        uVar16 = uVar16 + 1;
                      } while (plVar19 != local_158);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_150 * 3,plVar13 + uVar16 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  plVar11[6] = (long)plVar20;
  plVar11[7] = lVar27;
  plVar11[8] = lVar14;
  *plVar11 = *param_2;
  plVar11[1] = param_2[1];
  plVar11[2] = param_2[2];
  plVar20 = (long *)param_2[3];
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  plVar13 = (long *)plVar11[3];
  plVar11[3] = (long)plVar20;
  puVar28 = PTR_DAT_047d3e30;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  *(byte *)(plVar11 + 4) = param_3 & 1;
  plVar11 = (long *)(param_1 + 0x1e0);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar11 == 0 && *(long *)(param_1 + 0x1e8) == 0) {
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar9) {
      *plVar11 = lVar12;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_018a93a0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1f0));
  do {
    if (*plVar11 != 0 || *(long *)(param_1 + 0x1e8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1f0));
        while (*plVar11 == 0 && *(long *)(param_1 + 0x1e8) == 0) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar9) {
            *plVar11 = lVar12;
            *(undefined8 *)(param_1 + 0x1e8) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_018a93a0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar9) {
      *plVar11 = lVar12;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_018a93a0:
  puVar5 = *(undefined8 **)(param_1 + 0x108);
  if (puVar5 < *(undefined8 **)(param_1 + 0x110)) {
    uVar21 = *(undefined8 *)(param_1 + 0x118);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 == 0) {
      *puVar5 = local_130;
      puVar5[2] = local_120;
      puVar5[3] = local_118;
      puVar5[1] = local_128;
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_018aa594;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar21;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar5 = local_130;
      puVar5[1] = local_128;
      puVar5[2] = local_120;
      puVar5[3] = local_118;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    local_130 = (long *)0x0;
    *(undefined8 **)(param_1 + 0x108) = puVar5 + 4;
  }
  else {
    FUN_018acb00(param_1 + 0x100,&local_130);
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  plVar20 = *(long **)(puVar28 + 0x18);
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  lVar12 = *param_2;
  lVar27 = param_2[1];
  lVar14 = param_2[2];
  plVar13 = (long *)param_2[3];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  puVar26 = (undefined *)*param_2;
  plVar20 = (long *)(param_1 + 0x170);
  puVar24 = *(undefined **)(param_1 + 0x178);
  if (puVar24 == (undefined *)0x0) {
LAB_018a94f4:
    plVar19 = (long *)(**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))
                                (*(long **)(param_1 + 0x1a8),0x60,8);
    if (plVar19 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1a8) + 0xe8))();
    }
    uVar21 = *(undefined8 *)(param_1 + 0x1a8);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar23 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar23 != 0) {
      if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_018aa594;
      *(undefined8 *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = uVar21;
      *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
    }
    plVar19[2] = *param_2;
    plVar19[3] = param_2[1];
    plVar19[4] = param_2[2];
    plVar15 = (long *)param_2[3];
    plVar19[5] = (long)plVar15;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))();
    }
    plVar19[6] = lVar12;
    plVar19[7] = lVar27;
    plVar19[8] = lVar14;
    plVar19[9] = (long)plVar13;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    plVar19[10] = 0;
    plVar19[0xb] = 0;
    if (lVar23 != 0) {
      *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
    }
    *plVar19 = 0;
    plVar19[1] = (long)puVar26;
    fVar29 = (float)(*(long *)(param_1 + 0x1c8) + 1);
    if ((puVar24 == (undefined *)0x0) || (*(float *)(param_1 + 0x1d0) * (float)puVar24 < fVar29)) {
      uVar16 = (ulong)(puVar24 < (undefined *)0x3 || ((ulong)puVar24 & (ulong)(puVar24 + -1)) != 0)
               | (long)puVar24 << 1;
      uVar22 = (ulong)(fVar29 / *(float *)(param_1 + 0x1d0));
      if (uVar22 <= uVar16) {
        uVar22 = uVar16;
      }
      FUN_018aa9a4(plVar20,uVar22);
      puVar24 = *(undefined **)(param_1 + 0x178);
      if (((ulong)puVar24 & (ulong)(puVar24 + -1)) == 0) {
        puVar28 = (undefined *)((ulong)(puVar24 + -1) & (ulong)puVar26);
      }
      else if (puVar26 < puVar24) {
        puVar28 = puVar26;
      }
      else {
        uVar16 = 0;
        if (puVar24 != (undefined *)0x0) {
          uVar16 = (ulong)puVar26 / (ulong)puVar24;
        }
        puVar28 = puVar26 + -(uVar16 * (long)puVar24);
      }
    }
    plVar15 = *(long **)(*plVar20 + (long)puVar28 * 8);
    if (plVar15 == (long *)0x0) {
      *plVar19 = *(long *)(param_1 + 0x1a0);
      *(long **)(param_1 + 0x1a0) = plVar19;
      *(long *)(*(long *)(param_1 + 0x170) + (long)puVar28 * 8) = param_1 + 0x1a0;
      if (*plVar19 != 0) {
        puVar28 = *(undefined **)(*plVar19 + 8);
        if (((ulong)puVar24 & (ulong)(puVar24 + -1)) == 0) {
          puVar28 = (undefined *)((ulong)puVar28 & (ulong)(puVar24 + -1));
        }
        else if (puVar24 <= puVar28) {
          uVar16 = 0;
          if (puVar24 != (undefined *)0x0) {
            uVar16 = (ulong)puVar28 / (ulong)puVar24;
          }
          puVar28 = puVar28 + -(uVar16 * (long)puVar24);
        }
        plVar15 = (long *)(*plVar20 + (long)puVar28 * 8);
        goto LAB_018a9690;
      }
    }
    else {
      *plVar19 = *plVar15;
LAB_018a9690:
      *plVar15 = (long)plVar19;
    }
    *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c8) + 1;
  }
  else {
    puVar18 = puVar24 + -1;
    if (((ulong)puVar24 & (ulong)puVar18) != 0) {
      puVar28 = puVar26;
      if (puVar24 <= puVar26) {
        uVar16 = 0;
        if (puVar24 != (undefined *)0x0) {
          uVar16 = (ulong)puVar26 / (ulong)puVar24;
        }
        puVar28 = puVar26 + -(uVar16 * (long)puVar24);
      }
      plVar19 = *(long **)(*plVar20 + (long)puVar28 * 8);
      if (plVar19 != (long *)0x0) {
        while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
          puVar18 = (undefined *)plVar19[1];
          if (puVar18 != puVar26) {
            if (puVar24 <= puVar18) {
              uVar16 = 0;
              if (puVar24 != (undefined *)0x0) {
                uVar16 = (ulong)puVar18 / (ulong)puVar24;
              }
              puVar18 = puVar18 + -(uVar16 * (long)puVar24);
            }
            if (puVar18 != puVar28) break;
          }
          if ((undefined *)plVar19[2] == puVar26) goto LAB_018a96a0;
        }
      }
      goto LAB_018a94f4;
    }
    puVar28 = (undefined *)((ulong)puVar18 & (ulong)puVar26);
    plVar19 = *(long **)(*plVar20 + (long)puVar28 * 8);
    if (plVar19 == (long *)0x0) goto LAB_018a94f4;
    do {
      plVar19 = (long *)*plVar19;
      if ((plVar19 == (long *)0x0) ||
         ((undefined *)plVar19[1] != puVar26 &&
          (undefined *)((ulong)plVar19[1] & (ulong)puVar18) != puVar28)) goto LAB_018a94f4;
    } while ((undefined *)plVar19[2] != puVar26);
  }
LAB_018a96a0:
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  do {
    lVar12 = *plVar11;
    lVar14 = *(long *)(param_1 + 0x1e8);
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar9) {
      *plVar11 = lVar12;
      *(long *)(param_1 + 0x1e8) = lVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar27 = *plVar11;
    lVar23 = *(long *)(param_1 + 0x1e8);
    if (lVar27 != lVar12 || lVar23 != lVar14) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_018a96e0;
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar9) {
      *plVar11 = 0;
      *(long *)(param_1 + 0x1e4) = lVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar9 = true;
LAB_018a96e0:
  if (!bVar9) {
    do {
      lVar12 = *plVar11;
      lVar14 = *(long *)(param_1 + 0x1e8);
      if (lVar12 != lVar27 || lVar14 != lVar23) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x018aa530;
      }
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar9) {
        *plVar11 = 0;
        *(long *)(param_1 + 0x1e4) = lVar23;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar9 = true;
joined_r0x018aa530:
    if (!bVar9) {
      do {
        lVar27 = *plVar11;
        lVar23 = *(long *)(param_1 + 0x1e8);
        if (lVar27 != lVar12 || lVar23 != lVar14) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar12 = lVar27;
          lVar14 = lVar23;
          goto joined_r0x018aa530;
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = 0;
          *(long *)(param_1 + 0x1e4) = lVar14;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar9 = true;
      lVar12 = lVar27;
      lVar14 = lVar23;
      goto joined_r0x018aa530;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1f0));
  plVar11 = local_130;
  local_130 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar6 = *(int *)(lVar12 + 0x12c8);
    iVar10 = iVar6 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar10;
    if (*(int *)(lVar12 + 0x12cc) <= iVar6) {
      *(int *)(lVar12 + 0x12cc) = iVar10;
    }
    lVar12 = plVar11[5];
    plVar11[5] = 0;
    if (lVar12 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar14 = FUN_00c4e600();
      iVar6 = *(int *)(lVar14 + 0x12c8);
      iVar10 = iVar6 + 1;
      *(int *)(lVar14 + 0x12c8) = iVar10;
      if (*(int *)(lVar14 + 0x12cc) <= iVar6) {
        *(int *)(lVar14 + 0x12cc) = iVar10;
      }
      FUN_01449c9c(lVar12);
      plVar20 = (long *)plVar11[6];
      lVar14 = plVar11[7];
      lVar27 = plVar11[8];
      uVar16 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar16 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar12,lVar14,lVar27);
      }
      else {
        FUN_00c48fe8(plVar20,lVar12,lVar14,lVar27);
      }
      lVar12 = FUN_00c4e600();
      iVar10 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar10;
      if (iVar10 == 0) {
        plVar20 = (long *)FUN_00c4e600();
        if (plVar20[600] != 0) {
          local_70[0] = plVar20 + plVar20[600] * 3;
          local_110 = plVar20;
          FUN_00c4ea30(&local_110,local_70);
          plVar19 = (long *)*plVar20;
          plVar13 = plVar20;
          if (plVar20[600] != 0) {
            plVar13 = plVar20 + plVar20[600] * 3;
          }
          if (plVar13 == plVar20) {
            uVar22 = 0;
            uVar16 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            if ((long *)*plVar20 != plVar19) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar20,plVar20);
              plVar19 = (long *)*plVar20;
            }
            plVar15 = plVar20 + 3;
            if (plVar13 == plVar15) {
              uVar22 = 0;
              uVar16 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              bVar9 = (long *)*plVar15 != plVar19;
              if (bVar9) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar20,plVar20 + 3);
                plVar19 = (long *)plVar20[3];
              }
              uVar22 = (ulong)bVar9;
              plVar15 = plVar20 + 6;
              if (plVar13 == plVar15) {
                uVar16 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar20 + uVar22 * 3,plVar20 + 6);
                  plVar19 = (long *)plVar20[6];
                  uVar22 = 2;
                }
                plVar15 = plVar20 + 9;
                if (plVar13 == plVar15) {
                  uVar16 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar20 + uVar22 * 3,plVar20 + 9);
                    plVar19 = (long *)plVar20[9];
                    uVar22 = 3;
                  }
                  plVar15 = plVar20 + 0xc;
                  if (plVar13 == plVar15) {
                    uVar16 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar20 + uVar22 * 3,plVar20 + 0xc);
                      plVar19 = (long *)plVar20[0xc];
                      uVar22 = 4;
                    }
                    plVar15 = plVar20 + 0xf;
                    if (plVar13 == plVar15) {
                      uVar16 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar15 + 0xd0))();
                      if ((long *)*plVar15 != plVar19) {
                        (**(code **)(*plVar19 + 0x100))(plVar19,plVar20 + uVar22 * 3,plVar20 + 0xf);
                        plVar19 = (long *)plVar20[0xf];
                        uVar22 = 5;
                      }
                      uVar16 = 6;
                      for (plVar15 = plVar20 + 0x12; plVar13 != plVar15; plVar15 = plVar15 + 3) {
                        (**(code **)(*(long *)*plVar15 + 0xd0))();
                        if ((long *)*plVar15 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))(plVar19,plVar20 + uVar22 * 3,plVar15);
                          plVar19 = (long *)*plVar15;
                          uVar22 = uVar16;
                        }
                        uVar16 = uVar16 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar19 + 0x100))(plVar19,plVar20 + uVar22 * 3,plVar20 + uVar16 * 3);
          plVar20[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
    }
    if ((long *)plVar11[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar11[3] + 0x20))();
    }
    uVar8 = local_118;
    uVar21 = local_120;
    plVar20 = local_128;
    uVar16 = (**(code **)(*local_128 + 0xf8))(local_128);
    if (((uVar16 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar11,uVar21,uVar8);
    }
    else {
      FUN_00c48fe8(plVar20,plVar11,uVar21,uVar8);
    }
    lVar12 = FUN_00c4e600();
    iVar10 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_70[0] = plVar11 + plVar11[600] * 3;
        local_110 = plVar11;
        FUN_00c4ea30(&local_110,local_70);
        plVar13 = (long *)*plVar11;
        plVar20 = plVar11;
        if (plVar11[600] != 0) {
          plVar20 = plVar11 + plVar11[600] * 3;
        }
        if (plVar20 == plVar11) {
          uVar22 = 0;
          uVar16 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar11,plVar11);
            plVar13 = (long *)*plVar11;
          }
          plVar19 = plVar11 + 3;
          if (plVar20 == plVar19) {
            uVar22 = 0;
            uVar16 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            bVar9 = (long *)*plVar19 != plVar13;
            if (bVar9) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar11,plVar11 + 3);
              plVar13 = (long *)plVar11[3];
            }
            uVar22 = (ulong)bVar9;
            plVar19 = plVar11 + 6;
            if (plVar20 == plVar19) {
              uVar16 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar22 * 3,plVar11 + 6);
                plVar13 = (long *)plVar11[6];
                uVar22 = 2;
              }
              plVar19 = plVar11 + 9;
              if (plVar20 == plVar19) {
                uVar16 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar22 * 3,plVar11 + 9);
                  plVar13 = (long *)plVar11[9];
                  uVar22 = 3;
                }
                plVar19 = plVar11 + 0xc;
                if (plVar20 == plVar19) {
                  uVar16 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar22 * 3,plVar11 + 0xc);
                    plVar13 = (long *)plVar11[0xc];
                    uVar22 = 4;
                  }
                  plVar19 = plVar11 + 0xf;
                  if (plVar20 == plVar19) {
                    uVar16 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar22 * 3,plVar11 + 0xf);
                      plVar13 = (long *)plVar11[0xf];
                      uVar22 = 5;
                    }
                    uVar16 = 6;
                    for (plVar19 = plVar11 + 0x12; plVar20 != plVar19; plVar19 = plVar19 + 3) {
                      (**(code **)(*(long *)*plVar19 + 0xd0))();
                      if ((long *)*plVar19 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar22 * 3,plVar19);
                        plVar13 = (long *)*plVar19;
                        uVar22 = uVar16;
                      }
                      uVar16 = uVar16 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar11 + uVar22 * 3,plVar11 + uVar16 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_130 = (long *)*local_80;
        FUN_00c44438(lVar12 + 0x8040,&local_130);
      }
    }
    else if (sVar4 == 0) goto LAB_018a986c;
  }
  if (local_98[0] == (undefined8 *)0x0) {
LAB_018a9708:
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    return;
  }
  psVar1 = (short *)(local_98[0] + 3);
  do {
    sVar4 = *psVar1;
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar4 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar4 == 1) {
    piVar2 = (int *)((long)local_98[0] + 0x1c);
    do {
      iVar10 = *piVar2;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar12 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar12;
      local_130 = (long *)*local_98[0];
      FUN_00c44438(lVar12 + 0x8040,&local_130);
    }
    goto LAB_018a9708;
  }
  if (sVar4 != 0) goto LAB_018a9708;
  goto LAB_018a986c;
}


