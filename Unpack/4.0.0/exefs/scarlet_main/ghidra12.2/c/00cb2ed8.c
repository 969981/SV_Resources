/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb2ed8; name: FUN_00cb2ed8
 */


void FUN_00cb2ed8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  short *psVar16;
  ulong uVar17;
  long lVar18;
  short *psVar19;
  long *plVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  long *plVar23;
  long *local_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 local_79;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x120));
  puVar10 = *(uint **)(param_1 + 0x248);
  puVar12 = *(uint **)(param_1 + 0x250);
  if (puVar10 == puVar12) {
    plVar20 = (long *)*param_3;
  }
  else {
    plVar20 = (long *)*param_3;
    lVar15 = plVar20[4];
    lVar13 = 0;
    if (lVar15 != 0) {
      lVar13 = lVar15 + (long)(plVar20 + 4);
    }
    uVar4 = *(uint *)(plVar20 + 5);
    if (uVar4 == 0) {
      do {
        if (*puVar10 == 0) goto LAB_00cb2fa8;
        puVar10 = puVar10 + 6;
      } while (puVar12 != puVar10);
    }
    else if ((int)uVar4 < 1) {
      do {
        if (*puVar10 == uVar4) goto LAB_00cb2fa8;
        puVar10 = puVar10 + 6;
      } while (puVar12 != puVar10);
    }
    else {
      do {
        if (*puVar10 == uVar4) {
          lVar18 = *(long *)(*(long *)(puVar10 + 2) + 0x20);
          lVar15 = 0;
          if (lVar18 != 0) {
            lVar15 = lVar18 + *(long *)(puVar10 + 2) + 0x20;
          }
          psVar16 = (short *)(lVar15 + 0x10);
          psVar19 = (short *)(lVar13 + 0x10);
          uVar17 = (ulong)uVar4;
          while (*psVar19 == *psVar16) {
            uVar17 = uVar17 - 1;
            psVar19 = psVar19 + 0xc;
            psVar16 = psVar16 + 0xc;
            if (uVar17 == 0) goto LAB_00cb2fa8;
          }
        }
        puVar10 = puVar10 + 6;
      } while (puVar10 != puVar12);
    }
  }
  if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
    plVar23 = plVar20 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = *plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = *plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar13 = plVar20[5];
  local_74 = 2;
  local_88 = 0;
  uStack_80 = 0;
  local_79 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_00cb0eb4(&local_90,&local_88);
  if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
    plVar23 = plVar20 + 2;
    do {
      lVar15 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  puVar21 = *(undefined4 **)(param_1 + 0x250);
  if (puVar21 == *(undefined4 **)(param_1 + 600)) {
    uVar17 = *(ulong *)(param_1 + 0x268);
    lVar15 = (long)puVar21 - *(long *)(param_1 + 0x248) >> 3;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    uVar1 = lVar15 * -0x5555555555555555 + 1;
    if (uVar17 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = (long)*(undefined4 **)(param_1 + 600) - *(long *)(param_1 + 0x248) >> 3;
    uVar14 = lVar18 * 0x5555555555555556;
    if (uVar1 <= uVar14) {
      uVar1 = uVar14;
    }
    if (uVar17 >> 1 <= (ulong)(lVar18 * -0x5555555555555555)) {
      uVar1 = uVar17;
    }
    if (uVar1 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = (**(code **)(**(long **)(param_1 + 0x260) + 0x10))
                         (*(long **)(param_1 + 0x260),uVar1 * 0x18,8);
      if (lVar18 == 0) {
        (**(code **)(**(long **)(param_1 + 0x260) + 0xe8))();
      }
    }
    uVar22 = *(undefined8 *)(param_1 + 0x260);
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00cb35fc;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar22;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    puVar21 = (undefined4 *)(lVar18 + lVar15 * 8);
    *puVar21 = (int)lVar13;
    *(long **)(lVar18 + lVar15 * 8 + 8) = plVar20;
    if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
      plVar23 = plVar20 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = *plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *(long **)(lVar18 + lVar15 * 8 + 0x10) = local_90;
    if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
      plVar23 = local_90 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = *plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    lVar13 = *(long *)(param_1 + 0x248);
    lVar15 = *(long *)(param_1 + 0x250);
    if (lVar15 == lVar13) {
      puVar11 = puVar21;
      lVar15 = lVar13;
    }
    else {
      lVar8 = 0;
      do {
        uVar22 = *(undefined8 *)(param_1 + 0x260);
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00cb35fc;
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar22;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        lVar3 = lVar15 + lVar8;
        *(undefined4 *)((long)puVar21 + lVar8 + -0x18) = *(undefined4 *)(lVar3 + -0x18);
        *(undefined8 *)((long)puVar21 + lVar8 + -0x10) = *(undefined8 *)(lVar3 + -0x10);
        *(undefined8 *)(lVar3 + -0x10) = 0;
        *(undefined8 *)((long)puVar21 + lVar8 + -8) = *(undefined8 *)(lVar3 + -8);
        *(undefined8 *)(lVar3 + -8) = 0;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar13 - lVar15 != lVar8);
      lVar13 = *(long *)(param_1 + 0x248);
      puVar11 = (undefined4 *)((long)puVar21 + lVar8);
      lVar15 = *(long *)(param_1 + 0x250);
    }
    lVar8 = *(long *)(param_1 + 600);
    *(undefined4 **)(param_1 + 0x248) = puVar11;
    *(undefined4 **)(param_1 + 0x250) = puVar21 + 6;
    *(ulong *)(param_1 + 600) = lVar18 + uVar1 * 0x18;
    while (lVar15 != lVar13) {
      plVar23 = *(long **)(lVar15 + -8);
      if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
        plVar2 = plVar23 + 2;
        do {
          lVar18 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)(*plVar23 + 0x18))();
        }
      }
      plVar23 = *(long **)(lVar15 + -0x10);
      lVar15 = lVar15 + -0x18;
      if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
        plVar2 = plVar23 + 2;
        do {
          lVar18 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)(*plVar23 + 0x18))();
        }
      }
    }
    if (lVar13 != 0) {
      lVar8 = lVar8 - lVar13;
      plVar23 = *(long **)(param_1 + 0x260);
      uVar17 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar17 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,lVar13,lVar8,8);
      }
      else {
        FUN_00c48fe8(plVar23,lVar13,lVar8,8);
      }
    }
  }
  else {
    uVar22 = *(undefined8 *)(param_1 + 0x260);
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar15 != 0) {
      if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_00cb35fc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar22;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    }
    *puVar21 = (int)lVar13;
    *(long **)(puVar21 + 2) = plVar20;
    if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
      plVar23 = plVar20 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = *plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *(long **)(puVar21 + 4) = local_90;
    if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
      plVar23 = local_90 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = *plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (lVar15 != 0) {
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    *(undefined4 **)(param_1 + 0x250) = puVar21 + 6;
  }
  FUN_00cb3608(*(undefined8 *)(param_1 + 0x20),param_2,
               *(undefined8 *)(*(long *)(param_1 + 0x250) + -0x10));
  FUN_00cb3608(*(undefined8 *)(param_1 + 0x20),local_90,
               *(undefined8 *)(*(long *)(param_1 + 0x250) + -0x10));
  if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
    plVar23 = local_90 + 2;
    do {
      lVar13 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*local_90 + 0x18))(local_90);
    }
  }
  if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
    plVar23 = plVar20 + 2;
    do {
      lVar13 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
LAB_00cb2fb8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
  return;
LAB_00cb2fa8:
  FUN_00cb3608(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(puVar10 + 2));
  goto LAB_00cb2fb8;
}


