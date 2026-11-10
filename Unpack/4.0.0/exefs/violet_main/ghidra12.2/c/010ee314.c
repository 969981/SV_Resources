/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ee314; name: FUN_010ee314
 */


void FUN_010ee314(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  short *psVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  short sVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  uint *puVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong uVar21;
  byte *pbVar22;
  short sVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  uint *puVar28;
  uint *puVar29;
  undefined1 *puVar30;
  long *plVar31;
  long *plVar32;
  byte *pbVar33;
  undefined8 *puVar34;
  long *local_138;
  ulong local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 *local_100;
  byte *local_f8;
  long *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  byte *local_90;
  size_t local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  *param_1 = 0;
  lVar17 = *(long *)(param_2 + 0x80);
  if (lVar17 != 0) {
    if (*(short *)(lVar17 + 0x1a) != 0) {
      psVar3 = (short *)(lVar17 + 0x1a);
      sVar23 = *(short *)(lVar17 + 0x1a);
      do {
        sVar9 = *psVar3;
        if (sVar9 == sVar23) {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar11) {
            *psVar3 = sVar23 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 != '\0') goto LAB_010eee18;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_010eee18:
          bVar11 = false;
        }
        if (bVar11) {
          lVar17 = *(long *)(lVar17 + 0x10);
          if (lVar17 != 0) {
            plVar27 = (long *)(lVar17 + -0x28);
            FUN_029ef0c8(&local_100,plVar27,param_2);
            *param_1 = (long)local_100;
            lVar17 = *(long *)(lVar17 + 8);
            psVar3 = (short *)(lVar17 + 0x1a);
            do {
              sVar23 = *psVar3;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar11) {
                *psVar3 = sVar23 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (sVar23 == 1) {
              *(undefined8 *)(lVar17 + 0x10) = 0;
              (**(code **)(*plVar27 + 0x50))(plVar27);
            }
            else if (sVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar23 = sVar9;
      } while (sVar9 != 0);
    }
    if (*param_1 != 0) {
      return;
    }
  }
  plVar27 = *(long **)(param_2 + 0x60);
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar17 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar27;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
  plVar13 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x1b8,8);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*plVar27 + 0xe8))(plVar27);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar13 + 1,0,0x1b0);
  puVar1 = PTR_DAT_047d66f8;
  plVar13[2] = 0;
  *(undefined4 *)(plVar13 + 3) = 0;
  *plVar13 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar14 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    if (*(long *)(lVar14 + 0x80) != 0) {
      lVar18 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8);
    }
  }
  plVar13[1] = lVar18;
  plVar31 = plVar13 + 5;
  *(int *)plVar31 = 0;
  *plVar13 = (long)&PTR_LAB_0460acd0;
  plVar13[4] = (long)&PTR_LAB_0460ad08;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[10] = 0;
  plVar13[0xb] = 0;
  plVar13[0xc] = 0;
  plVar13[0xd] = 0;
  puVar1 = PTR_DAT_047e32b8 + 0x10;
  plVar13[6] = (long)puVar1;
  plVar13[7] = 0;
  plVar13[0x10] = 0;
  plVar13[0x11] = 0;
  plVar13[0x12] = 0;
  plVar13[0x13] = 0;
  plVar13[0xe] = (long)puVar1;
  plVar13[0xf] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  FUN_010ef748(plVar13 + 0x16);
  FUN_010ef748(plVar13 + 0x23);
  FUN_010efb64(plVar13 + 0x30);
  *(undefined4 *)(plVar13 + 3) = 0x801b8;
  plVar13[1] = (long)plVar27;
  plVar13[2] = (long)plVar13;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
  do {
    lVar17 = *plVar31;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar11) {
      *(int *)plVar31 = (int)lVar17 + 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((int)lVar17 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar27 = (long *)*param_1;
  *param_1 = 0;
  if (plVar27 != (long *)0x0) {
    plVar31 = plVar27 + 5;
    do {
      lVar17 = *plVar31;
      iVar12 = (int)lVar17 + -1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar11) {
        *(int *)plVar31 = iVar12;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar27 + 0x10))();
    }
    else if ((int)lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *param_1 = (long)plVar13;
  puVar15 = (uint *)(**(code **)(**(long **)(*(long *)(param_2 + 0xd0) + 8) + 0x70))();
  if (puVar15 != (uint *)0x0) {
    piVar4 = (int *)((long)puVar15 + (ulong)*puVar15);
    if ((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar19 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar19 != 0)) {
      uVar21 = (ulong)*(uint *)((long)piVar4 + uVar19);
      piVar4 = (int *)((long)((long)piVar4 + uVar19) + uVar21);
      if ((6 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
         (uVar24 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar24 != 0)) {
        uVar25 = (ulong)*(uint *)((long)piVar4 + uVar24);
        puVar29 = (uint *)((long)((long)piVar4 + uVar24) + uVar25);
        puVar28 = puVar29 + 1;
        uVar26 = (ulong)*puVar29;
        if (uVar26 != 0) {
          lVar17 = (long)puVar15 + uVar25 + uVar24 + uVar21 + uVar19 + (ulong)*puVar15 + 9;
          puVar15 = puVar28;
          do {
            puVar29 = puVar15 + 1;
            uVar7 = *puVar15;
            pbVar33 = (byte *)((long)puVar29 + (ulong)uVar7);
            local_f0 = (long *)strlen((char *)pbVar33);
            bVar8 = *pbVar33;
            local_100 = &DAT_cbf29ce484222645;
            if (bVar8 != 0) {
              local_100 = &DAT_cbf29ce484222645;
              pbVar20 = (byte *)(lVar17 + (ulong)uVar7);
              do {
                local_100 = (undefined1 *)(((ulong)local_100 ^ (ulong)bVar8) * 0x100000001b3);
                bVar8 = *pbVar20;
                pbVar20 = pbVar20 + 1;
              } while (bVar8 != 0);
            }
            local_e8 = (long *)0x0;
            local_f8 = pbVar33;
            FUN_010f06cc(plVar13 + 0x30,&local_100);
            if (local_e8 != (long *)0x0) {
              (**(code **)(*local_e8 + 0x20))();
            }
            lVar17 = lVar17 + 4;
            puVar15 = puVar29;
          } while (puVar29 != puVar28 + uVar26);
        }
      }
    }
  }
  if (*(long *)(param_2 + 0x98) == 0) {
    plVar27 = (long *)FUN_00da5204();
  }
  else {
    plVar27 = (long *)(*(long *)(param_2 + 0x98) + 0x40);
  }
  puVar34 = (undefined8 *)PTR_PTR_047d4508;
  puVar5 = (undefined8 *)PTR_PTR_047d4508;
  if (*plVar27 != 0) {
    puVar5 = (undefined8 *)(*plVar27 + 0x38);
  }
  pcVar16 = strrchr((char *)*puVar5,0x2f);
  puVar1 = PTR_DAT_047d3e30;
  pbVar33 = PTR_DAT_047d3e28;
  if (pcVar16 == (char *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_100 = *(undefined1 **)puVar1;
    local_f8 = *(byte **)(puVar1 + 8);
    local_f0 = *(long **)(puVar1 + 0x10);
    plVar27 = *(long **)(puVar1 + 0x18);
    local_e8 = plVar27;
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 0x18))(plVar27);
    }
  }
  else {
    pbVar20 = (byte *)(pcVar16 + 1);
    puVar30 = &DAT_cbf29ce484222645;
    local_f0 = (long *)strlen((char *)pbVar20);
    bVar8 = *pbVar20;
    if (bVar8 != 0) {
      pbVar22 = (byte *)(pcVar16 + 2);
      do {
        puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar22;
        pbVar22 = pbVar22 + 1;
      } while (bVar8 != 0);
    }
    plVar27 = (long *)0x0;
    local_e8 = (long *)0x0;
    local_100 = puVar30;
    local_f8 = pbVar20;
  }
  FUN_010efca0(&local_98,*(undefined8 *)(param_2 + 0x60),param_2 + 0x90);
  FUN_010eff38(param_2 + 0x270,&local_100,&local_98);
  puVar30 = local_98;
  local_98 = (undefined1 *)0x0;
  if (puVar30 != (undefined1 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar17 = FUN_00c4e600();
    iVar6 = *(int *)(lVar17 + 0x12c8);
    iVar12 = iVar6 + 1;
    *(int *)(lVar17 + 0x12c8) = iVar12;
    if (*(int *)(lVar17 + 0x12cc) <= iVar6) {
      *(int *)(lVar17 + 0x12cc) = iVar12;
    }
    FUN_00db239c(puVar30);
    uVar19 = (**(code **)(*(long *)local_90 + 0xf8))(local_90);
    if (((uVar19 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*(long *)local_90 + 0x18))(local_90,puVar30,local_88,local_80);
    }
    else {
      FUN_00c48fe8(local_90,puVar30,local_88,local_80);
    }
    lVar17 = FUN_00c4e600();
    iVar12 = *(int *)(lVar17 + 0x12c8) + -1;
    *(int *)(lVar17 + 0x12c8) = iVar12;
    puVar34 = (undefined8 *)PTR_PTR_047d4508;
    pbVar33 = PTR_DAT_047d3e28;
    if (iVar12 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_70[0] = plVar13 + plVar13[600] * 3;
        local_120 = plVar13;
        FUN_00c4ea30(&local_120,local_70);
        plVar32 = (long *)*plVar13;
        plVar31 = plVar13;
        if (plVar13[600] != 0) {
          plVar31 = plVar13 + plVar13[600] * 3;
        }
        if (plVar31 == plVar13) {
          local_130 = 0;
          uVar19 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar32) {
            (**(code **)(*plVar32 + 0x100))(plVar32,plVar13,plVar13);
            plVar32 = (long *)*plVar13;
          }
          plVar2 = plVar13 + 3;
          if (plVar31 == plVar2) {
            local_130 = 0;
            uVar19 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar11 = (long *)*plVar2 != plVar32;
            if (bVar11) {
              (**(code **)(*plVar32 + 0x100))(plVar32,plVar13,plVar13 + 3);
              plVar32 = (long *)plVar13[3];
            }
            local_130 = (ulong)bVar11;
            plVar2 = plVar13 + 6;
            if (plVar31 == plVar2) {
              uVar19 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar32) {
                (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + local_130 * 3,plVar13 + 6);
                plVar32 = (long *)plVar13[6];
                local_130 = 2;
              }
              plVar2 = plVar13 + 9;
              if (plVar31 == plVar2) {
                uVar19 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar32) {
                  (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + local_130 * 3,plVar13 + 9);
                  plVar32 = (long *)plVar13[9];
                  local_130 = 3;
                }
                plVar2 = plVar13 + 0xc;
                if (plVar31 == plVar2) {
                  uVar19 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar32) {
                    (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + local_130 * 3,plVar13 + 0xc);
                    plVar32 = (long *)plVar13[0xc];
                    local_130 = 4;
                  }
                  plVar2 = plVar13 + 0xf;
                  if (plVar31 == plVar2) {
                    uVar19 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar32) {
                      (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + local_130 * 3,plVar13 + 0xf)
                      ;
                      plVar32 = (long *)plVar13[0xf];
                      local_130 = 5;
                    }
                    local_138 = plVar13 + 0x12;
                    uVar19 = 6;
                    if (plVar31 != local_138) {
                      do {
                        (**(code **)(*(long *)*local_138 + 0xd0))();
                        if ((long *)*local_138 != plVar32) {
                          (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + local_130 * 3,local_138)
                          ;
                          plVar32 = (long *)*local_138;
                          local_130 = uVar19;
                        }
                        local_138 = local_138 + 3;
                        uVar19 = uVar19 + 1;
                      } while (plVar31 != local_138);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + local_130 * 3,plVar13 + uVar19 * 3);
        plVar13[600] = 0;
        pbVar33 = PTR_DAT_047d3e28;
        puVar34 = (undefined8 *)PTR_PTR_047d4508;
      }
      *(undefined4 *)(lVar17 + 0x12cc) = 0;
    }
  }
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x20))(plVar27);
  }
  FUN_010ef99c(*param_1 + 0xb0,param_2 + 0x270);
  local_f0 = *(long **)(param_2 + 0x60);
  local_e0 = 0;
  local_e8 = (long *)0x3ffffffffffffff;
  local_d8 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0x3f800000;
  local_100 = (undefined1 *)0x0;
  local_f8 = (byte *)0x0;
  local_c0 = 0x3ffffffffffffff;
  uStack_b8 = 0;
  plStack_c8 = local_f0;
  for (plVar27 = *(long **)(param_2 + 0x168); plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
    FUN_010ef358(&local_100,plVar27 + 2,plVar27 + 6);
  }
  lVar17 = *(long *)(*(long *)(param_2 + 0xd0) + 8);
  if (lVar17 == 0) {
    plVar27 = (long *)FUN_00da5204();
  }
  else {
    plVar27 = (long *)(lVar17 + 0x40);
  }
  if (*plVar27 != 0) {
    puVar34 = (undefined8 *)(*plVar27 + 0x38);
  }
  pcVar16 = strrchr((char *)*puVar34,0x2f);
  if (pcVar16 == (char *)0x0) {
    if (((*pbVar33 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_98 = *(undefined1 **)puVar1;
    local_90 = *(byte **)(puVar1 + 8);
    local_88 = *(size_t *)(puVar1 + 0x10);
    plVar27 = *(long **)(puVar1 + 0x18);
    local_80 = plVar27;
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 0x18))(plVar27);
    }
  }
  else {
    pbVar33 = (byte *)(pcVar16 + 1);
    puVar30 = &DAT_cbf29ce484222645;
    local_88 = strlen((char *)pbVar33);
    bVar8 = *pbVar33;
    if (bVar8 != 0) {
      pbVar20 = (byte *)(pcVar16 + 2);
      do {
        puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar20;
        pbVar20 = pbVar20 + 1;
      } while (bVar8 != 0);
    }
    plVar27 = (long *)0x0;
    local_80 = (long *)0x0;
    local_98 = puVar30;
    local_90 = pbVar33;
  }
  FUN_010efca0(&local_120,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0xd0));
  FUN_010eff38(&local_100,&local_98,&local_120);
  plVar13 = local_120;
  local_120 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar17 = FUN_00c4e600();
    iVar6 = *(int *)(lVar17 + 0x12c8);
    iVar12 = iVar6 + 1;
    *(int *)(lVar17 + 0x12c8) = iVar12;
    if (*(int *)(lVar17 + 0x12cc) <= iVar6) {
      *(int *)(lVar17 + 0x12cc) = iVar12;
    }
    FUN_00db239c(plVar13);
    uVar19 = (**(code **)(*local_118 + 0xf8))(local_118);
    if (((uVar19 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*local_118 + 0x18))(local_118,plVar13,uStack_110,local_108);
    }
    else {
      FUN_00c48fe8(local_118,plVar13,uStack_110,local_108);
    }
    lVar17 = FUN_00c4e600();
    iVar12 = *(int *)(lVar17 + 0x12c8) + -1;
    *(int *)(lVar17 + 0x12c8) = iVar12;
    if (iVar12 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_78 = plVar13 + plVar13[600] * 3;
        local_70[0] = plVar13;
        FUN_00c4ea30(local_70,&local_78);
        plVar32 = (long *)*plVar13;
        plVar31 = plVar13;
        if (plVar13[600] != 0) {
          plVar31 = plVar13 + plVar13[600] * 3;
        }
        if (plVar31 == plVar13) {
          uVar21 = 0;
          uVar19 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar32) {
            (**(code **)(*plVar32 + 0x100))(plVar32,plVar13,plVar13);
            plVar32 = (long *)*plVar13;
          }
          plVar2 = plVar13 + 3;
          if (plVar31 == plVar2) {
            uVar21 = 0;
            uVar19 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar11 = (long *)*plVar2 != plVar32;
            if (bVar11) {
              (**(code **)(*plVar32 + 0x100))(plVar32,plVar13,plVar13 + 3);
              plVar32 = (long *)plVar13[3];
            }
            uVar21 = (ulong)bVar11;
            plVar2 = plVar13 + 6;
            if (plVar31 == plVar2) {
              uVar19 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar32) {
                (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + uVar21 * 3,plVar13 + 6);
                plVar32 = (long *)plVar13[6];
                uVar21 = 2;
              }
              plVar2 = plVar13 + 9;
              if (plVar31 == plVar2) {
                uVar19 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar32) {
                  (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + uVar21 * 3,plVar13 + 9);
                  plVar32 = (long *)plVar13[9];
                  uVar21 = 3;
                }
                plVar2 = plVar13 + 0xc;
                if (plVar31 == plVar2) {
                  uVar19 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar32) {
                    (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + uVar21 * 3,plVar13 + 0xc);
                    plVar32 = (long *)plVar13[0xc];
                    uVar21 = 4;
                  }
                  plVar2 = plVar13 + 0xf;
                  if (plVar31 == plVar2) {
                    uVar19 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar32) {
                      (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + uVar21 * 3,plVar13 + 0xf);
                      plVar32 = (long *)plVar13[0xf];
                      uVar21 = 5;
                    }
                    uVar19 = 6;
                    for (local_128 = plVar13 + 0x12; plVar31 != local_128; local_128 = local_128 + 3
                        ) {
                      (**(code **)(*(long *)*local_128 + 0xd0))();
                      if ((long *)*local_128 != plVar32) {
                        (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + uVar21 * 3,local_128);
                        plVar32 = (long *)*local_128;
                        uVar21 = uVar19;
                      }
                      uVar19 = uVar19 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar32 + 0x100))(plVar32,plVar13 + uVar21 * 3,plVar13 + uVar19 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar17 + 0x12cc) = 0;
    }
  }
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x20))(plVar27);
  }
  lVar17 = *param_1;
  FUN_010ef99c(lVar17 + 0x118,&local_100);
  FUN_010ef684(lVar17 + 0x30,param_2 + 0x90);
  FUN_010ef684(lVar17 + 0x70,*(undefined8 *)(param_2 + 0xd0));
  FUN_010f0260(&local_100,local_d0);
  plVar27 = local_f0;
  puVar30 = local_100;
  local_100 = (undefined1 *)0x0;
  if (puVar30 != (undefined1 *)0x0) {
    lVar17 = (long)local_f8 << 3;
    uVar19 = (**(code **)(*local_f0 + 0xf8))(local_f0);
    if (((uVar19 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar27 + 0x18))(plVar27,puVar30,lVar17,8);
    }
    else {
      FUN_00c48fe8(plVar27,puVar30,lVar17,8);
    }
  }
  return;
}


