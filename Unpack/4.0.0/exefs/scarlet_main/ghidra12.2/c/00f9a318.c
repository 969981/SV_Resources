/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f9a318; name: FUN_00f9a318
 */


/* WARNING: Removing unreachable block (ram,0x00f9a8ec) */

void FUN_00f9a318(undefined1 *param_1,long param_2,undefined8 *param_3,char *param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  bool bVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined4 *unaff_x25;
  undefined4 *puVar22;
  undefined4 *puVar23;
  float fVar24;
  undefined8 *local_88;
  long *local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  local_80 = (long *)*param_3;
  puVar7 = (undefined8 *)(**(code **)(*local_80 + 0x10))(local_80,0x20,8);
  if (puVar7 == (undefined8 *)0x0) {
    local_78 = 0;
    local_70 = 0;
    local_88 = (undefined8 *)0x0;
    local_80 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      unaff_x25 = &DAT_04865a30;
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00f9aa74:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = local_80;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar7 = param_5;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 2) = 0x1f;
    *(undefined1 *)(puVar7 + 3) = 0;
    local_78 = 0x20;
    local_70 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    local_88 = puVar7;
  }
  if (*param_4 == '\0') {
    plVar12 = (long *)FUN_00d44228();
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar9 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar9;
    FUN_00cf9884(&local_68,uVar9,param_4);
    plVar12 = local_68;
  }
  plVar10 = (long *)puVar7[1];
  puVar7[1] = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  puVar7[1] = plVar12;
  plVar10 = (long *)PTR_DAT_047d8b70;
  if (plVar12 != (long *)0x0) {
    plVar10 = plVar12 + 6;
  }
  puVar23 = (undefined4 *)*plVar10;
  plVar10 = (long *)PTR_PTR_047d4508;
  if (plVar12 != (long *)0x0) {
    plVar10 = plVar12 + 7;
  }
  lVar8 = *plVar10;
  if (plVar12 == (long *)0x0) {
    lVar20 = 0;
  }
  else {
    lVar20 = plVar12[8];
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar10 = (long *)(param_2 + 0x70);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar10 == 0 && *(long *)(param_2 + 0x78) == 0) {
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar14) {
      *plVar10 = lVar11;
      *(undefined8 *)(param_2 + 0x78) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00f9a490;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x80));
  do {
    if (*plVar10 != 0 || *(long *)(param_2 + 0x78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x80));
        while (*plVar10 == 0 && *(long *)(param_2 + 0x78) == 0) {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar14) {
            *plVar10 = lVar11;
            *(undefined8 *)(param_2 + 0x78) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00f9a490;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar14) {
      *plVar10 = lVar11;
      *(undefined8 *)(param_2 + 0x78) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00f9a490:
  puVar22 = *(undefined4 **)(param_2 + 0x10);
  plVar1 = (long *)(param_2 + 8);
  if (puVar22 == (undefined4 *)0x0) {
LAB_00f9a5c8:
    plVar21 = (long *)(**(code **)(**(long **)(param_2 + 0x40) + 0x10))
                                (*(long **)(param_2 + 0x40),0x50,8);
    if (plVar21 == (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 0x40) + 0xe8))();
    }
    uVar9 = *(undefined8 *)(param_2 + 0x40);
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00f9aa74;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar9;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    plVar21[2] = (long)puVar23;
    plVar21[3] = lVar8;
    plVar21[4] = lVar20;
    plVar21[5] = (long)plVar12;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar21[8] = 0;
    plVar21[9] = 0;
    plVar21[6] = 0;
    plVar21[7] = 0;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *plVar21 = 0;
    plVar21[1] = (long)puVar23;
    fVar24 = (float)(*(long *)(param_2 + 0x60) + 1);
    if ((puVar22 == (undefined4 *)0x0) || (*(float *)(param_2 + 0x68) * (float)puVar22 < fVar24)) {
      uVar15 = (ulong)(puVar22 < (undefined4 *)0x3 || ((ulong)puVar22 & (long)puVar22 - 1U) != 0) |
               (long)puVar22 << 1;
      uVar19 = (ulong)(fVar24 / *(float *)(param_2 + 0x68));
      if (uVar19 <= uVar15) {
        uVar19 = uVar15;
      }
      if (uVar19 - 1 == 0) {
        uVar19 = 2;
      }
      else if ((uVar19 & uVar19 - 1) != 0) {
        uVar19 = std::__next_prime(uVar19);
      }
      uVar15 = *(ulong *)(param_2 + 0x10);
      if (uVar15 < uVar19) {
LAB_00f9a804:
        FUN_00fa0488(plVar1);
      }
      else if (uVar19 < uVar15) {
        uVar13 = (ulong)((float)*(ulong *)(param_2 + 0x60) / *(float *)(param_2 + 0x68));
        if ((uVar15 < 3) ||
           (uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
           uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333),
           1 < (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar13 = std::__next_prime(uVar13);
        }
        else if (1 < uVar13) {
          uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
        }
        if (uVar13 <= uVar19) {
          uVar13 = uVar19;
        }
        if (uVar13 < uVar15) goto LAB_00f9a804;
      }
      puVar22 = *(undefined4 **)(param_2 + 0x10);
      if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
        unaff_x25 = (undefined4 *)((long)puVar22 - 1U & (ulong)puVar23);
      }
      else if (puVar23 < puVar22) {
        unaff_x25 = puVar23;
      }
      else {
        uVar15 = 0;
        if (puVar22 != (undefined4 *)0x0) {
          uVar15 = (ulong)puVar23 / (ulong)puVar22;
        }
        unaff_x25 = (undefined4 *)((long)puVar23 - uVar15 * (long)puVar22);
      }
    }
    plVar17 = *(long **)(*plVar1 + (long)unaff_x25 * 8);
    if (plVar17 == (long *)0x0) {
      plVar17 = (long *)(param_2 + 0x38);
      *plVar21 = *plVar17;
      *plVar17 = (long)plVar21;
      *(long **)(*(long *)(param_2 + 8) + (long)unaff_x25 * 8) = plVar17;
      if (*plVar21 != 0) {
        puVar16 = *(undefined4 **)(*plVar21 + 8);
        if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
          puVar16 = (undefined4 *)((ulong)puVar16 & (long)puVar22 - 1U);
        }
        else if (puVar22 <= puVar16) {
          uVar15 = 0;
          if (puVar22 != (undefined4 *)0x0) {
            uVar15 = (ulong)puVar16 / (ulong)puVar22;
          }
          puVar16 = (undefined4 *)((long)puVar16 - uVar15 * (long)puVar22);
        }
        plVar17 = (long *)(*plVar1 + (long)puVar16 * 8);
        goto LAB_00f9a69c;
      }
    }
    else {
      *plVar21 = *plVar17;
LAB_00f9a69c:
      *plVar17 = (long)plVar21;
    }
    *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 1;
  }
  else {
    uVar15 = (long)puVar22 - 1;
    if (((ulong)puVar22 & uVar15) != 0) {
      unaff_x25 = puVar23;
      if (puVar22 <= puVar23) {
        uVar15 = 0;
        if (puVar22 != (undefined4 *)0x0) {
          uVar15 = (ulong)puVar23 / (ulong)puVar22;
        }
        unaff_x25 = (undefined4 *)((long)puVar23 - uVar15 * (long)puVar22);
      }
      plVar21 = *(long **)(*plVar1 + (long)unaff_x25 * 8);
      if (plVar21 != (long *)0x0) {
        while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
          puVar16 = (undefined4 *)plVar21[1];
          if (puVar16 != puVar23) {
            if (puVar22 <= puVar16) {
              uVar15 = 0;
              if (puVar22 != (undefined4 *)0x0) {
                uVar15 = (ulong)puVar16 / (ulong)puVar22;
              }
              puVar16 = (undefined4 *)((long)puVar16 - uVar15 * (long)puVar22);
            }
            if (puVar16 != unaff_x25) break;
          }
          if ((undefined4 *)plVar21[2] == puVar23) goto LAB_00f9a6ac;
        }
      }
      goto LAB_00f9a5c8;
    }
    unaff_x25 = (undefined4 *)(uVar15 & (ulong)puVar23);
    plVar21 = *(long **)(*plVar1 + (long)unaff_x25 * 8);
    if (plVar21 == (long *)0x0) goto LAB_00f9a5c8;
    do {
      plVar21 = (long *)*plVar21;
      if ((plVar21 == (long *)0x0) ||
         ((undefined4 *)plVar21[1] != puVar23 &&
          (undefined4 *)((ulong)plVar21[1] & uVar15) != unaff_x25)) goto LAB_00f9a5c8;
    } while ((undefined4 *)plVar21[2] != puVar23);
  }
