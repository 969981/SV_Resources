/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029df988; name: FUN_029df988
 */


void FUN_029df988(long param_1,undefined8 param_2)

{
  short *psVar1;
  undefined2 uVar2;
  short sVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  char cVar11;
  ulong uVar12;
  code *pcVar13;
  undefined1 uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  short sVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  if ((*(byte *)(param_1 + 0x278) & 1) == 0) {
    return;
  }
  plVar23 = *(long **)(param_1 + 0x180);
  for (plVar10 = *(long **)(param_1 + 0x178); plVar10 != plVar23; plVar10 = plVar10 + 1) {
    lVar20 = *plVar10;
    plVar19 = (long *)(lVar20 + 0x60);
    lVar9 = nn::os::GetCurrentThread();
    while (*plVar19 == 0) {
      cVar11 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar9;
        cVar11 = ExclusiveMonitorsStatus();
      }
      if (cVar11 == '\0') goto LAB_029df9f8;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x68));
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x68));
          while (*plVar19 == 0) {
            cVar11 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = lVar9;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_029df9f8;
          }
        } while( true );
      }
      cVar11 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar9;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_029df9f8:
    cVar11 = *(char *)(lVar20 + 0xeb);
    *(undefined8 *)(lVar20 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x68));
    if (cVar11 == '\0') {
      return;
    }
  }
  lVar9 = *(long *)(param_1 + 0x280);
  if (lVar9 == 0) {
    bVar6 = false;
  }
  else if (*(char *)(lVar9 + 0x69) == '\0') {
    bVar6 = *(char *)(lVar9 + 0x6a) != '\0';
  }
  else {
    bVar6 = true;
  }
  lVar9 = *(long *)(param_1 + 0x288);
  if (lVar9 == 0) {
    bVar7 = false;
  }
  else if (*(char *)(lVar9 + 0x69) == '\0') {
    bVar7 = *(char *)(lVar9 + 0x6a) != '\0';
  }
  else {
    bVar7 = true;
  }
  bVar4 = bVar6 | bVar7;
  plVar10 = (long *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x244) == '\0') {
    cVar11 = '\x04';
    if (bVar4 == 0) {
      cVar11 = '\0';
    }
    if ((*(char *)(param_1 + 0x58) == cVar11) && (*(char *)(param_1 + 0x59) == '\n'))
    goto LAB_029dfadc;
    uVar2 = *(undefined2 *)(param_1 + 0x58);
    *(char *)(param_1 + 0x58) = cVar11;
    cVar11 = '\n';
  }
  else {
    cVar11 = *(char *)(param_1 + 0x245);
    if ((*(char *)(param_1 + 0x58) == cVar11) && (*(char *)(param_1 + 0x59) == cVar11))
    goto LAB_029dfadc;
    uVar2 = *(undefined2 *)(param_1 + 0x58);
    *(char *)(param_1 + 0x58) = cVar11;
  }
  *(char *)(param_1 + 0x59) = cVar11;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x48),plVar10);
  }
  (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
LAB_029dfadc:
  plVar10 = (long *)(param_1 + 0x140);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar11 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar9;
      cVar11 = ExclusiveMonitorsStatus();
    }
    if (cVar11 == '\0') goto LAB_029dfaf8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar10 == 0) {
          cVar11 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar9;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB_029dfaf8;
        }
      } while( true );
    }
    cVar11 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar9;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
