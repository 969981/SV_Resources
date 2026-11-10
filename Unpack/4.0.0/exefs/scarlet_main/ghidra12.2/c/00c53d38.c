/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c53d38; name: FUN_00c53d38
 */


undefined1  [16] FUN_00c53d38(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined1 auVar23 [16];
  ulong *local_98;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong *puStack_68;
  
  puVar1 = param_1 + 0xe;
  uVar5 = nn::os::GetCurrentThread();
  while (*puVar1 == 0 && param_1[0xf] == 0) {
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar5;
      param_1[0xf] = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00c53d80;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*puVar1 != 0 || param_1[0xf] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*puVar1 == 0 && param_1[0xf] == 0) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar12) {
            *puVar1 = uVar5;
            param_1[0xf] = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00c53d80;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar5;
      param_1[0xf] = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c53d80:
  puVar18 = (ulong *)*param_2;
  puVar6 = (ulong *)(**(code **)(*puVar18 + 0x10))(puVar18,0x158,8);
  if (puVar6 == (ulong *)0x0) {
    local_98 = (ulong *)0x0;
    uVar9 = 0;
    uVar5 = 0;
    puVar19 = puVar18;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00c546d8;
    *(ulong **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = puVar18;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    plVar8 = (long *)*param_2;
    puVar22 = puVar6 + 0x18;
    *puVar22 = (ulong)plVar8;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    *(undefined4 *)(puVar6 + 0x1b) = 0;
    puVar6[0x19] = 0x7ffffffffffffff;
    puVar6[0x1a] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar19 = puVar6 + 0x1f;
    *puVar19 = (ulong)plVar8;
    *(undefined4 *)(puVar6 + 0x22) = 0;
    puVar6[0x28] = 0;
    *(undefined1 *)(puVar6 + 0x29) = 0;
    puVar6[0x20] = 0x7ffffffffffffff;
    puVar6[0x21] = 0;
    puVar6[0x23] = 0x400;
    puVar6[0x24] = 0x400;
    local_70 = 0;
    puStack_68 = puVar22;
    uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0x40,8);
    if (uVar5 == 0) {
      (**(code **)(*(long *)*puVar22 + 0xe8))();
    }
    uVar9 = puVar6[0x15];
    uVar15 = puVar6[0x16];
    if (uVar15 == uVar9) {
      local_78 = uVar9;
      uVar16 = uVar5;
    }
    else {
      uVar16 = uVar5 - 0x20;
      local_88 = uVar5;
      local_80 = uVar5;
      local_78 = uVar5;
      local_70 = uVar5 + 0x40;
      FUN_00c53694(puVar22,uVar16);
      if (uVar15 - 0x20 != uVar9) {
        do {
          uVar16 = uVar16 - 0x20;
          FUN_00c53694(puVar22,uVar16,uVar15 - 0x40);
          uVar15 = uVar15 - 0x20;
        } while (uVar9 + 0x20 != uVar15);
      }
      uVar9 = puVar6[0x15];
      local_78 = puVar6[0x16];
    }
    puVar6[0x15] = uVar16;
    puVar6[0x16] = uVar5;
    local_70 = puVar6[0x17];
    puVar6[0x17] = uVar5 + 0x40;
    local_88 = uVar9;
    local_80 = uVar9;
    FUN_00c54884(&local_88);
    uVar5 = puVar6[0x1c];
    if ((ulong)((long)(puVar6[0x1e] - uVar5) >> 5) < 2) {
      uVar15 = puVar6[0x1d];
      local_70 = 0;
      puStack_68 = puVar19;
      uVar9 = (**(code **)(*(long *)puVar6[0x1f] + 0x10))((long *)puVar6[0x1f],0x40,8);
      if (uVar9 == 0) {
        (**(code **)(*(long *)*puVar19 + 0xe8))();
      }
      local_80 = uVar9 + ((long)(uVar15 - uVar5) >> 5) * 0x20;
      local_70 = uVar9 + 0x40;
      uVar5 = puVar6[0x1c];
      uVar15 = puVar6[0x1d];
      local_88 = uVar9;
      local_78 = local_80;
      if (uVar15 == uVar5) {
        uVar9 = uVar5;
      }
      else {
        do {
          uVar9 = local_80;
          uVar16 = *puVar19;
          if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar10 != 0) {
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00c546d8;
            *(ulong *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar16;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          }
          uVar14 = *(undefined8 *)(uVar15 - 0x20);
          *(undefined8 *)(uVar15 - 0x20) = 0;
          *(undefined8 *)(uVar9 - 0x20) = uVar14;
          uVar14 = *(undefined8 *)(uVar15 - 0x18);
          puVar2 = (undefined8 *)(uVar15 - 0x10);
          uVar17 = *(undefined8 *)(uVar15 - 8);
          uVar15 = uVar15 - 0x20;
          *(undefined8 *)(uVar9 - 0x10) = *puVar2;
          *(undefined8 *)(uVar9 - 8) = uVar17;
          *(undefined8 *)(uVar9 - 0x18) = uVar14;
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          local_80 = local_80 - 0x20;
        } while (uVar5 != uVar15);
        uVar5 = puVar6[0x1c];
        uVar9 = puVar6[0x1d];
      }
      puVar6[0x1c] = local_80;
      puVar6[0x1d] = local_78;
      uVar15 = puVar6[0x1e];
      puVar6[0x1e] = local_70;
      local_88 = uVar5;
      local_80 = uVar5;
      local_78 = uVar9;
      local_70 = uVar15;
      FUN_00c546f8(&local_88);
    }
    cVar3 = (**(code **)PTR_DAT_047e1c28)(puVar6,param_2[2]);
    *(bool *)(puVar6 + 0x2a) = cVar3 != '\0';
    uVar5 = 8;
    uVar9 = 0x158;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    local_98 = puVar18;
  }
  uVar15 = param_2[1];
  uVar16 = param_2[2];
  puVar6[0x25] = *param_2;
  puVar6[0x26] = uVar15;
  puVar6[0x27] = uVar16;
  (**(code **)PTR_DAT_047e1c30)(puVar6,&LAB_02752b50);
  (**(code **)PTR_DAT_047e1c38)(puVar6,puVar6);
  FUN_00c50980(puVar6);
  FUN_00c50d00(puVar6);
  puVar22 = (ulong *)param_1[2];
  puVar18 = param_1 + 1;
  *param_1 = (ulong)puVar6;
  if (puVar22 == (ulong *)0x0) {
LAB_00c5402c:
    puVar20 = (ulong *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0x38,8);
    if (puVar20 == (ulong *)0x0) {
      (**(code **)(*(long *)param_1[8] + 0xe8))();
    }
    uVar15 = param_1[8];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      puVar20[2] = *param_1;
      puVar20[3] = 0;
      puVar20[4] = 0;
      puVar20[5] = 0;
      puVar20[6] = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00c546d8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(ulong *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar15;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar20[2] = *param_1;
      puVar20[3] = 0;
      puVar20[6] = 0;
      puVar20[4] = 0;
      puVar20[5] = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    *puVar20 = 0;
    puVar20[1] = (ulong)puVar6;
    if ((puVar22 == (ulong *)0x0) ||
       (*(float *)(param_1 + 0xd) * (float)puVar22 < (float)(param_1[0xc] + 1))) {
      uVar15 = (ulong)(puVar22 < (ulong *)0x3 || ((ulong)puVar22 & (long)puVar22 - 1U) != 0) |
               (long)puVar22 << 1;
      uVar16 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
      if (uVar16 <= uVar15) {
        uVar16 = uVar15;
      }
      if (uVar16 - 1 == 0) {
        uVar16 = 2;
      }
      else if ((uVar16 & uVar16 - 1) != 0) {
        uVar16 = std::__next_prime(uVar16);
      }
      uVar15 = param_1[2];
      if (uVar15 < uVar16) {
        uVar11 = uVar16;
LAB_00c5436c:
        FUN_00c59230(puVar18,uVar11);
      }
      else if (uVar16 < uVar15) {
        uVar11 = (ulong)((float)param_1[0xc] / *(float *)(param_1 + 0xd));
        if ((uVar15 < 3) ||
           (uVar21 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
           uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333),
           1 < (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar11 = std::__next_prime(uVar11);
        }
        else if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
        if (uVar11 <= uVar16) {
          uVar11 = uVar16;
        }
        if (uVar11 < uVar15) goto LAB_00c5436c;
      }
      puVar22 = (ulong *)param_1[2];
      if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
        puVar19 = (ulong *)((long)puVar22 - 1U & (ulong)puVar6);
      }
      else if (puVar6 < puVar22) {
        puVar19 = puVar6;
      }
      else {
        uVar15 = 0;
        if (puVar22 != (ulong *)0x0) {
          uVar15 = (ulong)puVar6 / (ulong)puVar22;
        }
        puVar19 = (ulong *)((long)puVar6 - uVar15 * (long)puVar22);
      }
    }
    puVar13 = *(ulong **)(*puVar18 + (long)puVar19 * 8);
    if (puVar13 == (ulong *)0x0) {
      puVar13 = param_1 + 7;
      *puVar20 = *puVar13;
      *puVar13 = (ulong)puVar20;
      *(ulong **)(param_1[1] + (long)puVar19 * 8) = puVar13;
      if (*puVar20 != 0) {
        puVar19 = *(ulong **)(*puVar20 + 8);
        if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
          puVar19 = (ulong *)((ulong)puVar19 & (long)puVar22 - 1U);
        }
        else if (puVar22 <= puVar19) {
          uVar15 = 0;
          if (puVar22 != (ulong *)0x0) {
            uVar15 = (ulong)puVar19 / (ulong)puVar22;
          }
          puVar19 = (ulong *)((long)puVar19 - uVar15 * (long)puVar22);
        }
        puVar13 = (ulong *)(*puVar18 + (long)puVar19 * 8);
        goto LAB_00c54124;
      }
    }
    else {
      *puVar20 = *puVar13;
LAB_00c54124:
      *puVar13 = (ulong)puVar20;
    }
    param_1[0xc] = param_1[0xc] + 1;
  }
  else {
    uVar15 = (long)puVar22 - 1;
    if (((ulong)puVar22 & uVar15) != 0) {
      puVar19 = puVar6;
      if (puVar22 <= puVar6) {
        uVar15 = 0;
        if (puVar22 != (ulong *)0x0) {
          uVar15 = (ulong)puVar6 / (ulong)puVar22;
        }
        puVar19 = (ulong *)((long)puVar6 - uVar15 * (long)puVar22);
      }
      puVar20 = *(ulong **)(*puVar18 + (long)puVar19 * 8);
      if (puVar20 != (ulong *)0x0) {
        while (puVar20 = (ulong *)*puVar20, puVar20 != (ulong *)0x0) {
          puVar13 = (ulong *)puVar20[1];
          if (puVar13 != puVar6) {
            if (puVar22 <= puVar13) {
              uVar15 = 0;
              if (puVar22 != (ulong *)0x0) {
                uVar15 = (ulong)puVar13 / (ulong)puVar22;
              }
              puVar13 = (ulong *)((long)puVar13 - uVar15 * (long)puVar22);
            }
            if (puVar13 != puVar19) break;
          }
          if ((ulong *)puVar20[2] == puVar6) goto LAB_00c54134;
        }
      }
      goto LAB_00c5402c;
    }
    puVar19 = (ulong *)(uVar15 & (ulong)puVar6);
    puVar20 = *(ulong **)(*puVar18 + (long)puVar19 * 8);
    if (puVar20 == (ulong *)0x0) goto LAB_00c5402c;
    do {
      puVar20 = (ulong *)*puVar20;
      if ((puVar20 == (ulong *)0x0) ||
         ((ulong *)puVar20[1] != puVar6 && (ulong *)(puVar20[1] & uVar15) != puVar19))
      goto LAB_00c5402c;
    } while ((ulong *)puVar20[2] != puVar6);
  }
LAB_00c54134:
  uVar15 = puVar20[3];
  puVar20[3] = (ulong)puVar6;
  if (uVar15 != 0) {
    FUN_00c4e5a0(&local_88,0);
    if (*(char *)(uVar15 + 0x150) != '\0') {
      (**(code **)PTR_DAT_047e1990)(uVar15);
    }
    FUN_02752a30(uVar15 + 0xa0);
    plVar8 = (long *)puVar20[4];
    uVar16 = puVar20[5];
    uVar21 = puVar20[6];
    uVar11 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar11 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar15,uVar16,uVar21);
    }
    else {
      FUN_00c48fe8(plVar8,uVar15,uVar16,uVar21);
    }
    FUN_00c4e70c(&local_88);
  }
  puVar20[4] = (ulong)local_98;
  puVar20[5] = uVar9;
  puVar20[6] = uVar5;
  uVar5 = *param_1;
  do {
    uVar9 = *puVar1;
    uVar15 = param_1[0xf];
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar9;
      param_1[0xf] = uVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    uVar16 = *puVar1;
    uVar11 = param_1[0xf];
    if (uVar16 != uVar9 || uVar11 != uVar15) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00c541d8;
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      *(ulong *)((long)param_1 + 0x74) = uVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar12 = true;
LAB_00c541d8:
  if (!bVar12) {
    do {
      uVar9 = *puVar1;
      uVar15 = param_1[0xf];
      if (uVar9 != uVar16 || uVar15 != uVar11) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c54694;
      }
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = 0;
        *(ulong *)((long)param_1 + 0x74) = uVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar12 = true;
joined_r0x00c54694:
    if (!bVar12) {
      do {
        uVar16 = *puVar1;
        uVar11 = param_1[0xf];
        if (uVar16 != uVar9 || uVar11 != uVar15) {
          bVar12 = false;
          ClearExclusiveLocal();
          uVar9 = uVar16;
          uVar15 = uVar11;
          goto joined_r0x00c54694;
        }
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar12) {
          *puVar1 = 0;
          *(ulong *)((long)param_1 + 0x74) = uVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar12 = true;
      uVar9 = uVar16;
      uVar15 = uVar11;
      goto joined_r0x00c54694;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  auVar23._8_8_ = uVar5;
  auVar23._0_8_ = 1;
  return auVar23;
}


