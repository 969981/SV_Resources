/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01092418; name: FUN_01092418
 */


void FUN_01092418(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long *local_78;
  long *local_28;
  
  plVar8 = (long *)(param_1 + 0x28);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01092460;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
        while (*plVar8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01092460;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01092460:
  if ((*param_2 == 0) ||
     (plVar8 = *(long **)(*param_2 + 0x800), local_28 = plVar8, plVar8 == (long *)0x0))
  goto LAB_0109270c;
  (**(code **)(*plVar8 + 0x58))(plVar8);
  lVar4 = *(long *)(plVar8[0x26] + 0x38);
  if (lVar4 == 0) {
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar17 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar17 = (float)*(undefined8 *)(lVar4 + 0x318);
    fVar14 = (float)*(undefined8 *)(lVar4 + 0x310);
    fVar12 = (float)*(undefined8 *)(lVar4 + 0x328);
    fVar10 = (float)*(undefined8 *)(lVar4 + 800);
  }
  plVar9 = *(long **)(param_1 + 0x40);
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar9 != plVar7) {
    fVar11 = fVar10 - fVar14;
    fVar13 = fVar12 - fVar17;
    fVar20 = fVar11 + fVar11 * 0.5;
    fVar21 = fVar13 + fVar13 * 0.5;
    fVar11 = fVar20 - fVar11;
    fVar13 = fVar21 - fVar13;
    fVar22 = -fVar13;
    do {
      if (*param_2 != *plVar9) {
        local_78 = *(long **)(*plVar9 + 0x800);
        if ((local_78 != (long *)0x0) &&
           ((**(code **)(*local_78 + 0x58))(), local_78 != (long *)0x0)) {
          if ((*(long *)(local_78[0x26] + 0x38) != 0) &&
             ((*(byte *)(*(long *)(local_78[0x26] + 0x38) + 0x1e8) & 1) != 0)) {
            fVar15 = 0.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
            fVar16 = 0.0;
            lVar4 = *(long *)(local_78[0x26] + 0x38);
            if (lVar4 != 0) {
              fVar18 = (float)*(undefined8 *)(lVar4 + 0x318);
              fVar15 = (float)*(undefined8 *)(lVar4 + 0x310);
              fVar19 = (float)*(undefined8 *)(lVar4 + 0x328);
              fVar16 = (float)*(undefined8 *)(lVar4 + 800);
            }
            fVar16 = (fVar16 + fVar15) * 0.5 - (fVar10 + fVar14) * 0.5;
            fVar19 = (fVar19 + fVar18) * 0.5 - (fVar12 + fVar17) * 0.5;
            bVar2 = false;
            bVar3 = false;
            if (ABS(fVar16) < fVar20) {
              bVar2 = false;
              bVar3 = true;
              if (!NAN(ABS(fVar19)) && !NAN(fVar21)) {
                bVar2 = ABS(fVar19) < fVar21;
                bVar3 = false;
              }
            }
            if (bVar2 != bVar3) {
              if (fVar11 < fVar16) {
                if (fVar13 < fVar19) {
                  FUN_01092790(local_28,&local_78,2,0);
                  uVar5 = 6;
                }
                else {
                  if (fVar22 <= fVar19) {
                    FUN_01092790(local_28,&local_78,5,1);
                    uVar5 = 3;
                    goto LAB_01092640;
                  }
                  FUN_01092790(local_28,&local_78,8,0);
                  uVar5 = 0;
                }
LAB_01092680:
                uVar6 = 0;
              }
              else {
                if (fVar16 < -fVar11) {
                  if (fVar13 < fVar19) {
                    FUN_01092790(local_28,&local_78,0,0);
                    uVar5 = 8;
                  }
                  else {
                    if (fVar22 <= fVar19) {
                      FUN_01092790(local_28,&local_78,3,1);
                      uVar5 = 5;
                      goto LAB_01092640;
                    }
                    FUN_01092790(local_28,&local_78,6,0);
                    uVar5 = 2;
                  }
                  goto LAB_01092680;
                }
                if (fVar13 < fVar19) {
                  FUN_01092790(local_28,&local_78,1,1);
                  uVar5 = 7;
                }
                else {
                  if (fVar22 <= fVar19) goto LAB_01092570;
                  FUN_01092790(local_28,&local_78,7,1);
                  uVar5 = 1;
                }
LAB_01092640:
                uVar6 = 1;
              }
              FUN_01092790(local_78,&local_28,uVar5,uVar6);
            }
          }
LAB_01092570:
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x60))();
          }
        }
        plVar7 = *(long **)(param_1 + 0x48);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar7);
    plVar8 = local_28;
    if (local_28 == (long *)0x0) goto LAB_0109270c;
  }
  (**(code **)(*plVar8 + 0x60))(plVar8);
LAB_0109270c:
  *(undefined8 *)(param_1 + 0x28) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x30));
  return;
}


