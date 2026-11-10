/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00feee04; name: FUN_00feee04
 */


int FUN_00feee04(long param_1,char *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long *local_68;
  long lStack_60;
  undefined1 local_58;
  
  if (*param_2 == '\0') {
    return 0;
  }
  uVar21 = *(ulong *)(param_2 + 8) >> 0x37;
  lVar1 = param_1 + uVar21 * 0x20;
  plVar2 = (long *)(lVar1 + 0xd050);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar2 == 0 && *(long *)(lVar1 + 0xd058) == 0) {
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar8;
      *(undefined8 *)(lVar1 + 0xd058) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00feee60;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0xd060));
  do {
    if (*plVar2 != 0 || *(long *)(lVar1 + 0xd058) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0xd060));
        while (*plVar2 == 0 && *(long *)(lVar1 + 0xd058) == 0) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar8;
            *(undefined8 *)(lVar1 + 0xd058) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00feee60;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar8;
      *(undefined8 *)(lVar1 + 0xd058) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00feee60:
  uVar15 = *(ulong *)(param_2 + 8);
  puVar14 = (ulong *)(param_1 + uVar21 * 0x68 + 0x50);
  uVar16 = *puVar14;
  if (uVar16 == 0) {
LAB_00fef0f4:
    iVar20 = 0;
  }
  else {
    uVar10 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar19 = uVar16 - 1 & uVar15;
    }
    else if (uVar15 < uVar16) {
      uVar19 = uVar15;
    }
    else {
      uVar19 = 0;
      if (uVar16 != 0) {
        uVar19 = uVar15 / uVar16;
      }
      uVar19 = uVar15 - uVar19 * uVar16;
    }
    plVar13 = (long *)(param_1 + uVar21 * 0x68 + 0x48);
    puVar11 = *(undefined8 **)(*plVar13 + uVar19 * 8);
    if ((puVar11 == (undefined8 *)0x0) || (plVar12 = (long *)*puVar11, plVar12 == (long *)0x0))
    goto LAB_00fef0f4;
    if (uVar10 < 2) {
      do {
        if (plVar12[1] == uVar15) {
          if (plVar12[2] == uVar15) goto LAB_00feefbc;
        }
        else if ((plVar12[1] & uVar16 - 1) != uVar19) goto LAB_00fef0f4;
        plVar12 = (long *)*plVar12;
        iVar20 = 0;
      } while (plVar12 != (long *)0x0);
    }
    else {
      do {
        uVar10 = plVar12[1];
        if (uVar10 == uVar15) {
          if (plVar12[2] == uVar15) {
LAB_00feefbc:
            iVar20 = (int)plVar12[5] + -1;
            *(int *)(plVar12 + 5) = iVar20;
            if (iVar20 != 0) break;
            *(undefined1 *)(plVar12[3] + 0x100) = 1;
            *(undefined1 *)(plVar12[4] + 0x2a0) = 1;
            uVar10 = *puVar14;
            uVar16 = plVar12[1];
            uVar15 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
            uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
            uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar15 < 2) {
              uVar16 = uVar10 - 1 & uVar16;
            }
            else if (uVar10 <= uVar16) {
              uVar19 = 0;
              if (uVar10 != 0) {
                uVar19 = uVar16 / uVar10;
              }
              uVar16 = uVar16 - uVar19 * uVar10;
            }
            plVar17 = *(long **)(*plVar13 + uVar16 * 8);
            for (plVar18 = (long *)*plVar17; plVar18 != plVar12; plVar18 = (long *)*plVar18) {
              plVar17 = plVar18;
            }
            if (plVar17 == (long *)(param_1 + uVar21 * 0x68 + 0x78)) {
LAB_00fef058:
              if (*plVar12 != 0) {
                uVar19 = *(ulong *)(*plVar12 + 8);
                if (uVar15 < 2) {
                  uVar19 = uVar19 & uVar10 - 1;
                }
                else if (uVar10 <= uVar19) {
                  uVar7 = 0;
                  if (uVar10 != 0) {
                    uVar7 = uVar19 / uVar10;
                  }
                  uVar19 = uVar19 - uVar7 * uVar10;
                }
                if (uVar19 == uVar16) goto LAB_00fef088;
              }
              *(undefined8 *)(*plVar13 + uVar16 * 8) = 0;
            }
            else {
              uVar19 = plVar17[1];
              if (uVar15 < 2) {
                uVar19 = uVar19 & uVar10 - 1;
              }
              else if (uVar10 <= uVar19) {
                uVar7 = 0;
                if (uVar10 != 0) {
                  uVar7 = uVar19 / uVar10;
                }
                uVar19 = uVar19 - uVar7 * uVar10;
              }
              if (uVar19 != uVar16) goto LAB_00fef058;
            }
LAB_00fef088:
            lVar8 = *plVar12;
            if (lVar8 != 0) {
              uVar19 = *(ulong *)(lVar8 + 8);
              if (uVar15 < 2) {
                uVar19 = uVar19 & uVar10 - 1;
              }
              else if (uVar10 <= uVar19) {
                uVar15 = 0;
                if (uVar10 != 0) {
                  uVar15 = uVar19 / uVar10;
                }
                uVar19 = uVar19 - uVar15 * uVar10;
              }
              if (uVar19 != uVar16) {
                *(long **)(*plVar13 + uVar19 * 8) = plVar17;
                lVar8 = *plVar12;
              }
            }
            param_1 = param_1 + uVar21 * 0x68;
            *plVar17 = lVar8;
            *plVar12 = 0;
            lStack_60 = param_1 + 0x80;
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + -1;
            local_58 = 1;
            local_68 = plVar12;
            FUN_00ed6068(&local_68);
            goto LAB_00fef0f4;
          }
        }
        else {
          if (uVar16 <= uVar10) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar10 / uVar16;
            }
            uVar10 = uVar10 - uVar7 * uVar16;
          }
          if (uVar10 != uVar19) goto LAB_00fef0f4;
        }
        plVar12 = (long *)*plVar12;
        iVar20 = 0;
      } while (plVar12 != (long *)0x0);
    }
  }
  do {
    lVar8 = *plVar2;
    lVar5 = *(long *)(lVar1 + 0xd058);
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar8;
      *(long *)(lVar1 + 0xd058) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar3 = *plVar2;
    lVar4 = *(long *)(lVar1 + 0xd058);
    if (lVar3 != lVar8 || lVar4 != lVar5) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00fef134;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = 0;
      *(long *)(lVar1 + 0xd054) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_00fef134:
  if (!bVar9) {
    do {
      lVar8 = *plVar2;
      lVar5 = *(long *)(lVar1 + 0xd058);
      if (lVar8 != lVar3 || lVar5 != lVar4) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x00fef204;
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = 0;
        *(long *)(lVar1 + 0xd054) = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar9 = true;
joined_r0x00fef204:
    if (!bVar9) {
      do {
        lVar3 = *plVar2;
        lVar4 = *(long *)(lVar1 + 0xd058);
        if (lVar3 != lVar8 || lVar4 != lVar5) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar3;
          lVar5 = lVar4;
          goto joined_r0x00fef204;
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = 0;
          *(long *)(lVar1 + 0xd054) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar9 = true;
      lVar8 = lVar3;
      lVar5 = lVar4;
      goto joined_r0x00fef204;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar1 + 0xd060));
  return iVar20;
}


