/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0182c9c0; name: FUN_0182c9c0
 */


long * FUN_0182c9c0(long *param_1,int *param_2)

{
  short *psVar1;
  int *piVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  short sVar7;
  char cVar8;
  code *pcVar9;
  undefined1 *puVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  short sVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  long local_180;
  long lStack_178;
  long local_170;
  long *local_168;
  long *local_160;
  code *local_158;
  code *local_150;
  undefined1 *local_148;
  float local_140 [24];
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *local_b0;
  undefined4 local_a8;
  long *local_a0;
  code *local_98;
  code *local_90;
  undefined1 *local_88;
  long *local_80 [2];
  long *local_68;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_160 = (long *)0x0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_160 = (long *)0x0;
    if (uVar16 != 0) {
      puVar3 = (uint *)((long)param_2 + uVar16);
      local_160 = (long *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00cf95c4(&local_d0,&local_160);
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    local_160 = (long *)0x0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    local_160 = (long *)0x0;
    if (uVar16 != 0) {
      puVar3 = (uint *)((long)param_2 + uVar16);
      local_160 = (long *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00ea0a7c(&local_d8,&local_160);
  fVar26 = 0.0;
  if ((10 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar16 != 0)) {
    fVar26 = *(float *)((long)param_2 + uVar16);
  }
  if (((*PTR_DAT_047d92e0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d92e0), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d94d8,PTR_DAT_047d92e8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d92e0);
  }
  lVar17 = *(long *)PTR_DAT_047d92e8;
  *(long *)PTR_DAT_047d92f0 = lVar17;
  local_e0 = *(undefined8 *)(lVar17 + 0x28);
  lVar17 = FUN_0182d740(param_1,param_1[1],&local_e0);
  plVar5 = local_d8;
  plVar15 = (long *)PTR_DAT_047d8b70;
  plVar4 = (long *)PTR_PTR_047d4508;
  plVar13 = (long *)PTR_DAT_047d8b70;
  if (local_d8 != (long *)0x0) {
    plVar13 = local_d8 + 6;
  }
  lVar21 = *plVar13;
  plVar13 = (long *)PTR_PTR_047d4508;
  if (local_d8 != (long *)0x0) {
    plVar13 = local_d8 + 7;
  }
  lVar23 = *plVar13;
  if (local_d8 == (long *)0x0) {
    lVar24 = 0;
  }
  else {
    lVar24 = local_d8[8];
    (**(code **)(*local_d8 + 0x18))(local_d8);
  }
  *(long *)(lVar17 + 0xf0) = lVar21;
  *(long *)(lVar17 + 0xf8) = lVar23;
  *(long *)(lVar17 + 0x100) = lVar24;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar13 = *(long **)(lVar17 + 0x108);
  *(long **)(lVar17 + 0x108) = plVar5;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  plVar13 = local_d8;
  if (((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
      (uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar16 == 0)) ||
     (*(char *)((long)param_2 + uVar16) == '\0')) {
    if (local_d8 != (long *)0x0) {
      plVar4 = local_d8 + 7;
      plVar15 = local_d8 + 6;
    }
    local_180 = *plVar15;
    lStack_178 = *plVar4;
    if (local_d8 == (long *)0x0) {
      local_170 = 0;
    }
    else {
      local_170 = local_d8[8];
    }
    local_168 = (long *)0x0;
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x18))(local_d8);
    }
    plVar4 = local_d0;
    local_168 = plVar13;
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x18))(local_d0);
    }
    plVar13 = local_b0;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))(local_b0);
    }
    uVar14 = (**(code **)(*param_1 + 0x138))(param_1);
    FUN_01830470(&local_160,uVar14,&local_180);
    plVar15 = local_160;
    pcVar18 = (code *)local_160[0x11];
    if (pcVar18 != (code *)0x0) {
      local_160[0x12] = 0;
      local_160[0x13] = 0;
      local_160[0x10] = 0;
      local_160[0x11] = 0;
      (*pcVar18)(local_160 + 0x14);
    }
    *(undefined1 *)(plVar15 + 0x14) = 0;
    plVar15[0x10] = (long)&LAB_021b8348;
    plVar15[0x11] = (long)&LAB_02b5a4d4;
    pcVar18 = (code *)plVar15[0x21];
    plVar15[0x12] = (long)&LAB_02b5a4d8;
    plVar15[0x13] = (long)&LAB_02b5a4e4;
    if (pcVar18 != (code *)0x0) {
      plVar15[0x22] = 0;
      plVar15[0x23] = 0;
      plVar15[0x20] = 0;
      plVar15[0x21] = 0;
      (*pcVar18)(plVar15 + 0x24);
    }
    *(undefined1 *)(plVar15 + 0x24) = 0;
    plVar15[0x20] = (long)&LAB_021b89d4;
    plVar15[0x21] = (long)&LAB_02b5a4f0;
    plVar15[0x22] = (long)&LAB_02b5a4f4;
    plVar15[0x23] = (long)&LAB_02b5a500;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    pcVar18 = (code *)plVar15[0x31];
    if (pcVar18 != (code *)0x0) {
      plVar15[0x32] = 0;
      plVar15[0x33] = 0;
      plVar15[0x30] = 0;
      plVar15[0x31] = 0;
      (*pcVar18)(plVar15 + 0x34);
    }
    plVar15[0x38] = (long)plVar13;
    *(undefined4 *)(plVar15 + 0x39) = local_a8;
    plVar15[0x30] = (long)&LAB_021b8db4;
    plVar15[0x31] = (long)&LAB_02b5a50c;
    pcVar18 = (code *)plVar15[0x41];
    plVar15[0x34] = (long)plVar4;
    plVar15[0x35] = local_c8;
    plVar15[0x36] = lStack_c0;
    plVar15[0x37] = local_b8;
    plVar15[0x32] = (long)&LAB_02b5a55c;
    plVar15[0x33] = (long)&LAB_02b5a5cc;
    if (pcVar18 != (code *)0x0) {
      plVar15[0x43] = 0;
      plVar15[0x42] = 0;
      plVar15[0x41] = 0;
      plVar15[0x40] = 0;
      (*pcVar18)(plVar15 + 0x44);
    }
    pcVar18 = (code *)plVar15[0x51];
    if (pcVar18 != (code *)0x0) {
      plVar15[0x53] = 0;
      plVar15[0x52] = 0;
      plVar15[0x51] = 0;
      plVar15[0x50] = 0;
      (*pcVar18)(plVar15 + 0x54);
    }
    local_a0 = plVar15;
    local_98 = local_158;
    local_160 = (long *)0x0;
    local_90 = local_150;
    local_88 = local_148;
    FUN_00e767a8(param_1,&local_a0);
    plVar15 = local_a0;
    local_a0 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar17 = FUN_00c4e600();
      iVar6 = *(int *)(lVar17 + 0x12c8);
      iVar12 = iVar6 + 1;
      *(int *)(lVar17 + 0x12c8) = iVar12;
      if (*(int *)(lVar17 + 0x12cc) <= iVar6) {
        *(int *)(lVar17 + 0x12cc) = iVar12;
      }
      (**(code **)*plVar15)(plVar15);
      puVar10 = local_88;
      pcVar9 = local_90;
      pcVar18 = local_98;
      uVar16 = (**(code **)(*(long *)local_98 + 0xf8))(local_98);
      if (((uVar16 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
        (**(code **)(*(long *)pcVar18 + 0x18))(pcVar18,plVar15,pcVar9,puVar10);
      }
      else {
        FUN_00c48fe8(pcVar18,plVar15,pcVar9,puVar10);
      }
      lVar17 = FUN_00c4e600();
      iVar12 = *(int *)(lVar17 + 0x12c8) + -1;
      *(int *)(lVar17 + 0x12c8) = iVar12;
      if (iVar12 == 0) {
        plVar15 = (long *)FUN_00c4e600();
        if (plVar15[600] != 0) {
          local_80[0] = plVar15 + plVar15[600] * 3;
          local_68 = plVar15;
          FUN_00c4ea30(&local_68,local_80);
          plVar20 = (long *)*plVar15;
          plVar5 = plVar15;
          if (plVar15[600] != 0) {
            plVar5 = plVar15 + plVar15[600] * 3;
          }
          if (plVar5 == plVar15) {
            uVar25 = 0;
            uVar16 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            if ((long *)*plVar15 != plVar20) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar15,plVar15);
              plVar20 = (long *)*plVar15;
            }
            plVar22 = plVar15 + 3;
            if (plVar5 == plVar22) {
              uVar25 = 0;
              uVar16 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar22 + 0xd0))();
              bVar11 = (long *)*plVar22 != plVar20;
              if (bVar11) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar15,plVar15 + 3);
                plVar20 = (long *)plVar15[3];
              }
              uVar25 = (ulong)bVar11;
              plVar22 = plVar15 + 6;
              if (plVar5 == plVar22) {
                uVar16 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar22 + 0xd0))();
                if ((long *)*plVar22 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar15 + uVar25 * 3,plVar15 + 6);
                  plVar20 = (long *)plVar15[6];
                  uVar25 = 2;
                }
                plVar22 = plVar15 + 9;
                if (plVar5 == plVar22) {
                  uVar16 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar22 + 0xd0))();
                  if ((long *)*plVar22 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar15 + uVar25 * 3,plVar15 + 9);
                    plVar20 = (long *)plVar15[9];
                    uVar25 = 3;
                  }
                  plVar22 = plVar15 + 0xc;
                  if (plVar5 == plVar22) {
                    uVar16 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar22 + 0xd0))();
                    if ((long *)*plVar22 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar15 + uVar25 * 3,plVar15 + 0xc);
                      plVar20 = (long *)plVar15[0xc];
                      uVar25 = 4;
                    }
                    plVar22 = plVar15 + 0xf;
                    if (plVar5 == plVar22) {
                      uVar16 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar22 + 0xd0))();
                      if ((long *)*plVar22 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar15 + uVar25 * 3,plVar15 + 0xf);
                        plVar20 = (long *)plVar15[0xf];
                        uVar25 = 5;
                      }
                      uVar16 = 6;
                      for (plVar22 = plVar15 + 0x12; plVar5 != plVar22; plVar22 = plVar22 + 3) {
                        (**(code **)(*(long *)*plVar22 + 0xd0))();
                        if ((long *)*plVar22 != plVar20) {
                          (**(code **)(*plVar20 + 0x100))(plVar20,plVar15 + uVar25 * 3,plVar22);
                          plVar20 = (long *)*plVar22;
                          uVar25 = uVar16;
                        }
                        uVar16 = uVar16 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar20 + 0x100))(plVar20,plVar15 + uVar25 * 3,plVar15 + uVar16 * 3);
          plVar15[600] = 0;
        }
        *(undefined4 *)(lVar17 + 0x12cc) = 0;
      }
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (local_168 != (long *)0x0) {
      (**(code **)(*local_168 + 0x20))();
    }
    goto LAB_0182cce8;
  }
  FUN_0182d69c(&local_a0,lVar17);
  if (1.1920929e-07 < fVar26) {
    if ((local_a0 != (long *)0x0) && (*(short *)((long)local_a0 + 0x1a) != 0)) {
      psVar1 = (short *)((long)local_a0 + 0x1a);
      sVar19 = *(short *)((long)local_a0 + 0x1a);
LAB_0182d06c:
      sVar7 = *psVar1;
      if (sVar7 == sVar19) {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar19 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_0182d090;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0182d090:
        bVar11 = false;
      }
      if (!bVar11) goto code_r0x0182d098;
      lVar17 = local_a0[2];
      if (lVar17 != 0) {
        plVar13 = (long *)(lVar17 + -0x28);
        FUN_0182e890(plVar13,&local_d0);
        lVar17 = *(long *)(lVar17 + 8);
        psVar1 = (short *)(lVar17 + 0x1a);
        do {
          sVar19 = *psVar1;
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar19 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar19 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar19 == 0) goto LAB_0182d1a0;
        goto LAB_0182cb7c;
      }
    }
LAB_0182cb70:
    FUN_0182e890(0,&local_d0);
LAB_0182cb7c:
    if ((local_a0 == (long *)0x0) || (*(short *)((long)local_a0 + 0x1a) == 0)) {
      plVar13 = (long *)0x0;
    }
    else {
      psVar1 = (short *)((long)local_a0 + 0x1a);
      sVar19 = *(short *)((long)local_a0 + 0x1a);
      do {
        sVar7 = *psVar1;
        if (sVar7 == sVar19) {
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar19 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_0182d0d8;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0182d0d8:
          bVar11 = false;
        }
        if (bVar11) {
          plVar13 = (long *)0x0;
          if (local_a0[2] != 0) {
            plVar13 = (long *)(local_a0[2] + -0x28);
          }
          break;
        }
        plVar13 = (long *)0x0;
        sVar19 = sVar7;
      } while (sVar7 != 0);
    }
    local_160 = (long *)&LAB_02b59efc;
    local_158 = FUN_02b59f04;
    local_150 = FUN_02b59f08;
    local_148 = &LAB_02b59f14;
    pcVar18 = (code *)plVar13[0x1d];
    local_140[0] = fVar26;
    if (pcVar18 == (code *)0x0) {
LAB_0182cbc8:
      (*local_150)(local_140,plVar13 + 0x20);
      plVar13[0x1f] = (long)local_148;
      plVar13[0x1c] = (long)local_160;
      plVar13[0x1d] = (long)local_158;
      plVar13[0x1e] = (long)local_150;
    }
    else {
      plVar13[0x1e] = 0;
      plVar13[0x1f] = 0;
      plVar13[0x1c] = 0;
      plVar13[0x1d] = 0;
      (*pcVar18)(plVar13 + 0x20);
      if (local_150 != (code *)0x0) goto LAB_0182cbc8;
    }
    pcVar18 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (code *)0x0;
      local_148 = (undefined1 *)0x0;
      local_160 = (long *)0x0;
      local_158 = (code *)0x0;
      (*pcVar18)(local_140);
    }
    lVar17 = plVar13[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar19 = *psVar1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar19 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar19 == 0) goto LAB_0182d1a0;
    if ((local_a0 == (long *)0x0) || (*(short *)((long)local_a0 + 0x1a) == 0)) {
      plVar13 = (long *)0x0;
    }
    else {
      psVar1 = (short *)((long)local_a0 + 0x1a);
      sVar19 = *(short *)((long)local_a0 + 0x1a);
      do {
        sVar7 = *psVar1;
        if (sVar7 == sVar19) {
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar19 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_0182d124;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0182d124:
          bVar11 = false;
        }
        if (bVar11) {
          plVar13 = (long *)0x0;
          if (local_a0[2] != 0) {
            plVar13 = (long *)(local_a0[2] + -0x28);
          }
          break;
        }
        plVar13 = (long *)0x0;
        sVar19 = sVar7;
      } while (sVar7 != 0);
    }
    local_160 = (long *)&LAB_02b59f20;
    local_158 = FUN_02b5a14c;
    local_150 = FUN_02b5a150;
    local_148 = &LAB_02b5a154;
    pcVar18 = (code *)plVar13[0x2d];
    if (pcVar18 == (code *)0x0) {
LAB_0182cc74:
      (*local_150)(local_140,plVar13 + 0x30);
      plVar13[0x2f] = (long)local_148;
      plVar13[0x2c] = (long)local_160;
      plVar13[0x2d] = (long)local_158;
      plVar13[0x2e] = (long)local_150;
    }
    else {
      plVar13[0x2e] = 0;
      plVar13[0x2f] = 0;
      plVar13[0x2c] = 0;
      plVar13[0x2d] = 0;
      (*pcVar18)(plVar13 + 0x30);
      if (local_150 != (code *)0x0) goto LAB_0182cc74;
    }
    pcVar18 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (code *)0x0;
      local_148 = (undefined1 *)0x0;
      local_160 = (long *)0x0;
      local_158 = (code *)0x0;
      (*pcVar18)(local_140);
    }
    lVar17 = plVar13[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar19 = *psVar1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar19 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar19 == 0) {
LAB_0182d1a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar13 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar4 = local_a0 + 3;
    do {
      sVar19 = (short)*plVar4;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar11) {
        *(short *)plVar4 = sVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_160 = (long *)*plVar13;
        FUN_00c44438(lVar17 + 0x8040,&local_160);
      }
    }
    else if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_0182cce8:
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  return param_1;
code_r0x0182d098:
  sVar19 = sVar7;
  if (sVar7 == 0) goto LAB_0182cb70;
  goto LAB_0182d06c;
}


