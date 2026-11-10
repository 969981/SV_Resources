/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c54a28; name: FUN_00c54a28
 */


undefined1  [16] FUN_00c54a28(long *param_1,long *param_2,int *param_3)

{
  ulong *puVar1;
  LightEventType *pLVar2;
  ulong *puVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  bool bVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong *puVar22;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  long local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  puVar1 = (ulong *)(param_1 + 8);
  uVar10 = nn::os::GetCurrentThread();
  do {
    uVar19 = *puVar1;
    lVar11 = param_1[9];
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar19;
      param_1[9] = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 10);
LAB_00c54a70:
  while ((uVar19 != 0 && (uVar10 != uVar19))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      uVar19 = *puVar1;
      lVar11 = param_1[9];
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar14) {
        *puVar1 = uVar19;
        param_1[9] = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    uVar16 = *puVar1;
    if (uVar16 != uVar19 || param_1[9] != lVar11) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_00c54aa0;
    }
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar19;
      *(long *)((long)param_1 + 0x44) = lVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar14 = true;
LAB_00c54aa0:
  puVar7 = PTR_DAT_047e19f8;
  puVar6 = PTR_DAT_047e19f0;
  puVar5 = PTR_DAT_047e19e8;
  if (!bVar14) {
    uVar19 = uVar16;
    lVar11 = param_1[9];
    goto LAB_00c54a70;
  }
  puVar22 = (ulong *)*param_1;
  puVar3 = (ulong *)param_1[1];
  if (puVar22 == puVar3) {
    uVar23 = 0;
    bVar14 = true;
  }
  else {
    uVar26 = 0;
    do {
      uVar10 = *puVar22;
      iVar9 = param_3[1];
      iVar8 = (**(code **)puVar5)(uVar10);
      if ((iVar9 == iVar8) &&
         (iVar9 = *param_3, iVar8 = (**(code **)PTR_DAT_047e1a00)(uVar10), iVar9 == iVar8)) {
        iVar9 = (uint)(param_3[2] != 1) << 1;
        if (param_3[2] == 2) {
          iVar9 = 1;
        }
        iVar8 = (**(code **)puVar6)(uVar10);
        if ((iVar9 == iVar8) &&
           (iVar9 = param_3[3], iVar8 = (**(code **)puVar7)(uVar10), iVar9 == iVar8)) {
          bVar14 = false;
          uVar10 = (ulong)uVar26;
          uVar23 = 1;
          goto LAB_00c54b90;
        }
      }
      puVar22 = puVar22 + 4;
      uVar26 = uVar26 + 1;
    } while (puVar3 != puVar22);
    uVar23 = 0;
    bVar14 = true;
  }
LAB_00c54b90:
  do {
    uVar19 = *puVar1;
    lVar11 = param_1[9];
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = uVar19;
      param_1[9] = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    uVar16 = *puVar1;
    lVar12 = param_1[9];
    if (uVar16 != uVar19 || lVar12 != lVar11) {
      bVar15 = false;
      ClearExclusiveLocal();
      goto LAB_00c54bcc;
    }
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = uVar19;
      *(long *)((long)param_1 + 0x44) = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar15 = true;
LAB_00c54bcc:
  if (!bVar15) {
    do {
      uVar19 = *puVar1;
      lVar11 = param_1[9];
      if (uVar19 != uVar16 || lVar11 != lVar12) {
        bVar15 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c550d8;
      }
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar15) {
        *puVar1 = uVar16;
        *(long *)((long)param_1 + 0x44) = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar15 = true;
joined_r0x00c550d8:
    if (!bVar15) {
      do {
        uVar16 = *puVar1;
        lVar12 = param_1[9];
        if (uVar16 != uVar19 || lVar12 != lVar11) {
          bVar15 = false;
          ClearExclusiveLocal();
          uVar19 = uVar16;
          lVar11 = lVar12;
          goto joined_r0x00c550d8;
        }
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar15) {
          *puVar1 = uVar19;
          *(long *)((long)param_1 + 0x44) = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar15 = true;
      uVar19 = uVar16;
      lVar11 = lVar12;
      goto joined_r0x00c550d8;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  if (!bVar14) {
LAB_00c54fb4:
    auVar27._8_8_ = uVar10;
    auVar27._0_8_ = uVar23;
    return auVar27;
  }
  param_2 = (long *)*param_2;
  lVar11 = (**(code **)(*param_2 + 0x10))(param_2,8,4);
  if (lVar11 == 0) {
    local_70 = 0;
    local_68 = 0;
    local_80 = 0;
    local_78 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00c552c4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_2;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    (**(code **)PTR_DAT_047e1a08)(lVar11);
    *(undefined1 *)(lVar11 + 5) = 1;
    local_70 = 8;
    local_68 = 4;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    local_80 = lVar11;
    local_78 = param_2;
  }
  (**(code **)PTR_DAT_047e1a10)(lVar11,param_3[1]);
  (**(code **)PTR_DAT_047e1a18)(lVar11,*param_3);
  iVar9 = (uint)(param_3[2] != 1) << 1;
  if (param_3[2] == 2) {
    iVar9 = 1;
  }
  (**(code **)PTR_DAT_047e1a20)(lVar11,iVar9);
  (**(code **)PTR_DAT_047e1a28)(lVar11,param_3[3]);
  uVar10 = nn::os::GetCurrentThread();
  while (*puVar1 == 0 && param_1[9] == 0) {
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar10;
      param_1[9] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00c54d0c;
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
          bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar14) {
            *puVar1 = uVar10;
            param_1[9] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c54d0c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar10;
      param_1[9] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c54d0c:
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_00c552f4(param_1,&local_80);
  }
  else {
    uVar19 = param_1[4];
    lVar11 = param_1[1] - *param_1 >> 5;
    uVar10 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar19) {
      uVar19 = 0x7fffffffffffffff;
    }
    if (uVar19 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_1[2] - *param_1;
    uVar16 = lVar12 >> 4;
    if (uVar10 <= uVar16) {
      uVar10 = uVar16;
    }
    if (uVar19 >> 1 <= (ulong)(lVar12 >> 5)) {
      uVar10 = uVar19;
    }
    if (uVar10 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar10 << 5,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    plVar21 = (long *)(lVar12 + lVar11 * 0x20);
    lVar11 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar13 == 0) {
      plVar21[2] = local_70;
      plVar21[3] = local_68;
      *plVar21 = local_80;
      plVar21[1] = (long)local_78;
    }
    else {
      if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00c552c4;
      *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar11;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      plVar21[2] = local_70;
      plVar21[3] = local_68;
      *plVar21 = local_80;
      plVar21[1] = (long)local_78;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    }
    local_80 = 0;
    plVar20 = (long *)*param_1;
    plVar24 = (long *)param_1[1];
    if (plVar24 == plVar20) {
      plVar18 = plVar21;
      plVar24 = plVar20;
    }
    else {
      plVar25 = plVar21;
      do {
        lVar11 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00c552c4;
          *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        }
        lVar11 = plVar24[-4];
        plVar24[-4] = 0;
        plVar25[-4] = lVar11;
        lVar11 = plVar24[-3];
        lVar17 = plVar24[-1];
        plVar25[-2] = plVar24[-2];
        plVar25[-1] = lVar17;
        plVar18 = plVar25 + -4;
        plVar24 = plVar24 + -4;
        plVar25[-3] = lVar11;
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        plVar25 = plVar18;
      } while (plVar20 != plVar24);
      plVar20 = (long *)*param_1;
      plVar24 = (long *)param_1[1];
    }
    lVar11 = param_1[2];
    param_1[2] = lVar12 + uVar10 * 0x20;
    *param_1 = (long)plVar18;
    param_1[1] = (long)(plVar21 + 4);
    if (plVar24 != plVar20) {
      plVar21 = plVar24 + -4;
      lVar12 = *plVar21;
      *plVar21 = 0;
      if (lVar12 != 0) {
        FUN_00c58184(plVar24 + -3);
      }
      if (plVar21 != plVar20) {
        plVar21 = plVar24 + -8;
        lVar12 = *plVar21;
        *plVar21 = 0;
        if (lVar12 != 0) {
          FUN_00c58184(plVar24 + -7);
        }
        if (plVar21 != plVar20) {
          plVar21 = plVar24 + -0xc;
          lVar12 = *plVar21;
          *plVar21 = 0;
          if (lVar12 != 0) {
            FUN_00c58184(plVar24 + -0xb);
          }
          if (plVar21 != plVar20) {
            do {
              lVar12 = plVar24[-0x10];
              plVar24[-0x10] = 0;
              if (lVar12 != 0) {
                FUN_00c58184(plVar24 + -0xf);
              }
              plVar24 = plVar24 + -4;
            } while (plVar20 + 0xc != plVar24);
          }
        }
      }
    }
    if (plVar20 != (long *)0x0) {
      plVar21 = (long *)param_1[3];
      uVar10 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,plVar20,lVar11 - (long)plVar20,8);
      }
      else {
        FUN_00c48fe8(plVar21,plVar20,lVar11 - (long)plVar20,8);
      }
    }
  }
  uVar10 = (param_1[1] - *param_1 >> 5) - 1;
  do {
    uVar19 = *puVar1;
    lVar11 = param_1[9];
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar19;
      param_1[9] = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    uVar16 = *puVar1;
    lVar12 = param_1[9];
    if (uVar16 != uVar19 || lVar12 != lVar11) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_00c54f98;
    }
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = 0;
      *(long *)((long)param_1 + 0x44) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar14 = true;
LAB_00c54f98:
  if (!bVar14) {
    do {
      uVar19 = *puVar1;
      lVar11 = param_1[9];
      if (uVar19 != uVar16 || lVar11 != lVar12) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c55274;
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar14) {
        *puVar1 = 0;
        *(long *)((long)param_1 + 0x44) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar14 = true;
joined_r0x00c55274:
    if (!bVar14) {
      do {
        uVar16 = *puVar1;
        lVar12 = param_1[9];
        if (uVar16 != uVar19 || lVar12 != lVar11) {
          bVar14 = false;
          ClearExclusiveLocal();
          uVar19 = uVar16;
          lVar11 = lVar12;
          goto joined_r0x00c55274;
        }
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar14) {
          *puVar1 = 0;
          *(long *)((long)param_1 + 0x44) = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar14 = true;
      uVar19 = uVar16;
      lVar11 = lVar12;
      goto joined_r0x00c55274;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  lVar11 = local_80;
  local_80 = 0;
  if (lVar11 != 0) {
    FUN_00c58184(&local_78);
  }
  uVar23 = 1;
  goto LAB_00c54fb4;
}


