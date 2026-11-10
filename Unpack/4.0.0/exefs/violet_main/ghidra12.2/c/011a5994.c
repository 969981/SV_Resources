/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011a5994; name: FUN_011a5994
 */


void FUN_011a5994(undefined8 param_1,long *param_2,int *param_3)

{
  short *psVar1;
  undefined *puVar2;
  code *pcVar3;
  int *piVar4;
  long *plVar5;
  uint *puVar6;
  short sVar7;
  int iVar8;
  char cVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ushort *puVar17;
  code *pcVar18;
  long *plVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *plVar27;
  char *pcVar28;
  long *local_300;
  ulong local_2f8;
  undefined1 *local_2f0;
  code *local_2e8;
  undefined1 *local_2e0;
  code *local_2d8;
  undefined1 auStack_2d0 [96];
  long *local_270;
  undefined8 uStack_268;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  long *local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined1 *local_1c0;
  code *local_1b8;
  code *local_1b0;
  code *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  code *local_140;
  code *local_138;
  undefined1 *local_130;
  code *local_128;
  undefined1 auStack_120 [96];
  long *local_c0 [4];
  long *local_a0;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *aplStack_70 [2];
  
  plVar19 = *(long **)(*param_2 + 0x808);
  if (plVar19 == (long *)0x0) {
    return;
  }
  lVar22 = plVar19[0x13];
  if (*(long *)(lVar22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar22 + 0x1a);
  do {
    sVar7 = *psVar1;
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar7 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar7 == 0) {
    uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
    *(undefined8 *)(lVar22 + 8) = uVar15;
    *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
  }
  else if (sVar7 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  lVar23 = *param_2;
  local_140 = (code *)0x0;
  local_138 = (code *)0x0;
  FUN_00c43ef0(&local_140,lVar23 + 0x30);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  lVar22 = 0;
  if (lVar23 != 0) {
    lVar22 = lVar23 + 0x28;
  }
  if (*(long *)(local_140 + 0x10) == lVar22) {
    FUN_011d6250(&local_88,&local_140);
  }
  pcVar18 = local_140;
  if (local_140 != (code *)0x0) {
    pcVar3 = local_140 + 0x18;
    do {
      sVar7 = *(short *)pcVar3;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
      if (bVar11) {
        *(short *)pcVar3 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      pcVar3 = local_140 + 0x1c;
      do {
        iVar12 = *(int *)pcVar3;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar11) {
          *(int *)pcVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_1c0 = *(undefined1 **)pcVar18;
        FUN_00c44438(lVar22 + 0x8040,&local_1c0);
      }
    }
    else if (sVar7 == 0) goto LAB_011a5f5c;
  }
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
    local_140 = (code *)0x0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    local_140 = (code *)0x0;
    if (uVar16 != 0) {
      puVar6 = (uint *)((long)param_3 + uVar16);
      local_140 = (code *)((long)puVar6 + (ulong)*puVar6);
    }
  }
  FUN_00ea0a7c(&local_90,&local_140);
  FUN_011a6b30(local_c0,&local_90);
  plVar10 = local_90;
  puVar17 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar17 < 7) {
    uVar20 = 0;
LAB_011a5abc:
    uVar21 = 0;
  }
  else {
    if ((ulong)puVar17[3] == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)((long)param_3 + (ulong)puVar17[3]);
    }
    if ((*puVar17 < 9) || ((ulong)puVar17[4] == 0)) goto LAB_011a5abc;
    uVar21 = *(undefined4 *)((long)param_3 + (ulong)puVar17[4]);
  }
  plVar13 = (long *)PTR_DAT_047d8b70;
  if (local_90 != (long *)0x0) {
    plVar13 = local_90 + 6;
  }
  lVar22 = *plVar13;
  plVar13 = (long *)PTR_PTR_047d4508;
  if (local_90 != (long *)0x0) {
    plVar13 = local_90 + 7;
  }
  pcVar28 = (char *)*plVar13;
  if (local_90 == (long *)0x0) {
    lVar23 = 0;
  }
  else {
    lVar23 = local_90[8];
    (**(code **)(*local_90 + 0x18))(local_90);
  }
  local_140 = FUN_021e1c0c;
  local_138 = FUN_02b67558;
  local_130 = &LAB_02b6755c;
  local_128 = FUN_02b67560;
  local_1d8 = (long *)0x0;
  uStack_1d0 = 0;
  FUN_011a6c54(&local_1d8,&local_88);
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (code *)0x0;
  local_1a8 = (code *)0x0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1c8 = uVar21;
  uStack_1c4 = uVar20;
  FUN_011a680c(&local_1a0,&local_1d8);
  local_1c0 = &LAB_021e1c88;
  local_1b8 = FUN_021e24e8;
  local_190 = CONCAT44(uStack_1c4,local_1c8);
  local_270 = (long *)0x0;
  uStack_268 = 0;
  local_1b0 = FUN_021e2748;
  local_1a8 = FUN_021e2780;
  FUN_011a6c54(&local_270,&local_88);
  local_240 = 0;
  uStack_238 = 0;
  local_250 = (undefined1 *)0x0;
  local_248 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  FUN_011a680c(&local_240,&local_270);
  local_260 = &LAB_015aec50;
  local_258 = FUN_021e27b8;
  local_250 = &LAB_021e28c8;
  local_248 = FUN_021e28dc;
  local_2f0 = &LAB_02b67570;
  local_2e8 = FUN_02b67574;
  local_2e0 = &LAB_02b67578;
  local_2d8 = FUN_02b6757c;
  if (*pcVar28 != '\0') {
    plVar24 = (long *)plVar19[1];
    plVar13 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x280,0x10);
    if (plVar13 != (long *)0x0) {
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar24;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      puVar2 = PTR_DAT_047dd990 + 0x10;
      plVar13[2] = (long)pcVar28;
      plVar13[3] = lVar23;
      plVar13[4] = (long)plVar10;
      *plVar13 = (long)puVar2;
      plVar13[1] = lVar22;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar26 = plVar13 + 6;
      *plVar26 = 0;
      plVar13[8] = 0;
      plVar13[9] = 0;
      plVar13[7] = 0;
      *plVar13 = (long)&PTR_LAB_045a7268;
      plVar13[0x18] = 0;
      plVar13[0x19] = 0;
      plVar13[0x1a] = 0;
      plVar13[0x1b] = 0;
      plVar13[0x1c] = 0;
      plVar13[0x1d] = 0;
      puVar2 = PTR_DAT_047dd998 + 0x10;
      *(undefined2 *)(plVar13 + 0x1e) = 0;
      *(undefined1 *)((long)plVar13 + 0xf2) = 0;
      plVar13[0x40] = 0;
      plVar13[0x41] = 0;
      plVar13[0x42] = 0;
      plVar13[0x43] = 0;
      plVar13[0x16] = (long)puVar2;
      plVar13[0x17] = 0;
      plVar13[0x20] = 0;
      plVar13[0x21] = 0;
      plVar13[0x22] = 0;
      plVar13[0x23] = 0;
      plVar13[0x32] = 0;
      plVar13[0x33] = 0;
      plVar13[0x30] = 0;
      plVar13[0x31] = 0;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      pcVar18 = (code *)plVar13[7];
      if (pcVar18 != (code *)0x0) {
        plVar13[8] = 0;
        plVar13[9] = 0;
        *plVar26 = 0;
        plVar13[7] = 0;
        (*pcVar18)(plVar13 + 10);
      }
      if (local_128 != (code *)0x0) {
        (*local_128)(auStack_120,plVar13 + 10);
        pcVar18 = local_138;
        plVar13[9] = (long)local_128;
        *plVar26 = (long)local_140;
        plVar13[7] = (long)local_138;
        plVar13[8] = (long)local_130;
        if (local_138 != (code *)0x0) {
          local_130 = (undefined1 *)0x0;
          local_128 = (code *)0x0;
          local_140 = (code *)0x0;
          local_138 = (code *)0x0;
          (*pcVar18)(auStack_120);
        }
      }
      pcVar18 = (code *)plVar13[0x21];
      if (pcVar18 != (code *)0x0) {
        plVar13[0x22] = 0;
        plVar13[0x23] = 0;
        plVar13[0x20] = 0;
        plVar13[0x21] = 0;
        (*pcVar18)(plVar13 + 0x24);
      }
      if (local_1a8 != (code *)0x0) {
        (*local_1a8)(&local_1a0,plVar13 + 0x24);
        pcVar18 = local_1b8;
        plVar13[0x23] = (long)local_1a8;
        plVar13[0x20] = (long)local_1c0;
        plVar13[0x21] = (long)local_1b8;
        plVar13[0x22] = (long)local_1b0;
        if (local_1b8 != (code *)0x0) {
          local_1b0 = (code *)0x0;
          local_1a8 = (code *)0x0;
          local_1c0 = (undefined1 *)0x0;
          local_1b8 = (code *)0x0;
          (*pcVar18)(&local_1a0);
        }
      }
      pcVar18 = (code *)plVar13[0x31];
      if (pcVar18 != (code *)0x0) {
        plVar13[0x32] = 0;
        plVar13[0x33] = 0;
        plVar13[0x30] = 0;
        plVar13[0x31] = 0;
        (*pcVar18)(plVar13 + 0x34);
      }
      if (local_248 != (code *)0x0) {
        (*local_248)(&local_240,plVar13 + 0x34);
        pcVar18 = local_258;
        plVar13[0x33] = (long)local_248;
        plVar13[0x30] = (long)local_260;
        plVar13[0x31] = (long)local_258;
        plVar13[0x32] = (long)local_250;
        if (local_258 != (code *)0x0) {
          local_250 = (undefined1 *)0x0;
          local_248 = (code *)0x0;
          local_260 = (undefined1 *)0x0;
          local_258 = (code *)0x0;
          (*pcVar18)(&local_240);
        }
      }
      pcVar18 = (code *)plVar13[0x41];
      if (pcVar18 != (code *)0x0) {
        plVar13[0x42] = 0;
        plVar13[0x43] = 0;
        plVar13[0x40] = 0;
        plVar13[0x41] = 0;
        (*pcVar18)(plVar13 + 0x44);
      }
      if (local_2d8 != (code *)0x0) {
        (*local_2d8)(auStack_2d0,plVar13 + 0x44);
        pcVar18 = local_2e8;
        plVar13[0x43] = (long)local_2d8;
        plVar13[0x40] = (long)local_2f0;
        plVar13[0x41] = (long)local_2e8;
        plVar13[0x42] = (long)local_2e0;
        if (local_2e8 != (code *)0x0) {
          local_2e0 = (undefined1 *)0x0;
          local_2d8 = (code *)0x0;
          local_2f0 = (undefined1 *)0x0;
          local_2e8 = (code *)0x0;
          (*pcVar18)(auStack_2d0);
        }
      }
      puVar25 = (undefined8 *)plVar19[0x30];
      plVar19[0x30] = (long)plVar13;
      if (puVar25 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar22 = FUN_00c4e600();
        iVar8 = *(int *)(lVar22 + 0x12c8);
        iVar12 = iVar8 + 1;
        *(int *)(lVar22 + 0x12c8) = iVar12;
        if (*(int *)(lVar22 + 0x12cc) <= iVar8) {
          *(int *)(lVar22 + 0x12cc) = iVar12;
        }
        (**(code **)*puVar25)(puVar25);
        plVar13 = (long *)plVar19[0x31];
        lVar22 = plVar19[0x32];
        lVar23 = plVar19[0x33];
        uVar16 = (**(code **)(*plVar13 + 0xf8))(plVar13);
        if (((uVar16 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
          (**(code **)(*plVar13 + 0x18))(plVar13,puVar25,lVar22,lVar23);
        }
        else {
          FUN_00c48fe8(plVar13,puVar25,lVar22,lVar23);
        }
        lVar22 = FUN_00c4e600();
        iVar12 = *(int *)(lVar22 + 0x12c8) + -1;
        *(int *)(lVar22 + 0x12c8) = iVar12;
        if (iVar12 == 0) {
          plVar13 = (long *)FUN_00c4e600();
          if (plVar13[600] != 0) {
            local_78 = plVar13 + plVar13[600] * 3;
            aplStack_70[0] = plVar13;
            FUN_00c4ea30(aplStack_70,&local_78);
            plVar27 = (long *)*plVar13;
            plVar26 = plVar13;
            if (plVar13[600] != 0) {
              plVar26 = plVar13 + plVar13[600] * 3;
            }
            if (plVar26 == plVar13) {
              local_2f8 = 0;
              uVar16 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar27) {
                (**(code **)(*plVar27 + 0x100))(plVar27,plVar13,plVar13);
                plVar27 = (long *)*plVar13;
              }
              plVar5 = plVar13 + 3;
              if (plVar26 == plVar5) {
                local_2f8 = 0;
                uVar16 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar5 + 0xd0))();
                bVar11 = (long *)*plVar5 != plVar27;
                if (bVar11) {
                  (**(code **)(*plVar27 + 0x100))(plVar27,plVar13,plVar13 + 3);
                  plVar27 = (long *)plVar13[3];
                }
                local_2f8 = (ulong)bVar11;
                plVar5 = plVar13 + 6;
                if (plVar26 == plVar5) {
                  uVar16 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar5 + 0xd0))();
                  if ((long *)*plVar5 != plVar27) {
                    (**(code **)(*plVar27 + 0x100))(plVar27,plVar13 + local_2f8 * 3,plVar13 + 6);
                    plVar27 = (long *)plVar13[6];
                    local_2f8 = 2;
                  }
                  plVar5 = plVar13 + 9;
                  if (plVar26 == plVar5) {
                    uVar16 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar5 + 0xd0))();
                    if ((long *)*plVar5 != plVar27) {
                      (**(code **)(*plVar27 + 0x100))(plVar27,plVar13 + local_2f8 * 3,plVar13 + 9);
                      plVar27 = (long *)plVar13[9];
                      local_2f8 = 3;
                    }
                    plVar5 = plVar13 + 0xc;
                    if (plVar26 == plVar5) {
                      uVar16 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar5 + 0xd0))();
                      if ((long *)*plVar5 != plVar27) {
                        (**(code **)(*plVar27 + 0x100))
                                  (plVar27,plVar13 + local_2f8 * 3,plVar13 + 0xc);
                        plVar27 = (long *)plVar13[0xc];
                        local_2f8 = 4;
                      }
                      plVar5 = plVar13 + 0xf;
                      if (plVar26 == plVar5) {
                        uVar16 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar5 + 0xd0))();
                        if ((long *)*plVar5 != plVar27) {
                          (**(code **)(*plVar27 + 0x100))
                                    (plVar27,plVar13 + local_2f8 * 3,plVar13 + 0xf);
                          plVar27 = (long *)plVar13[0xf];
                          local_2f8 = 5;
                        }
                        uVar16 = 6;
                        for (local_300 = plVar13 + 0x12; plVar26 != local_300;
                            local_300 = local_300 + 3) {
                          (**(code **)(*(long *)*local_300 + 0xd0))();
                          if ((long *)*local_300 != plVar27) {
                            (**(code **)(*plVar27 + 0x100))
                                      (plVar27,plVar13 + local_2f8 * 3,local_300);
                            plVar27 = (long *)*local_300;
                            local_2f8 = uVar16;
                          }
                          uVar16 = uVar16 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar27 + 0x100))(plVar27,plVar13 + local_2f8 * 3,plVar13 + uVar16 * 3);
            plVar13[600] = 0;
          }
          *(undefined4 *)(lVar22 + 0x12cc) = 0;
        }
      }
      plVar19[0x31] = (long)plVar24;
      plVar19[0x32] = 0x280;
      plVar19[0x33] = 0x10;
    }
  }
  pcVar18 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar18)(auStack_2d0);
  }
  pcVar18 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    local_248 = (code *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar18)(&local_240);
  }
  plVar13 = local_270;
  if (local_270 != (long *)0x0) {
    plVar24 = local_270 + 3;
    do {
      sVar7 = (short)*plVar24;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *(short *)plVar24 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar4 = (int *)((long)local_270 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar11) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_2f0 = (undefined1 *)*plVar13;
        FUN_00c44438(lVar22 + 0x8040,&local_2f0);
      }
    }
    else if (sVar7 == 0) goto LAB_011a5f5c;
  }
  pcVar18 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (code *)0x0;
    local_1a8 = (code *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar18)(&local_1a0);
  }
  plVar13 = local_1d8;
  if (local_1d8 != (long *)0x0) {
    plVar24 = local_1d8 + 3;
    do {
      sVar7 = (short)*plVar24;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *(short *)plVar24 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar4 = (int *)((long)local_1d8 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar11) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_260 = (undefined1 *)*plVar13;
        FUN_00c44438(lVar22 + 0x8040,&local_260);
      }
    }
    else if (sVar7 == 0) goto LAB_011a5f5c;
  }
  pcVar18 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    local_140 = (code *)0x0;
    local_138 = (code *)0x0;
    (*pcVar18)(auStack_120);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_c0[0] != (long *)0x0) {
    (**(code **)(*local_c0[0] + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  puVar25 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar4 = (int *)((long)local_88 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar11) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_140 = (code *)*puVar25;
        FUN_00c44438(lVar22 + 0x8040,&local_140);
      }
    }
    else if (sVar7 == 0) {
LAB_011a5f5c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar22 = plVar19[0x13];
  psVar1 = (short *)(lVar22 + 0x1a);
  do {
    sVar7 = *psVar1;
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar7 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar7 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


