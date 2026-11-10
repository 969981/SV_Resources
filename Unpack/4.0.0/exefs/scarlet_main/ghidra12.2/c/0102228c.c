/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0102228c; name: FUN_0102228c
 */


void FUN_0102228c(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  byte bVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 uVar24;
  byte bVar25;
  undefined8 *puVar26;
  uint local_8c;
  undefined1 auStack_88 [8];
  uint *local_80;
  undefined8 *local_78 [3];
  
  if (((DAT_04837608 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04837608), iVar8 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar7 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  plVar10 = (long *)(DAT_048375f8 + 0x2d8);
  local_8c = param_2;
  lVar9 = nn::os::GetCurrentThread();
LAB_010222e4:
  if (*plVar10 == 0) goto code_r0x010222ec;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x2e0));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x2e0));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_010222f4;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_010222f4:
  iVar17 = (int)DAT_04543ed0;
  iVar8 = (int)DAT_04543ec8;
  uVar18 = DAT_04543ec8 ^ DAT_04543ed0;
  DAT_04543ed0 = uVar18 >> 0x1b | uVar18 << 0x25;
  DAT_04543ec8 = uVar18 ^ (DAT_04543ec8 >> 0x28 | DAT_04543ec8 << 0x18) ^ uVar18 << 0x10;
  uVar20 = iVar8 + iVar17;
  while (uVar20 = uVar20 & 3, uVar20 == 3) {
    uVar18 = DAT_04543ec8 ^ DAT_04543ed0;
    iVar8 = (int)DAT_04543ed0;
    iVar17 = (int)DAT_04543ec8;
    DAT_04543ed0 = uVar18 >> 0x1b | uVar18 << 0x25;
    DAT_04543ec8 = uVar18 ^ (DAT_04543ec8 >> 0x28 | DAT_04543ec8 << 0x18) ^ uVar18 << 0x10;
    uVar20 = iVar17 + iVar8;
  }
  bVar25 = 0;
  bVar3 = true;
  if (0xf < local_8c) {
    bVar21 = 0;
    bVar16 = 0;
    goto LAB_01022424;
  }
  bVar21 = 0;
  bVar16 = 0;
  if ((1 << (ulong)(local_8c & 0x1f) & 0xd800U) == 0) goto LAB_01022424;
  if ((param_1[0xe] == 0) ||
     (puVar22 = *(undefined8 **)(param_1[0xe] + 0x10), puVar22 == (undefined8 *)0x0)) {
LAB_010223bc:
    bVar25 = 0;
    bVar21 = 0;
    bVar16 = 0;
    goto LAB_010223c4;
  }
  plVar10 = (long *)(**(code **)*puVar22)(puVar22);
  if ((*PTR_DAT_047d91e8 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_047d91e8);
    puVar6 = PTR_DAT_047d3ab0;
    if (iVar8 != 0) {
      if ((*PTR_DAT_047d3aa8 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_047d3aa8);
        puVar4 = PTR_DAT_047d39b8;
        if (iVar8 != 0) {
          if ((*PTR_DAT_047d39b0 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(PTR_DAT_047d39b0);
            puVar5 = PTR_DAT_047d39c8;
            if (iVar8 != 0) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar8 != 0)) {
                *(undefined8 *)puVar5 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar4 = puVar5;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
          }
          *(undefined **)puVar6 = puVar4;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
      }
      *(undefined **)PTR_DAT_047d91f0 = puVar6;
      __cxa_guard_release(PTR_DAT_047d91e8);
    }
  }
  while( true ) {
    if (plVar10 == (long *)0x0) goto LAB_010223bc;
    if (plVar10 == (long *)PTR_DAT_047d91f0) break;
    plVar10 = (long *)*plVar10;
  }
  plVar10 = *(long **)(lVar7 + 0x88);
  if (plVar10 == (long *)(lVar7 + 0x90)) goto LAB_010223bc;
  bVar16 = 0;
  bVar21 = 0;
  bVar25 = 0;
  puVar22 = puVar22 + -5;
LAB_010224a0:
  puVar12 = (undefined8 *)plVar10[6];
  if (puVar12 != (undefined8 *)0x0) {
    uVar18 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      puVar26 = (undefined8 *)((long)puVar12 - 1U & (ulong)puVar22);
    }
    else if (puVar22 < puVar12) {
      puVar26 = puVar22;
    }
    else {
      uVar15 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        uVar15 = (ulong)puVar22 / (ulong)puVar12;
      }
      puVar26 = (undefined8 *)((long)puVar22 - uVar15 * (long)puVar12);
    }
    plVar23 = *(long **)(plVar10[5] + (long)puVar26 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if ((undefined8 *)plVar23[1] == puVar22) {
            if ((undefined8 *)plVar23[2] == puVar22) goto LAB_010225b0;
          }
          else if ((undefined8 *)((ulong)plVar23[1] & (long)puVar12 - 1U) != puVar26) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          puVar19 = (undefined8 *)plVar23[1];
          if (puVar19 == puVar22) {
            if ((undefined8 *)plVar23[2] == puVar22) goto LAB_010225b0;
          }
          else {
            if (puVar12 <= puVar19) {
              uVar18 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar18 = (ulong)puVar19 / (ulong)puVar12;
              }
              puVar19 = (undefined8 *)((long)puVar19 - uVar18 * (long)puVar12);
            }
            if (puVar19 != puVar26) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  goto LAB_010224f8;
code_r0x010222ec:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar3) {
    *plVar10 = lVar9;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_010222f4;
  goto LAB_010222e4;
LAB_010225b0:
  bVar1 = *(byte *)(plVar23 + 3);
  bVar16 = bVar1 & 1;
  bVar21 = bVar1 >> 1 & 1;
  bVar25 = bVar1 >> 2 & 1;
  uVar20 = bVar1 >> 3 & 7;
LAB_010224f8:
  plVar23 = (long *)plVar10[1];
  if (plVar23 == (long *)0x0) {
    plVar23 = (long *)plVar10[2];
    if (*(long **)plVar10[2] != plVar10) {
      lVar9 = plVar10[2];
      plVar23 = *(long **)(lVar9 + 0x10);
      if (**(long **)(lVar9 + 0x10) != lVar9) {
        lVar9 = *(long *)(lVar9 + 0x10);
        while( true ) {
          plVar23 = *(long **)(lVar9 + 0x10);
          if (*plVar23 == lVar9) break;
          lVar9 = *(long *)(lVar9 + 0x10);
        }
      }
    }
  }
  else {
    for (plVar10 = (long *)*plVar23; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      plVar23 = plVar10;
    }
  }
  plVar10 = plVar23;
  if (plVar10 == (long *)(lVar7 + 0x90)) goto LAB_010223c4;
  goto LAB_010224a0;
LAB_010223c4:
  bVar3 = false;
  bVar21 = bVar21 << 1;
  bVar25 = bVar25 << 2;
LAB_01022424:
  local_80 = &local_8c;
  puVar22 = (undefined8 *)(lVar7 + 0x90);
  if ((undefined8 *)*puVar22 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)(lVar7 + 0x90);
    puVar26 = (undefined8 *)*puVar22;
    do {
      if ((int)local_8c < *(int *)(puVar26 + 4)) {
        puVar19 = (undefined8 *)*puVar26;
        if (puVar19 == (undefined8 *)0x0) {
          puVar22 = puVar26;
          goto LAB_01022610;
        }
        puVar12 = puVar26;
      }
      else {
        puVar22 = puVar12;
        if ((int)local_8c <= *(int *)(puVar26 + 4)) goto LAB_01022610;
        puVar22 = puVar26 + 1;
        puVar19 = (undefined8 *)*puVar22;
        puVar12 = puVar22;
        if (puVar19 == (undefined8 *)0x0) goto LAB_01022610;
      }
      puVar26 = puVar19;
    } while( true );
  }
  puVar26 = puVar22;
