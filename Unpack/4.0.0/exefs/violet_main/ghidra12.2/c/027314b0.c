/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027314b0; name: FUN_027314b0
 */


uint FUN_027314b0(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  
  if (*(char *)(param_1 + 0x99) == '\0') {
    uVar5 = param_3 & 0x7f;
    uVar6 = param_3;
  }
  else {
    if ((param_3 & 1) != 0) {
      plVar8 = (long *)*param_2;
      plVar3 = (long *)param_2[1];
      if (plVar8 != plVar3) {
        do {
          lVar15 = *plVar8;
          plVar1 = (long *)(lVar15 + 0x70);
          lVar7 = nn::os::GetCurrentThread();
          do {
            lVar13 = *plVar1;
            lVar10 = *(long *)(lVar15 + 0x78);
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = lVar13;
              *(long *)(lVar15 + 0x78) = lVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_02731518:
          while ((lVar13 != 0 && (lVar7 != lVar13))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x80));
            do {
              lVar13 = *plVar1;
              lVar10 = *(long *)(lVar15 + 0x78);
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar11) {
                *plVar1 = lVar13;
                *(long *)(lVar15 + 0x78) = lVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          do {
            lVar2 = *plVar1;
            if (lVar2 != lVar13 || *(long *)(lVar15 + 0x78) != lVar10) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto LAB_02731548;
            }
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = lVar13;
              *(long *)(lVar15 + 0x74) = lVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar11 = true;
LAB_02731548:
          if (!bVar11) {
            lVar13 = lVar2;
            lVar10 = *(long *)(lVar15 + 0x78);
            goto LAB_02731518;
          }
          lVar7 = *(long *)(lVar15 + 0x30);
          if ((int)((ulong)(*(long *)(lVar15 + 0x38) - lVar7) >> 3) != 0) {
            uVar12 = 0;
            do {
              lVar13 = *(long *)(lVar7 + uVar12 * 8);
              lVar7 = *(long *)(param_1 + 0x50);
              uVar14 = (*(long *)(param_1 + 0x58) - lVar7 >> 3) * 0x38e38e39;
              if ((int)uVar14 != 0) {
                uVar16 = uVar14 & 0xffffffff;
                FUN_00c75684(*(undefined8 *)(lVar13 + 200),0,lVar7 + 0x38);
                if ((((uVar16 != 1) &&
                     (FUN_00c75684(*(undefined8 *)(lVar13 + 200),1,lVar7 + 0x80), uVar16 != 2)) &&
                    (FUN_00c75684(*(undefined8 *)(lVar13 + 200),2,lVar7 + 200), uVar16 != 3)) &&
                   ((FUN_00c75684(*(undefined8 *)(lVar13 + 200),3,lVar7 + 0x110), uVar16 != 4 &&
                    (FUN_00c75684(*(undefined8 *)(lVar13 + 200),4,lVar7 + 0x158), uVar16 != 5)))) {
                  lVar10 = lVar7 + 0x1a0;
                  uVar9 = 5;
                  do {
                    FUN_00c75684(*(undefined8 *)(lVar13 + 200),uVar9,lVar10);
                    uVar9 = uVar9 + 1;
                    lVar10 = lVar10 + 0x48;
                  } while (uVar16 != uVar9);
                }
              }
              if ((param_3 >> 1 & 1) != 0) {
                FUN_00c752dc(lVar13,lVar7,uVar14 & 0xffffffff);
              }
              lVar7 = *(long *)(lVar15 + 0x30);
              uVar12 = uVar12 + 1;
            } while (uVar12 < ((ulong)(*(long *)(lVar15 + 0x38) - lVar7) >> 3 & 0xffffffff));
          }
          do {
            lVar7 = *plVar1;
            lVar13 = *(long *)(lVar15 + 0x78);
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = lVar7;
              *(long *)(lVar15 + 0x78) = lVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            lVar10 = *plVar1;
            lVar2 = *(long *)(lVar15 + 0x78);
            if (lVar10 != lVar7 || lVar2 != lVar13) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto joined_r0x02731690;
            }
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = lVar7;
              *(long *)(lVar15 + 0x74) = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar11 = true;
joined_r0x02731690:
          if (!bVar11) {
            do {
              lVar7 = *plVar1;
              lVar13 = *(long *)(lVar15 + 0x78);
              if (lVar7 != lVar10 || lVar13 != lVar2) {
                bVar11 = false;
                ClearExclusiveLocal();
                lVar10 = lVar7;
                lVar2 = lVar13;
                goto joined_r0x02731690;
              }
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar11) {
                *plVar1 = lVar10;
                *(long *)(lVar15 + 0x74) = lVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar11 = true;
            lVar10 = lVar7;
            lVar2 = lVar13;
            goto joined_r0x02731690;
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x80));
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar3);
      }
    }
    uVar6 = param_3 & 0xfffffffc;
    uVar5 = param_3 & 0x7c;
  }
  if (uVar5 != 0) {
    plVar8 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8,param_2);
  }
  return uVar6;
}


