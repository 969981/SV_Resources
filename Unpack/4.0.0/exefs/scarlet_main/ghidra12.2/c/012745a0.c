/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012745a0; name: FUN_012745a0
 */


void FUN_012745a0(long param_1,long *param_2,long *param_3)

{
  short *psVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  short sVar21;
  ulong uVar22;
  uint uVar23;
  undefined8 uVar24;
  long local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  plVar19 = *(long **)(param_1 + 0x48);
  plVar14 = *(long **)(param_1 + 0x50);
  if ((plVar19 != plVar14) && (*plVar19 != *param_2)) {
    do {
      plVar19 = plVar19 + 6;
      if (plVar14 == plVar19) {
        plVar19 = plVar14;
        goto LAB_012745d4;
      }
    } while (*plVar19 != *param_2);
  }
LAB_012745d4:
  if (plVar14 != plVar19) {
    return;
  }
  lVar15 = *param_3;
  if (lVar15 == 0) {
    return;
  }
  if (*(short *)(lVar15 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar15 + 0x1a);
  sVar21 = *(short *)(lVar15 + 0x1a);
  do {
    sVar5 = *psVar1;
    if (sVar5 == sVar21) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_0127467c;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0127467c:
      bVar7 = false;
    }
    if (bVar7) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        return;
      }
      plVar19 = (long *)(*(long *)(lVar15 + 0x10) + -8);
      iVar9 = (**(code **)(*plVar19 + 0x48))(plVar19);
      if (iVar9 == 0) goto LAB_012747a8;
      uVar23 = 0;
      break;
    }
    sVar21 = sVar5;
    if (sVar5 == 0) {
      return;
    }
  } while( true );
  do {
    local_68 = CONCAT71(local_68._1_7_,1);
    local_68 = CONCAT44(uVar23,(undefined4)local_68);
    plVar14 = (long *)(**(code **)(*plVar19 + 0x58))(plVar19,&local_68);
    local_d8 = *plVar14;
    local_d0 = plVar14[1];
    local_c8 = plVar14[2];
    local_c0 = (long *)plVar14[3];
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x18))();
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00c83a78(&local_78,param_3);
    FUN_00f0dc6c(param_1,&local_78,&local_d8,uVar23,param_1 + 0x80);
    puVar12 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar21 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar21 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar21 == 1) {
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_68 = *puVar12;
          FUN_00c44438(lVar15 + 0x8040,&local_68);
        }
      }
      else if (sVar21 == 0) goto LAB_01274c9c;
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    uVar23 = uVar23 + 1;
    uVar10 = (**(code **)(*plVar19 + 0x48))(plVar19);
  } while (uVar23 < uVar10);