LAB_01022610:
  puVar12 = (undefined8 *)*puVar22;
  if ((undefined8 *)*puVar22 == (undefined8 *)0x0) {
    plVar10 = (long *)(lVar7 + 0x88);
    FUN_00dec8e8(local_78,plVar10,&DAT_03d30400,&local_80,auStack_88);
    *local_78[0] = 0;
    local_78[0][1] = 0;
    local_78[0][2] = puVar26;
    *puVar22 = local_78[0];
    puVar12 = local_78[0];
    if (*(long *)*plVar10 != 0) {
      *plVar10 = *(long *)*plVar10;
      puVar12 = (undefined8 *)*puVar22;
    }
    FUN_010108e0(*(undefined8 *)(lVar7 + 0x90),puVar12);
    *(long *)(lVar7 + 0xb8) = *(long *)(lVar7 + 0xb8) + 1;
    puVar12 = local_78[0];
  }
  puVar26 = (undefined8 *)puVar12[6];
  plVar10 = puVar12 + 5;
  if (puVar26 != (undefined8 *)0x0) {
    uVar18 = (long)puVar26 - 1;
    if (((ulong)puVar26 & uVar18) == 0) {
      puVar22 = (undefined8 *)(uVar18 & (ulong)param_1);
      plVar23 = *(long **)(*plVar10 + (long)puVar22 * 8);
      if (plVar23 != (long *)0x0) {
        do {
          plVar23 = (long *)*plVar23;
          if ((plVar23 == (long *)0x0) ||
             ((undefined8 *)plVar23[1] != param_1 &&
              (undefined8 *)((ulong)plVar23[1] & uVar18) != puVar22)) goto LAB_01022688;
        } while ((undefined8 *)plVar23[2] != param_1);
        goto LAB_01022788;
      }
    }
    else {
      if (param_1 < puVar26) {
        puVar22 = param_1;
      }
      else {
        uVar18 = 0;
        if (puVar26 != (undefined8 *)0x0) {
          uVar18 = (ulong)param_1 / (ulong)puVar26;
        }
        puVar22 = (undefined8 *)((long)param_1 - uVar18 * (long)puVar26);
      }
      plVar23 = *(long **)(*plVar10 + (long)puVar22 * 8);
      if (plVar23 != (long *)0x0) {
        do {
          plVar23 = (long *)*plVar23;
          if (plVar23 == (long *)0x0) goto LAB_01022688;
          puVar19 = (undefined8 *)plVar23[1];
          if (puVar19 != param_1) {
            if (puVar26 <= puVar19) {
              uVar18 = 0;
              if (puVar26 != (undefined8 *)0x0) {
                uVar18 = (ulong)puVar19 / (ulong)puVar26;
              }
              puVar19 = (undefined8 *)((long)puVar19 - uVar18 * (long)puVar26);
            }
            if (puVar19 != puVar22) goto LAB_01022688;
          }
        } while ((undefined8 *)plVar23[2] != param_1);
        goto LAB_01022788;
      }
    }
  }
