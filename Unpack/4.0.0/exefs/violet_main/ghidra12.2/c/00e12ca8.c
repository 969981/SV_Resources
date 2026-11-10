/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e12ca8; name: FUN_00e12ca8
 */


void FUN_00e12ca8(long param_1,byte param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  
  plVar4 = *(long **)(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x58);
  do {
    if (plVar4 == plVar5) {
      return;
    }
    lVar11 = *plVar4;
    plVar1 = (long *)(lVar11 + 0x70);
    lVar7 = nn::os::GetCurrentThread();
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(lVar11 + 0x78);
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar8;
        *(long *)(lVar11 + 0x78) = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00e12cf4:
    while ((lVar8 != 0 && (lVar7 != lVar8))) {
      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x80));
      do {
        lVar8 = *plVar1;
        lVar9 = *(long *)(lVar11 + 0x78);
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar8;
          *(long *)(lVar11 + 0x78) = lVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    do {
      lVar3 = *plVar1;
      if (lVar3 != lVar8 || *(long *)(lVar11 + 0x78) != lVar9) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00e12d24;
      }
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar8;
        *(long *)(lVar11 + 0x74) = lVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar10 = true;
LAB_00e12d24:
    if (!bVar10) {
      lVar8 = lVar3;
      lVar9 = *(long *)(lVar11 + 0x78);
      goto LAB_00e12cf4;
    }
    if ((int)((ulong)(*(long *)(lVar11 + 0x38) - (long)*(long **)(lVar11 + 0x30)) >> 3) != 0) {
      lVar7 = **(long **)(lVar11 + 0x30);
      bVar2 = *(char *)(lVar7 + 0x150) == '\0' & param_2;
      FUN_00f190b8(*(undefined8 *)(lVar7 + 200),bVar2,1);
      *(byte *)(lVar7 + 0x158) = bVar2;
      if ((*(long *)(lVar11 + 0x38) - *(long *)(lVar11 + 0x30) & 0x7fffffff0U) != 0) {
        lVar7 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
        bVar2 = *(char *)(lVar7 + 0x150) == '\0' & param_2;
        FUN_00f190b8(*(undefined8 *)(lVar7 + 200),bVar2,1);
        *(byte *)(lVar7 + 0x158) = bVar2;
        if (0x10 < (*(long *)(lVar11 + 0x38) - *(long *)(lVar11 + 0x30) & 0x7fffffff8U)) {
          lVar7 = *(long *)(*(long *)(lVar11 + 0x30) + 0x10);
          bVar2 = *(char *)(lVar7 + 0x150) == '\0' & param_2;
          FUN_00f190b8(*(undefined8 *)(lVar7 + 200),bVar2,1);
          *(byte *)(lVar7 + 0x158) = bVar2;
          if ((*(long *)(lVar11 + 0x38) - *(long *)(lVar11 + 0x30) & 0x7ffffffe0U) != 0) {
            lVar7 = *(long *)(*(long *)(lVar11 + 0x30) + 0x18);
            bVar2 = *(char *)(lVar7 + 0x150) == '\0' & param_2;
            FUN_00f190b8(*(undefined8 *)(lVar7 + 200),bVar2,1);
            *(byte *)(lVar7 + 0x158) = bVar2;
            lVar7 = *(long *)(lVar11 + 0x30);
            if (0x20 < (*(long *)(lVar11 + 0x38) - lVar7 & 0x7fffffff8U)) {
              uVar12 = 4;
              do {
                lVar7 = *(long *)(lVar7 + uVar12 * 8);
                bVar2 = *(char *)(lVar7 + 0x150) == '\0' & param_2;
                FUN_00f190b8(*(undefined8 *)(lVar7 + 200),bVar2,1);
                *(byte *)(lVar7 + 0x158) = bVar2;
                lVar7 = *(long *)(lVar11 + 0x30);
                uVar12 = uVar12 + 1;
              } while (uVar12 < ((ulong)(*(long *)(lVar11 + 0x38) - lVar7) >> 3 & 0xffffffff));
            }
          }
        }
      }
    }
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(lVar11 + 0x78);
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar7;
        *(long *)(lVar11 + 0x78) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar9 = *plVar1;
      lVar3 = *(long *)(lVar11 + 0x78);
      if (lVar9 != lVar7 || lVar3 != lVar8) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00e12e78;
      }
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar7;
        *(long *)(lVar11 + 0x74) = lVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar10 = true;
joined_r0x00e12e78:
    if (!bVar10) {
      do {
        lVar7 = *plVar1;
        lVar8 = *(long *)(lVar11 + 0x78);
        if (lVar7 != lVar9 || lVar8 != lVar3) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar7;
          lVar3 = lVar8;
          goto joined_r0x00e12e78;
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar9;
          *(long *)(lVar11 + 0x74) = lVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar10 = true;
      lVar9 = lVar7;
      lVar3 = lVar8;
      goto joined_r0x00e12e78;
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x80));
    plVar4 = plVar4 + 1;
  } while( true );
}


