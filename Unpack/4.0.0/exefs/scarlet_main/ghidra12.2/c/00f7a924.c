/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7a924; name: FUN_00f7a924
 */


void FUN_00f7a924(undefined8 *param_1,ulong param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  bool bVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  long local_a0;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  plVar6 = (long *)param_1[1];
  lVar2 = param_1[2];
  puVar11 = (ulong *)**(undefined8 **)(*plVar6 + 0x10);
  lVar12 = (*(undefined8 **)(*plVar6 + 0x10))[7];
  if ((lVar12 == 0) || (uVar7 = *param_3, *puVar11 == uVar7)) {
    puVar15 = puVar11;
  }
  else {
    lVar19 = lVar12 * 0x10;
    puVar16 = puVar11;
    do {
      lVar19 = lVar19 + -0x10;
      if (lVar19 == 0) goto LAB_00f7ad50;
      puVar15 = puVar16 + 2;
      puVar1 = puVar16 + 2;
      puVar16 = puVar15;
    } while (*puVar1 != uVar7);
  }
  if (puVar15 != puVar11 + lVar12 * 2 && *(char *)(plVar6[1] + 0x8e9) != '\0') {
    local_90 = plVar6[4];
    lVar19 = *(long *)(*(long *)(**(long **)(plVar6[3] + 0x10) + puVar15[1] * 0x20) + 8);
    plVar26 = (long *)(lVar19 + 0x30);
    lVar12 = nn::os::GetCurrentThread();
LAB_00f7a9bc:
    if (*plVar26 == 0) goto code_r0x00f7a9c4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x38));
    do {
      if (*plVar26 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x38));
          while (*plVar26 == 0) {
            cVar3 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar22) {
              *plVar26 = lVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00f7a9cc;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar22) {
        *plVar26 = lVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00f7a9cc:
    lVar17 = local_90;
    lVar12 = *(long *)(lVar19 + 0x198);
    lVar25 = *(long *)(lVar19 + 0x1b8);
    lVar23 = *(long *)(lVar19 + 0x1d8);
    lVar20 = *(long *)(lVar19 + 0x1f8);
    if (lVar12 != 0) {
      if (((lVar25 == 0) && (lVar23 == 0)) && (lVar20 == 0)) {
        uVar7 = *(ulong *)(lVar12 + 0xb0);
        if (uVar7 != 0) {
          uVar13 = 0;
          local_a0 = 0;
          do {
            if ((uVar13 < uVar7) &&
               ((*(ulong *)(lVar12 + 0x48) <= uVar13 ||
                ((*(ulong *)(*(long *)(lVar12 + 0x40) + (uVar13 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar13 & 0x3f) & 1) == 0)))) {
              local_88 = lVar17;
              puVar21 = (undefined8 *)(*(long *)(lVar12 + 8) + local_a0);
              bVar5 = (*(code *)*puVar21)(puVar21 + 4,&local_88);
              *(byte *)(lVar12 + 0xc0) = bVar5 & 1;
              if ((bVar5 & 1) != 0) break;
              uVar7 = *(ulong *)(lVar12 + 0xb0);
            }
            uVar13 = uVar13 + 1;
            local_a0 = local_a0 + 0x40;
          } while (uVar13 < uVar7);
        }
        lVar12 = lVar12 + 0xb8;
      }
      else {
        lVar12 = FUN_028cd2a8(lVar12,&local_90);
      }
      local_a0._0_1_ = *(char *)(lVar12 + 8);
    }
    if (lVar25 != 0) {
      if ((lVar23 == 0) && (lVar20 == 0)) {
        FUN_028cd304(*(undefined8 *)(lVar19 + 0x1b8),&local_90);
      }
      else {
        FUN_00f7bc50(*(undefined8 *)(lVar19 + 0x1b8),&local_90);
      }
    }
    if (lVar23 == 0) {
      if (lVar20 != 0) goto LAB_00f7b0c8;
    }
    else if (lVar20 == 0) {
      FUN_00f7bca8();
    }
    else {
      FUN_028cd35c(*(undefined8 *)(lVar19 + 0x1d8),&local_90);
LAB_00f7b0c8:
      FUN_00f7bd20(*(undefined8 *)(lVar19 + 0x1f8),&local_90);
    }
    plVar26 = (long *)(lVar19 + 0x48);
    lVar17 = *plVar26;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 != lVar17) {
      lVar12 = nn::os::GetCurrentThread();
LAB_00f7aa0c:
      if (*plVar26 == 0) goto code_r0x00f7aa14;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x50));
      do {
        if (*plVar26 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x50));
            while (*plVar26 == 0) {
              cVar3 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar22) {
                *plVar26 = lVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00f7aa1c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar22) {
          *plVar26 = lVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00f7aa1c:
      bVar22 = false;
      goto LAB_00f7aa20;
    }
    plVar26 = (long *)0x0;
    bVar22 = true;
