/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9c8a4; name: FUN_00e9c8a4
 */


void FUN_00e9c8a4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar12 = 0;
    do {
      lVar13 = *(long *)(param_1 + 0x50);
      plVar2 = (long *)(*(long *)(param_1 + 0x18) + uVar12 * 0x10);
      pcVar10 = (char *)(lVar13 + uVar12 * 0x48 + 0x40);
      if (((*pcVar10 != '\0') && (lVar11 = *(long *)(lVar13 + uVar12 * 0x48 + 8), lVar11 != 0)) &&
         ((*(byte *)(lVar11 + 0x1e8) & 1) != 0)) {
        lVar9 = *(long *)(*(long *)(param_1 + 0x18) +
                         (-(uVar12 >> 0x1f & 1) & 0xfffffff000000000 | (uVar12 & 0xffffffff) << 4));
        plVar1 = (long *)(lVar9 + 0x200);
        uVar6 = *(undefined4 *)(param_1 + 200);
        lVar11 = nn::os::GetCurrentThread();
LAB_00e9caa4:
        if (*plVar1 == 0 && *(long *)(lVar9 + 0x208) == 0) goto code_r0x00e9cab0;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x210));
        do {
          if (*plVar1 != 0 || *(long *)(lVar9 + 0x208) != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x210));
              while (*plVar1 == 0 && *(long *)(lVar9 + 0x208) == 0) {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar8) {
                  *plVar1 = lVar11;
                  *(undefined8 *)(lVar9 + 0x208) = 0;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_00e9cab8;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar11;
            *(undefined8 *)(lVar9 + 0x208) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_00e9cab8:
        *(undefined4 *)(lVar9 + 0x220) = uVar6;
        do {
          lVar11 = *plVar1;
          lVar3 = *(long *)(lVar9 + 0x208);
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar11;
            *(long *)(lVar9 + 0x208) = lVar3;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar4 = *plVar1;
          lVar5 = *(long *)(lVar9 + 0x208);
          if (lVar4 != lVar11 || lVar5 != lVar3) {
            bVar8 = false;
            ClearExclusiveLocal();
            goto LAB_00e9cb4c;
          }
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = 0;
            *(long *)(lVar9 + 0x204) = lVar3;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar8 = true;
LAB_00e9cb4c:
        if (!bVar8) {
          do {
            lVar11 = *plVar1;
            lVar3 = *(long *)(lVar9 + 0x208);
            if (lVar11 != lVar4 || lVar3 != lVar5) {
              bVar8 = false;
              ClearExclusiveLocal();
              goto joined_r0x00e9cc38;
            }
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = 0;
              *(long *)(lVar9 + 0x204) = lVar5;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar8 = true;
joined_r0x00e9cc38:
          if (!bVar8) {
            do {
              lVar4 = *plVar1;
              lVar5 = *(long *)(lVar9 + 0x208);
              if (lVar4 != lVar11 || lVar5 != lVar3) {
                bVar8 = false;
                ClearExclusiveLocal();
                lVar11 = lVar4;
                lVar3 = lVar5;
                goto joined_r0x00e9cc38;
              }
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = 0;
                *(long *)(lVar9 + 0x204) = lVar3;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar8 = true;
            lVar11 = lVar4;
            lVar3 = lVar5;
            goto joined_r0x00e9cc38;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x210));
        FUN_011e5718((double)*(float *)(plVar2 + 1),*plVar2,lVar13 + uVar12 * 0x48);
        *pcVar10 = '\0';
      }
      if ((*plVar2 != 0) && (*(long *)(lVar13 + uVar12 * 0x48 + 8) != 0)) {
        lVar13 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
        fVar14 = *(float *)((long)plVar2 + 0xc);
        if (fVar14 < *(float *)(plVar2 + 1)) {
          fVar14 = (float)NEON_fminnm(*(float *)(plVar2 + 1),
                                      fVar14 + (float)((double)*(long *)(lVar13 + 8) / 1000000000.0)
                                     );
          *(float *)((long)plVar2 + 0xc) = fVar14;
        }
        uVar6 = *(undefined4 *)(param_1 + 200);
        lVar11 = *(long *)(*(long *)(param_1 + 0x18) +
                          (-(uVar12 >> 0x1f & 1) & 0xfffffff000000000 | (uVar12 & 0xffffffff) << 4))
        ;
        plVar2 = (long *)(lVar11 + 0x200);
        lVar13 = nn::os::GetCurrentThread();
LAB_00e9c964:
        if (*plVar2 == 0 && *(long *)(lVar11 + 0x208) == 0) goto code_r0x00e9c970;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x210));
        do {
          if (*plVar2 != 0 || *(long *)(lVar11 + 0x208) != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x210));
              while (*plVar2 == 0 && *(long *)(lVar11 + 0x208) == 0) {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar13;
                  *(undefined8 *)(lVar11 + 0x208) = 0;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_00e9c978;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar13;
            *(undefined8 *)(lVar11 + 0x208) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_00e9c978:
        *(undefined4 *)(lVar11 + 0x220) = uVar6;
        do {
          lVar13 = *plVar2;
          lVar9 = *(long *)(lVar11 + 0x208);
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar13;
            *(long *)(lVar11 + 0x208) = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar11 + 0x208);
          if (lVar3 != lVar13 || lVar4 != lVar9) {
            bVar8 = false;
            ClearExclusiveLocal();
            goto LAB_00e9ca00;
          }
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = 0;
            *(long *)(lVar11 + 0x204) = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar8 = true;
LAB_00e9ca00:
        if (!bVar8) {
          do {
            lVar13 = *plVar2;
            lVar9 = *(long *)(lVar11 + 0x208);
            if (lVar13 != lVar3 || lVar9 != lVar4) {
              bVar8 = false;
              ClearExclusiveLocal();
              goto joined_r0x00e9cbc8;
            }
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = 0;
              *(long *)(lVar11 + 0x204) = lVar4;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar8 = true;
joined_r0x00e9cbc8:
          if (!bVar8) {
            do {
              lVar3 = *plVar2;
              lVar4 = *(long *)(lVar11 + 0x208);
              if (lVar3 != lVar13 || lVar4 != lVar9) {
                bVar8 = false;
                ClearExclusiveLocal();
                lVar13 = lVar3;
                lVar9 = lVar4;
                goto joined_r0x00e9cbc8;
              }
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = 0;
                *(long *)(lVar11 + 0x204) = lVar9;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar8 = true;
            lVar13 = lVar3;
            lVar9 = lVar4;
            goto joined_r0x00e9cbc8;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x210));
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x138) == *(long *)(param_1 + 0x130)) {
    return;
  }
  FUN_018081fc(param_1,1);
  return;
code_r0x00e9cab0:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar8) {
    *plVar1 = lVar11;
    *(undefined8 *)(lVar9 + 0x208) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00e9cab8;
  goto LAB_00e9caa4;
code_r0x00e9c970:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar8) {
    *plVar2 = lVar13;
    *(undefined8 *)(lVar11 + 0x208) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00e9c978;
  goto LAB_00e9c964;
}


