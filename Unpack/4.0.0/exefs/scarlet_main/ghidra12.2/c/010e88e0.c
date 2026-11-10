/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e88e0; name: FUN_010e88e0
 */


void FUN_010e88e0(long param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  
  uVar6 = (**(code **)(*DAT_0485a020 + 0x18))();
  if ((uVar6 & 0xff) == 0) {
    return;
  }
  FUN_00eaabc4(param_1);
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x1b8);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar13;
      *(long *)(param_1 + 0x1b8) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_010e8958:
  while ((lVar13 != 0 && (lVar7 != lVar13))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
    do {
      lVar13 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x1b8);
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar13;
        *(long *)(param_1 + 0x1b8) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar11 = *plVar1;
    if (lVar11 != lVar13 || *(long *)(param_1 + 0x1b8) != lVar10) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_010e8988;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar13;
      *(long *)(param_1 + 0x1b4) = lVar10 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_010e8988:
  if (!bVar8) {
    lVar13 = lVar11;
    lVar10 = *(long *)(param_1 + 0x1b8);
    goto LAB_010e8958;
  }
  lVar7 = *(long *)(param_1 + 0xf0);
  lVar13 = *(long *)(param_1 + 0xf8);
  if ((int)((ulong)(lVar13 - lVar7) >> 3) * -0x49249249 != 0) {
    uVar12 = 0;
    do {
      plVar14 = *(long **)(param_1 + 0x168);
      plVar3 = *(long **)(param_1 + 0x170);
      if (plVar14 != plVar3) {
        plVar9 = (long *)(lVar7 + uVar12 * 0x38);
        uVar4 = *(undefined4 *)
                 (*(long *)(*plVar9 + 0x88) + (ulong)*(uint *)(plVar9 + 1) * 0x108 + 0x44);
        do {
          lVar13 = *plVar14;
          plVar9 = (long *)(lVar13 + 0x70);
          lVar7 = nn::os::GetCurrentThread();
          do {
            lVar10 = *plVar9;
            lVar11 = *(long *)(lVar13 + 0x78);
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar8) {
              *plVar9 = lVar10;
              *(long *)(lVar13 + 0x78) = lVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_010e8a0c:
          while ((lVar10 != 0 && (lVar7 != lVar10))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x80));
            do {
              lVar10 = *plVar9;
              lVar11 = *(long *)(lVar13 + 0x78);
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar8) {
                *plVar9 = lVar10;
                *(long *)(lVar13 + 0x78) = lVar11;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          do {
            lVar2 = *plVar9;
            if (lVar2 != lVar10 || *(long *)(lVar13 + 0x78) != lVar11) {
              bVar8 = false;
              ClearExclusiveLocal();
              goto LAB_010e8a3c;
            }
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar8) {
              *plVar9 = lVar10;
              *(long *)(lVar13 + 0x74) = lVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar8 = true;
LAB_010e8a3c:
          if (!bVar8) {
            lVar10 = lVar2;
            lVar11 = *(long *)(lVar13 + 0x78);
            goto LAB_010e8a0c;
          }
          lVar7 = *(long *)(lVar13 + 0x30);
          if ((uVar12 < (ulong)(*(long *)(lVar13 + 0x38) - lVar7 >> 3)) &&
             (FUN_00d101e0(*(undefined8 *)(*(long *)(lVar7 + uVar12 * 8) + 200),uVar4,uVar6 >> 0x20,
                           param_3), *param_4 != '\0')) {
            FUN_00ead0d0(*(undefined8 *)(*(long *)(lVar7 + uVar12 * 8) + 200),uVar4,uVar6 >> 0x20,
                         param_4);
          }
          do {
            lVar7 = *plVar9;
            lVar10 = *(long *)(lVar13 + 0x78);
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar8) {
              *plVar9 = lVar7;
              *(long *)(lVar13 + 0x78) = lVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            lVar11 = *plVar9;
            lVar2 = *(long *)(lVar13 + 0x78);
            if (lVar11 != lVar7 || lVar2 != lVar10) {
              bVar8 = false;
              ClearExclusiveLocal();
              goto LAB_010e8ad8;
            }
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar8) {
              *plVar9 = lVar7;
              *(long *)(lVar13 + 0x74) = lVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar8 = true;
LAB_010e8ad8:
          if (!bVar8) {
            do {
              lVar7 = *plVar9;
              lVar10 = *(long *)(lVar13 + 0x78);
              if (lVar7 != lVar11 || lVar10 != lVar2) {
                bVar8 = false;
                ClearExclusiveLocal();
                goto joined_r0x010e8bd0;
              }
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar8) {
                *plVar9 = lVar11;
                *(long *)(lVar13 + 0x74) = lVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar8 = true;
joined_r0x010e8bd0:
            if (!bVar8) {
              do {
                lVar11 = *plVar9;
                lVar2 = *(long *)(lVar13 + 0x78);
                if (lVar11 != lVar7 || lVar2 != lVar10) {
                  bVar8 = false;
                  ClearExclusiveLocal();
                  lVar7 = lVar11;
                  lVar10 = lVar2;
                  goto joined_r0x010e8bd0;
                }
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar8) {
                  *plVar9 = lVar7;
                  *(long *)(lVar13 + 0x74) = lVar10 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              bVar8 = true;
              lVar7 = lVar11;
              lVar10 = lVar2;
              goto joined_r0x010e8bd0;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x80));
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar3);
        lVar7 = *(long *)(param_1 + 0xf0);
        lVar13 = *(long *)(param_1 + 0xf8);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)((int)((ulong)(lVar13 - lVar7) >> 3) * -0x49249249));
  }
  do {
    lVar7 = *plVar1;
    lVar13 = *(long *)(param_1 + 0x1b8);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1b8) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar10 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x1b8);
    if (lVar10 != lVar7 || lVar11 != lVar13) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_010e8b90;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1b4) = lVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_010e8b90:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x1b8);
      if (lVar7 != lVar10 || lVar13 != lVar11) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x010e8c5c;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x1b4) = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x010e8c5c:
    if (!bVar8) {
      do {
        lVar10 = *plVar1;
        lVar11 = *(long *)(param_1 + 0x1b8);
        if (lVar10 != lVar7 || lVar11 != lVar13) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar10;
          lVar13 = lVar11;
          goto joined_r0x010e8c5c;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x1b4) = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar10;
      lVar13 = lVar11;
      goto joined_r0x010e8c5c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return;
}


