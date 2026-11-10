/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188bef4; name: FUN_0188bef4
 */


/* WARNING: Removing unreachable block (ram,0x0188bf70) */

void FUN_0188bef4(ulong param_1,byte param_2)

{
  LightEventType *pLVar1;
  undefined8 *puVar2;
  ulong uVar3;
  float fVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  bool bVar23;
  ulong local_b8;
  byte local_b0;
  undefined7 uStack_af;
  long *local_a8;
  undefined8 *local_a0;
  char local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  plVar21 = (long *)(param_1 + 0x530);
  lVar9 = nn::os::GetCurrentThread();
  do {
    lVar17 = *plVar21;
    lVar18 = *(long *)(param_1 + 0x538);
    cVar5 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar23) {
      *plVar21 = lVar17;
      *(long *)(param_1 + 0x538) = lVar18;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar1 = (LightEventType *)(param_1 + 0x540);
LAB_0188bf3c:
  while ((lVar17 != 0 && (lVar9 != lVar17))) {
    nn::os::WaitLightEvent(pLVar1);
    do {
      lVar17 = *plVar21;
      lVar18 = *(long *)(param_1 + 0x538);
      cVar5 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar23) {
        *plVar21 = lVar17;
        *(long *)(param_1 + 0x538) = lVar18;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    if (*plVar21 != lVar17 || *(long *)(param_1 + 0x538) != lVar18) goto LAB_0188bf74;
    cVar5 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar23) {
      *plVar21 = lVar17;
      *(long *)(param_1 + 0x534) = lVar18 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar9 = *plVar21;
    lVar17 = *(long *)(param_1 + 0x538);
    cVar5 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar23) {
      *plVar21 = lVar9;
      *(long *)(param_1 + 0x538) = lVar17;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar18 = *plVar21;
    lVar12 = *(long *)(param_1 + 0x538);
    if (lVar18 != lVar9 || lVar12 != lVar17) {
      bVar23 = false;
      ClearExclusiveLocal();
      goto joined_r0x0188c014;
    }
    cVar5 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar23) {
      *plVar21 = lVar9;
      *(long *)(param_1 + 0x534) = lVar17 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar23 = true;
joined_r0x0188c014:
  if (*(char *)(param_1 + 0x550) == '\0') {
joined_r0x0188bfe0:
    if (!bVar23) {
      do {
        lVar9 = *plVar21;
        lVar17 = *(long *)(param_1 + 0x538);
        if (lVar9 != lVar18 || lVar17 != lVar12) {
          bVar23 = false;
          ClearExclusiveLocal();
          lVar18 = lVar9;
          lVar12 = lVar17;
          goto joined_r0x0188bfe0;
        }
        cVar5 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar23) {
          *plVar21 = lVar18;
          *(long *)(param_1 + 0x534) = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar23 = true;
      lVar18 = lVar9;
      lVar12 = lVar17;
      goto joined_r0x0188bfe0;
    }
    nn::os::SignalLightEvent(pLVar1);
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar21 != 0 || *(long *)(param_1 + 0x538) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar21 == 0 && *(long *)(param_1 + 0x538) == 0) {
            cVar5 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar23) {
              *plVar21 = lVar9;
              *(undefined8 *)(param_1 + 0x538) = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0188c29c;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar23) {
        *plVar21 = lVar9;
        *(undefined8 *)(param_1 + 0x538) = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0188c29c:
    if (*(char *)(param_1 + 0x550) == '\0') {
      plVar20 = (long *)(param_1 + 0x60);
      lVar9 = nn::os::GetCurrentThread();
      do {
        if (*plVar20 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
            while (*plVar20 == 0) {
              cVar5 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar23) {
                *plVar20 = lVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_0188c3d8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar23) {
          *plVar20 = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_0188c3d8:
      *(byte *)(param_1 + 0x23a) = param_2 & 1;
      if (((param_2 & 1) == 0) ||
         ((*(long *)(param_1 + 0x350) - *(long *)(param_1 + 0x348) >> 4) * -0x79435e50d79435e5 ==
          *(long *)(param_1 + 0x3c0) - *(long *)(param_1 + 0x3b8) >> 3)) {
        if (*(char *)(param_1 + 0x239) == '\0') {
          FUN_02de25c4(param_1);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x238) = 1;
        (**(code **)(**(long **)(param_1 + 0xe0) + 0x70))(*(long **)(param_1 + 0xe0),0);
        *(undefined1 *)(param_1 + 0x550) = 0;
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
      do {
        lVar9 = *plVar21;
        lVar17 = *(long *)(param_1 + 0x538);
        cVar5 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar23) {
          *plVar21 = lVar9;
          *(long *)(param_1 + 0x538) = lVar17;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        lVar18 = *plVar21;
        lVar12 = *(long *)(param_1 + 0x538);
        if (lVar18 != lVar9 || lVar12 != lVar17) {
          bVar23 = false;
          ClearExclusiveLocal();
          goto joined_r0x0188c590;
        }
        cVar5 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar23) {
          *plVar21 = 0;
          *(long *)(param_1 + 0x534) = lVar17;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar23 = true;
joined_r0x0188c590:
      do {
        if (bVar23) {
          nn::os::SignalLightEvent(pLVar1);
          return;
        }
        do {
          lVar9 = *plVar21;
          lVar17 = *(long *)(param_1 + 0x538);
          if (lVar9 != lVar18 || lVar17 != lVar12) {
            bVar23 = false;
            ClearExclusiveLocal();
            lVar18 = lVar9;
            lVar12 = lVar17;
            goto joined_r0x0188c590;
          }
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar23) {
            *plVar21 = 0;
            *(long *)(param_1 + 0x534) = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar23 = true;
        lVar18 = lVar9;
        lVar12 = lVar17;
      } while( true );
    }
    do {
      lVar9 = *plVar21;
      lVar17 = *(long *)(param_1 + 0x538);
      cVar5 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar23) {
        *plVar21 = lVar9;
        *(long *)(param_1 + 0x538) = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar18 = *plVar21;
      lVar12 = *(long *)(param_1 + 0x538);
      if (lVar18 != lVar9 || lVar12 != lVar17) {
        bVar23 = false;
        ClearExclusiveLocal();
        goto joined_r0x0188c430;
      }
      cVar5 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar23) {
        *plVar21 = 0;
        *(long *)(param_1 + 0x534) = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar23 = true;
joined_r0x0188c430:
    do {
      if (bVar23) {
        nn::os::SignalLightEvent(pLVar1);
        local_88 = CONCAT71(local_88._1_7_,param_2) & 0xffffffffffffff01;
        local_90 = param_1;
        FUN_028c106c(param_1,&local_90);
        return;
      }
      do {
        lVar9 = *plVar21;
        lVar17 = *(long *)(param_1 + 0x538);
        if (lVar9 != lVar18 || lVar17 != lVar12) {
          bVar23 = false;
          ClearExclusiveLocal();
          lVar18 = lVar9;
          lVar12 = lVar17;
          goto joined_r0x0188c430;
        }
        cVar5 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar23) {
          *plVar21 = 0;
          *(long *)(param_1 + 0x534) = lVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar23 = true;
      lVar18 = lVar9;
      lVar12 = lVar17;
    } while( true );
  }
joined_r0x0188c018:
  if (!bVar23) {
    do {
      lVar9 = *plVar21;
      lVar17 = *(long *)(param_1 + 0x538);
      if (lVar9 != lVar18 || lVar17 != lVar12) {
        bVar23 = false;
        ClearExclusiveLocal();
        lVar18 = lVar9;
        lVar12 = lVar17;
        goto joined_r0x0188c018;
      }
      cVar5 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar23) {
        *plVar21 = lVar18;
        *(long *)(param_1 + 0x534) = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar23 = true;
    lVar18 = lVar9;
    lVar12 = lVar17;
    goto joined_r0x0188c018;
  }
  nn::os::SignalLightEvent(pLVar1);
  local_b8 = param_1;
  local_b0 = param_2 & 1;
  FUN_00f338dc(&local_a8,param_1);
  plVar21 = local_a8 + 0x33;
  fVar4 = *(float *)(param_1 + 0x520);
  lVar17 = *plVar21;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar17) {
    plVar21 = (long *)0x0;
    bVar23 = true;
  }
  else {
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar21 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(local_a8 + 0x34));
          while (*plVar21 == 0) {
            cVar5 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar23) {
              *plVar21 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0188c070;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar23) {
        *plVar21 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0188c070:
    bVar23 = false;
  }
  lVar17 = *local_a8;
  plVar20 = (long *)(lVar17 + 0x30);
  lVar18 = *plVar20;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar18) {
    uVar15 = FUN_028d1894(fVar4,lVar17,&local_b8);
    goto LAB_0188c364;
  }
  lVar9 = nn::os::GetCurrentThread();
  do {
    if (*plVar20 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x38));
        while (*plVar20 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *plVar20 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0188c0a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar6) {
      *plVar20 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0188c0a8:
  lVar9 = *(long *)(lVar17 + 0x1f8);
  if (lVar9 == 0) {
    local_68 = *(undefined8 *)(lVar17 + 8);
    FUN_0103caf0(&local_90,local_68,&local_68);
    uVar15 = local_90;
    local_90 = 0;
    lVar9 = *(long *)(lVar17 + 0x1f8);
    *(ulong *)(lVar17 + 0x1f8) = uVar15;
    if (lVar9 == 0) {
      *(undefined8 *)(lVar17 + 0x210) = local_78;
      *(undefined8 *)(lVar17 + 0x208) = local_80;
      *(ulong *)(lVar17 + 0x200) = local_88;
      local_90 = 0;
    }
    else {
      FUN_0103e9d8(lVar17 + 0x200);
      uVar15 = local_90;
      *(undefined8 *)(lVar17 + 0x210) = local_78;
      *(undefined8 *)(lVar17 + 0x208) = local_80;
      *(ulong *)(lVar17 + 0x200) = local_88;
      local_90 = 0;
      if (uVar15 != 0) {
        FUN_0103e9d8(&local_88);
      }
    }
    lVar9 = *(long *)(lVar17 + 0x1f8);
  }
  local_68 = CONCAT44(local_68._4_4_,fVar4);
LAB_0188c0c4:
  lVar18 = *(long *)(lVar9 + 0x80) - *(long *)(lVar9 + 0x78);
  if (lVar18 != 0) goto code_r0x0188c0d0;
  uVar22 = *(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8) >> 7;
  FUN_019f4bd8(lVar9 + 8,&local_b8);
LAB_0188c16c:
  *(ulong *)(lVar9 + 0xb0) = uVar22 + 1;
  goto LAB_0188c174;
LAB_0188bf74:
  ClearExclusiveLocal();
  lVar17 = *plVar21;
  lVar18 = *(long *)(param_1 + 0x538);
  goto LAB_0188bf3c;
code_r0x0188c0d0:
  uVar22 = *(ulong *)(*(long *)(lVar9 + 0x80) + -8);
  *(long *)(lVar9 + 0x80) = lVar18 + *(long *)(lVar9 + 0x78) + -8;
  uVar15 = uVar22 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*(long *)(lVar9 + 0x40) + uVar15) =
       *(ulong *)(*(long *)(lVar9 + 0x40) + uVar15) & (1L << (uVar22 & 0x3f) ^ 0xffffffffffffffffU);
  if (uVar22 < (ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8) >> 7)) goto code_r0x0188c10c;
  goto LAB_0188c0c4;
code_r0x0188c10c:
  puVar2 = (undefined8 *)(*(long *)(lVar9 + 8) + uVar22 * 0x80);
  pcVar11 = (code *)puVar2[1];
  if (pcVar11 != (code *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    (*pcVar11)(puVar2 + 4);
  }
  puVar2[4] = local_b8;
  puVar2[5] = CONCAT71(uStack_af,local_b0);
  *puVar2 = &LAB_0188bedc;
  puVar2[1] = &LAB_02de8c60;
  puVar2[2] = &LAB_02de8c64;
  puVar2[3] = &LAB_02de8c70;
  if (*(ulong *)(lVar9 + 0xb0) <= uVar22) goto LAB_0188c16c;
LAB_0188c174:
  plVar20 = (long *)(lVar9 + 0xc0);
  lVar18 = *plVar20;
  lVar12 = *(long *)(lVar9 + 200) - lVar18 >> 3;
  uVar15 = lVar12 * -0x5555555555555555;
  local_90 = uVar22;
  if (uVar15 <= uVar22) {
    uVar19 = uVar22 + 1;
    lVar12 = uVar19 + lVar12 * 0x5555555555555555;
    if (uVar19 < uVar15 || lVar12 == 0) {
      if (uVar19 < uVar15) {
        *(ulong *)(lVar9 + 200) = lVar18 + uVar19 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar20,lVar12);
      lVar18 = *plVar20;
    }
  }
  *(undefined1 *)(lVar18 + uVar22 * 0x18) = 0;
  *(undefined8 *)(*(long *)(lVar9 + 0xc0) + uVar22 * 0x18 + 8) = 1;
  uVar7 = (undefined4)local_68;
  *(undefined4 *)(*(long *)(lVar9 + 0xc0) + uVar22 * 0x18 + 0x10) = (undefined4)local_68;
  uVar19 = *(ulong *)(lVar9 + 0x130);
  uVar15 = uVar19 + 1;
  plVar20 = (long *)(lVar9 + 0xf8);
  *(ulong *)(lVar9 + 0x130) = uVar15;
  if (uVar19 == 0) {
    if (*(long *)(lVar9 + 0x100) - (long)*(ulong **)(lVar9 + 0xf8) >> 4 != 0) {
      **(ulong **)(lVar9 + 0xf8) = uVar22;
LAB_0188c1f8:
      lVar9 = *plVar20;
      goto LAB_0188c1fc;
    }
LAB_0188c4dc:
    FUN_0103e0a0(plVar20,&local_90,&local_68);
  }
  else {
    pvVar10 = *(void **)(lVar9 + 0xf8);
    uVar13 = *(long *)(lVar9 + 0x100) - (long)pvVar10 >> 4;
    if (fVar4 < *(float *)((long)pvVar10 + (uVar19 - 1) * 0x10 + 8)) {
      if (uVar13 <= uVar15 && uVar15 - uVar13 != 0) {
        FUN_0103e51c(plVar20,uVar15 - uVar13);
        pvVar10 = (void *)*plVar20;
      }
      if (fVar4 < *(float *)((long)pvVar10 + 8)) {
        memmove((void *)((long)pvVar10 + 0x10),pvVar10,uVar19 << 4);
        *(ulong *)*plVar20 = uVar22;
        goto LAB_0188c1f8;
      }
      uVar8 = uVar19 - 1;
      uVar13 = uVar19 - 2;
      uVar15 = 1;
      while (uVar16 = uVar8, 2 < uVar13) {
        uVar3 = uVar15 + (long)((float)uVar13 * 0.5);
        uVar8 = uVar3;
        uVar13 = (long)((float)uVar13 * 0.5);
        if (*(float *)((long)pvVar10 + uVar3 * 0x10 + 8) <= fVar4) {
          uVar8 = uVar16;
          uVar13 = uVar16 - uVar3;
          uVar15 = uVar3;
        }
      }
      if (uVar16 <= uVar19 && uVar15 <= uVar16) {
        pfVar14 = (float *)((long)pvVar10 + uVar16 * 0x10 + 8);
        while (fVar4 < *pfVar14) {
          uVar16 = uVar16 - 1;
          if ((uVar16 < uVar15) || (pfVar14 = pfVar14 + -4, uVar19 < uVar16)) goto LAB_0188c6ec;
        }
        uVar16 = uVar16 + 1;
      }
LAB_0188c6ec:
      if (uVar16 <= uVar19 && uVar15 <= uVar16) {
        uVar15 = uVar16;
      }
      pvVar10 = (void *)((long)pvVar10 + uVar15 * 0x10);
      memmove((void *)((long)pvVar10 + 0x10),pvVar10,(uVar19 - uVar15) * 0x10);
      *(ulong *)(*plVar20 + uVar15 * 0x10) = uVar22;
      lVar9 = *plVar20 + uVar15 * 0x10;
    }
    else {
      if (uVar13 < uVar15) goto LAB_0188c4dc;
      *(ulong *)((long)pvVar10 + uVar19 * 0x10) = uVar22;
      lVar9 = *plVar20 + uVar19 * 0x10;
    }
LAB_0188c1fc:
    *(undefined4 *)(lVar9 + 8) = uVar7;
  }
  local_90 = 3;
  do {
    lVar9 = *(long *)(lVar17 + 0x160) - *(long *)(lVar17 + 0x158);
    local_88 = uVar22;
    if (lVar9 == 0) {
      uVar15 = *(long *)(lVar17 + 0xf0) - *(long *)(lVar17 + 0xe8) >> 4;
      FUN_0103b268(lVar17 + 0xe8,&local_90);
LAB_0188c34c:
      *(ulong *)(lVar17 + 400) = uVar15 + 1;
      goto LAB_0188c354;
    }
    uVar15 = *(ulong *)(*(long *)(lVar17 + 0x160) + -8);
    *(long *)(lVar17 + 0x160) = lVar9 + *(long *)(lVar17 + 0x158) + -8;
    uVar19 = uVar15 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(lVar17 + 0x120) + uVar19) =
         *(ulong *)(*(long *)(lVar17 + 0x120) + uVar19) &
         (1L << (uVar15 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(lVar17 + 0xf0) - *(long *)(lVar17 + 0xe8) >> 4) <= uVar15);
  puVar2 = (undefined8 *)(*(long *)(lVar17 + 0xe8) + uVar15 * 0x10);
  *puVar2 = 3;
  puVar2[1] = uVar22;
  if (*(ulong *)(lVar17 + 400) <= uVar15) goto LAB_0188c34c;
LAB_0188c354:
  *(undefined8 *)(lVar17 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x38));
LAB_0188c364:
  local_90 = uVar15;
  FUN_0103bd9c(local_a8 + 0x36,&local_90);
  if (!bVar23) {
    *plVar21 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
  }
  *(float *)(param_1 + 0x520) = fVar4 + 0.01;
  if (local_98 != '\0') {
    *local_a0 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_a0 + 1));
  }
  return;
}


