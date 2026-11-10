/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff0050; name: FUN_00ff0050
 */


void FUN_00ff0050(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  int iVar21;
  int iVar22;
  float extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar25 = param_2._8_8_;
  uVar24 = param_2._4_4_;
  fVar23 = param_2._0_4_;
  if (*(char *)(param_4 + 0xf9) == '\0') {
    plVar18 = (long *)(param_3 + 0x30);
    lVar17 = *plVar18;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar17) {
      lVar9 = nn::os::GetCurrentThread();
LAB_00ff009c:
      if (*plVar18 == 0) goto code_r0x00ff00a4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x38));
      do {
        if (*plVar18 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x38));
            while (*plVar18 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar5) {
                *plVar18 = lVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00ff00ac;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00ff00ac:
      bVar5 = false;
      goto LAB_00ff00b0;
    }
    plVar18 = (long *)0x0;
    bVar5 = true;
LAB_00ff00b0:
    FUN_00ff0430(param_4);
    auVar26._4_4_ = extraout_var;
    auVar26._0_4_ = extraout_s0;
    auVar26._8_8_ = extraout_var_00;
    auVar27._4_4_ = extraout_var;
    auVar27._0_4_ = extraout_s0;
    auVar27._8_8_ = extraout_var_00;
    auVar26 = NEON_ext(auVar26,auVar27,8,1);
    auVar7._4_4_ = uVar24;
    auVar7._0_4_ = fVar23;
    auVar7._8_8_ = uVar25;
    auVar8._4_4_ = uVar24;
    auVar8._0_4_ = fVar23;
    auVar8._8_8_ = uVar25;
    auVar27 = NEON_ext(auVar7,auVar8,8,1);
    uVar16 = (uint)(extraout_s0 / 50.0);
    if ((int)uVar16 <= (int)(fVar23 / 50.0)) {
      iVar11 = (int)(auVar26._0_4_ / 50.0);
      iVar2 = *(int *)(param_4 + 0xa0);
      iVar22 = (int)(auVar27._0_4_ / 50.0);
      do {
        if (iVar11 <= iVar22) {
          iVar21 = iVar11;
LAB_00ff0120:
          uVar12 = *(ulong *)(param_3 + 0x50);
          if (uVar12 == 0) {
LAB_00ff017c:
            plVar19 = (long *)0x0;
            plVar20 = (long *)0x0;
          }
          else {
            uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
            uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
            uVar1 = uVar16 & 0xffff | iVar21 << 0x10;
            uVar10 = (ulong)(int)uVar1;
            uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar13 < 2) {
              uVar14 = uVar12 - 1 & uVar10;
            }
            else {
              uVar14 = uVar10;
              if (uVar12 <= uVar10) {
                uVar14 = 0;
                if (uVar12 != 0) {
                  uVar14 = uVar10 / uVar12;
                }
                uVar14 = uVar10 - uVar14 * uVar12;
              }
            }
            plVar15 = *(long **)(*(long *)(param_3 + 0x48) + uVar14 * 8);
            if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
            goto LAB_00ff017c;
            if (uVar13 < 2) {
              do {
                if (plVar15[1] == uVar10) {
                  if (*(uint *)(plVar15 + 2) == uVar1) goto LAB_00ff0250;
                }
                else if ((plVar15[1] & uVar12 - 1) != uVar14) goto LAB_00ff017c;
                plVar15 = (long *)*plVar15;
                plVar20 = (long *)0x0;
                plVar19 = (long *)0x0;
              } while (plVar15 != (long *)0x0);
            }
            else {
              do {
                uVar13 = plVar15[1];
                if (uVar13 == uVar10) {
                  if (*(uint *)(plVar15 + 2) == uVar1) goto LAB_00ff0250;
                }
                else {
                  if (uVar12 <= uVar13) {
                    uVar6 = 0;
                    if (uVar12 != 0) {
                      uVar6 = uVar13 / uVar12;
                    }
                    uVar13 = uVar13 - uVar6 * uVar12;
                  }
                  if (uVar13 != uVar14) goto LAB_00ff017c;
                }
                plVar15 = (long *)*plVar15;
                plVar19 = (long *)0x0;
                plVar20 = (long *)0x0;
              } while (plVar15 != (long *)0x0);
            }
          }
          goto LAB_00ff0184;
        }
LAB_00ff0270:
        uVar16 = (uint)(short)((short)uVar16 + 1);
      } while ((int)uVar16 <= (int)(fVar23 / 50.0));
    }
    if (!bVar5) {
      *plVar18 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
      return;
    }
  }
  return;
code_r0x00ff00a4:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar5) {
    *plVar18 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00ff00ac;
  goto LAB_00ff009c;
LAB_00ff0250:
  plVar19 = plVar15;
  do {
    plVar19 = (long *)*plVar19;
    plVar20 = plVar15;
    if (plVar19 == (long *)0x0) break;
  } while (*(uint *)(plVar19 + 2) == uVar1);
LAB_00ff0184:
  if (plVar20 != plVar19) {
    lVar9 = plVar20[3];
    if (iVar2 != 0) {
      if ((*(int *)(lVar9 + 0x128) != iVar2) && (0 < *(int *)(lVar9 + 0x128))) goto LAB_00ff0378;
      do {
        if ((*(char *)(lVar9 + 0x58) != '\0') || (*(char *)(lVar9 + 0x59) != '\0')) {
          uVar3 = *(undefined2 *)(lVar9 + 0x58);
          plVar15 = (long *)(lVar9 + 0x38);
          *(undefined2 *)(lVar9 + 0x58) = 0;
          if (*(long *)(lVar9 + 0x48) != 0) {
            FUN_00c6a584(*(long *)(lVar9 + 0x48),plVar15);
          }
          (**(code **)(*plVar15 + 0x20))(plVar15,uVar3);
        }
LAB_00ff0378:
        do {
          plVar20 = (long *)*plVar20;
          if (plVar20 == plVar19) goto LAB_00ff018c;
          lVar9 = plVar20[3];
        } while (*(int *)(lVar9 + 0x128) != iVar2 && 0 < *(int *)(lVar9 + 0x128));
      } while( true );
    }
    while( true ) {
      if ((*(char *)(lVar9 + 0x58) != '\0') || (*(char *)(lVar9 + 0x59) != '\0')) {
        uVar3 = *(undefined2 *)(lVar9 + 0x58);
        plVar15 = (long *)(lVar9 + 0x38);
        *(undefined2 *)(lVar9 + 0x58) = 0;
        if (*(long *)(lVar9 + 0x48) != 0) {
          FUN_00c6a584(*(long *)(lVar9 + 0x48),plVar15);
        }
        (**(code **)(*plVar15 + 0x20))(plVar15,uVar3);
      }
      plVar20 = (long *)*plVar20;
      if (plVar20 == plVar19) break;
      lVar9 = plVar20[3];
    }
  }
LAB_00ff018c:
  iVar21 = (int)(short)((short)iVar21 + 1);
  if (iVar22 < iVar21) goto LAB_00ff0270;
  goto LAB_00ff0120;
}