LAB_012747a8:
  iVar9 = (**(code **)(*plVar19 + 0x70))(plVar19);
  if (iVar9 != 0) {
    uVar23 = 0;
    do {
      local_68 = CONCAT71(local_68._1_7_,1);
      local_68 = CONCAT44(uVar23,(undefined4)local_68);
      plVar14 = (long *)(**(code **)(*plVar19 + 0x80))(plVar19,&local_68);
      local_d8 = *plVar14;
      local_d0 = plVar14[1];
      local_c8 = plVar14[2];
      local_c0 = (long *)plVar14[3];
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))();
      }
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_00c83a78(&local_88,param_3);
      FUN_00f0dc6c(param_1,&local_88,&local_d8,uVar23,param_1 + 0xb8);
      puVar12 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar21 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar21 == 1) {
          piVar3 = (int *)((long)local_88 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_68 = *puVar12;
            FUN_00c44438(lVar15 + 0x8040,&local_68);
          }
        }
        else if (sVar21 == 0) goto LAB_01274c9c;
      }
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      uVar23 = uVar23 + 1;
      uVar10 = (**(code **)(*plVar19 + 0x70))(plVar19);
    } while (uVar23 < uVar10);
  }
  iVar9 = (**(code **)(*plVar19 + 0x98))(plVar19);
  if (iVar9 != 0) {
    uVar23 = 0;
    do {
      local_68 = CONCAT71(local_68._1_7_,1);
      local_68 = CONCAT44(uVar23,(undefined4)local_68);
      plVar14 = (long *)(**(code **)(*plVar19 + 0xa8))(plVar19,&local_68);
      local_d8 = *plVar14;
      local_d0 = plVar14[1];
      local_c8 = plVar14[2];
      local_c0 = (long *)plVar14[3];
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))();
      }
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      FUN_00c83a78(&local_98,param_3);
      FUN_00f0dc6c(param_1,&local_98,&local_d8,uVar23,param_1 + 0xf0);
      puVar12 = local_98;
      if (local_98 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_98 + 3);
        do {
          sVar21 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar21 == 1) {
          piVar3 = (int *)((long)local_98 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_68 = *puVar12;
            FUN_00c44438(lVar15 + 0x8040,&local_68);
          }
        }
        else if (sVar21 == 0) goto LAB_01274c9c;
      }
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      uVar23 = uVar23 + 1;
      uVar10 = (**(code **)(*plVar19 + 0x98))(plVar19);
    } while (uVar23 < uVar10);
  }
  iVar9 = (**(code **)(*plVar19 + 200))(plVar19);
  if (iVar9 != 0) {
    uVar23 = 0;
    do {
      local_68 = CONCAT71(local_68._1_7_,1);
      local_68 = CONCAT44(uVar23,(undefined4)local_68);
      plVar14 = (long *)(**(code **)(*plVar19 + 0xd8))(plVar19,&local_68);
      local_d8 = *plVar14;
      local_d0 = plVar14[1];
      local_c8 = plVar14[2];
      local_c0 = (long *)plVar14[3];
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))();
      }
      local_a8 = (undefined8 *)0x0;
      uStack_a0 = 0;
      FUN_00c83a78(&local_a8,param_3);
      FUN_00f0dc6c(param_1,&local_a8,&local_d8,uVar23,param_1 + 0x128);
      puVar12 = local_a8;
      if (local_a8 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_a8 + 3);
        do {
          sVar21 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar21 == 1) {
          piVar3 = (int *)((long)local_a8 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_68 = *puVar12;
            FUN_00c44438(lVar15 + 0x8040,&local_68);
          }
        }
        else if (sVar21 == 0) goto LAB_01274c9c;
      }
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      uVar23 = uVar23 + 1;
      uVar10 = (**(code **)(*plVar19 + 200))(plVar19);
    } while (uVar23 < uVar10);
  }
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_d8 = *param_2;
  local_d0 = param_2[1];
  local_c8 = param_2[2];
  local_c0 = (long *)0x0;
  plVar14 = (long *)param_2[3];
  if (plVar14 == (long *)0x0) {
  }
  else {
    (**(code **)(*plVar14 + 0x18))(plVar14);
    if (local_c0 != (long *)0x0) {
      lVar15 = *local_c0;
      local_c0 = plVar14;
      (**(code **)(lVar15 + 0x20))();
      plVar14 = local_c0;
    }
  }
  local_c0 = plVar14;
  FUN_00c83a78(&local_b8,param_3);
  plVar14 = *(long **)(param_1 + 0x50);
  if (plVar14 == *(long **)(param_1 + 0x58)) {
    lVar15 = (long)plVar14 - *(long *)(param_1 + 0x48) >> 4;
    uVar22 = *(ulong *)(param_1 + 0x68);
    if (0x7ffffffffffffffe < uVar22) {
      uVar22 = 0x7fffffffffffffff;
    }
    uVar2 = lVar15 * -0x5555555555555555 + 1;
    if (uVar22 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar16 = (long)*(long **)(param_1 + 0x58) - *(long *)(param_1 + 0x48) >> 4;
    uVar20 = lVar16 * 0x5555555555555556;
    if (uVar2 <= uVar20) {
      uVar2 = uVar20;
    }
    if (uVar22 >> 1 <= (ulong)(lVar16 * -0x5555555555555555)) {
      uVar2 = uVar22;
    }
    if (uVar2 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                         (*(long **)(param_1 + 0x60),uVar2 * 0x30,8);
      if (lVar16 == 0) {
        (**(code **)(**(long **)(param_1 + 0x60) + 0xe8))();
      }
    }
    uVar24 = *(undefined8 *)(param_1 + 0x60);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_01275374:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar24;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    plVar14 = (long *)(lVar16 + lVar15 * 0x10);
    *plVar14 = local_d8;
    lVar17 = lVar16 + lVar15 * 0x10;
    *(long *)(lVar17 + 8) = local_d0;
    *(long *)(lVar17 + 0x10) = local_c8;
    *(long **)(lVar17 + 0x18) = local_c0;
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x18))();
    }
    lVar15 = lVar16 + lVar15 * 0x10;
    puVar12 = (undefined8 *)(lVar15 + 0x20);
    *puVar12 = 0;
    *(undefined8 *)(lVar15 + 0x28) = 0;
    FUN_00c83a78(puVar12,&local_b8);
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    lVar15 = *(long *)(param_1 + 0x48);
    lVar11 = *(long *)(param_1 + 0x50);
    if (lVar11 == lVar15) {
      plVar18 = plVar14;
      lVar11 = lVar15;
    }
    else {
      lVar17 = 0;
      do {
        uVar24 = *(undefined8 *)(param_1 + 0x60);
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01275374;
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar24;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        }
        lVar4 = lVar11 + lVar17;
        *(undefined8 *)((long)plVar14 + lVar17 + -0x30) = *(undefined8 *)(lVar4 + -0x30);
        *(undefined8 *)((long)plVar14 + lVar17 + -0x28) = *(undefined8 *)(lVar4 + -0x28);
        *(undefined8 *)((long)plVar14 + lVar17 + -0x20) = *(undefined8 *)(lVar4 + -0x20);
        uVar24 = *(undefined8 *)(lVar4 + -0x18);
        *(undefined8 *)(lVar4 + -0x18) = 0;
        puVar12 = (undefined8 *)((long)plVar14 + lVar17 + -0x10);
        *puVar12 = 0;
        *(undefined8 *)((long)plVar14 + lVar17 + -8) = 0;
        *(undefined8 *)((long)plVar14 + lVar17 + -0x18) = uVar24;
        FUN_00f0ecf0(puVar12,lVar4 + -0x10);
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        lVar17 = lVar17 + -0x30;
      } while (lVar15 - lVar11 != lVar17);
      lVar15 = *(long *)(param_1 + 0x48);
      lVar11 = *(long *)(param_1 + 0x50);
      plVar18 = (long *)((long)plVar14 + lVar17);
    }
    lVar17 = *(long *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = lVar16 + uVar2 * 0x30;
    *(long **)(param_1 + 0x48) = plVar18;
    *(long **)(param_1 + 0x50) = plVar14 + 6;
    puVar8 = PTR_LAB_047d3de8;
    while (lVar11 != lVar15) {
      puVar12 = *(undefined8 **)(lVar11 + -0x10);
      if (puVar12 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar12 + 3);
        do {
          sVar21 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar21 == 1) {
          piVar3 = (int *)((long)puVar12 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_68 = *puVar12;
            FUN_00c44438(lVar16 + 0x8040,&local_68);
          }
        }
        else if (sVar21 == 0) goto LAB_01274c9c;
      }
      plVar14 = (long *)(lVar11 + -0x18);
      lVar11 = lVar11 + -0x30;
      if ((long *)*plVar14 != (long *)0x0) {
        (**(code **)(*(long *)*plVar14 + 0x20))();
      }
    }
    if (lVar15 != 0) {
      plVar14 = *(long **)(param_1 + 0x60);
      lVar17 = lVar17 - lVar15;
      uVar22 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar22 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,lVar17,8);
      }
      else {
        FUN_00c48fe8(plVar14,lVar15,lVar17,8);
      }
    }
  }
  else {
    uVar24 = *(undefined8 *)(param_1 + 0x60);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar15 != 0) {
      if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_01275374;
      *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar24;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    }
    *plVar14 = local_d8;
    plVar14[1] = local_d0;
    plVar14[2] = local_c8;
    plVar14[3] = (long)local_c0;
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x18))();
    }
    plVar14[4] = 0;
    plVar14[5] = 0;
    FUN_00c83a78(plVar14 + 4,&local_b8);
    if (lVar15 != 0) {
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x50) = plVar14 + 6;
  }
  puVar12 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b8 + 3);
    do {
      sVar21 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 1) {
      piVar3 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_68 = *puVar12;
        FUN_00c44438(lVar15 + 0x8040,&local_68);
      }
    }
    else if (sVar21 == 0) {
LAB_01274c9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  (**(code **)(*plVar19 + 0x18))(plVar19);
  return;
}