LAB_029dfaf8:
  if ((((*(char *)(param_1 + 0x246) == '\0') ||
       ((*(long *)(param_1 + 0x130) != 0 && (*(short *)(*(long *)(param_1 + 0x130) + 0x1a) != 0))))
      && (lVar9 = *(long *)(param_1 + 0x120), lVar9 != 0)) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar18 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar18) {
        cVar11 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar18 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
        if (cVar11 != '\0') goto LAB_029dfde0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_029dfde0:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0xf2) != '\0') {
            iVar8 = *(int *)(lVar9 + 0x108);
            (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
            *(undefined8 *)(param_1 + 0x140) = 0;
            nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
            if (iVar8 != 3) goto LAB_029dfb18;
            plVar10 = (long *)FUN_00c8dda0(param_1);
            if (plVar10 == (long *)0x0) {
              return;
            }
            (**(code **)(*plVar10 + 0x58))();
            if (*(char *)(param_1 + 0x249) != '\0') goto LAB_029e0088;
            if (((*(byte *)(param_1 + 0x290) == bVar4) && (*(byte *)(param_1 + 0x291) != bVar4)) &&
               (*(byte *)(param_1 + 0x291) = bVar4, bVar4 == 0)) {
              (**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0x68))();
            }
            lVar9 = *(long *)(param_1 + 0x298);
            *(byte *)(param_1 + 0x290) = bVar4;
            if (bVar7 != false || (bVar6 != false || lVar9 == 0)) goto LAB_029dfe98;
            local_90 = 0;
            if (*(long *)(param_1 + 0xe8) != 0) {
              local_90 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
            }
            plVar23 = (long *)(lVar9 + 0x30);
            lVar20 = nn::os::GetCurrentThread();
            goto LAB_029e0168;
          }
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
        }
        break;
      }
      sVar18 = sVar3;
    } while (sVar3 != 0);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
LAB_029dfb18:
  if (*(long **)(param_1 + 0x180) == *(long **)(param_1 + 0x178)) {
    return;
  }
  lVar9 = **(long **)(param_1 + 0x178);
  if (bVar4 == 0) {
    if (*(char *)(param_1 + 0x244) == '\0') {
      uVar14 = *(undefined1 *)(param_1 + 0x2a0);
    }
    else {
      uVar14 = 0;
    }
    *(undefined1 *)(lVar9 + 0x1fc) = uVar14;
    if ((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 3) < 2) {
      return;
    }
    if (*(char *)(param_1 + 0x244) == '\0') {
      uVar14 = *(undefined1 *)(param_1 + 0x2a0);
    }
    else {
      uVar14 = 0;
    }
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x178) + 8) + 0x1fc) = uVar14;
    lVar9 = *(long *)(param_1 + 0x178);
    if ((ulong)(*(long *)(param_1 + 0x180) - lVar9 >> 3) < 3) {
      return;
    }
    uVar12 = 2;
    do {
      if (*(char *)(param_1 + 0x244) == '\0') {
        uVar14 = *(undefined1 *)(param_1 + 0x2a0);
      }
      else {
        uVar14 = 0;
      }
      *(undefined1 *)(*(long *)(lVar9 + uVar12 * 8) + 0x1fc) = uVar14;
      lVar9 = *(long *)(param_1 + 0x178);
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulong)(*(long *)(param_1 + 0x180) - lVar9 >> 3));
    return;
  }
  if (*(char *)(param_1 + 0x244) == '\0') {
    uVar15 = (uint)*(byte *)(param_1 + 0x2a0) * (uint)*(byte *)(param_1 + 0x2a0);
    if (9 < uVar15) {
      uVar15 = 10;
    }
    uVar14 = (undefined1)uVar15;
  }
  else {
    uVar14 = 0;
  }
  *(undefined1 *)(lVar9 + 0x1fc) = uVar14;
  if ((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 3) < 2) {
    return;
  }
  if (*(char *)(param_1 + 0x244) == '\0') {
    uVar15 = (uint)*(byte *)(param_1 + 0x2a0) * (uint)*(byte *)(param_1 + 0x2a0);
    if (9 < uVar15) {
      uVar15 = 10;
    }
    uVar14 = (undefined1)uVar15;
  }
  else {
    uVar14 = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x178) + 8) + 0x1fc) = uVar14;
  lVar9 = *(long *)(param_1 + 0x178);
  if ((ulong)(*(long *)(param_1 + 0x180) - lVar9 >> 3) < 3) {
    return;
  }
  uVar12 = 2;
  do {
    if (*(char *)(param_1 + 0x244) == '\0') {
      uVar15 = (uint)*(byte *)(param_1 + 0x2a0) * (uint)*(byte *)(param_1 + 0x2a0);
      if (9 < uVar15) {
        uVar15 = 10;
      }
      uVar14 = (undefined1)uVar15;
    }
    else {
      uVar14 = 0;
    }
    *(undefined1 *)(*(long *)(lVar9 + uVar12 * 8) + 0x1fc) = uVar14;
    lVar9 = *(long *)(param_1 + 0x178);
    uVar12 = uVar12 + 1;
  } while (uVar12 < (ulong)(*(long *)(param_1 + 0x180) - lVar9 >> 3));
  return;
