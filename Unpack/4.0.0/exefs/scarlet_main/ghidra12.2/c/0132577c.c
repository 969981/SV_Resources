/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0132577c; name: FUN_0132577c
 */


void FUN_0132577c(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  char *pcVar17;
  char *pcVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined1 *puVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  undefined1 *puVar27;
  ulong uVar28;
  long *plVar29;
  undefined1 *puVar30;
  undefined8 uVar31;
  long *plVar32;
  long *local_158;
  ulong local_150;
  long local_140;
  long *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long *local_120 [4];
  long *local_100;
  long *local_f0;
  byte *pbStack_e8;
  size_t local_e0;
  long *plStack_d8;
  long *local_70 [2];
  
  puVar9 = PTR_DAT_047d3e30;
  puVar8 = PTR_DAT_047d3e28;
  plVar29 = *(long **)(param_1 + 0x168);
  if (plVar29 == (long *)0x0) {
    return;
  }
LAB_013257c8:
  puVar13 = (uint *)(**(code **)(**(long **)(plVar29[6] + 8) + 0x70))();
  if (puVar13 != (uint *)0x0) {
    piVar3 = (int *)((long)puVar13 + (ulong)*puVar13);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
       (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar22 == 0))
    goto LAB_01325a00;
    uVar24 = (ulong)*(uint *)((long)piVar3 + uVar22);
    piVar3 = (int *)((long)((long)piVar3 + uVar22) + uVar24);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
       (uVar26 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar26 == 0))
    goto LAB_01325a00;
    uVar28 = (ulong)*(uint *)((long)piVar3 + uVar26);
    pcVar17 = (char *)((long)((long)piVar3 + uVar26) + uVar28 + 4);
    if (*pcVar17 == '\0') goto LAB_01325a00;
    pcVar18 = (char *)((long)puVar13 + uVar28 + uVar26 + uVar24 + uVar22 + (ulong)*puVar13 + 5);
    do {
      cVar6 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    } while (cVar6 != '\0');
    snprintf((char *)&local_f0,0x80,"%s/%s.trabb",*(char **)(param_1 + 0x48),pcVar17);
    FUN_00da52ec(local_120,&local_f0);
    plVar32 = (long *)PTR_PTR_047d4508;
    if (local_120[0] != (long *)0x0) {
      plVar32 = local_120[0] + 7;
    }
    pcVar17 = strrchr((char *)*plVar32,0x2f);
    if (pcVar17 == (char *)0x0) {
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar8);
      }
      puVar30 = *(undefined1 **)puVar9;
      plVar32 = *(long **)(puVar9 + 0x18);
      if (plVar32 != (long *)0x0) {
        (**(code **)(*plVar32 + 0x18))(plVar32);
      }
    }
    else {
      bVar7 = pcVar17[1];
      if (bVar7 == 0) {
        plVar32 = (long *)0x0;
        puVar30 = &DAT_cbf29ce484222645;
      }
      else {
        puVar30 = &DAT_cbf29ce484222645;
        pbVar20 = (byte *)(pcVar17 + 2);
        do {
          puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar7) * 0x100000001b3);
          plVar32 = (long *)0x0;
          bVar7 = *pbVar20;
          pbVar20 = pbVar20 + 1;
        } while (bVar7 != 0);
      }
    }
    puVar23 = *(undefined1 **)(param_1 + 0x278);
    if (puVar23 == (undefined1 *)0x0) {
LAB_01325920:
      plVar16 = (long *)0x0;
    }
    else {
      uVar22 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        puVar19 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar30);
      }
      else {
        puVar19 = puVar30;
        if (puVar23 <= puVar30) {
          uVar24 = 0;
          if (puVar23 != (undefined1 *)0x0) {
            uVar24 = (ulong)puVar30 / (ulong)puVar23;
          }
          puVar19 = puVar30 + -(uVar24 * (long)puVar23);
        }
      }
      plVar25 = *(long **)(*(long *)(param_1 + 0x270) + (long)puVar19 * 8);
      if ((plVar25 == (long *)0x0) || (plVar25 = (long *)*plVar25, plVar25 == (long *)0x0))
      goto LAB_01325920;
      if (uVar22 < 2) {
        do {
          if ((undefined1 *)plVar25[1] == puVar30) {
            if ((undefined1 *)plVar25[2] == puVar30) goto LAB_01325c30;
          }
          else if ((undefined1 *)((ulong)plVar25[1] & (ulong)(puVar23 + -1)) != puVar19)
          goto LAB_01325920;
          plVar25 = (long *)*plVar25;
          plVar16 = (long *)0x0;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          puVar27 = (undefined1 *)plVar25[1];
          if (puVar27 == puVar30) {
            if ((undefined1 *)plVar25[2] == puVar30) goto LAB_01325c30;
          }
          else {
            if (puVar23 <= puVar27) {
              uVar22 = 0;
              if (puVar23 != (undefined1 *)0x0) {
                uVar22 = (ulong)puVar27 / (ulong)puVar23;
              }
              puVar27 = puVar27 + -(uVar22 * (long)puVar23);
            }
            if (puVar27 != puVar19) goto LAB_01325920;
          }
          plVar25 = (long *)*plVar25;
          plVar16 = (long *)0x0;
        } while (plVar25 != (long *)0x0);
      }
    }
    goto LAB_01325924;
  }
  goto LAB_01325a00;
