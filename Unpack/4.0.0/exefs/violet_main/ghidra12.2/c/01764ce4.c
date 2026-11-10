/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01764ce4; name: FUN_01764ce4
 */


undefined1  [16] FUN_01764ce4(long *param_1,long *param_2,int *param_3)

{
  ulong *puVar1;
  LightEventType *pLVar2;
  ulong *puVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong *puVar22;
  undefined8 uVar23;
  long *plVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  long local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  int local_98 [2];
  int local_90 [2];
  int local_88 [2];
  int local_80 [2];
  int local_78 [2];
  int local_70 [2];
  int local_68;
  int local_64;
  
  puVar1 = (ulong *)(param_1 + 8);
  uVar9 = nn::os::GetCurrentThread();
  do {
    uVar18 = *puVar1;
    lVar10 = param_1[9];
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar18;
      param_1[9] = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 10);
LAB_01764d2c:
  while ((uVar18 != 0 && (uVar9 != uVar18))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      uVar18 = *puVar1;
      lVar10 = param_1[9];
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar18;
        param_1[9] = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    uVar15 = *puVar1;
    if (uVar15 != uVar18 || param_1[9] != lVar10) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_01764d5c;
    }
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar18;
      *(long *)((long)param_1 + 0x44) = lVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar13 = true;
LAB_01764d5c:
  puVar7 = PTR_DAT_047e1bc8;
  puVar6 = PTR_DAT_047e1bc0;
  puVar5 = PTR_DAT_047e1bb8;
  if (!bVar13) {
    uVar18 = uVar15;
    lVar10 = param_1[9];
    goto LAB_01764d2c;
  }
  puVar22 = (ulong *)*param_1;
  puVar3 = (ulong *)param_1[1];
  if (puVar22 == puVar3) {
    uVar23 = 0;
    bVar13 = true;
  }
  else {
    uVar25 = 0;
    do {
      uVar9 = *puVar22;
      (**(code **)puVar5)(uVar9,&local_b8,&local_64);
      if ((*param_3 == (int)local_b8) && (param_3[1] == local_64)) {
        (**(code **)puVar6)(uVar9,&local_b8,&local_64);
        if ((param_3[2] == (int)local_b8) &&
           (((param_3[3] == local_64 &&
             ((**(code **)puVar7)(uVar9,&local_68), param_3[4] == local_68)) &&
            ((**(code **)PTR_DAT_047e1bd0)(uVar9,local_70), param_3[9] == local_70[0])))) {
          (**(code **)PTR_DAT_047e1bd8)(uVar9,local_78);
          iVar8 = param_3[10];
          if (iVar8 == 2) {
            iVar8 = 5;
            if (param_3[0xb] == 0) {
              iVar8 = 1;
            }
          }
          else {
            switch(iVar8) {
            case 0:
              break;
            case 1:
              iVar8 = 3;
              break;
            default:
              iVar8 = 1;
              break;
            case 3:
              iVar8 = 4;
              if (param_3[0xb] != 0) {
                iVar8 = 6;
              }
              break;
            case 4:
              iVar8 = 2;
              break;
            case 5:
              iVar8 = 8;
              break;
            case 6:
              iVar8 = 9;
              break;
            case 7:
              iVar8 = 7;
              break;
            case 8:
              iVar8 = 10;
            }
          }
          if (((iVar8 == local_78[0]) &&
              ((**(code **)PTR_DAT_047e1be0)(uVar9,local_80,local_88,local_90,local_98),
              param_3[5] == local_80[0])) &&
             ((param_3[6] == local_88[0] &&
              ((param_3[7] == local_90[0] && (param_3[7] == local_98[0])))))) {
            bVar13 = false;
            uVar9 = (ulong)uVar25;
            uVar23 = 1;
            goto LAB_01764f08;
          }
        }
      }
      puVar22 = puVar22 + 4;
      uVar25 = uVar25 + 1;
    } while (puVar3 != puVar22);
    uVar23 = 0;
    bVar13 = true;
  }
LAB_01764f08:
  do {
    uVar18 = *puVar1;
    lVar10 = param_1[9];
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar18;
      param_1[9] = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    uVar15 = *puVar1;
    lVar11 = param_1[9];
    if (uVar15 != uVar18 || lVar11 != lVar10) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_01764f44;
    }
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar18;
      *(long *)((long)param_1 + 0x44) = lVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar14 = true;
LAB_01764f44:
  if (!bVar14) {
    do {
      uVar18 = *puVar1;
      lVar10 = param_1[9];
      if (uVar18 != uVar15 || lVar10 != lVar11) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto joined_r0x01765558;
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar14) {
        *puVar1 = uVar15;
        *(long *)((long)param_1 + 0x44) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar14 = true;
joined_r0x01765558:
    if (!bVar14) {
      do {
        uVar15 = *puVar1;
        lVar11 = param_1[9];
        if (uVar15 != uVar18 || lVar11 != lVar10) {
          bVar14 = false;
          ClearExclusiveLocal();
          uVar18 = uVar15;
          lVar10 = lVar11;
          goto joined_r0x01765558;
        }
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar14) {
          *puVar1 = uVar18;
          *(long *)((long)param_1 + 0x44) = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar14 = true;
      uVar18 = uVar15;
      lVar10 = lVar11;
      goto joined_r0x01765558;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  if (!bVar13) {
LAB_017651d8:
    auVar26._8_8_ = uVar9;
    auVar26._0_8_ = uVar23;
    return auVar26;
  }
  param_2 = (long *)*param_2;
  lVar10 = (**(code **)(*param_2 + 0x10))(param_2,0x18,8);
  if (lVar10 == 0) {
    local_a8 = 0;
    local_a0 = 0;
    local_b8 = 0;
    local_b0 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_0176582c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    (**(code **)PTR_DAT_047e1be8)(lVar10);
    *(undefined1 *)(lVar10 + 0x11) = 1;
    local_a8 = 0x18;
    local_a0 = 8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    local_b8 = lVar10;
    local_b0 = param_2;
  }
  (**(code **)PTR_DAT_047e1bf0)(lVar10,*param_3,param_3[1]);
  (**(code **)PTR_DAT_047e1bf8)(lVar10,param_3[2],param_3[3]);
  (**(code **)PTR_DAT_047e1c00)(lVar10,param_3[4]);
  (**(code **)PTR_DAT_047e1c08)(lVar10,param_3[9]);
  iVar8 = param_3[10];
  if (iVar8 == 2) {
    iVar8 = 5;
    if (param_3[0xb] == 0) {
      iVar8 = 1;
    }
  }
  else {
    switch(iVar8) {
    case 0:
      break;
    case 1:
      iVar8 = 3;
      break;
    default:
      iVar8 = 1;
      break;
    case 3:
      iVar8 = 4;
      if (param_3[0xb] != 0) {
        iVar8 = 6;
      }
      break;
    case 4:
      iVar8 = 2;
      break;
    case 5:
      iVar8 = 8;
      break;
    case 6:
      iVar8 = 9;
      break;
    case 7:
      iVar8 = 7;
      break;
    case 8:
      iVar8 = 10;
    }
  }
  (**(code **)PTR_DAT_047e1c10)(lVar10,iVar8);
  (**(code **)PTR_DAT_047e1c18)(lVar10,param_3[5],param_3[6],param_3[7],param_3[8]);
  uVar9 = nn::os::GetCurrentThread();
  while (*puVar1 == 0 && param_1[9] == 0) {
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar9;
      param_1[9] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_017650b4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*puVar1 != 0 || param_1[9] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*puVar1 == 0 && param_1[9] == 0) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = uVar9;
            param_1[9] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_017650b4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar9;
      param_1[9] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_017650b4:
  plVar21 = (long *)param_1[1];
  if (plVar21 < (long *)param_1[2]) {
    lVar10 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      *plVar21 = local_b8;
      plVar21[2] = local_a8;
      plVar21[3] = local_a0;
      plVar21[1] = (long)local_b0;
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_0176582c;
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar10;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *plVar21 = local_b8;
      plVar21[1] = (long)local_b0;
      plVar21[2] = local_a8;
      plVar21[3] = local_a0;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    local_b8 = 0;
    param_1[1] = (long)(plVar21 + 4);
  }
  else {
    uVar18 = param_1[4];
    lVar10 = (long)plVar21 - *param_1 >> 5;
    uVar9 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar18) {
      uVar18 = 0x7fffffffffffffff;
    }
    if (uVar18 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = param_1[2] - *param_1;
    uVar15 = lVar11 >> 4;
    if (uVar9 <= uVar15) {
      uVar9 = uVar15;
    }
    if (uVar18 >> 1 <= (ulong)(lVar11 >> 5)) {
      uVar9 = uVar18;
    }
    if (uVar9 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 5,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    plVar21 = (long *)(lVar11 + lVar10 * 0x20);
    lVar10 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 == 0) {
      *plVar21 = local_b8;
      plVar21[1] = (long)local_b0;
      plVar21[2] = local_a8;
      plVar21[3] = local_a0;
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0176582c;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar10;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *plVar21 = local_b8;
      plVar21[1] = (long)local_b0;
      plVar21[2] = local_a8;
      plVar21[3] = local_a0;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    local_b8 = 0;
    plVar20 = (long *)*param_1;
    plVar24 = (long *)param_1[1];
    if (plVar24 == plVar20) {
      plVar17 = plVar21;
      plVar24 = plVar20;
    }
    else {
      plVar19 = plVar21;
      do {
        lVar10 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0176582c;
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar10;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        lVar10 = plVar24[-4];
        plVar24[-4] = 0;
        plVar19[-4] = lVar10;
        lVar10 = plVar24[-3];
        lVar16 = plVar24[-1];
        plVar19[-2] = plVar24[-2];
        plVar19[-1] = lVar16;
        plVar17 = plVar19 + -4;
        plVar24 = plVar24 + -4;
        plVar19[-3] = lVar10;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        plVar19 = plVar17;
      } while (plVar20 != plVar24);
      plVar20 = (long *)param_1[1];
      plVar24 = (long *)*param_1;
    }
    *param_1 = (long)plVar17;
    param_1[1] = (long)(plVar21 + 4);
    lVar10 = param_1[2];
    param_1[2] = lVar11 + uVar9 * 0x20;
    if (plVar20 != plVar24) {
      plVar21 = plVar20 + -4;
      lVar11 = *plVar21;
      *plVar21 = 0;
      if (lVar11 != 0) {
        FUN_02750e40(plVar20 + -3);
      }
      if (plVar21 != plVar24) {
        plVar21 = plVar20 + -8;
        lVar11 = *plVar21;
        *plVar21 = 0;
        if (lVar11 != 0) {
          FUN_02750e40(plVar20 + -7);
        }
        if (plVar21 != plVar24) {
          plVar21 = plVar20 + -0xc;
          lVar11 = *plVar21;
          *plVar21 = 0;
          if (lVar11 != 0) {
            FUN_02750e40(plVar20 + -0xb);
          }
          if (plVar21 != plVar24) {
            plVar21 = plVar20 + -0x10;
            lVar11 = *plVar21;
            *plVar21 = 0;
            if (lVar11 != 0) {
              FUN_02750e40(plVar20 + -0xf);
            }
            if (plVar21 != plVar24) {
              do {
                lVar11 = plVar20[-0x14];
                plVar20[-0x14] = 0;
                if (lVar11 != 0) {
                  FUN_02750e40(plVar20 + -0x13);
                }
                plVar20 = plVar20 + -4;
              } while (plVar24 + 0x10 != plVar20);
            }
          }
        }
      }
    }
    if (plVar24 != (long *)0x0) {
      plVar21 = (long *)param_1[3];
      uVar9 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,plVar24,lVar10 - (long)plVar24,8);
      }
      else {
        FUN_00c48fe8(plVar21,plVar24,lVar10 - (long)plVar24,8);
      }
    }
  }
  uVar9 = (param_1[1] - *param_1 >> 5) - 1;
  do {
    uVar18 = *puVar1;
    lVar10 = param_1[9];
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar18;
      param_1[9] = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    uVar15 = *puVar1;
    lVar11 = param_1[9];
    if (uVar15 != uVar18 || lVar11 != lVar10) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_017651bc;
    }
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = 0;
      *(long *)((long)param_1 + 0x44) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar13 = true;
LAB_017651bc:
  if (!bVar13) {
    do {
      uVar18 = *puVar1;
      lVar10 = param_1[9];
      if (uVar18 != uVar15 || lVar10 != lVar11) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x017657dc;
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = 0;
        *(long *)((long)param_1 + 0x44) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar13 = true;
joined_r0x017657dc:
    if (!bVar13) {
      do {
        uVar15 = *puVar1;
        lVar11 = param_1[9];
        if (uVar15 != uVar18 || lVar11 != lVar10) {
          bVar13 = false;
          ClearExclusiveLocal();
          uVar18 = uVar15;
          lVar10 = lVar11;
          goto joined_r0x017657dc;
        }
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = 0;
          *(long *)((long)param_1 + 0x44) = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar13 = true;
      uVar18 = uVar15;
      lVar10 = lVar11;
      goto joined_r0x017657dc;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  lVar10 = local_b8;
  local_b8 = 0;
  if (lVar10 != 0) {
    FUN_02750e40(&local_b0);
  }
  uVar23 = 1;
  goto LAB_017651d8;
}