LAB_00f7aa20:
    plVar8 = (long *)(lVar19 + 0x60);
    puVar21 = (undefined8 *)*plVar8;
    puVar18 = *(undefined8 **)(lVar19 + 0x68);
    puVar24 = puVar21;
    if (puVar21 != puVar18) {
      do {
        (*(code *)*puVar21)(puVar21 + 4);
        puVar21 = puVar21 + 0x20;
      } while (puVar21 != puVar18);
      puVar24 = *(undefined8 **)(lVar19 + 0x60);
      puVar18 = *(undefined8 **)(lVar19 + 0x68);
      if (puVar18 == puVar24) {
        puVar21 = puVar18;
        puVar24 = puVar18;
      }
      else {
        puVar21 = puVar24;
        if (puVar24 != puVar18) {
          do {
            pcVar9 = (code *)puVar18[-0x1f];
            puVar21 = puVar18 + -0x20;
            if (pcVar9 != (code *)0x0) {
              puVar18[-0x1e] = 0;
              puVar18[-0x1d] = 0;
              puVar18[-0x20] = 0;
              puVar18[-0x1f] = 0;
              (*pcVar9)(puVar18 + -0x1c);
            }
            puVar18 = puVar21;
          } while (puVar24 != puVar21);
          puVar21 = (undefined8 *)*plVar8;
        }
        *(undefined8 **)(lVar19 + 0x68) = puVar24;
      }
    }
    lVar12 = (long)puVar24 - (long)puVar21;
    if ((ulong)(lVar12 >> 8) < (ulong)(*(long *)(lVar19 + 0x70) - (long)puVar21 >> 8)) {
      puVar21 = (undefined8 *)(lVar19 + 0x78);
      local_70 = 0;
      puStack_68 = puVar21;
      if (lVar12 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = (**(code **)(*(long *)*puVar21 + 0x10))((long *)*puVar21,lVar12,0x10);
        if (lVar17 == 0) {
          (**(code **)(*(long *)*puVar21 + 0xe8))();
        }
      }
      lStack_80 = lVar17 + (lVar12 >> 8) * 0x100;
      local_88 = lVar17;
      local_78 = lStack_80;
      local_70 = lStack_80;
      FUN_0103b38c(plVar8,&local_88);
      FUN_0103bbd0(&local_88);
    }
    if (!bVar22) {
      *plVar26 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar26 + 1));
    }
    plVar26 = (long *)(lVar19 + 0x98);
    lVar17 = *plVar26;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 == lVar17) {
      plVar26 = (long *)0x0;
      bVar22 = true;
LAB_00f7aa94:
      lVar12 = *(long *)(lVar19 + 0xb8) - (long)*(undefined8 **)(lVar19 + 0xb0);
      if (lVar12 != 0) {
        lVar12 = lVar12 >> 3;
        puVar21 = *(undefined8 **)(lVar19 + 0xb0);
        do {
          FUN_015a42d4(lVar19,*puVar21);
          lVar12 = lVar12 + -1;
          puVar21 = puVar21 + 1;
        } while (lVar12 != 0);
        if (*(long *)(lVar19 + 0xb8) != *(long *)(lVar19 + 0xb0)) {
          *(long *)(lVar19 + 0xb8) = *(long *)(lVar19 + 0xb0);
        }
      }
      if (!bVar22) {
        *plVar26 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar26 + 1));
      }
      *(undefined8 *)(lVar19 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x38));
      if ((char)local_a0 != '\0') {
        lVar12 = plVar6[4];
        goto LAB_00f7aacc;
      }
      lVar12 = *(long *)plVar6[2];
      uVar7 = *(ulong *)(lVar12 + 0x78);
      if (uVar7 == 0) {
        return;
      }
      uVar13 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar10 = *param_3;
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar7 - 1 & uVar10;
      }
      else if (uVar10 < uVar7) {
        uVar14 = uVar10;
      }
      else {
        uVar14 = 0;
        if (uVar7 != 0) {
          uVar14 = uVar10 / uVar7;
        }
        uVar14 = uVar10 - uVar14 * uVar7;
      }
      plVar6 = *(long **)(*(long *)(lVar12 + 0x70) + uVar14 * 8);
      if (plVar6 == (long *)0x0) {
        return;
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return;
      }
      if (1 < uVar13) {
        do {
          uVar13 = plVar6[1];
          if (uVar13 == uVar10) {
            if (plVar6[2] == uVar10) goto LAB_00f7ad30;
          }
          else {
            if (uVar7 <= uVar13) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar13 / uVar7;
              }
              uVar13 = uVar13 - uVar4 * uVar7;
            }
            if (uVar13 != uVar14) {
              return;
            }
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return;
          }
        } while( true );
      }
      while (plVar6[1] != uVar10) {
        if ((plVar6[1] & uVar7 - 1) != uVar14) {
          return;
        }
LAB_00f7acd8:
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return;
        }
      }
      if (plVar6[2] != uVar10) goto LAB_00f7acd8;