LAB_01022688:
  plVar23 = (long *)(**(code **)(*(long *)puVar12[0xc] + 0x10))((long *)puVar12[0xc],0x20,8);
  if (plVar23 == (long *)0x0) {
    (**(code **)(*(long *)puVar12[0xc] + 0xe8))();
  }
  uVar24 = puVar12[0xc];
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    plVar23[2] = (long)param_1;
    *(undefined1 *)(plVar23 + 3) = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar24;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar23[2] = (long)param_1;
    *(undefined1 *)(plVar23 + 3) = 0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  *plVar23 = 0;
  plVar23[1] = (long)param_1;
  if ((puVar26 == (undefined8 *)0x0) ||
     (*(float *)(puVar12 + 0x11) * (float)puVar26 < (float)(puVar12[0x10] + 1))) {
    uVar18 = (ulong)(puVar26 < (undefined8 *)0x3 || ((ulong)puVar26 & (long)puVar26 - 1U) != 0) |
             (long)puVar26 << 1;
    uVar15 = (ulong)((float)(puVar12[0x10] + 1) / *(float *)(puVar12 + 0x11));
    if (uVar15 <= uVar18) {
      uVar15 = uVar18;
    }
    if (uVar15 - 1 == 0) {
      uVar15 = 2;
    }
    else if ((uVar15 & uVar15 - 1) != 0) {
      uVar15 = std::__next_prime(uVar15);
    }
    uVar18 = puVar12[6];
    if (uVar18 < uVar15) {
LAB_01022864:
      FUN_01023614(plVar10);
    }
    else if (uVar15 < uVar18) {
      uVar11 = (ulong)((float)(ulong)puVar12[0x10] / *(float *)(puVar12 + 0x11));
      if ((uVar18 < 3) ||
         (uVar14 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
         uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333),
         1 < (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar11 = std::__next_prime(uVar11);
      }
      else if (1 < uVar11) {
        uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
      }
      if (uVar11 <= uVar15) {
        uVar11 = uVar15;
      }
      if (uVar11 < uVar18) goto LAB_01022864;
    }
    puVar26 = (undefined8 *)puVar12[6];
    if (((ulong)puVar26 & (long)puVar26 - 1U) == 0) {
      puVar22 = (undefined8 *)((long)puVar26 - 1U & (ulong)param_1);
    }
    else if (param_1 < puVar26) {
      puVar22 = param_1;
    }
    else {
      uVar18 = 0;
      if (puVar26 != (undefined8 *)0x0) {
        uVar18 = (ulong)param_1 / (ulong)puVar26;
      }
      puVar22 = (undefined8 *)((long)param_1 - uVar18 * (long)puVar26);
    }
  }
  plVar13 = *(long **)(*plVar10 + (long)puVar22 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = puVar12 + 0xb;
    *plVar23 = *plVar13;
    *plVar13 = (long)plVar23;
    *(long **)(puVar12[5] + (long)puVar22 * 8) = plVar13;
    if (*plVar23 != 0) {
      puVar22 = *(undefined8 **)(*plVar23 + 8);
      if (((ulong)puVar26 & (long)puVar26 - 1U) == 0) {
        puVar22 = (undefined8 *)((ulong)puVar22 & (long)puVar26 - 1U);
      }
      else if (puVar26 <= puVar22) {
        uVar18 = 0;
        if (puVar26 != (undefined8 *)0x0) {
          uVar18 = (ulong)puVar22 / (ulong)puVar26;
        }
        puVar22 = (undefined8 *)((long)puVar22 - uVar18 * (long)puVar26);
      }
      plVar13 = (long *)(*plVar10 + (long)puVar22 * 8);
      goto LAB_01022778;
    }
  }
  else {
    *plVar23 = *plVar13;
LAB_01022778:
    *plVar13 = (long)plVar23;
  }
  puVar12[0x10] = puVar12[0x10] + 1;
LAB_01022788:
  *(byte *)(plVar23 + 3) = bVar21 | bVar25 | (byte)(uVar20 << 3) | bVar16;
  if ((bVar3) && ((DAT_04837330 != '\x01' || (DAT_04837334 != uVar20)))) {
    FUN_01022b9c(lVar7,param_1,local_8c);
  }
  *(undefined8 *)(lVar7 + 0x2d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x2e0));
  return;
}