code_r0x029e01bc:
  cVar11 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar6) {
    *plVar23 = lVar20;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_029e01c4;
  goto LAB_029e01b4;
code_r0x029e0230:
  cVar11 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar6) {
    *plVar23 = lVar20;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_029e0238;
  goto LAB_029e0228;
LAB_029e0168:
  if (*plVar23 == 0) {
    cVar11 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar6) {
      *plVar23 = lVar20;
      cVar11 = ExclusiveMonitorsStatus();
    }
    if (cVar11 == '\0') goto LAB_029e0178;
    goto LAB_029e0168;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x38));
  do {
    if (*plVar23 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x38));
        while (*plVar23 == 0) {
          cVar11 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = lVar20;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB_029e0178;
        }
      } while( true );
    }
    cVar11 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar6) {
      *plVar23 = lVar20;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
LAB_029e0178:
  lVar20 = *(long *)(lVar9 + 0x198);
  lVar26 = *(long *)(lVar9 + 0x1b8);
  lVar24 = *(long *)(lVar9 + 0x1d8);
  lVar22 = *(long *)(lVar9 + 0x1f8);
  if (lVar20 != 0) {
    if (((lVar26 == 0) && (lVar24 == 0)) && (lVar22 == 0)) {
      if (*(long *)(lVar20 + 0xb0) != 0) {
        uVar12 = 0;
        do {
          FUN_029e0710(lVar20,uVar12,param_2,&local_90);
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ulong *)(lVar20 + 0xb0));
      }
    }
    else if (*(long *)(lVar20 + 0xb0) != 0) {
      uVar12 = 0;
      do {
        FUN_029e06a0(lVar20,uVar12,param_2,&local_90);
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ulong *)(lVar20 + 0xb0));
    }
  }
  if (lVar26 != 0) {
    lVar20 = *(long *)(lVar9 + 0x1b8);
    if ((lVar24 == 0) && (lVar22 == 0)) {
      if (*(long *)(lVar20 + 0xb0) != 0) {
        uVar12 = 0;
        do {
          FUN_029e0844(lVar20,uVar12,param_2,&local_90);
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ulong *)(lVar20 + 0xb0));
      }
    }
    else if (*(long *)(lVar20 + 0xb0) != 0) {
      uVar12 = 0;
      do {
        FUN_029e0780(lVar20,uVar12,param_2,&local_90);
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ulong *)(lVar20 + 0xb0));
    }
  }
  lVar20 = local_90;
  if (lVar24 == 0) {
LAB_029e0194:
    if (lVar22 != 0) {
LAB_029e0620:
      FUN_029e0984(*(undefined8 *)(lVar9 + 0x1f8),param_2,&local_90);
    }
  }
  else {
    lVar24 = *(long *)(lVar9 + 0x1d8);
    if (lVar22 != 0) {
      FUN_029e0908(lVar24,param_2,&local_90);
      goto LAB_029e0620;
    }
    uVar12 = *(ulong *)(lVar24 + 0x130);
    if (uVar12 != 0) {
      uVar16 = **(ulong **)(lVar24 + 0xf8);
      if ((uVar16 < *(ulong *)(lVar24 + 0xb0)) &&
         ((*(ulong *)(lVar24 + 0x48) <= uVar16 ||
          ((*(ulong *)(*(long *)(lVar24 + 0x40) + (uVar16 >> 3 & 0x1ffffffffffffff8)) >>
            (uVar16 & 0x3f) & 1) == 0)))) {
        local_88 = local_90;
        puVar21 = (undefined8 *)(*(long *)(lVar24 + 8) + uVar16 * 0x80);
        (*(code *)*puVar21)(puVar21 + 4,param_2,&local_88);
        uVar12 = *(ulong *)(lVar24 + 0x130);
      }
      if (1 < uVar12) {
        uVar16 = *(ulong *)(*(long *)(lVar24 + 0xf8) + 0x10);
        if ((uVar16 < *(ulong *)(lVar24 + 0xb0)) &&
           ((*(ulong *)(lVar24 + 0x48) <= uVar16 ||
            ((*(ulong *)(*(long *)(lVar24 + 0x40) + (uVar16 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar16 & 0x3f) & 1) == 0)))) {
          local_88 = lVar20;
          puVar21 = (undefined8 *)(*(long *)(lVar24 + 8) + uVar16 * 0x80);
          (*(code *)*puVar21)(puVar21 + 4,param_2,&local_88);
          uVar12 = *(ulong *)(lVar24 + 0x130);
        }
        if (2 < uVar12) {
          uVar16 = 2;
          lVar26 = 0x20;
          do {
            uVar17 = *(ulong *)(*(long *)(lVar24 + 0xf8) + lVar26);
            if ((uVar17 < *(ulong *)(lVar24 + 0xb0)) &&
               ((*(ulong *)(lVar24 + 0x48) <= uVar17 ||
                ((*(ulong *)(*(long *)(lVar24 + 0x40) + (uVar17 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar17 & 0x3f) & 1) == 0)))) {
              local_88 = lVar20;
              puVar21 = (undefined8 *)(*(long *)(lVar24 + 8) + uVar17 * 0x80);
              (*(code *)*puVar21)(puVar21 + 4,param_2,&local_88);
              uVar12 = *(ulong *)(lVar24 + 0x130);
            }
            uVar16 = uVar16 + 1;
            lVar26 = lVar26 + 0x10;
          } while (uVar16 < uVar12);
        }
      }
      goto LAB_029e0194;
    }
  }
  plVar23 = (long *)(lVar9 + 0x48);
  lVar22 = *plVar23;
  lVar20 = nn::os::GetCurrentThread();
  if (lVar20 != lVar22) {
    lVar20 = nn::os::GetCurrentThread();
LAB_029e01b4:
    if (*plVar23 == 0) goto code_r0x029e01bc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x50));
    do {
      if (*plVar23 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x50));
          while (*plVar23 == 0) {
            cVar11 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *plVar23 = lVar20;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_029e01c4;
          }
        } while( true );
      }
      cVar11 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar20;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_029e01c4:
    bVar6 = false;
    goto LAB_029e01c8;
  }
  plVar23 = (long *)0x0;
  bVar6 = true;
