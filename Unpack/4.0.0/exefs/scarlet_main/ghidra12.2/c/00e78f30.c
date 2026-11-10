/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e78f30; name: FUN_00e78f30
 */


undefined8 FUN_00e78f30(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  short sVar5;
  int iVar6;
  char cVar7;
  undefined *puVar8;
  long *plVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ushort *puVar18;
  ulong uVar19;
  code *pcVar20;
  long lVar21;
  undefined1 *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long local_78;
  long *local_70;
  long *local_68;
  long *local_48;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    plVar23 = (long *)0x0;
  }
  else {
    plVar23 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  puVar18 = (ushort *)((long)param_2 - (long)(int)*param_2);
  if ((*puVar18 < 0x17) || (uVar19 = (ulong)puVar18[0xb], uVar19 == 0)) {
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar11 != 0)) {
      local_88 = (long *)FUN_00d44228();
      puVar8 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_88);
      FUN_00100190(PTR_LAB_047d9240,puVar8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    local_b0 = *(long **)PTR_DAT_047d8c30;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))();
    }
  }
  else {
    puVar3 = (uint *)((long)param_2 + uVar19);
    local_a8 = (long *)((long)puVar3 + (ulong)*puVar3);
    FUN_00ea0a7c(&local_b0,&local_a8);
  }
  plVar12 = local_b0;
  plVar14 = (long *)PTR_DAT_047d8b70;
  plVar13 = (long *)PTR_PTR_047d4508;
  local_88 = (long *)PTR_DAT_047d8b70;
  if (local_b0 != (long *)0x0) {
    local_88 = local_b0 + 6;
  }
  local_88 = (long *)*local_88;
  local_80 = (long *)PTR_PTR_047d4508;
  if (local_b0 != (long *)0x0) {
    local_80 = local_b0 + 7;
  }
  local_80 = (long *)*local_80;
  if (local_b0 == (long *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = local_b0[8];
  }
  local_70 = (long *)0x0;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x18))(local_b0);
  }
  local_70 = plVar12;
  FUN_00e774e4(param_1,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  plVar12 = (long *)(**(code **)plVar23[5])(plVar23 + 5);
  if (((*PTR_DAT_047d6520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar11 != 0)) {
    uVar16 = FUN_0151c130();
    *(undefined8 *)PTR_DAT_047d6528 = uVar16;
    __cxa_guard_release(PTR_DAT_047d6520);
  }
  for (; plVar9 = local_b0, plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    if (plVar12 == (long *)PTR_DAT_047d6528) goto LAB_00e79044;
  }
  plVar23 = (long *)0x0;
LAB_00e79044:
  if (local_b0 != (long *)0x0) {
    plVar13 = local_b0 + 7;
    plVar14 = local_b0 + 6;
  }
  local_d0 = *plVar14;
  lStack_c8 = *plVar13;
  if (local_b0 == (long *)0x0) {
    local_c0 = 0;
  }
  else {
    local_c0 = local_b0[8];
  }
  local_b8 = (long *)0x0;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x18))(local_b0);
  }
  local_b8 = plVar9;
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_e8 = param_2;
  FUN_00c43ef0(&local_88,param_1 + 0x98);
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  lVar15 = 0;
  if (param_1 != 0) {
    lVar15 = param_1 + 0x28;
  }
  if (local_88[2] == lVar15) {
    FUN_00e77114(&local_e0,&local_88);
  }
  plVar13 = local_88;
  if (local_88 != (long *)0x0) {
    plVar14 = local_88 + 3;
    do {
      sVar5 = (short)*plVar14;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *(short *)plVar14 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_88 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_a8 = (long *)*plVar13;
        FUN_00c44438(lVar21 + 0x8040,&local_a8);
      }
    }
    else if (sVar5 == 0) goto LAB_00e794e4;
  }
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  FUN_00c43ef0(&local_88,param_1 + 0x98);
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  if (local_88[2] == lVar15) {
    FUN_00e77114(&local_f8,&local_88);
  }
  plVar13 = local_88;
  if (local_88 != (long *)0x0) {
    plVar14 = local_88 + 3;
    do {
      sVar5 = (short)*plVar14;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *(short *)plVar14 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_88 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_a8 = (long *)*plVar13;
        FUN_00c44438(lVar15 + 0x8040,&local_a8);
      }
    }
    else if (sVar5 == 0) goto LAB_00e794e4;
  }
  plVar13 = (long *)(**(code **)(*plVar23 + 0x138))(plVar23);
  plVar14 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x300,0x10);
  if (plVar14 == (long *)0x0) {
    local_78 = 0;
    local_70 = (long *)0x0;
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar13;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    FUN_00e76b9c(plVar14,&local_d0);
    puVar8 = PTR_DAT_047db030;
    plVar14[0x40] = 0;
    plVar14[0x10] = 0;
    plVar14[0x11] = 0;
    plVar14[0x12] = 0;
    plVar14[0x13] = 0;
    *plVar14 = (long)(puVar8 + 0x10);
    plVar14[0x41] = 0;
    plVar14[0x42] = 0;
    plVar14[0x43] = 0;
    plVar14[0x53] = 0;
    plVar14[0x52] = 0;
    plVar14[0x51] = 0;
    plVar14[0x50] = 0;
    plVar14[0x20] = 0;
    plVar14[0x21] = 0;
    plVar14[0x22] = 0;
    plVar14[0x23] = 0;
    plVar14[0x30] = 0;
    plVar14[0x31] = 0;
    plVar14[0x32] = 0;
    plVar14[0x33] = 0;
    local_78 = 0x300;
    local_70 = (long *)&DAT_00000010;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    local_88 = plVar14;
    local_80 = plVar13;
  }
  local_98 = 0;
  local_a8 = local_e8;
  local_a0 = (long *)0x0;
  FUN_00e76888(&local_a0,&local_e0);
  pcVar20 = (code *)plVar14[0x11];
  if (pcVar20 != (code *)0x0) {
    plVar14[0x12] = 0;
    plVar14[0x13] = 0;
    plVar14[0x10] = 0;
    plVar14[0x11] = 0;
    (*pcVar20)(plVar14 + 0x14);
  }
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x14] = (long)local_a8;
  FUN_00e76d44(plVar14 + 0x15,&local_a0);
  plVar13 = local_a0;
  plVar14[0x10] = (long)&LAB_0218eae0;
  plVar14[0x11] = (long)&LAB_0218f9ac;
  plVar14[0x12] = (long)&LAB_0218fabc;
  plVar14[0x13] = (long)&LAB_0218fadc;
  if (local_a0 != (long *)0x0) {
    plVar14 = local_a0 + 3;
    do {
      sVar5 = (short)*plVar14;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *(short *)plVar14 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_48 = (long *)*plVar13;
        FUN_00c44438(lVar15 + 0x8040,&local_48);
      }
    }
    else if (sVar5 == 0) goto LAB_00e794e4;
  }
  plVar13 = local_88;
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  FUN_00e76888(&local_a8,&local_f8);
  pcVar20 = (code *)plVar13[0x21];
  if (pcVar20 != (code *)0x0) {
    plVar13[0x22] = 0;
    plVar13[0x23] = 0;
    plVar13[0x20] = 0;
    plVar13[0x21] = 0;
    (*pcVar20)(plVar13 + 0x24);
  }
  plVar13[0x24] = 0;
  plVar13[0x25] = 0;
  FUN_00e76d44(plVar13 + 0x24,&local_a8);
  plVar14 = local_a8;
  plVar13[0x20] = (long)&LAB_0218fafc;
  plVar13[0x21] = (long)&LAB_0218fbe8;
  plVar13[0x22] = (long)&LAB_0218fcf8;
  plVar13[0x23] = (long)&LAB_0218fd0c;
  if (local_a8 != (long *)0x0) {
    plVar13 = local_a8 + 3;
    do {
      sVar5 = (short)*plVar13;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *(short *)plVar13 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_48 = (long *)*plVar14;
        FUN_00c44438(lVar15 + 0x8040,&local_48);
      }
    }
    else if (sVar5 == 0) goto LAB_00e794e4;
  }
  pcVar20 = (code *)local_88[0x31];
  if (pcVar20 != (code *)0x0) {
    local_88[0x32] = 0;
    local_88[0x33] = 0;
    local_88[0x30] = 0;
    local_88[0x31] = 0;
    (*pcVar20)(local_88 + 0x34);
  }
  pcVar20 = (code *)local_88[0x41];
  if (pcVar20 != (code *)0x0) {
    local_88[0x43] = 0;
    local_88[0x42] = 0;
    local_88[0x41] = 0;
    local_88[0x40] = 0;
    (*pcVar20)(local_88 + 0x44);
  }
  pcVar20 = (code *)local_88[0x51];
  plVar13 = local_88;
  if (pcVar20 != (code *)0x0) {
    local_88[0x53] = 0;
    local_88[0x52] = 0;
    local_88[0x51] = 0;
    local_88[0x50] = 0;
    (*pcVar20)(local_88 + 0x54);
    plVar13 = local_88;
  }
  local_a0 = local_80;
  local_98 = local_78;
  local_90 = local_70;
  local_88 = (long *)0x0;
  local_a8 = plVar13;
  lVar15 = FUN_00e767a8(plVar23,&local_a8);
  plVar23 = local_a8;
  local_a8 = (long *)0x0;
  if (plVar23 == (long *)0x0) {
    local_88 = (long *)0x0;
  }
  else {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar21 = FUN_00c4e600();
    iVar6 = *(int *)(lVar21 + 0x12c8);
    iVar11 = iVar6 + 1;
    *(int *)(lVar21 + 0x12c8) = iVar11;
    if (*(int *)(lVar21 + 0x12cc) <= iVar6) {
      *(int *)(lVar21 + 0x12cc) = iVar11;
    }
    (**(code **)*plVar23)(plVar23);
    plVar14 = local_90;
    lVar21 = local_98;
    plVar13 = local_a0;
    uVar19 = (**(code **)(*local_a0 + 0xf8))(local_a0);
    if (((uVar19 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar23,lVar21,plVar14);
    }
    else {
      FUN_00c48fe8(plVar13,plVar23,lVar21,plVar14);
    }
    lVar21 = FUN_00c4e600();
    iVar11 = *(int *)(lVar21 + 0x12c8) + -1;
    *(int *)(lVar21 + 0x12c8) = iVar11;
    if (iVar11 == 0) {
      plVar23 = (long *)FUN_00c4e600();
      if (plVar23[600] != 0) {
        local_68 = plVar23 + plVar23[600] * 3;
        local_48 = plVar23;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar23;
        plVar13 = plVar23;
        if (plVar23[600] != 0) {
          plVar13 = plVar23 + plVar23[600] * 3;
        }
        if (plVar13 == plVar23) {
          uVar25 = 0;
          uVar19 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar23 + 0xd0))();
          if ((long *)*plVar23 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar23,plVar23);
            plVar14 = (long *)*plVar23;
          }
          plVar12 = plVar23 + 3;
          if (plVar13 == plVar12) {
            uVar25 = 0;
            uVar19 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            bVar10 = (long *)*plVar12 != plVar14;
            if (bVar10) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar23,plVar23 + 3);
              plVar14 = (long *)plVar23[3];
            }
            uVar25 = (ulong)bVar10;
            plVar12 = plVar23 + 6;
            if (plVar13 == plVar12) {
              uVar19 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar12 + 0xd0))();
              if ((long *)*plVar12 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar23 + uVar25 * 3,plVar23 + 6);
                plVar14 = (long *)plVar23[6];
                uVar25 = 2;
              }
              plVar12 = plVar23 + 9;
              if (plVar13 == plVar12) {
                uVar19 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar12 + 0xd0))();
                if ((long *)*plVar12 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar23 + uVar25 * 3,plVar23 + 9);
                  plVar14 = (long *)plVar23[9];
                  uVar25 = 3;
                }
                plVar12 = plVar23 + 0xc;
                if (plVar13 == plVar12) {
                  uVar19 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar12 + 0xd0))();
                  if ((long *)*plVar12 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar23 + uVar25 * 3,plVar23 + 0xc);
                    plVar14 = (long *)plVar23[0xc];
                    uVar25 = 4;
                  }
                  plVar12 = plVar23 + 0xf;
                  if (plVar13 == plVar12) {
                    uVar19 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar12 + 0xd0))();
                    if ((long *)*plVar12 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar23 + uVar25 * 3,plVar23 + 0xf);
                      plVar14 = (long *)plVar23[0xf];
                      uVar25 = 5;
                    }
                    uVar19 = 6;
                    for (plVar12 = plVar23 + 0x12; plVar13 != plVar12; plVar12 = plVar12 + 3) {
                      (**(code **)(*(long *)*plVar12 + 0xd0))();
                      if ((long *)*plVar12 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar23 + uVar25 * 3,plVar12);
                        plVar14 = (long *)*plVar12;
                        uVar25 = uVar19;
                      }
                      uVar19 = uVar19 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar23 + uVar25 * 3,plVar23 + uVar19 * 3);
        plVar23[600] = 0;
      }
      *(undefined4 *)(lVar21 + 0x12cc) = 0;
    }
    plVar23 = local_88;
    local_88 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      FUN_01e2e474(&local_80);
    }
  }
  puVar24 = local_f8;
  if (local_f8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f8 + 3);
    do {
      sVar5 = *psVar1;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_88 = (long *)*puVar24;
        FUN_00c44438(lVar21 + 0x8040,&local_88);
      }
    }
    else if (sVar5 == 0) goto LAB_00e794e4;
  }
  puVar24 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_e0 + 3);
    do {
      sVar5 = *psVar1;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_88 = (long *)*puVar24;
        FUN_00c44438(lVar21 + 0x8040,&local_88);
      }
    }
    else if (sVar5 == 0) {
LAB_00e794e4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar21 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar21;
  plVar23 = *(long **)(*(long *)(*(long *)(lVar21 + 0x38) + 0x48) + 0x150);
  if (plVar23 == (long *)0x0) {
    *(undefined8 *)(lVar15 + 0x40) = 0x2c;
    if (*(char *)(*(long *)(lVar15 + 0x38) + 0x14) == '\0') {
      *(undefined8 *)(lVar15 + 0x30) = 0x2c;
      if (DAT_00000040 == '\0') {
        if (DAT_0000003c == '\0') {
          puVar22 = &LAB_02b6181c;
        }
        else {
          puVar22 = &LAB_02b61328;
        }
      }
      else {
        puVar22 = &LAB_02b610f4;
      }
      *(undefined1 **)(lVar15 + 0x48) = puVar22;
      puVar24 = (undefined8 *)(lVar15 + 0x50);
      puVar4 = puVar24;
      if (*(long *)(lVar15 + 0x70) != 0) {
        puVar4 = puVar24 + *(long *)(lVar15 + 0x70);
      }
      if ((puVar4 != puVar24) &&
         ((**(code **)(**(long **)(lVar15 + 0x50) + 0x18))(*(long **)(lVar15 + 0x50),lVar15,0x2c),
         puVar4 != (undefined8 *)(lVar15 + 0x58))) {
        (**(code **)(**(long **)(lVar15 + 0x58) + 0x18))
                  (*(long **)(lVar15 + 0x58),lVar15,*(undefined8 *)(lVar15 + 0x30));
        for (puVar24 = (undefined8 *)(lVar15 + 0x60); puVar4 != puVar24; puVar24 = puVar24 + 1) {
          (**(code **)(*(long *)*puVar24 + 0x18))
                    ((long *)*puVar24,lVar15,*(undefined8 *)(lVar15 + 0x30));
        }
      }
    }
  }
  else {
    plVar13 = plVar23 + 5;
    do {
      lVar21 = *plVar13;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *(int *)plVar13 = (int)lVar21 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar21 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    *(long *)(lVar15 + 0x40) = (long)plVar23 + 0x2c;
    if (*(char *)(*(long *)(lVar15 + 0x38) + 0x14) == '\0') {
      *(long *)(lVar15 + 0x30) = (long)plVar23 + 0x2c;
      if ((char)plVar23[8] == '\0') {
        if (*(char *)((long)plVar23 + 0x3c) == '\0') {
          puVar22 = &LAB_02b6181c;
        }
        else {
          puVar22 = &LAB_02b61328;
        }
      }
      else {
        puVar22 = &LAB_02b610f4;
      }
      *(undefined1 **)(lVar15 + 0x48) = puVar22;
      puVar24 = (undefined8 *)(lVar15 + 0x50);
      puVar4 = puVar24;
      if (*(long *)(lVar15 + 0x70) != 0) {
        puVar4 = puVar24 + *(long *)(lVar15 + 0x70);
      }
      if ((puVar4 != puVar24) &&
         ((**(code **)(**(long **)(lVar15 + 0x50) + 0x18))(*(long **)(lVar15 + 0x50),lVar15),
         puVar4 != (undefined8 *)(lVar15 + 0x58))) {
        (**(code **)(**(long **)(lVar15 + 0x58) + 0x18))
                  (*(long **)(lVar15 + 0x58),lVar15,*(undefined8 *)(lVar15 + 0x30));
        for (puVar24 = (undefined8 *)(lVar15 + 0x60); puVar4 != puVar24; puVar24 = puVar24 + 1) {
          (**(code **)(*(long *)*puVar24 + 0x18))
                    ((long *)*puVar24,lVar15,*(undefined8 *)(lVar15 + 0x30));
        }
      }
    }
    do {
      lVar15 = *plVar13;
      iVar11 = (int)lVar15 + -1;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *(int *)plVar13 = iVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
    else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return 1;
}


