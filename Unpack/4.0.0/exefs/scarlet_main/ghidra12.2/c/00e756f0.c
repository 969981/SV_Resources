/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e756f0; name: FUN_00e756f0
 */


undefined8 FUN_00e756f0(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 *puVar5;
  short sVar6;
  int iVar7;
  char cVar8;
  undefined *puVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ushort *puVar19;
  ulong uVar20;
  code *pcVar21;
  undefined1 *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    plVar23 = (long *)0x0;
  }
  else {
    plVar23 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  puVar19 = (ushort *)((long)param_2 - (long)(int)*param_2);
  if ((*puVar19 < 0x17) || (uVar20 = (ulong)puVar19[0xb], uVar20 == 0)) {
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar12 != 0)) {
      local_90 = (long *)FUN_00d44228();
      puVar9 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_90);
      FUN_00100190(PTR_LAB_047d9240,puVar9,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    local_98 = *(long **)PTR_DAT_047d8c30;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))();
    }
  }
  else {
    puVar4 = (uint *)((long)param_2 + uVar20);
    local_b8 = (long)puVar4 + (ulong)*puVar4;
    FUN_00ea0a7c(&local_98,&local_b8);
  }
  plVar13 = local_98;
  plVar15 = (long *)PTR_DAT_047d8b70;
  plVar14 = (long *)PTR_PTR_047d4508;
  local_90 = (long *)PTR_DAT_047d8b70;
  if (local_98 != (long *)0x0) {
    local_90 = local_98 + 6;
  }
  local_90 = (long *)*local_90;
  local_88 = (long *)PTR_PTR_047d4508;
  if (local_98 != (long *)0x0) {
    local_88 = local_98 + 7;
  }
  local_88 = (long *)*local_88;
  if (local_98 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = local_98[8];
  }
  local_78 = (long *)0x0;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))(local_98);
  }
  local_78 = plVar13;
  FUN_00e774e4(param_1,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  plVar13 = (long *)(**(code **)plVar23[5])(plVar23 + 5);
  if (((*PTR_DAT_047d6520 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar12 != 0)) {
    uVar17 = FUN_0151c130();
    *(undefined8 *)PTR_DAT_047d6528 = uVar17;
    __cxa_guard_release(PTR_DAT_047d6520);
  }
  for (; plVar10 = local_98, plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    if (plVar13 == (long *)PTR_DAT_047d6528) goto LAB_00e75804;
  }
  plVar23 = (long *)0x0;
LAB_00e75804:
  if (local_98 != (long *)0x0) {
    plVar14 = local_98 + 7;
    plVar15 = local_98 + 6;
  }
  local_b8 = *plVar15;
  lStack_b0 = *plVar14;
  if (local_98 == (long *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_98[8];
  }
  local_a0 = (long *)0x0;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))(local_98);
  }
  local_a0 = plVar10;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  local_d0 = param_2;
  FUN_00c43ef0(&local_90,param_1 + 0x98);
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  lVar25 = 0;
  if (param_1 != 0) {
    lVar25 = param_1 + 0x28;
  }
  if (local_90[2] == lVar25) {
    FUN_00e77114(&local_c8,&local_90);
  }
  plVar14 = local_90;
  if (local_90 != (long *)0x0) {
    plVar15 = local_90 + 3;
    do {
      sVar6 = (short)*plVar15;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *(short *)plVar15 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_e0 = (undefined8 *)*plVar14;
        FUN_00c44438(lVar16 + 0x8040,&local_e0);
      }
    }
    else if (sVar6 == 0) goto LAB_00e75d18;
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  FUN_00c43ef0(&local_90,param_1 + 0x98);
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  if (local_90[2] == lVar25) {
    FUN_00e77114(&local_e0,&local_90);
  }
  plVar14 = local_90;
  if (local_90 != (long *)0x0) {
    plVar15 = local_90 + 3;
    do {
      sVar6 = (short)*plVar15;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *(short *)plVar15 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar25 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar25;
        local_68 = (long *)*plVar14;
        FUN_00c44438(lVar25 + 0x8040,&local_68);
      }
    }
    else if (sVar6 == 0) goto LAB_00e75d18;
  }
  plVar14 = (long *)(**(code **)(*plVar23 + 0x138))(plVar23);
  plVar15 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x350,0x10);
  if (plVar15 == (long *)0x0) {
    plVar14 = (long *)0x0;
    lVar25 = 0;
    plVar13 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar16 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar14;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    FUN_00e76b9c(plVar15,&local_b8);
    plVar15[0x40] = 0;
    *plVar15 = (long)&PTR_FUN_0459f5f0;
    plVar15[0x10] = 0;
    plVar15[0x11] = 0;
    plVar13 = (long *)&DAT_00000010;
    lVar25 = 0x350;
    plVar15[0x41] = 0;
    plVar15[0x42] = 0;
    plVar15[0x43] = 0;
    plVar15[0x53] = 0;
    plVar15[0x52] = 0;
    plVar15[0x51] = 0;
    plVar15[0x50] = 0;
    *(undefined1 *)(plVar15 + 0x60) = 0;
    plVar15[0x62] = 0;
    plVar15[99] = 0;
    plVar15[100] = 0;
    plVar15[0x65] = 0;
    plVar15[0x66] = 0;
    plVar15[0x67] = 0;
    plVar15[0x68] = 0;
    plVar15[0x61] = (long)&PTR_FUN_0459f640;
    plVar15[0x12] = 0;
    plVar15[0x13] = 0;
    plVar15[0x20] = 0;
    plVar15[0x21] = 0;
    plVar15[0x22] = 0;
    plVar15[0x23] = 0;
    plVar15[0x30] = 0;
    plVar15[0x31] = 0;
    plVar15[0x32] = 0;
    plVar15[0x33] = 0;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  }
  local_80 = 0;
  local_90 = local_d0;
  local_88 = (long *)0x0;
  FUN_00e76888(&local_88,&local_c8);
  pcVar21 = (code *)plVar15[0x11];
  if (pcVar21 != (code *)0x0) {
    plVar15[0x12] = 0;
    plVar15[0x13] = 0;
    plVar15[0x10] = 0;
    plVar15[0x11] = 0;
    (*pcVar21)(plVar15 + 0x14);
  }
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x14] = (long)local_90;
  FUN_00e76d44(plVar15 + 0x15,&local_88);
  plVar10 = local_88;
  plVar15[0x10] = (long)&LAB_0218b7b4;
  plVar15[0x11] = (long)&LAB_0218df58;
  plVar15[0x12] = (long)&LAB_0218e670;
  plVar15[0x13] = (long)&LAB_0218e690;
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 3;
    do {
      sVar6 = (short)*plVar1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(short *)plVar1 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_68 = (long *)*plVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_68);
      }
    }
    else if (sVar6 == 0) goto LAB_00e75d18;
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  FUN_00e76888(&local_90,&local_e0);
  pcVar21 = (code *)plVar15[0x21];
  if (pcVar21 != (code *)0x0) {
    plVar15[0x22] = 0;
    plVar15[0x23] = 0;
    plVar15[0x20] = 0;
    plVar15[0x21] = 0;
    (*pcVar21)(plVar15 + 0x24);
  }
  plVar15[0x24] = 0;
  plVar15[0x25] = 0;
  FUN_00e76d44(plVar15 + 0x24,&local_90);
  plVar10 = local_90;
  plVar15[0x20] = (long)&LAB_0218e6b0;
  plVar15[0x21] = (long)&LAB_0218e798;
  plVar15[0x22] = (long)&LAB_0218e8a8;
  plVar15[0x23] = (long)&LAB_0218e8bc;
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 3;
    do {
      sVar6 = (short)*plVar1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(short *)plVar1 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_68 = (long *)*plVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_68);
      }
    }
    else if (sVar6 == 0) goto LAB_00e75d18;
  }
  pcVar21 = (code *)plVar15[0x31];
  if (pcVar21 != (code *)0x0) {
    plVar15[0x32] = 0;
    plVar15[0x33] = 0;
    plVar15[0x30] = 0;
    plVar15[0x31] = 0;
    (*pcVar21)(plVar15 + 0x34);
  }
  plVar15[0x30] = (long)&LAB_0218e8d0;
  plVar15[0x31] = (long)&LAB_02b4a084;
  pcVar21 = (code *)plVar15[0x41];
  plVar15[0x32] = (long)&LAB_02b4a088;
  plVar15[0x33] = (long)&LAB_02b4a094;
  plVar15[0x34] = (long)param_2;
  if (pcVar21 != (code *)0x0) {
    plVar15[0x43] = 0;
    plVar15[0x42] = 0;
    plVar15[0x41] = 0;
    plVar15[0x40] = 0;
    (*pcVar21)(plVar15 + 0x44);
  }
  pcVar21 = (code *)plVar15[0x51];
  if (pcVar21 != (code *)0x0) {
    plVar15[0x53] = 0;
    plVar15[0x52] = 0;
    plVar15[0x51] = 0;
    plVar15[0x50] = 0;
    (*pcVar21)(plVar15 + 0x54);
  }
  local_90 = plVar15;
  local_88 = plVar14;
  local_80 = lVar25;
  local_78 = plVar13;
  lVar25 = FUN_00e767a8(plVar23,&local_90);
  plVar23 = local_90;
  local_90 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar16 = FUN_00c4e600();
    iVar7 = *(int *)(lVar16 + 0x12c8);
    iVar12 = iVar7 + 1;
    *(int *)(lVar16 + 0x12c8) = iVar12;
    if (*(int *)(lVar16 + 0x12cc) <= iVar7) {
      *(int *)(lVar16 + 0x12cc) = iVar12;
    }
    (**(code **)*plVar23)(plVar23);
    plVar15 = local_78;
    lVar16 = local_80;
    plVar14 = local_88;
    uVar20 = (**(code **)(*local_88 + 0xf8))(local_88);
    if (((uVar20 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar23,lVar16,plVar15);
    }
    else {
      FUN_00c48fe8(plVar14,plVar23,lVar16,plVar15);
    }
    lVar16 = FUN_00c4e600();
    iVar12 = *(int *)(lVar16 + 0x12c8) + -1;
    *(int *)(lVar16 + 0x12c8) = iVar12;
    if (iVar12 == 0) {
      plVar23 = (long *)FUN_00c4e600();
      if (plVar23[600] != 0) {
        local_70 = plVar23 + plVar23[600] * 3;
        local_68 = plVar23;
        FUN_00c4ea30(&local_68,&local_70);
        plVar15 = (long *)*plVar23;
        plVar14 = plVar23;
        if (plVar23[600] != 0) {
          plVar14 = plVar23 + plVar23[600] * 3;
        }
        if (plVar14 == plVar23) {
          uVar26 = 0;
          uVar20 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar23 + 0xd0))();
          if ((long *)*plVar23 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar23,plVar23);
            plVar15 = (long *)*plVar23;
          }
          plVar13 = plVar23 + 3;
          if (plVar14 == plVar13) {
            uVar26 = 0;
            uVar20 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            bVar11 = (long *)*plVar13 != plVar15;
            if (bVar11) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar23,plVar23 + 3);
              plVar15 = (long *)plVar23[3];
            }
            uVar26 = (ulong)bVar11;
            plVar13 = plVar23 + 6;
            if (plVar14 == plVar13) {
              uVar20 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar23 + uVar26 * 3,plVar23 + 6);
                plVar15 = (long *)plVar23[6];
                uVar26 = 2;
              }
              plVar13 = plVar23 + 9;
              if (plVar14 == plVar13) {
                uVar20 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar13 + 0xd0))();
                if ((long *)*plVar13 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar23 + uVar26 * 3,plVar23 + 9);
                  plVar15 = (long *)plVar23[9];
                  uVar26 = 3;
                }
                plVar13 = plVar23 + 0xc;
                if (plVar14 == plVar13) {
                  uVar20 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar13 + 0xd0))();
                  if ((long *)*plVar13 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar23 + uVar26 * 3,plVar23 + 0xc);
                    plVar15 = (long *)plVar23[0xc];
                    uVar26 = 4;
                  }
                  plVar13 = plVar23 + 0xf;
                  if (plVar14 == plVar13) {
                    uVar20 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar13 + 0xd0))();
                    if ((long *)*plVar13 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar23 + uVar26 * 3,plVar23 + 0xf);
                      plVar15 = (long *)plVar23[0xf];
                      uVar26 = 5;
                    }
                    uVar20 = 6;
                    for (plVar13 = plVar23 + 0x12; plVar14 != plVar13; plVar13 = plVar13 + 3) {
                      (**(code **)(*(long *)*plVar13 + 0xd0))();
                      if ((long *)*plVar13 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar23 + uVar26 * 3,plVar13);
                        plVar15 = (long *)*plVar13;
                        uVar26 = uVar20;
                      }
                      uVar20 = uVar20 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar23 + uVar26 * 3,plVar23 + uVar20 * 3);
        plVar23[600] = 0;
      }
      *(undefined4 *)(lVar16 + 0x12cc) = 0;
    }
  }
  puVar24 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_e0 + 3);
    do {
      sVar6 = *psVar2;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar11) {
        *psVar2 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_90 = (long *)*puVar24;
        FUN_00c44438(lVar16 + 0x8040,&local_90);
      }
    }
    else if (sVar6 == 0) goto LAB_00e75d18;
  }
  puVar24 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_c8 + 3);
    do {
      sVar6 = *psVar2;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar11) {
        *psVar2 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_90 = (long *)*puVar24;
        FUN_00c44438(lVar16 + 0x8040,&local_90);
      }
    }
    else if (sVar6 == 0) {
LAB_00e75d18:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar16 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar16;
  plVar23 = *(long **)(*(long *)(*(long *)(lVar16 + 0x38) + 0x48) + 0x150);
  if (plVar23 != (long *)0x0) {
    plVar14 = plVar23 + 5;
    do {
      lVar18 = *plVar14;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *(int *)plVar14 = (int)lVar18 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((int)lVar18 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  *(long *)(lVar25 + 0x40) = (long)plVar23 + 0x2c;
  if (*(char *)(*(long *)(lVar25 + 0x38) + 0x14) == '\0') {
    *(long *)(lVar25 + 0x30) = (long)plVar23 + 0x2c;
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
    *(undefined1 **)(lVar25 + 0x48) = puVar22;
    puVar24 = (undefined8 *)(lVar25 + 0x50);
    puVar5 = puVar24;
    if (*(long *)(lVar25 + 0x70) != 0) {
      puVar5 = puVar24 + *(long *)(lVar25 + 0x70);
    }
    if ((puVar5 != puVar24) &&
       ((**(code **)(**(long **)(lVar25 + 0x50) + 0x18))(*(long **)(lVar25 + 0x50),lVar25),
       puVar5 != (undefined8 *)(lVar25 + 0x58))) {
      (**(code **)(**(long **)(lVar25 + 0x58) + 0x18))
                (*(long **)(lVar25 + 0x58),lVar25,*(undefined8 *)(lVar25 + 0x30));
      for (puVar24 = (undefined8 *)(lVar25 + 0x60); puVar5 != puVar24; puVar24 = puVar24 + 1) {
        (**(code **)(*(long *)*puVar24 + 0x18))
                  ((long *)*puVar24,lVar25,*(undefined8 *)(lVar25 + 0x30));
      }
    }
  }
  puVar19 = (ushort *)((long)param_2 - (long)(int)*param_2);
  lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 0x48);
  if (*puVar19 < 0x11) {
    iVar12 = 0;
  }
  else {
    uVar20 = (ulong)puVar19[8];
    iVar12 = 0;
    if (uVar20 != 0) {
      iVar12 = *(int *)((long)param_2 + uVar20);
    }
  }
  if (*(int *)(lVar16 + 0xb0) == iVar12) {
    lVar18 = 0;
    if (lVar16 != 0) {
      lVar18 = lVar16 + 0x30;
    }
    FUN_00e7a04c(lVar25,lVar18);
  }
  if (plVar23 != (long *)0x0) {
    plVar14 = plVar23 + 5;
    do {
      lVar25 = *plVar14;
      iVar12 = (int)lVar25 + -1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *(int *)plVar14 = iVar12;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
    else if ((int)lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  return 1;
}