LAB_029e01c8:
  plVar19 = (long *)(lVar9 + 0x60);
  puVar21 = (undefined8 *)*plVar19;
  puVar25 = *(undefined8 **)(lVar9 + 0x68);
  puVar27 = puVar21;
  if (puVar21 != puVar25) {
    do {
      (*(code *)*puVar21)(puVar21 + 4);
      puVar21 = puVar21 + 0x20;
    } while (puVar21 != puVar25);
    puVar27 = *(undefined8 **)(lVar9 + 0x60);
    puVar25 = *(undefined8 **)(lVar9 + 0x68);
    if (puVar25 == puVar27) {
      puVar21 = puVar25;
      puVar27 = puVar25;
    }
    else {
      puVar21 = puVar27;
      if (puVar27 != puVar25) {
        do {
          pcVar13 = (code *)puVar25[-0x1f];
          puVar21 = puVar25 + -0x20;
          if (pcVar13 != (code *)0x0) {
            puVar25[-0x1e] = 0;
            puVar25[-0x1d] = 0;
            puVar25[-0x20] = 0;
            puVar25[-0x1f] = 0;
            (*pcVar13)(puVar25 + -0x1c);
          }
          puVar25 = puVar21;
        } while (puVar27 != puVar21);
        puVar21 = (undefined8 *)*plVar19;
      }
      *(undefined8 **)(lVar9 + 0x68) = puVar27;
    }
  }
  lVar20 = (long)puVar27 - (long)puVar21;
  if ((ulong)(lVar20 >> 8) < (ulong)(*(long *)(lVar9 + 0x70) - (long)puVar21 >> 8)) {
    puVar21 = (undefined8 *)(lVar9 + 0x78);
    local_70 = 0;
    puStack_68 = puVar21;
    if (lVar20 == 0) {
      lVar22 = 0;
    }
    else {
      lVar22 = (**(code **)(*(long *)*puVar21 + 0x10))((long *)*puVar21,lVar20,0x10);
      if (lVar22 == 0) {
        (**(code **)(*(long *)*puVar21 + 0xe8))();
      }
    }
    lStack_80 = lVar22 + (lVar20 >> 8) * 0x100;
    local_88 = lVar22;
    local_78 = lStack_80;
    local_70 = lStack_80;
    FUN_0103b38c(plVar19,&local_88);
    FUN_0103bbd0(&local_88);
  }
  if (!bVar6) {
    *plVar23 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar23 + 1));
  }
  plVar23 = (long *)(lVar9 + 0x98);
  lVar22 = *plVar23;
  lVar20 = nn::os::GetCurrentThread();
  if (lVar20 != lVar22) {
    lVar20 = nn::os::GetCurrentThread();
LAB_029e0228:
    if (*plVar23 == 0) goto code_r0x029e0230;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xa0));
    do {
      if (*plVar23 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xa0));
          while (*plVar23 == 0) {
            cVar11 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *plVar23 = lVar20;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_029e0238;
          }
        } while( true );
      }
      cVar11 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar20;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_029e0238:
    bVar6 = false;
    goto LAB_029e023c;
  }
  plVar23 = (long *)0x0;
  bVar6 = true;
