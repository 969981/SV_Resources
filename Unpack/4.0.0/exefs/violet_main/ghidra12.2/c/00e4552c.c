/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e4552c; name: FUN_00e4552c
 */


undefined8 FUN_00e4552c(long *param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  undefined8 *puVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  ulong local_118;
  long *local_108;
  long lStack_100;
  long local_f8;
  long *local_f0;
  long local_e8;
  long *local_e0;
  long local_d8;
  long *local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  long local_98;
  undefined8 local_90;
  long *local_88 [2];
  long *local_78;
  long *local_70 [2];
  
  switch((int)param_1[0x21]) {
  case 0:
    memset(&local_108,0,0x90);
    FUN_00e4a310(&local_108);
    local_108 = (long *)param_1[2];
    lStack_100 = param_1[3];
    local_f8 = param_1[4];
    plVar23 = (long *)param_1[5];
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    if (local_f0 != (long *)0x0) {
      lVar12 = *local_f0;
      local_f0 = plVar23;
      (**(code **)(lVar12 + 0x20))();
      plVar23 = local_f0;
    }
    local_f0 = plVar23;
    local_e8 = param_1[6];
    local_e0 = (long *)param_1[7];
    local_d8 = param_1[8];
    plVar23 = (long *)param_1[9];
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    if (local_d0 != (long *)0x0) {
      lVar12 = *local_d0;
      local_d0 = plVar23;
      (**(code **)(lVar12 + 0x20))();
      plVar23 = local_d0;
    }
    local_d0 = plVar23;
    local_c8 = param_1[10];
    lStack_c0 = param_1[0xb];
    local_b8 = param_1[0xc];
    plVar23 = (long *)param_1[0xd];
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    if (local_b0 != (long *)0x0) {
      lVar12 = *local_b0;
      local_b0 = plVar23;
      (**(code **)(lVar12 + 0x20))();
      plVar23 = local_b0;
    }
    local_b0 = plVar23;
    local_a8 = param_1[0x16];
    FUN_00c43ef0(&local_a0,param_1);
    local_90 = CONCAT71(local_90._1_7_,(char)param_1[0x18]);
    FUN_00e499d4(local_88,param_1 + 0x19);
    plVar23 = (long *)param_1[0x16];
    lVar12 = (**(code **)(*plVar23 + 0x10))(plVar23,0x20,8);
    if (lVar12 == 0) {
      plVar23 = (long *)0x0;
      lVar27 = 0;
      lVar26 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00e46628;
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar23;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      FUN_00e4e5a0(lVar12,&local_108);
      lVar26 = 8;
      lVar27 = 0x20;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    }
    lVar13 = param_1[0x22];
    param_1[0x22] = lVar12;
    if (lVar13 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar6 = *(int *)(lVar12 + 0x12c8);
      iVar11 = iVar6 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (*(int *)(lVar12 + 0x12cc) <= iVar6) {
        *(int *)(lVar12 + 0x12cc) = iVar11;
      }
      FUN_01449c9c(lVar13);
      plVar16 = (long *)param_1[0x23];
      lVar12 = param_1[0x24];
      lVar24 = param_1[0x25];
      uVar14 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar14 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,lVar12,lVar24);
      }
      else {
        FUN_00c48fe8(plVar16,lVar13,lVar12,lVar24);
      }
      lVar12 = FUN_00c4e600();
      iVar11 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (iVar11 == 0) {
        plVar16 = (long *)FUN_00c4e600();
        if (plVar16[600] != 0) {
          local_78 = plVar16 + plVar16[600] * 3;
          local_70[0] = plVar16;
          FUN_00c4ea30(local_70,&local_78);
          plVar25 = (long *)*plVar16;
          plVar4 = plVar16;
          if (plVar16[600] != 0) {
            plVar4 = plVar16 + plVar16[600] * 3;
          }
          if (plVar4 == plVar16) {
            local_118 = 0;
            uVar14 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar16 + 0xd0))();
            if ((long *)*plVar16 != plVar25) {
              (**(code **)(*plVar25 + 0x100))(plVar25,plVar16,plVar16);
              plVar25 = (long *)*plVar16;
            }
            plVar2 = plVar16 + 3;
            if (plVar4 == plVar2) {
              local_118 = 0;
              uVar14 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar10 = (long *)*plVar2 != plVar25;
              if (bVar10) {
                (**(code **)(*plVar25 + 0x100))(plVar25,plVar16,plVar16 + 3);
                plVar25 = (long *)plVar16[3];
              }
              local_118 = (ulong)bVar10;
              plVar2 = plVar16 + 6;
              if (plVar4 == plVar2) {
                uVar14 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar25) {
                  (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_118 * 3,plVar16 + 6);
                  plVar25 = (long *)plVar16[6];
                  local_118 = 2;
                }
                plVar2 = plVar16 + 9;
                if (plVar4 == plVar2) {
                  uVar14 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar25) {
                    (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_118 * 3,plVar16 + 9);
                    plVar25 = (long *)plVar16[9];
                    local_118 = 3;
                  }
                  plVar2 = plVar16 + 0xc;
                  if (plVar4 == plVar2) {
                    uVar14 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar25) {
                      (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_118 * 3,plVar16 + 0xc)
                      ;
                      plVar25 = (long *)plVar16[0xc];
                      local_118 = 4;
                    }
                    plVar2 = plVar16 + 0xf;
                    if (plVar4 == plVar2) {
                      uVar14 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar25) {
                        (**(code **)(*plVar25 + 0x100))
                                  (plVar25,plVar16 + local_118 * 3,plVar16 + 0xf);
                        plVar25 = (long *)plVar16[0xf];
                        local_118 = 5;
                      }
                      uVar14 = 6;
                      for (plVar2 = plVar16 + 0x12; plVar4 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar25) {
                          (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_118 * 3,plVar2);
                          plVar25 = (long *)*plVar2;
                          local_118 = uVar14;
                        }
                        uVar14 = uVar14 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_118 * 3,plVar16 + uVar14 * 3);
          plVar16[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
    }
    plVar16 = local_88[0];
    param_1[0x25] = lVar26;
    param_1[0x23] = (long)plVar23;
    param_1[0x24] = lVar27;
    *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
    if (local_88[0] != (long *)0x0) {
      plVar23 = local_88[0] + 3;
      do {
        sVar5 = (short)*plVar23;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *(short *)plVar23 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)local_88[0] + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_70[0] = (long *)*plVar16;
          FUN_00c44438(lVar12 + 0x8040,local_70);
        }
      }
      else if (sVar5 == 0) goto LAB_00e45db4;
    }
    puVar9 = (undefined8 *)CONCAT71(uStack_9f,local_a0);
    if (puVar9 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar9 + 3);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_70[0] = (long *)*puVar9;
          FUN_00c44438(lVar12 + 0x8040,local_70);
        }
      }
      else if (sVar5 == 0) {
LAB_00e45db4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
  case 1:
    goto switchD_00e45570_caseD_1;
  case 2:
    goto switchD_00e45570_caseD_2;
  case 3:
    memset(&local_108,0,0x88);
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_f8 = *(long *)PTR_DAT_047d3e30;
    local_f0 = *(long **)(PTR_DAT_047d3e30 + 8);
    local_e8 = *(long *)(PTR_DAT_047d3e30 + 0x10);
    local_e0 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x18))();
    }
    local_a0 = 0;
    local_90 = 0;
    local_88[0] = (long *)0x0;
    local_d8 = 0;
    local_d0 = (long *)0x0;
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    local_b0 = (long *)0x0;
    FUN_00c43ef0(&local_108,param_1);
    local_f8 = param_1[2];
    local_f0 = (long *)param_1[3];
    local_e8 = param_1[4];
    plVar23 = (long *)param_1[5];
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    if (local_e0 != (long *)0x0) {
      lVar12 = *local_e0;
      local_e0 = plVar23;
      (**(code **)(lVar12 + 0x20))();
      plVar23 = local_e0;
    }
    local_e0 = plVar23;
    FUN_00e4dbbc(&local_d8,param_1 + 0xe);
    FUN_00e4de20(&local_c8,param_1 + 0x10);
    FUN_00e4e084(&local_b8,param_1 + 0x12);
    local_a8 = param_1[0x16];
    local_a0 = (undefined1)param_1[0x18];
    local_98 = param_1[0x22];
    FUN_00e499d4(&local_90,param_1 + 0x19);
    plVar23 = (long *)param_1[0x16];
    lVar12 = (**(code **)(*plVar23 + 0x10))(plVar23,0x20,8);
    if (lVar12 == 0) {
      plVar23 = (long *)0x0;
      lVar27 = 0;
      lVar26 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00e46628;
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar23;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      FUN_00e4cae8(lVar12,&local_108);
      lVar26 = 8;
      lVar27 = 0x20;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    }
    lVar13 = param_1[0x26];
    param_1[0x26] = lVar12;
    if (lVar13 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar6 = *(int *)(lVar12 + 0x12c8);
      iVar11 = iVar6 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (*(int *)(lVar12 + 0x12cc) <= iVar6) {
        *(int *)(lVar12 + 0x12cc) = iVar11;
      }
      FUN_0144a064(lVar13);
      plVar16 = (long *)param_1[0x27];
      lVar12 = param_1[0x28];
      lVar24 = param_1[0x29];
      uVar14 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar14 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,lVar12,lVar24);
      }
      else {
        FUN_00c48fe8(plVar16,lVar13,lVar12,lVar24);
      }
      lVar12 = FUN_00c4e600();
      iVar11 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (iVar11 == 0) {
        plVar16 = (long *)FUN_00c4e600();
        if (plVar16[600] != 0) {
          local_78 = plVar16 + plVar16[600] * 3;
          local_70[0] = plVar16;
          FUN_00c4ea30(local_70,&local_78);
          plVar25 = (long *)*plVar16;
          plVar4 = plVar16;
          if (plVar16[600] != 0) {
            plVar4 = plVar16 + plVar16[600] * 3;
          }
          if (plVar4 == plVar16) {
            local_118 = 0;
            uVar14 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar16 + 0xd0))();
            if ((long *)*plVar16 != plVar25) {
              (**(code **)(*plVar25 + 0x100))(plVar25,plVar16,plVar16);
              plVar25 = (long *)*plVar16;
            }
            plVar2 = plVar16 + 3;
            if (plVar4 == plVar2) {
              local_118 = 0;
              uVar14 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar10 = (long *)*plVar2 != plVar25;
              if (bVar10) {
                (**(code **)(*plVar25 + 0x100))(plVar25,plVar16,plVar16 + 3);
                plVar25 = (long *)plVar16[3];
              }
              local_118 = (ulong)bVar10;
              plVar2 = plVar16 + 6;
              if (plVar4 == plVar2) {
                uVar14 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar25) {
                  (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_118 * 3,plVar16 + 6);
                  plVar25 = (long *)plVar16[6];
                  local_118 = 2;
                }
                plVar2 = plVar16 + 9;
                if (plVar4 == plVar2) {
                  uVar14 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar25) {
                    (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_118 * 3,plVar16 + 9);
                    plVar25 = (long *)plVar16[9];
                    local_118 = 3;
                  }
                  plVar2 = plVar16 + 0xc;
                  if (plVar4 == plVar2) {
                    uVar14 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar25) {
                      (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_118 * 3,plVar16 + 0xc)
                      ;
                      plVar25 = (long *)plVar16[0xc];
                      local_118 = 4;
                    }
                    plVar2 = plVar16 + 0xf;
                    if (plVar4 == plVar2) {
                      uVar14 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar25) {
                        (**(code **)(*plVar25 + 0x100))
                                  (plVar25,plVar16 + local_118 * 3,plVar16 + 0xf);
                        plVar25 = (long *)plVar16[0xf];
                        local_118 = 5;
                      }
                      uVar14 = 6;
                      for (plVar2 = plVar16 + 0x12; plVar4 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar25) {
                          (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_118 * 3,plVar2);
                          plVar25 = (long *)*plVar2;
                          local_118 = uVar14;
                        }
                        uVar14 = uVar14 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar25 + 0x100))(plVar25,plVar16 + local_118 * 3,plVar16 + uVar14 * 3);
          plVar16[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
    }
    param_1[0x27] = (long)plVar23;
    param_1[0x28] = lVar27;
    param_1[0x29] = lVar26;
    *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
    FUN_00e4d334(&local_108);
  case 4:
    uVar14 = FUN_014b511c(*(undefined8 *)param_1[0x26]);
    if ((uVar14 & 1) == 0) {
      return 0;
    }
    *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
  case 5:
    break;
  case 6:
    goto switchD_00e45570_caseD_6;
  default:
    return 1;
  }
  *(undefined4 *)(param_1 + 0x21) = 6;
  local_108 = param_1;
  if ((char)param_1[0x18] != '\0') {
    FUN_00e50ee0(param_1,&local_108);
    return 0;
  }
  FUN_00e4a074(param_1);
  FUN_00e4ab10(param_1);
  iVar11 = 7;
  goto LAB_00e45c20;
