/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3df74; name: FUN_02a3df74
 */


byte FUN_02a3df74(long *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  long *plVar11;
  undefined8 *puVar13;
  undefined8 *puVar12;
  byte *local_c0;
  long *plStack_b8;
  byte local_54 [4];
  long local_50;
  undefined8 local_48;
  
  lVar6 = *param_1;
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
    plVar8 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar7) {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02a3e19c;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a3e19c:
        bVar10 = false;
      }
      if (bVar10) {
        plVar8 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        }
        break;
      }
      plVar8 = (long *)0x0;
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  if ((char)plVar8[0x88] == '\x02') {
    if ((short)plVar8[0x84] == 0) {
      if ((char)plVar8[0x89] == '\x03') {
        bVar5 = 1;
      }
      else {
        if (plVar8[0x33] != -0x5ea8b283dcaf3e52) {
          local_c0 = local_54;
          plStack_b8 = &local_50;
          local_50 = 0;
          bVar10 = true;
          local_54[0] = 1;
          plVar11 = plVar8 + 0x3b;
          lVar9 = *plVar11;
          lVar6 = nn::os::GetCurrentThread();
          if (lVar6 == lVar9) {
            plVar11 = (long *)0x0;
          }
          else {
            lVar6 = nn::os::GetCurrentThread();
            do {
              if (*plVar11 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3c));
                  while (*plVar11 == 0) {
                    cVar4 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar10) {
                      *plVar11 = lVar6;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') goto LAB_02a3e090;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar10) {
                *plVar11 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_02a3e090:
            bVar10 = false;
          }
          puVar2 = (undefined8 *)plVar8[0x3f];
          if ((undefined8 *)plVar8[0x3e] != puVar2) {
            puVar12 = (undefined8 *)plVar8[0x3e];
            do {
              puVar13 = puVar12 + 1;
              local_48 = *puVar12;
              FUN_02a3e76c(&local_c0,&local_48);
              puVar12 = puVar13;
            } while (puVar2 != puVar13);
          }
          if (!bVar10) {
            *plVar11 = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
          }
          FUN_02a3e7e0(&local_c0);
          if (local_54[0] != 0) {
            if (local_50 == 0) {
              local_54[0] = (char)plVar8[0x89] == '\x03';
            }
            else {
              local_54[0] = FUN_02a3e1d0();
              local_54[0] = local_54[0] & 1;
            }
          }
          bVar5 = local_54[0] != 0;
          goto joined_r0x02a3e114;
        }
        bVar5 = FUN_02a3e1d0(plVar8);
      }
    }
    else {
      bVar5 = 0;
    }
  }
  else {
    bVar5 = false;
joined_r0x02a3e114:
    if (plVar8 == (long *)0x0) goto LAB_02a3e008;
  }
  (**(code **)(*plVar8 + 0x60))(plVar8);
LAB_02a3e008:
  return bVar5 & 1;
}


