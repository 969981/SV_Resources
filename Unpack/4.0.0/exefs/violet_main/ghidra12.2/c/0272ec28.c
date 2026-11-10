/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0272ec28; name: FUN_0272ec28
 */


uint FUN_0272ec28(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (*(char *)(param_1 + 0x99) == '\0') {
    if ((param_3 & 0x7f) == 0) {
      return param_3;
    }
    plVar7 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    lVar6 = *plVar7;
  }
  else {
    if ((param_3 & 1) != 0) {
      plVar3 = (long *)param_2[1];
      for (plVar7 = (long *)*param_2; plVar7 != plVar3; plVar7 = plVar7 + 1) {
        lVar11 = *plVar7;
        plVar1 = (long *)(lVar11 + 0x70);
        lVar6 = nn::os::GetCurrentThread();
        do {
          lVar12 = *plVar1;
          lVar9 = *(long *)(lVar11 + 0x78);
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar12;
            *(long *)(lVar11 + 0x78) = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_0272ec90:
        while ((lVar12 != 0 && (lVar6 != lVar12))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x80));
          do {
            lVar12 = *plVar1;
            lVar9 = *(long *)(lVar11 + 0x78);
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar12;
              *(long *)(lVar11 + 0x78) = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        do {
          lVar2 = *plVar1;
          if (lVar2 != lVar12 || *(long *)(lVar11 + 0x78) != lVar9) {
            bVar10 = false;
            ClearExclusiveLocal();
            goto LAB_0272ecc0;
          }
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar12;
            *(long *)(lVar11 + 0x74) = lVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar10 = true;
LAB_0272ecc0:
        if (!bVar10) {
          lVar12 = lVar2;
          lVar9 = *(long *)(lVar11 + 0x78);
          goto LAB_0272ec90;
        }
        lVar6 = *(long *)(lVar11 + 0x30);
        if ((int)((ulong)(*(long *)(lVar11 + 0x38) - lVar6) >> 3) != 0) {
          uVar14 = 0;
          do {
            lVar12 = *(long *)(lVar6 + uVar14 * 8);
            lVar6 = *(long *)(param_1 + 0x50);
            uVar13 = (*(long *)(param_1 + 0x58) - lVar6 >> 3) * 0x38e38e39;
            if ((int)uVar13 != 0) {
              uVar15 = uVar13 & 0xffffffff;
              FUN_00c75684(*(undefined8 *)(lVar12 + 200),0,lVar6 + 0x38);
              if ((((uVar15 != 1) &&
                   (FUN_00c75684(*(undefined8 *)(lVar12 + 200),1,lVar6 + 0x80), uVar15 != 2)) &&
                  (FUN_00c75684(*(undefined8 *)(lVar12 + 200),2,lVar6 + 200), uVar15 != 3)) &&
                 ((FUN_00c75684(*(undefined8 *)(lVar12 + 200),3,lVar6 + 0x110), uVar15 != 4 &&
                  (FUN_00c75684(*(undefined8 *)(lVar12 + 200),4,lVar6 + 0x158), uVar15 != 5)))) {
                lVar9 = lVar6 + 0x1a0;
                uVar8 = 5;
                do {
                  FUN_00c75684(*(undefined8 *)(lVar12 + 200),uVar8,lVar9);
                  uVar8 = uVar8 + 1;
                  lVar9 = lVar9 + 0x48;
                } while (uVar15 != uVar8);
              }
            }
            if ((param_3 >> 1 & 1) != 0) {
              FUN_00c752dc(lVar12,lVar6,uVar13 & 0xffffffff);
            }
            lVar6 = *(long *)(lVar11 + 0x30);
            uVar14 = uVar14 + 1;
          } while (uVar14 < ((ulong)(*(long *)(lVar11 + 0x38) - lVar6) >> 3 & 0xffffffff));
        }
        do {
          lVar6 = *plVar1;
          lVar12 = *(long *)(lVar11 + 0x78);
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar6;
            *(long *)(lVar11 + 0x78) = lVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar9 = *plVar1;
          lVar2 = *(long *)(lVar11 + 0x78);
          if (lVar9 != lVar6 || lVar2 != lVar12) {
            bVar10 = false;
            ClearExclusiveLocal();
            goto joined_r0x0272ee08;
          }
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar6;
            *(long *)(lVar11 + 0x74) = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar10 = true;
joined_r0x0272ee08:
        if (!bVar10) {
          do {
            lVar6 = *plVar1;
            lVar12 = *(long *)(lVar11 + 0x78);
            if (lVar6 != lVar9 || lVar12 != lVar2) {
              bVar10 = false;
              ClearExclusiveLocal();
              lVar9 = lVar6;
              lVar2 = lVar12;
              goto joined_r0x0272ee08;
            }
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar9;
              *(long *)(lVar11 + 0x74) = lVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar10 = true;
          lVar9 = lVar6;
          lVar2 = lVar12;
          goto joined_r0x0272ee08;
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x80));
      }
    }
    if ((param_3 & 0x7c) == 0) {
      return param_3 & 0xfffffffc;
    }
    plVar7 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    lVar6 = *plVar7;
  }
  uVar5 = (**(code **)(lVar6 + 0x38))(plVar7,param_2);
  return uVar5;
}