LAB_00f7ad30:
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + (long)(int)plVar6[6] * 0x20);
      goto LAB_00f7ad40;
    }
    lVar12 = nn::os::GetCurrentThread();
    while (*plVar26 == 0) {
      cVar3 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar22) {
        *plVar26 = lVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00f7aa90;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xa0));
    do {
      if (*plVar26 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xa0));
          while (*plVar26 == 0) {
            cVar3 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar22) {
              *plVar26 = lVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00f7aa90;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar22) {
        *plVar26 = lVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00f7aa90:
    bVar22 = false;
    goto LAB_00f7aa94;
  }
  uVar7 = *param_3;
LAB_00f7ad50:
  lVar12 = *(long *)plVar6[2];
  uVar13 = *(ulong *)(lVar12 + 0x78);
  if (uVar13 != 0) {
    uVar10 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar14 = uVar13 - 1 & uVar7;
    }
    else {
      uVar14 = uVar7;
      if (uVar13 <= uVar7) {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar7 / uVar13;
        }
        uVar14 = uVar7 - uVar14 * uVar13;
      }
    }
    plVar6 = *(long **)(*(long *)(lVar12 + 0x70) + uVar14 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar6[1] == uVar7) {
            if (plVar6[2] == uVar7) goto LAB_00f7afd0;
          }
          else if ((plVar6[1] & uVar13 - 1) != uVar14) {
            return;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar6[1];
          if (uVar10 == uVar7) {
            if (plVar6[2] == uVar7) {
LAB_00f7afd0:
              lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + (long)(int)plVar6[6] * 0x20);
LAB_00f7ad40:
              if (*(char *)(lVar12 + 0xd0) == '\0') {
                return;
              }
LAB_00f7aacc:
              if (lVar12 == 0) {
                return;
              }
              plVar6 = (long *)*param_1;
              if ((ulong)((plVar6[1] - *plVar6 >> 4) * -0x5075075075075075) <= param_2) {
                FUN_00f7bc0c(plVar6,param_2 + 1);
                plVar6 = (long *)*param_1;
              }
              FUN_00f7b0e4(*(undefined8 *)(lVar12 + 0x40),
                           (float)(*(double *)(lVar2 + 0x260) * (double)*(float *)(lVar12 + 0x1c)),
                           (float)(*(double *)(lVar2 + 0x250) * (double)*(float *)(lVar12 + 0x14)),
                           (float)(*(double *)(lVar2 + 600) * (double)*(float *)(lVar12 + 0x18)),
                           *(undefined4 *)(lVar12 + 0x20),*plVar6 + param_2 * 0x230,lVar12 + 0x50);
              return;
            }
          }
          else {
            if (uVar13 <= uVar10) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar10 / uVar13;
              }
              uVar10 = uVar10 - uVar4 * uVar13;
            }
            if (uVar10 != uVar14) {
              return;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return;
code_r0x00f7a9c4:
  cVar3 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar26,0x10);
  if (bVar22) {
    *plVar26 = lVar12;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00f7a9cc;
  goto LAB_00f7a9bc;
code_r0x00f7aa14:
  cVar3 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar26,0x10);
  if (bVar22) {
    *plVar26 = lVar12;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00f7aa1c;
  goto LAB_00f7aa0c;
}


