/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bd138; name: FUN_028bd138
 */


undefined8 FUN_028bd138(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x8048) == 0) {
    uVar5 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x8044) != 0) {
      plVar1 = (long *)(param_1 + 0x8110);
      uVar9 = 0;
      do {
        lVar4 = nn::os::GetCurrentThread();
        do {
          lVar7 = *plVar1;
          lVar8 = *(long *)(param_1 + 0x8118);
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            *(long *)(param_1 + 0x8118) = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          while ((lVar7 != 0 && (lVar4 != lVar7))) {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x8120));
            do {
              lVar7 = *plVar1;
              lVar8 = *(long *)(param_1 + 0x8118);
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar7;
                *(long *)(param_1 + 0x8118) = lVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          do {
            lVar2 = *plVar1;
            if (lVar2 != lVar7 || *(long *)(param_1 + 0x8118) != lVar8) {
              bVar6 = false;
              ClearExclusiveLocal();
              goto LAB_028bd1cc;
            }
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar7;
              *(long *)(param_1 + 0x8114) = lVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar6 = true;
LAB_028bd1cc:
          lVar7 = lVar2;
          lVar8 = *(long *)(param_1 + 0x8118);
        } while (!bVar6);
        do {
          lVar4 = *plVar1;
          lVar7 = *(long *)(param_1 + 0x8118);
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(long *)(param_1 + 0x8118) = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar8 = *plVar1;
          lVar2 = *(long *)(param_1 + 0x8118);
          if (lVar8 != lVar4 || lVar2 != lVar7) {
            bVar6 = false;
            ClearExclusiveLocal();
            goto LAB_028bd208;
          }
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(long *)(param_1 + 0x8114) = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar6 = true;
LAB_028bd208:
        if (!bVar6) {
          do {
            lVar4 = *plVar1;
            lVar7 = *(long *)(param_1 + 0x8118);
            if (lVar4 != lVar8 || lVar7 != lVar2) {
              bVar6 = false;
              ClearExclusiveLocal();
              goto joined_r0x028bd264;
            }
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar8;
              *(long *)(param_1 + 0x8114) = lVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar6 = true;
joined_r0x028bd264:
          if (!bVar6) {
            do {
              lVar8 = *plVar1;
              lVar2 = *(long *)(param_1 + 0x8118);
              if (lVar8 != lVar4 || lVar2 != lVar7) {
                bVar6 = false;
                ClearExclusiveLocal();
                lVar4 = lVar8;
                lVar7 = lVar2;
                goto joined_r0x028bd264;
              }
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar4;
                *(long *)(param_1 + 0x8114) = lVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            bVar6 = true;
            lVar4 = lVar8;
            lVar7 = lVar2;
            goto joined_r0x028bd264;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x8120));
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x8044));
    }
    uVar5 = 0;
  }
  return uVar5;
}