LAB_029e023c:
  lVar20 = *(long *)(lVar9 + 0xb8) - (long)*(undefined8 **)(lVar9 + 0xb0);
  if (lVar20 != 0) {
    lVar20 = lVar20 >> 3;
    puVar21 = *(undefined8 **)(lVar9 + 0xb0);
    do {
      FUN_022e17b4(lVar9,*puVar21);
      lVar20 = lVar20 + -1;
      puVar21 = puVar21 + 1;
    } while (lVar20 != 0);
    if (*(long *)(lVar9 + 0xb8) != *(long *)(lVar9 + 0xb0)) {
      *(long *)(lVar9 + 0xb8) = *(long *)(lVar9 + 0xb0);
    }
  }
  if (!bVar6) {
    *plVar23 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar23 + 1));
  }
  *(undefined8 *)(lVar9 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x38));
LAB_029dfe98:
  plVar23 = (long *)(param_1 + 0x158);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar23 == 0) {
    cVar11 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar6) {
      *plVar23 = lVar9;
      cVar11 = ExclusiveMonitorsStatus();
    }
    if (cVar11 == '\0') goto LAB_029dfeb4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x160));
  do {
    if (*plVar23 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x160));
        while (*plVar23 == 0) {
          cVar11 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = lVar9;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB_029dfeb4;
        }
      } while( true );
    }
    cVar11 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar6) {
      *plVar23 = lVar9;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
LAB_029dfeb4:
  if (*(long **)(param_1 + 0x180) != *(long **)(param_1 + 0x178)) {
    lVar9 = **(long **)(param_1 + 0x178);
    if (bVar4 == 0) {
      if (*(char *)(param_1 + 0x244) == '\0') {
        uVar14 = *(undefined1 *)(param_1 + 0x2a0);
      }
      else {
        uVar14 = 0;
      }
      *(undefined1 *)(lVar9 + 0x1fc) = uVar14;
      FUN_01a83b20(*(undefined4 *)(param_1 + 0x240),**(undefined8 **)(param_1 + 0x178),param_2,0);
      if (1 < (ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 3)) {
        if (*(char *)(param_1 + 0x244) == '\0') {
          uVar14 = *(undefined1 *)(param_1 + 0x2a0);
        }
        else {
          uVar14 = 0;
        }
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x178) + 8) + 0x1fc) = uVar14;
        FUN_01a83b20(*(undefined4 *)(param_1 + 0x240),
                     *(undefined8 *)(*(long *)(param_1 + 0x178) + 8),param_2,0);
        lVar9 = *(long *)(param_1 + 0x178);
        if (2 < (ulong)(*(long *)(param_1 + 0x180) - lVar9 >> 3)) {
          uVar12 = 2;
          do {
            if (*(char *)(param_1 + 0x244) == '\0') {
              uVar14 = *(undefined1 *)(param_1 + 0x2a0);
            }
            else {
              uVar14 = 0;
            }
            *(undefined1 *)(*(long *)(lVar9 + uVar12 * 8) + 0x1fc) = uVar14;
            FUN_01a83b20(*(undefined4 *)(param_1 + 0x240),
                         *(undefined8 *)(*(long *)(param_1 + 0x178) + uVar12 * 8),param_2,0);
            lVar9 = *(long *)(param_1 + 0x178);
            uVar12 = uVar12 + 1;
          } while (uVar12 < (ulong)(*(long *)(param_1 + 0x180) - lVar9 >> 3));
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x244) == '\0') {
        uVar15 = (uint)*(byte *)(param_1 + 0x2a0) * (uint)*(byte *)(param_1 + 0x2a0);
        if (9 < uVar15) {
          uVar15 = 10;
        }
        uVar14 = (undefined1)uVar15;
      }
      else {
        uVar14 = 0;
      }
      *(undefined1 *)(lVar9 + 0x1fc) = uVar14;
      FUN_01a83b20(*(undefined4 *)(param_1 + 0x240),**(undefined8 **)(param_1 + 0x178),param_2,1);
      if (1 < (ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 3)) {
        if (*(char *)(param_1 + 0x244) == '\0') {
          uVar15 = (uint)*(byte *)(param_1 + 0x2a0) * (uint)*(byte *)(param_1 + 0x2a0);
          if (9 < uVar15) {
            uVar15 = 10;
          }
          uVar14 = (undefined1)uVar15;
        }
        else {
          uVar14 = 0;
        }
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x178) + 8) + 0x1fc) = uVar14;
        FUN_01a83b20(*(undefined4 *)(param_1 + 0x240),
                     *(undefined8 *)(*(long *)(param_1 + 0x178) + 8),param_2,1);
        lVar9 = *(long *)(param_1 + 0x178);
        if (2 < (ulong)(*(long *)(param_1 + 0x180) - lVar9 >> 3)) {
          uVar12 = 2;
          do {
            if (*(char *)(param_1 + 0x244) == '\0') {
              uVar15 = (uint)*(byte *)(param_1 + 0x2a0) * (uint)*(byte *)(param_1 + 0x2a0);
              if (9 < uVar15) {
                uVar15 = 10;
              }
              uVar14 = (undefined1)uVar15;
            }
            else {
              uVar14 = 0;
            }
            *(undefined1 *)(*(long *)(lVar9 + uVar12 * 8) + 0x1fc) = uVar14;
            FUN_01a83b20(*(undefined4 *)(param_1 + 0x240),
                         *(undefined8 *)(*(long *)(param_1 + 0x178) + uVar12 * 8),param_2,1);
            lVar9 = *(long *)(param_1 + 0x178);
            uVar12 = uVar12 + 1;
          } while (uVar12 < (ulong)(*(long *)(param_1 + 0x180) - lVar9 >> 3));
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x160));
LAB_029e0088:
  (**(code **)(*plVar10 + 0x60))(plVar10);
  return;
}


