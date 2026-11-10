/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eaba88; name: FUN_00eaba88
 */


void FUN_00eaba88(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  
  uVar10 = (*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 3) * 0xb6db6db7;
  uVar9 = (uint)uVar10;
  if (*(char *)(param_1 + 0x1a3) == '\0') {
    if (*(char *)(param_1 + 0x1a2) == '\0') {
      if (*(char *)(param_1 + 0x1a5) != '\0') {
        puVar2 = *(undefined8 **)(param_1 + 0x170);
        for (puVar12 = *(undefined8 **)(param_1 + 0x168); puVar12 != puVar2; puVar12 = puVar12 + 1)
        {
          FUN_00ebac40(*puVar12,*(long *)(param_1 + 0x30) + 0x38,uVar10 & 0xffffffff);
          uVar14 = *(uint *)(param_1 + 0x128);
          if ((uVar14 < uVar9) && (FUN_00eac034(param_1,puVar12,uVar14), uVar14 + 1 != uVar9)) {
            FUN_00eac034(param_1,puVar12);
            for (uVar14 = uVar14 + 2; uVar14 != uVar9; uVar14 = uVar14 + 1) {
              FUN_00eac034(param_1,puVar12,uVar14);
            }
          }
        }
      }
    }
    else {
      plVar13 = *(long **)(param_1 + 0x168);
      plVar3 = *(long **)(param_1 + 0x170);
      if (plVar13 != plVar3) {
        if (uVar9 == 0) {
          do {
            lVar5 = *plVar13;
            if (*(char *)(lVar5 + 0x198) == '\0') {
              if (*(char *)(param_1 + 0x1a5) != '\0') {
                FUN_00ebac40(lVar5,*(long *)(param_1 + 0x30) + 0x38,0);
              }
            }
            else {
              FUN_00ebac40(lVar5,*(long *)(param_1 + 0x30) + 0x38,0);
              *(undefined1 *)(*plVar13 + 0x198) = 0;
            }
            plVar13 = plVar13 + 1;
          } while (plVar3 != plVar13);
        }
        else {
          do {
            lVar5 = *plVar13;
            if (*(char *)(lVar5 + 0x198) == '\0') {
              if (*(char *)(param_1 + 0x1a5) != '\0') {
                FUN_00ebac40(lVar5,*(long *)(param_1 + 0x30) + 0x38,uVar10 & 0xffffffff);
                uVar14 = *(uint *)(param_1 + 0x128);
                if (uVar14 < uVar9) {
                  do {
                    FUN_00eac034(param_1,plVar13,uVar14);
                    uVar14 = uVar14 + 1;
                  } while (uVar9 != uVar14);
                }
              }
            }
            else {
              FUN_00ebac40(lVar5,*(long *)(param_1 + 0x30) + 0x38,uVar10 & 0xffffffff);
              FUN_00eac034(param_1,plVar13,0);
              if (((uVar9 != 1) && (FUN_00eac034(param_1,plVar13,1), uVar9 != 2)) &&
                 (FUN_00eac034(param_1,plVar13,2), uVar9 != 3)) {
                uVar14 = 3;
                do {
                  FUN_00eac034(param_1,plVar13,uVar14);
                  uVar14 = uVar14 + 1;
                } while (uVar9 != uVar14);
              }
              *(undefined1 *)(*plVar13 + 0x198) = 0;
            }
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar3);
        }
      }
    }
  }
  else {
    plVar13 = *(long **)(param_1 + 0x168);
    plVar3 = *(long **)(param_1 + 0x170);
    if (plVar13 != plVar3) {
      if (uVar9 == 0) {
        FUN_00ebac40(*plVar13,*(long *)(param_1 + 0x30) + 0x38,0);
        *(undefined1 *)(*plVar13 + 0x198) = 0;
        if (plVar13 + 1 != plVar3) {
          FUN_00ebac40(plVar13[1],*(long *)(param_1 + 0x30) + 0x38,0);
          *(undefined1 *)(plVar13[1] + 0x198) = 0;
          for (plVar13 = plVar13 + 2; plVar13 != plVar3; plVar13 = plVar13 + 1) {
            FUN_00ebac40(*plVar13,*(long *)(param_1 + 0x30) + 0x38,0);
            *(undefined1 *)(*plVar13 + 0x198) = 0;
          }
        }
      }
      else {
        do {
          FUN_00ebac40(*plVar13,*(long *)(param_1 + 0x30) + 0x38,uVar10 & 0xffffffff);
          FUN_00eac034(param_1,plVar13,0);
          if (((uVar9 != 1) && (FUN_00eac034(param_1,plVar13,1), uVar9 != 2)) &&
             (FUN_00eac034(param_1,plVar13,2), uVar9 != 3)) {
            uVar14 = 3;
            do {
              FUN_00eac034(param_1,plVar13,uVar14);
              uVar14 = uVar14 + 1;
            } while (uVar9 != uVar14);
          }
          plVar11 = plVar13 + 1;
          *(undefined1 *)(*plVar13 + 0x198) = 0;
          plVar13 = plVar11;
        } while (plVar11 != plVar3);
      }
    }
  }
  if ((*(char *)(param_1 + 0x1a7) != '\0') || (*(char *)(param_1 + 0x1a8) != '\0')) {
    plVar13 = *(long **)(param_1 + 0x168);
    plVar3 = *(long **)(param_1 + 0x170);
    if ((plVar13 != plVar3) && (uVar9 != 0)) {
      do {
        uVar17 = 0;
        do {
          lVar15 = *plVar13;
          plVar11 = (long *)(lVar15 + 0x70);
          lVar5 = nn::os::GetCurrentThread();
          do {
            lVar7 = *plVar11;
            lVar8 = *(long *)(lVar15 + 0x78);
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = lVar7;
              *(long *)(lVar15 + 0x78) = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            while ((lVar7 != 0 && (lVar5 != lVar7))) {
              nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x80));
              do {
                lVar7 = *plVar11;
                lVar8 = *(long *)(lVar15 + 0x78);
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar6) {
                  *plVar11 = lVar7;
                  *(long *)(lVar15 + 0x78) = lVar8;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            do {
              lVar1 = *plVar11;
              if (lVar1 != lVar7 || *(long *)(lVar15 + 0x78) != lVar8) {
                bVar6 = false;
                ClearExclusiveLocal();
                goto LAB_00eabdd4;
              }
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar6) {
                *plVar11 = lVar7;
                *(long *)(lVar15 + 0x74) = lVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar6 = true;
LAB_00eabdd4:
            lVar7 = lVar1;
            lVar8 = *(long *)(lVar15 + 0x78);
          } while (!bVar6);
          if (uVar17 < (ulong)(*(long *)(lVar15 + 0x38) - *(long *)(lVar15 + 0x30) >> 3)) {
            lVar5 = *(long *)(lVar15 + 0x30) + uVar17 * 8;
            plVar16 = (long *)(*(long *)(param_1 + 0xf0) + uVar17 * 0x38);
            lVar7 = plVar16[1];
            if (*(char *)(param_1 + 0x1a7) != '\0') {
              FUN_00eacac0(*plVar16,lVar5,(int)lVar7);
            }
            if ((*(char *)(param_1 + 0x1a8) != '\0') && (*plVar16 != *(long *)(param_1 + 0xa8))) {
              FUN_00ed6768(*(long *)(param_1 + 0xa8),plVar16,lVar5,(int)lVar7);
            }
          }
          do {
            lVar5 = *plVar11;
            lVar7 = *(long *)(lVar15 + 0x78);
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = lVar5;
              *(long *)(lVar15 + 0x78) = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            lVar8 = *plVar11;
            lVar1 = *(long *)(lVar15 + 0x78);
            if (lVar8 != lVar5 || lVar1 != lVar7) {
              bVar6 = false;
              ClearExclusiveLocal();
              goto LAB_00eabe58;
            }
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = lVar5;
              *(long *)(lVar15 + 0x74) = lVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar6 = true;
LAB_00eabe58:
          if (!bVar6) {
            do {
              lVar5 = *plVar11;
              lVar7 = *(long *)(lVar15 + 0x78);
              if (lVar5 != lVar8 || lVar7 != lVar1) {
                bVar6 = false;
                ClearExclusiveLocal();
                goto joined_r0x00eabf08;
              }
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar6) {
                *plVar11 = lVar8;
                *(long *)(lVar15 + 0x74) = lVar1 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar6 = true;
joined_r0x00eabf08:
            if (!bVar6) {
              do {
                lVar8 = *plVar11;
                lVar1 = *(long *)(lVar15 + 0x78);
                if (lVar8 != lVar5 || lVar1 != lVar7) {
                  bVar6 = false;
                  ClearExclusiveLocal();
                  lVar5 = lVar8;
                  lVar7 = lVar1;
                  goto joined_r0x00eabf08;
                }
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar6) {
                  *plVar11 = lVar5;
                  *(long *)(lVar15 + 0x74) = lVar7 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              bVar6 = true;
              lVar5 = lVar8;
              lVar7 = lVar1;
              goto joined_r0x00eabf08;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x80));
          uVar17 = uVar17 + 1;
        } while (uVar17 != (uVar10 & 0xffffffff));
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar3);
    }
  }
  *(undefined2 *)(param_1 + 0x1a7) = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  *(long *)(param_1 + 0xe8) =
       (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3) * -0x3333333333333333;
  *(uint *)(param_1 + 0x128) = uVar9;
  return;
}


