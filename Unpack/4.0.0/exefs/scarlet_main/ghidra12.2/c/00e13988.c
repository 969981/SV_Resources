/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e13988; name: FUN_00e13988
 */


void FUN_00e13988(long *param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  short *psVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  ushort *puVar16;
  long *plVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_a8;
  undefined8 *local_a0 [2];
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *plStack_70;
  undefined8 local_68;
  
  local_a8 = param_3;
  plVar10 = (long *)(**(code **)(*param_1 + 0x128))();
  piVar18 = (int *)0x0;
  if (*(long *)(param_2 + 8) != 0) {
    if (((*(byte *)(*(long *)(param_2 + 8) + 0x1e8) & 1) == 0) ||
       ((*(byte *)(*(long *)(param_2 + 8) + 0x1e8) & 1) == 0)) {
      piVar18 = (int *)0x0;
    }
    else {
      puVar15 = *(uint **)(*(long *)(param_2 + 8) + 0x1f0);
      piVar18 = (int *)((long)puVar15 + (ulong)*puVar15);
    }
  }
  if (*(ushort *)((long)piVar18 - (long)*piVar18) < 5) {
    return;
  }
  uVar19 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2];
  if (uVar19 == 0) {
    return;
  }
  puVar15 = (uint *)((long)piVar18 + uVar19);
  piVar18 = (int *)((long)puVar15 + (ulong)*puVar15);
  puVar16 = (ushort *)((long)piVar18 - (long)*piVar18);
  if (*puVar16 < 5) {
    puVar15 = (uint *)0x0;
LAB_00e140e8:
    lVar23 = 0;
  }
  else {
    if ((ulong)puVar16[2] == 0) {
      puVar15 = (uint *)0x0;
    }
    else {
      puVar15 = (uint *)((long)piVar18 + (ulong)puVar16[2]);
      puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
    }
    if ((*puVar16 < 7) || ((ulong)puVar16[3] == 0)) goto LAB_00e140e8;
    puVar22 = (uint *)((long)piVar18 + (ulong)puVar16[3]);
    lVar23 = (long)puVar22 + (ulong)*puVar22;
  }
  lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,0x270,8);
  if (lVar11 == 0) {
    plVar26 = (long *)0x0;
    lVar12 = 0;
    lVar23 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e14534;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar10;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    FUN_00e15748(lVar11,lVar23);
    lVar23 = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    lVar12 = 0x270;
    plVar26 = plVar10;
  }
  lVar14 = param_1[0x16];
  param_1[0x16] = lVar11;
  if (lVar14 != 0) {
    FUN_00e15cc8(param_1 + 0x17);
  }
  lVar11 = local_a8;
  param_1[0x19] = lVar23;
  param_1[0x17] = (long)plVar26;
  param_1[0x18] = lVar12;
  if (((*PTR_DAT_047daf58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf58);
  }
  plVar26 = (long *)PTR_DAT_047daf60;
  if (*(long *)(lVar11 + 0xc0) != 0) {
    plVar26 = (long *)(*(long *)(lVar11 + 0xc0) + 0x70);
  }
  lVar23 = *plVar26;
  if (lVar23 != 0) {
    lVar11 = param_1[0x16];
    uVar19 = (ulong)(*(long *)(lVar23 + 0x250) - *(long *)(lVar23 + 0x248)) >> 4;
    uVar24 = (ulong)(uint)(int)(short)((short)uVar19 * -0x5555);
    if (*(ulong *)(lVar11 + 0x80) != uVar24) {
      FUN_00d7684c((long *)(lVar11 + 0x78),uVar24,0);
      if ((int)uVar19 * -0x55550000 != 0) {
        uVar19 = 0;
        do {
          FUN_00e1561c(&local_90,*plVar26,uVar19 & 0xffffffff);
          uVar13 = FUN_00c742fc(lVar11 + 8,&local_90);
          lVar23 = *(long *)(lVar11 + 0x78);
          uVar20 = uVar19 >> 6;
          uVar21 = 1L << (uVar19 & 0x3f);
          if ((uVar13 & 1) == 0) {
            uVar21 = *(ulong *)(lVar23 + uVar20 * 8) & (uVar21 ^ 0xffffffffffffffff);
          }
          else {
            uVar21 = *(ulong *)(lVar23 + uVar20 * 8) | uVar21;
          }
          *(ulong *)(lVar23 + uVar20 * 8) = uVar21;
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          uVar19 = uVar19 + 1;
        } while (uVar24 != uVar19);
      }
    }
  }
  uVar19 = (ulong)*puVar15;
  plVar26 = param_1 + 0xf;
  lVar23 = *plVar26;
  if ((ulong)(param_1[0x11] - lVar23 >> 5) < uVar19) {
    plVar1 = param_1 + 0x12;
    lVar11 = param_1[0x10];
    local_78 = (long *)0x0;
    plStack_70 = plVar1;
    local_90 = (long *)(**(code **)(*(long *)param_1[0x12] + 0x10))
                                 ((long *)param_1[0x12],uVar19 << 5,8);
    if (local_90 == (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
    plVar3 = local_90 + (lVar11 - lVar23 >> 5) * 4;
    plVar4 = local_90 + uVar19 * 4;
    plVar17 = (long *)param_1[0xf];
    plVar25 = (long *)param_1[0x10];
    if (plVar25 == plVar17) {
      local_80 = plVar17;
      plVar27 = plVar3;
    }
    else {
      plVar27 = plVar3 + -4;
      local_88 = plVar3;
      local_80 = plVar3;
      local_78 = plVar4;
      FUN_00e1b1d8(plVar1,plVar27);
      if (plVar25 + -4 != plVar17) {
        do {
          plVar27 = plVar27 + -4;
          FUN_00e1b1d8(plVar1,plVar27,plVar25 + -8);
          plVar25 = plVar25 + -4;
        } while (plVar17 + 4 != plVar25);
      }
      plVar17 = (long *)param_1[0xf];
      local_80 = (long *)param_1[0x10];
    }
    param_1[0xf] = (long)plVar27;
    param_1[0x10] = (long)plVar3;
    local_78 = (long *)param_1[0x11];
    param_1[0x11] = (long)plVar4;
    local_90 = plVar17;
    local_88 = plVar17;
    FUN_00e15860(&local_90);
  }
  lVar11 = *param_4;
  lVar23 = (**(code **)(*plVar10 + 0x10))(plVar10,0x38,8);
  if (lVar11 == 0) {
    if (lVar23 == 0) {
LAB_00e14280:
      local_80 = (long *)0x0;
      local_78 = (long *)0x0;
      local_88 = (long *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e14534;
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar10;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      FUN_00e14608(lVar23,piVar18);
      local_80 = (long *)&DAT_00000038;
      local_78 = (long *)&DAT_00000008;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      local_88 = plVar10;
    }
  }
  else {
    if (lVar23 == 0) goto LAB_00e14280;
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e14534;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar10;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    FUN_00e1cab4(lVar23,param_4);
    local_80 = (long *)&DAT_00000038;
    local_78 = (long *)&DAT_00000008;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    local_88 = plVar10;
  }
  local_90 = (long *)0x0;
  lVar12 = param_1[0x1a];
  param_1[0x1a] = lVar23;
  if (lVar12 != 0) {
    FUN_00e1613c(param_1 + 0x1b);
  }
  param_1[0x1c] = (long)local_80;
  param_1[0x1d] = (long)local_78;
  param_1[0x1b] = (long)local_88;
  puVar22 = puVar15 + 1;
  if (*puVar15 != 0) {
    if (lVar11 == 0) {
      puVar15 = puVar22 + *puVar15;
      do {
        local_b0 = (long)puVar22 + (ulong)*puVar22;
        lVar23 = param_1[0x16];
        lVar11 = param_1[0x1a];
        (**(code **)(*param_1 + 0x18))(local_a0,param_1);
        local_c0 = (undefined8 *)0x0;
        uStack_b8 = 0;
        if ((long *)local_a0[0][2] == param_1 + 5) {
          FUN_00e14860(&local_c0,local_a0);
        }
        puVar6 = local_a0[0];
        if (local_a0[0] != (undefined8 *)0x0) {
          psVar2 = (short *)(local_a0[0] + 3);
          do {
            sVar5 = *psVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar8) {
              *psVar2 = sVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 1) {
            piVar18 = (int *)((long)local_a0[0] + 0x1c);
            do {
              iVar9 = *piVar18;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar8) {
                *piVar18 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_68 = *puVar6;
              FUN_00c44438(lVar12 + 0x8040,&local_68);
            }
          }
          else if (sVar5 == 0) goto LAB_00e140bc;
        }
        FUN_00e14c30(&local_90,plVar10,&local_b0,lVar23,lVar11,&local_a8,&local_c0);
        puVar6 = (undefined8 *)param_1[0x10];
        if (puVar6 < (undefined8 *)param_1[0x11]) {
          lVar23 = param_1[0x12];
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar11 != 0) {
            if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00e14534;
            *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar23;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          }
          *puVar6 = local_90;
          puVar6[1] = local_88;
          puVar6[2] = local_80;
          puVar6[3] = local_78;
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          param_1[0x10] = (long)(puVar6 + 4);
          local_90 = (long *)0x0;
        }
        else {
          FUN_029c0f48(plVar26,&local_90);
          plVar1 = local_90;
          local_90 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            FUN_029c1168(&local_88);
          }
        }
        puVar6 = local_c0;
        if (local_c0 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_c0 + 3);
          do {
            sVar5 = *psVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar8) {
              *psVar2 = sVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 1) {
            piVar18 = (int *)((long)local_c0 + 0x1c);
            do {
              iVar9 = *piVar18;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar8) {
                *piVar18 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar23 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar23;
              local_a0[0] = (undefined8 *)*puVar6;
              FUN_00c44438(lVar23 + 0x8040,local_a0);
            }
          }
          else if (sVar5 == 0) goto LAB_00e140bc;
        }
        puVar22 = puVar22 + 1;
        if (puVar22 == puVar15) {
          return;
        }
      } while( true );
    }
    local_b0 = (long)puVar22 + (ulong)*puVar22;
    lVar23 = param_1[0x16];
    lVar11 = param_1[0x1a];
    (**(code **)(*param_1 + 0x18))(local_a0,param_1);
    local_c0 = (undefined8 *)0x0;
    uStack_b8 = 0;
    if ((long *)local_a0[0][2] == param_1 + 5) {
      FUN_00e14860(&local_c0,local_a0);
    }
    puVar6 = local_a0[0];
    if (local_a0[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_a0[0] + 3);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar18 = (int *)((long)local_a0[0] + 0x1c);
        do {
          iVar9 = *piVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar8) {
            *piVar18 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_68 = *puVar6;
          FUN_00c44438(lVar12 + 0x8040,&local_68);
        }
      }
      else if (sVar5 == 0) goto LAB_00e140bc;
    }
    FUN_00e14c30(&local_90,plVar10,&local_b0,lVar23,lVar11,&local_a8,&local_c0);
    puVar6 = (undefined8 *)param_1[0x10];
    if (puVar6 < (undefined8 *)param_1[0x11]) {
      lVar23 = param_1[0x12];
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 != 0) {
        if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00e14534:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar23;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      }
      *puVar6 = local_90;
      puVar6[1] = local_88;
      puVar6[2] = local_80;
      puVar6[3] = local_78;
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      }
      param_1[0x10] = (long)(puVar6 + 4);
      local_90 = (long *)0x0;
    }
    else {
      FUN_029c0f48(plVar26,&local_90);
      plVar10 = local_90;
      local_90 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        FUN_029c1168(&local_88);
      }
    }
    puVar6 = local_c0;
    if (local_c0 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_c0 + 3);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar18 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar9 = *piVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar8) {
            *piVar18 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar23 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar23;
          local_a0[0] = (undefined8 *)*puVar6;
          FUN_00c44438(lVar23 + 0x8040,local_a0);
        }
      }
      else if (sVar5 == 0) {
LAB_00e140bc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