switchD_00e45570_caseD_1:
  uVar14 = FUN_014b6758(*(undefined8 *)param_1[0x22]);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
switchD_00e45570_caseD_2:
  lVar12 = FUN_00e4a498(param_1[0x22]);
  puVar15 = (uint *)(**(code **)(**(long **)(lVar12 + 8) + 0x70))();
  if (puVar15 == (uint *)0x0) {
LAB_00e45e2c:
    local_70[0] = (long *)&DAT_cbf29ce484222645;
  }
  else {
    piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
       (uVar14 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar14 == 0))
    goto LAB_00e45e2c;
    uVar20 = (ulong)*(uint *)((long)piVar3 + uVar14);
    piVar3 = (int *)((long)((long)piVar3 + uVar14) + uVar20);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
       (uVar21 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar21 == 0))
    goto LAB_00e45e2c;
    uVar22 = (ulong)*(uint *)((long)piVar3 + uVar21);
    bVar7 = *(byte *)((long)((long)piVar3 + uVar21) + uVar22 + 4);
    local_70[0] = (long *)&DAT_cbf29ce484222645;
    if (bVar7 != 0) {
      pbVar19 = (byte *)((long)puVar15 + uVar22 + uVar21 + uVar20 + uVar14 + (ulong)*puVar15 + 5);
      do {
        local_70[0] = (long *)(((ulong)local_70[0] ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar7 != 0);
    }
  }
  plVar23 = (long *)param_1[0x16];
  local_78 = (long *)param_1[0x17];
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar26 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar26 + 0x80)) {
LAB_00e46628:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = plVar23;
  *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
  lVar27 = (**(code **)(*plVar23 + 0x10))(plVar23,0x90,0x10);
  if (lVar27 == 0) {
    (**(code **)(*plVar23 + 0xe8))(plVar23);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  local_108 = (long *)param_1[0x15];
  if (local_108 != (long *)0x0) {
    lVar13 = local_108[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00e466cc;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar17;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_00e466ec;
  }
  FUN_00e4bc08(lVar27,local_70,&local_78,&local_108);
  if (local_108 != (long *)0x0) {
    lVar13 = local_108[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_108 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_00e46714;
  }
  *(undefined4 *)(lVar27 + 0x18) = 0x100090;
  *(long **)(lVar27 + 8) = plVar23;
  *(long *)(lVar27 + 0x10) = lVar27;
  *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
  lVar26 = *(long *)(lVar27 + 0x30);
  if (*(long *)(lVar26 + 0x10) == 0) {
LAB_00e466cc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar26 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar8 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar5 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar5 == 0) {
    uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
    *(undefined8 *)(lVar26 + 8) = uVar17;
    *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
  }
  else if (sVar5 == -1) {
LAB_00e466ec:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar23 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar23 != (long *)0x0) {
    lVar26 = plVar23[6];
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_00e46714:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x1f] = lVar27;
  puVar15 = (uint *)(**(code **)(**(long **)(lVar12 + 8) + 0x70))();
  if (puVar15 != (uint *)0x0) {
    piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
    if ((6 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (uVar14 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar14 != 0)) {
      puVar15 = (uint *)((long)piVar3 + uVar14);
      puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
      lVar12 = (ulong)*puVar15 << 2;
      if ((ulong)*puVar15 != 0) {
        do {
          puVar15 = puVar15 + 1;
          local_108 = (long *)((long)puVar15 + (ulong)*puVar15);
          FUN_00e4686c(param_1,&local_108);
          lVar12 = lVar12 + -4;
        } while (lVar12 != 0);
      }
    }
  }
  lVar12 = FUN_00e4a60c(param_1[0x22]);
  for (plVar23 = *(long **)(lVar12 + 0x30); plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
    puVar15 = (uint *)(**(code **)(**(long **)(plVar23[6] + 8) + 0x70))();
    if (puVar15 != (uint *)0x0) {
      piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
      if ((6 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar14 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar14 != 0)) {
        puVar15 = (uint *)((long)piVar3 + uVar14);
        puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
        lVar12 = (ulong)*puVar15 << 2;
        if ((ulong)*puVar15 != 0) {
          do {
            puVar15 = puVar15 + 1;
            local_108 = (long *)((long)puVar15 + (ulong)*puVar15);
            FUN_00e4686c(param_1,&local_108);
            lVar12 = lVar12 + -4;
          } while (lVar12 != 0);
        }
      }
    }
  }
  iVar11 = (int)param_1[0x21] + 1;
LAB_00e45c20:
  *(int *)(param_1 + 0x21) = iVar11;
switchD_00e45570_caseD_6:
  return 0;
}


