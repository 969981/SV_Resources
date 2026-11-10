/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01295394; name: FUN_01295394
 */


void FUN_01295394(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  bool bVar17;
  
  plVar11 = (long *)(param_1 + 0x30);
  lVar13 = *plVar11;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar13) {
    lVar4 = nn::os::GetCurrentThread();
LAB_012953d0:
    if (*plVar11 == 0) goto code_r0x012953d8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
          while (*plVar11 == 0) {
            cVar2 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar17) {
              *plVar11 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_012953e0;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar17) {
        *plVar11 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_012953e0:
    bVar17 = false;
    plVar16 = plVar11;
    goto LAB_012953e8;
  }
  plVar16 = (long *)0x0;
  bVar17 = true;
LAB_012953e8:
  lVar13 = *plVar11;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar13) {
    lVar4 = nn::os::GetCurrentThread();
LAB_01295400:
    if (*plVar11 == 0) goto code_r0x01295408;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
          while (*plVar11 == 0) {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              bVar5 = false;
              goto LAB_01295410;
            }
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar5 = false;
    goto LAB_01295410;
  }
  plVar11 = (long *)0x0;
  bVar5 = true;
LAB_01295410:
  uVar8 = *(ulong *)(param_1 + 0x50);
  if (uVar8 != 0) {
    uVar6 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar1 = (int)(*(float *)(param_2 + 0x130) / 50.0) & 0xffffU |
            (int)(*(float *)(param_2 + 0x138) / 50.0) << 0x10;
    uVar7 = (ulong)(int)uVar1;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar12 = uVar8 - 1 & uVar7;
    }
    else {
      uVar12 = uVar7;
      if (uVar8 <= uVar7) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar7 / uVar8;
        }
        uVar12 = uVar7 - uVar12 * uVar8;
      }
    }
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x48) + uVar12 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar10, plVar9 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar9[1] == uVar7) {
            if (*(uint *)(plVar9 + 2) == uVar1) goto LAB_01295778;
          }
          else if ((plVar9[1] & uVar8 - 1) != uVar12) goto LAB_0129548c;
          plVar9 = (long *)*plVar9;
          plVar14 = (long *)0x0;
          plVar15 = (long *)0x0;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar9[1];
          if (uVar6 == uVar7) {
            if (*(uint *)(plVar9 + 2) == uVar1) goto LAB_01295778;
          }
          else {
            if (uVar8 <= uVar6) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar6 / uVar8;
              }
              uVar6 = uVar6 - uVar3 * uVar8;
            }
            if (uVar6 != uVar12) goto LAB_0129548c;
          }
          plVar9 = (long *)*plVar9;
          plVar15 = (long *)0x0;
          plVar14 = (long *)0x0;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_01295494;
    }
  }
LAB_0129548c:
  plVar15 = (long *)0x0;
  plVar14 = (long *)0x0;
  goto LAB_01295494;
code_r0x012953d8:
  cVar2 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar17) {
    *plVar11 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_012953e0;
  goto LAB_012953d0;
code_r0x01295408:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar5) {
    *plVar11 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  bVar5 = false;
  if (cVar2 == '\0') goto LAB_01295410;
  goto LAB_01295400;
LAB_01295778:
  plVar15 = plVar9;
  do {
    plVar15 = (long *)*plVar15;
    plVar14 = plVar9;
    if (plVar15 == (long *)0x0) break;
  } while (*(uint *)(plVar15 + 2) == uVar1);
LAB_01295494:
  if (!bVar5) {
    *plVar11 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
  }
  while( true ) {
    if (plVar14 == plVar15) goto LAB_01295680;
    if (plVar14[3] == param_2) break;
    plVar14 = (long *)*plVar14;
  }
  uVar7 = *(ulong *)(param_1 + 0x50);
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar6 = plVar14[1];
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar6 = uVar7 - 1 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar12 = 0;
    if (uVar7 != 0) {
      uVar12 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar12 * uVar7;
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0x48) + uVar6 * 8);
  plVar9 = (long *)*plVar11;
  if (plVar9 != plVar14) {
    plVar15 = (long *)*plVar9;
    plVar11 = plVar9;
    if (plVar15 != plVar14) {
      plVar9 = (long *)*plVar15;
      plVar11 = plVar15;
      if (plVar9 != plVar14) {
        plVar15 = (long *)*plVar9;
        plVar11 = plVar9;
        if (plVar15 != plVar14) {
          plVar9 = (long *)*plVar15;
          plVar11 = plVar15;
          if (plVar9 != plVar14) {
            plVar15 = (long *)*plVar9;
            plVar11 = plVar9;
            if (plVar15 != plVar14) {
              plVar11 = plVar15;
              for (plVar9 = (long *)*plVar15; plVar9 != plVar14; plVar9 = (long *)*plVar9) {
                plVar11 = plVar9;
              }
            }
          }
        }
      }
    }
  }
  if (plVar11 == (long *)(param_1 + 0x78)) {
LAB_012956f4:
    if (*plVar14 != 0) {
      uVar12 = *(ulong *)(*plVar14 + 8);
      if (uVar8 < 2) {
        uVar12 = uVar12 & uVar7 - 1;
      }
      else if (uVar7 <= uVar12) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar12 / uVar7;
        }
        uVar12 = uVar12 - uVar3 * uVar7;
      }
      if (uVar12 == uVar6) goto LAB_01295640;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x48) + uVar6 * 8) = 0;
  }
  else {
    uVar12 = plVar11[1];
    if (uVar8 < 2) {
      uVar12 = uVar12 & uVar7 - 1;
    }
    else if (uVar7 <= uVar12) {
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar12 / uVar7;
      }
      uVar12 = uVar12 - uVar3 * uVar7;
    }
    if (uVar12 != uVar6) goto LAB_012956f4;
  }
LAB_01295640:
  if (*plVar14 != 0) {
    uVar12 = *(ulong *)(*plVar14 + 8);
    if (uVar8 < 2) {
      uVar12 = uVar12 & uVar7 - 1;
    }
    else if (uVar7 <= uVar12) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar12 / uVar7;
      }
      uVar12 = uVar12 - uVar8 * uVar7;
    }
    if (uVar12 != uVar6) {
      *(long **)(*(long *)(param_1 + 0x48) + uVar12 * 8) = plVar11;
    }
  }
  *plVar11 = *plVar14;
  *plVar14 = 0;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + -1;
  if (plVar14 != (long *)0x0) {
    plVar11 = *(long **)(param_1 + 0x80);
    uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar8 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar14,0x20,8);
    }
    else {
      FUN_00c48fe8(plVar11,plVar14,0x20,8);
    }
  }
LAB_01295680:
  if (!bVar17) {
    *plVar16 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
    return;
  }
  return;
}