LAB_00f9a6ac:
  lVar11 = plVar21[6];
  plVar21[6] = (long)local_88;
  if (lVar11 != 0) {
    FUN_00fa2ee8(plVar21 + 7);
  }
  plVar21[8] = local_78;
  plVar21[9] = local_70;
  plVar21[7] = (long)local_80;
  do {
    lVar11 = *plVar10;
    lVar4 = *(long *)(param_2 + 0x78);
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar14) {
      *plVar10 = lVar11;
      *(long *)(param_2 + 0x78) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar10;
    lVar3 = *(long *)(param_2 + 0x78);
    if (lVar2 != lVar11 || lVar3 != lVar4) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_00f9a714;
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar14) {
      *plVar10 = 0;
      *(long *)(param_2 + 0x74) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar14 = true;
LAB_00f9a714:
  if (!bVar14) {
    do {
      lVar11 = *plVar10;
      lVar4 = *(long *)(param_2 + 0x78);
      if (lVar11 != lVar2 || lVar4 != lVar3) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f9aa28;
      }
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar14) {
        *plVar10 = 0;
        *(long *)(param_2 + 0x74) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar14 = true;
joined_r0x00f9aa28:
    if (!bVar14) {
      do {
        lVar2 = *plVar10;
        lVar3 = *(long *)(param_2 + 0x78);
        if (lVar2 != lVar11 || lVar3 != lVar4) {
          bVar14 = false;
          ClearExclusiveLocal();
          lVar11 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x00f9aa28;
        }
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar14) {
          *plVar10 = 0;
          *(long *)(param_2 + 0x74) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar14 = true;
      lVar11 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x00f9aa28;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x80));
  *(long *)(param_1 + 0x18) = lVar20;
  *(long **)(param_1 + 0x20) = plVar12;
  *(undefined4 **)(param_1 + 8) = puVar23;
  *(long *)(param_1 + 0x10) = lVar8;
  *param_1 = 1;
  return;
}


