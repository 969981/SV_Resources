/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c55d98; name: FUN_00c55d98
 */


undefined1  [16] FUN_00c55d98(long *param_1,long *param_2,char *param_3)

{
  ulong *puVar1;
  LightEventType *pLVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  long local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  puVar1 = (ulong *)(param_1 + 8);
  uVar8 = nn::os::GetCurrentThread();
  do {
    uVar17 = *puVar1;
    lVar9 = param_1[9];
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar17;
      param_1[9] = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 10);
LAB_00c55de0:
  while ((uVar17 != 0 && (uVar8 != uVar17))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      uVar17 = *puVar1;
      lVar9 = param_1[9];
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = uVar17;
        param_1[9] = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    uVar14 = *puVar1;
    if (uVar14 != uVar17 || param_1[9] != lVar9) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00c55e10;
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar17;
      *(long *)((long)param_1 + 0x44) = lVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar12 = true;
LAB_00c55e10:
  puVar4 = PTR_DAT_047e1b30;
  if (!bVar12) {
    uVar17 = uVar14;
    lVar9 = param_1[9];
    goto LAB_00c55de0;
  }
  puVar23 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar23 == puVar3) {
    uVar21 = 0;
    bVar12 = true;
  }
  else {
    uVar24 = 0;
    uVar8 = 5;
    do {
      uVar21 = *puVar23;
      cVar5 = (**(code **)puVar4)(uVar21,0);
      if (((((((bool)*param_3 == (cVar5 != '\0')) &&
             (cVar5 = (**(code **)puVar4)(uVar21,1), (bool)param_3[1] == (cVar5 != '\0'))) &&
            (cVar5 = (**(code **)puVar4)(uVar21,2), (bool)param_3[2] == (cVar5 != '\0'))) &&
           ((cVar5 = (**(code **)puVar4)(uVar21,3), (bool)param_3[3] == (cVar5 != '\0') &&
            (cVar5 = (**(code **)puVar4)(uVar21,4), (bool)param_3[4] == (cVar5 != '\0'))))) &&
          ((cVar5 = (**(code **)puVar4)(uVar21,5), (bool)param_3[5] == (cVar5 != '\0') &&
           ((cVar5 = (**(code **)puVar4)(uVar21,6), (bool)param_3[6] == (cVar5 != '\0') &&
            (cVar5 = (**(code **)puVar4)(uVar21,7), (bool)param_3[7] == (cVar5 != '\0'))))))) &&
         ((iVar7 = *(int *)(param_3 + 8), iVar6 = (**(code **)PTR_DAT_047e1b38)(uVar21),
          iVar7 == iVar6 &&
          (iVar7 = *(int *)(param_3 + 0xc), iVar6 = (**(code **)PTR_DAT_047e1b40)(uVar21),
          iVar7 == iVar6)))) {
        bVar12 = false;
        uVar8 = (ulong)uVar24;
        uVar21 = 1;
        goto LAB_00c55fcc;
      }
      puVar23 = puVar23 + 4;
      uVar24 = uVar24 + 1;
    } while (puVar3 != puVar23);
    uVar21 = 0;
    bVar12 = true;
  }
LAB_00c55fcc:
  do {
    uVar17 = *puVar1;
    lVar9 = param_1[9];
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar17;
      param_1[9] = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    uVar14 = *puVar1;
    lVar10 = param_1[9];
    if (uVar14 != uVar17 || lVar10 != lVar9) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_00c56008;
    }
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar17;
      *(long *)((long)param_1 + 0x44) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar13 = true;
LAB_00c56008:
  if (!bVar13) {
    do {
      uVar17 = *puVar1;
      lVar9 = param_1[9];
      if (uVar17 != uVar14 || lVar9 != lVar10) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c5655c;
      }
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar14;
        *(long *)((long)param_1 + 0x44) = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar13 = true;
joined_r0x00c5655c:
    if (!bVar13) {
      do {
        uVar14 = *puVar1;
        lVar10 = param_1[9];
        if (uVar14 != uVar17 || lVar10 != lVar9) {
          bVar13 = false;
          ClearExclusiveLocal();
          uVar17 = uVar14;
          lVar9 = lVar10;
          goto joined_r0x00c5655c;
        }
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = uVar17;
          *(long *)((long)param_1 + 0x44) = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar13 = true;
      uVar17 = uVar14;
      lVar9 = lVar10;
      goto joined_r0x00c5655c;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  if (!bVar12) {
LAB_00c56444:
    auVar25._8_8_ = uVar8;
    auVar25._0_8_ = uVar21;
    return auVar25;
  }
  param_2 = (long *)*param_2;
  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,8,4);
  if (lVar9 == 0) {
    local_70 = 0;
    local_68 = 0;
    local_80 = 0;
    local_78 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00c5673c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    (**(code **)PTR_DAT_047e1b48)(lVar9);
    *(undefined1 *)(lVar9 + 5) = 1;
    local_70 = 8;
    local_68 = 4;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_80 = lVar9;
    local_78 = param_2;
  }
  puVar4 = PTR_DAT_047e1b50;
  (**(code **)PTR_DAT_047e1b50)(lVar9,0,*param_3);
  (**(code **)puVar4)(lVar9,1,param_3[1]);
  (**(code **)puVar4)(lVar9,2,param_3[2]);
  (**(code **)puVar4)(lVar9,3,param_3[3]);
  (**(code **)puVar4)(lVar9,4,param_3[4]);
  (**(code **)puVar4)(lVar9,5,param_3[5]);
  (**(code **)puVar4)(lVar9,6,param_3[6]);
  (**(code **)puVar4)(lVar9,7,param_3[7]);
  (**(code **)PTR_DAT_047e1b58)(lVar9,*(undefined4 *)(param_3 + 0xc));
  (**(code **)PTR_DAT_047e1b60)(lVar9,*(undefined4 *)(param_3 + 8));
  uVar8 = nn::os::GetCurrentThread();
  while (*puVar1 == 0 && param_1[9] == 0) {
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar8;
      param_1[9] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00c561a8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*puVar1 != 0 || param_1[9] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*puVar1 == 0 && param_1[9] == 0) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar12) {
            *puVar1 = uVar8;
            param_1[9] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00c561a8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar8;
      param_1[9] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00c561a8:
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_00c56764(param_1,&local_80);
  }
  else {
    uVar17 = param_1[4];
    lVar9 = param_1[1] - *param_1 >> 5;
    uVar8 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[2] - *param_1;
    uVar14 = lVar10 >> 4;
    if (uVar8 <= uVar14) {
      uVar8 = uVar14;
    }
    if (uVar17 >> 1 <= (ulong)(lVar10 >> 5)) {
      uVar8 = uVar17;
    }
    if (uVar8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 5,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    plVar20 = (long *)(lVar10 + lVar9 * 0x20);
    lVar9 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      plVar20[2] = local_70;
      plVar20[3] = local_68;
      *plVar20 = local_80;
      plVar20[1] = (long)local_78;
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00c5673c;
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar9;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      plVar20[2] = local_70;
      plVar20[3] = local_68;
      *plVar20 = local_80;
      plVar20[1] = (long)local_78;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    local_80 = 0;
    plVar19 = (long *)*param_1;
    plVar18 = (long *)param_1[1];
    if (plVar18 == plVar19) {
      plVar16 = plVar20;
      plVar18 = plVar19;
    }
    else {
      plVar22 = plVar20;
      do {
        lVar9 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 != 0) {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00c5673c;
          *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar9;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        }
        lVar9 = plVar18[-4];
        plVar18[-4] = 0;
        plVar22[-4] = lVar9;
        lVar9 = plVar18[-3];
        lVar15 = plVar18[-1];
        plVar22[-2] = plVar18[-2];
        plVar22[-1] = lVar15;
        plVar16 = plVar22 + -4;
        plVar18 = plVar18 + -4;
        plVar22[-3] = lVar9;
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        plVar22 = plVar16;
      } while (plVar19 != plVar18);
      plVar19 = (long *)*param_1;
      plVar18 = (long *)param_1[1];
    }
    lVar9 = param_1[2];
    *param_1 = (long)plVar16;
    param_1[1] = (long)(plVar20 + 4);
    param_1[2] = lVar10 + uVar8 * 0x20;
    if (plVar18 != plVar19) {
      plVar20 = plVar18 + -4;
      lVar10 = *plVar20;
      *plVar20 = 0;
      if (lVar10 != 0) {
        FUN_00c57dd0(plVar18 + -3);
      }
      if (plVar20 != plVar19) {
        plVar20 = plVar18 + -8;
        lVar10 = *plVar20;
        *plVar20 = 0;
        if (lVar10 != 0) {
          FUN_00c57dd0(plVar18 + -7);
        }
        if (plVar20 != plVar19) {
          do {
            lVar10 = plVar18[-0xc];
            plVar18[-0xc] = 0;
            if (lVar10 != 0) {
              FUN_00c57dd0(plVar18 + -0xb);
            }
            plVar18 = plVar18 + -4;
          } while (plVar19 + 8 != plVar18);
        }
      }
    }
    if (plVar19 != (long *)0x0) {
      plVar20 = (long *)param_1[3];
      uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,plVar19,lVar9 - (long)plVar19,8);
      }
      else {
        FUN_00c48fe8(plVar20,plVar19,lVar9 - (long)plVar19,8);
      }
    }
  }
  uVar8 = (param_1[1] - *param_1 >> 5) - 1;
  do {
    uVar17 = *puVar1;
    lVar9 = param_1[9];
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar17;
      param_1[9] = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    uVar14 = *puVar1;
    lVar10 = param_1[9];
    if (uVar14 != uVar17 || lVar10 != lVar9) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00c56428;
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      *(long *)((long)param_1 + 0x44) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar12 = true;
LAB_00c56428:
  if (!bVar12) {
    do {
      uVar17 = *puVar1;
      lVar9 = param_1[9];
      if (uVar17 != uVar14 || lVar9 != lVar10) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c566ec;
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = 0;
        *(long *)((long)param_1 + 0x44) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar12 = true;
joined_r0x00c566ec:
    if (!bVar12) {
      do {
        uVar14 = *puVar1;
        lVar10 = param_1[9];
        if (uVar14 != uVar17 || lVar10 != lVar9) {
          bVar12 = false;
          ClearExclusiveLocal();
          uVar17 = uVar14;
          lVar9 = lVar10;
          goto joined_r0x00c566ec;
        }
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar12) {
          *puVar1 = 0;
          *(long *)((long)param_1 + 0x44) = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar12 = true;
      uVar17 = uVar14;
      lVar9 = lVar10;
      goto joined_r0x00c566ec;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  lVar9 = local_80;
  local_80 = 0;
  if (lVar9 != 0) {
    FUN_00c57dd0(&local_78);
  }
  uVar21 = 1;
  goto LAB_00c56444;
}