LAB_01325c30:
  plVar16 = plVar25;
LAB_01325924:
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))(plVar32);
  }
  if (plVar16 != (long *)0x0) goto LAB_013259f0;
  uVar31 = *(undefined8 *)(param_1 + 0x60);
  FUN_013261b0(&local_f0,param_1,local_120);
  FUN_01060010(&local_140,uVar31,&local_f0);
  FUN_00db239c(&local_f0);
  lVar15 = local_140;
  if ((((*(long *)(local_140 + 8) == 0) || ((*(byte *)(*(long *)(local_140 + 8) + 0x1e8) & 1) == 0))
      && (uVar22 = FUN_00dc5c18(local_140,1,local_120,0,*(undefined8 *)(param_1 + 0x60)),
         (uVar22 & 1) != 0)) && (plVar32 = *(long **)(lVar15 + 0x20), plVar32 != (long *)0x0)) {
    lVar15 = plVar32[6];
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar31 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar31;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar15 = plVar32[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar32 + 0x50))(plVar32);
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar32 = (long *)PTR_PTR_047d4508;
  if (local_120[0] != (long *)0x0) {
    plVar32 = local_120[0] + 7;
  }
  pcVar17 = strrchr((char *)*plVar32,0x2f);
  if (pcVar17 == (char *)0x0) {
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar8);
    }
    local_f0 = *(long **)puVar9;
    pbStack_e8 = *(byte **)(puVar9 + 8);
    local_e0 = *(size_t *)(puVar9 + 0x10);
    plVar32 = *(long **)(puVar9 + 0x18);
    plStack_d8 = plVar32;
    if (plVar32 == (long *)0x0) goto LAB_013259d4;
    (**(code **)(*plVar32 + 0x18))(plVar32);
    FUN_010ef358(param_1 + 0x270,&local_f0,&local_140);
    (**(code **)(*plVar32 + 0x20))(plVar32);
  }
  else {
    pbVar20 = (byte *)(pcVar17 + 1);
    local_e0 = strlen((char *)pbVar20);
    bVar7 = *pbVar20;
    if (bVar7 == 0) {
      local_f0 = (long *)&DAT_cbf29ce484222645;
    }
    else {
      local_f0 = (long *)&DAT_cbf29ce484222645;
      pbVar21 = (byte *)(pcVar17 + 2);
      do {
        local_f0 = (long *)(((ulong)local_f0 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (bVar7 != 0);
    }
    plStack_d8 = (long *)0x0;
    pbStack_e8 = pbVar20;
LAB_013259d4:
    FUN_010ef358(param_1 + 0x270,&local_f0,&local_140);
  }
  lVar15 = local_140;
  local_140 = 0;
  if (lVar15 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar14 = FUN_00c4e600();
    iVar5 = *(int *)(lVar14 + 0x12c8);
    iVar12 = iVar5 + 1;
    *(int *)(lVar14 + 0x12c8) = iVar12;
    if (*(int *)(lVar14 + 0x12cc) <= iVar5) {
      *(int *)(lVar14 + 0x12cc) = iVar12;
    }
    FUN_00db239c(lVar15);
    uVar10 = local_128;
    uVar31 = uStack_130;
    plVar32 = local_138;
    uVar22 = (**(code **)(*local_138 + 0xf8))(local_138);
    if (((uVar22 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar32 + 0x18))(plVar32,lVar15,uVar31,uVar10);
    }
    else {
      FUN_00c48fe8(plVar32,lVar15,uVar31,uVar10);
    }
    lVar15 = FUN_00c4e600();
    iVar12 = *(int *)(lVar15 + 0x12c8) + -1;
    *(int *)(lVar15 + 0x12c8) = iVar12;
    if (iVar12 == 0) {
      plVar32 = (long *)FUN_00c4e600();
      if (plVar32[600] != 0) {
        local_70[0] = plVar32 + plVar32[600] * 3;
        local_f0 = plVar32;
        FUN_00c4ea30(&local_f0,local_70);
        plVar16 = (long *)*plVar32;
        plVar25 = plVar32;
        if (plVar32[600] != 0) {
          plVar25 = plVar32 + plVar32[600] * 3;
        }
        if (plVar25 == plVar32) {
          local_150 = 0;
          uVar22 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar32 + 0xd0))();
          if ((long *)*plVar32 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar32,plVar32);
            plVar16 = (long *)*plVar32;
          }
          plVar2 = plVar32 + 3;
          if (plVar25 == plVar2) {
            local_150 = 0;
            uVar22 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar11 = (long *)*plVar2 != plVar16;
            if (bVar11) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar32,plVar32 + 3);
              plVar16 = (long *)plVar32[3];
            }
            local_150 = (ulong)bVar11;
            plVar2 = plVar32 + 6;
            if (plVar25 == plVar2) {
              uVar22 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar32 + local_150 * 3,plVar32 + 6);
                plVar16 = (long *)plVar32[6];
                local_150 = 2;
              }
              plVar2 = plVar32 + 9;
              if (plVar25 == plVar2) {
                uVar22 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar32 + local_150 * 3,plVar32 + 9);
                  plVar16 = (long *)plVar32[9];
                  local_150 = 3;
                }
                plVar2 = plVar32 + 0xc;
                if (plVar25 == plVar2) {
                  uVar22 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar32 + local_150 * 3,plVar32 + 0xc);
                    plVar16 = (long *)plVar32[0xc];
                    local_150 = 4;
                  }
                  plVar2 = plVar32 + 0xf;
                  if (plVar25 == plVar2) {
                    uVar22 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar32 + local_150 * 3,plVar32 + 0xf)
                      ;
                      plVar16 = (long *)plVar32[0xf];
                      local_150 = 5;
                    }
                    local_158 = plVar32 + 0x12;
                    if (plVar25 == local_158) {
                      uVar22 = 6;
                    }
                    else {
                      uVar22 = 6;
                      do {
                        (**(code **)(*(long *)*local_158 + 0xd0))();
                        if ((long *)*local_158 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))(plVar16,plVar32 + local_150 * 3,local_158)
                          ;
                          plVar16 = (long *)*local_158;
                          local_150 = uVar22;
                        }
                        local_158 = local_158 + 3;
                        uVar22 = uVar22 + 1;
                      } while (plVar25 != local_158);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar32 + local_150 * 3,plVar32 + uVar22 * 3);
        plVar32[600] = 0;
      }
      *(undefined4 *)(lVar15 + 0x12cc) = 0;
    }
  }
LAB_013259f0:
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120[0] != (long *)0x0) {
    (**(code **)(*local_120[0] + 0x20))();
  }
LAB_01325a00:
  plVar29 = (long *)*plVar29;
  if (plVar29 == (long *)0x0) {
    return;
  }
  goto LAB_013257c8;
}


