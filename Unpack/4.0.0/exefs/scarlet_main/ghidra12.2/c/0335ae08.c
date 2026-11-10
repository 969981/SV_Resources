/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0335ae08; name: FUN_0335ae08
 */


void FUN_0335ae08(long *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long local_60 [2];
  ulong local_50;
  undefined8 local_48;
  ulong *puStack_40;
  ulong local_38;
  
  puVar7 = (ulong *)param_3[1];
  puVar10 = puVar7;
  do {
    uVar5 = (uint)*puVar10;
    if ((uVar5 >> 0x1a & 1) != 0) {
      uVar11 = 0;
      if (puVar10 != (ulong *)0x0) {
        uVar11 = CONCAT44(uVar5,uVar5) & 0x3ffffff03ffffff;
        uVar11 = puVar10[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                      POPCOUNT((char)(uVar11 >> 0x10)) +
                                      POPCOUNT((char)(uVar11 >> 0x18))) + 2];
      }
      goto LAB_0335ae74;
    }
    if ((*puVar10 & 1) != 0) {
      uVar11 = 0;
      goto LAB_0335ae74;
    }
    puVar10 = (ulong *)puVar10[1];
  } while (puVar10 != (ulong *)0x0);
  uVar11 = 0;
LAB_0335ae74:
  if (uVar11 == *(ulong *)(param_2 + 0xc0)) {
    local_38 = *(ulong *)((param_3[2] & 0xfffffffffffffffe) + 0x10);
    local_48 = *param_3;
    if ((local_38 & 1) != 0) {
      piVar1 = (int *)((local_38 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar11 = *(ulong *)(param_2 + 0xc0);
    }
    puStack_40 = puVar7;
    (**(code **)(**(long **)(uVar11 + 0x2b0) + 0x20))(local_60,*(long **)(uVar11 + 0x2b0),&local_48)
    ;
    if ((local_60[0] == 0) ||
       (uVar5 = FUN_0335a3c0(*(undefined8 *)(param_2 + 0xc0)), (int)uVar5 < 1)) {
      bVar4 = true;
    }
    else {
      plVar8 = (long *)(*(long *)(param_2 + 0x18) + (ulong)uVar5 * 0x18);
      puVar10 = (ulong *)plVar8[1];
      *param_1 = *plVar8;
      param_1[1] = (long)puVar10;
      uVar11 = 0;
      if (puVar10 != (ulong *)0x0) {
        do {
          uVar11 = *puVar10;
          if (((uint)uVar11 >> 2 & 1) != 0) {
            uVar11 = puVar10[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
            goto LAB_0335af30;
          }
          puVar10 = (ulong *)puVar10[1];
        } while (puVar10 != (ulong *)0x0);
        uVar11 = 0;
      }
LAB_0335af30:
      param_1[2] = uVar11;
      if ((uVar11 & 1) != 0) {
        piVar1 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bVar4 = false;
    }
    if ((local_50 & 1) != 0) {
      plVar6 = (long *)(local_50 & 0xfffffffffffffffe);
      plVar8 = plVar6 + 1;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = (int)lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar9 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    if ((local_38 & 1) != 0) {
      plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar8 = plVar6 + 1;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = (int)lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar9 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    if (!bVar4) {
      return;
    }
    puVar7 = (ulong *)param_3[1];
  }
  do {
    if (((byte)*puVar7 >> 1 & 1) != 0) {
      if ((puVar7[3] != 0) && (uVar11 = FUN_031dd260(puVar7[3],PTR_DAT_047e5c40), (uVar11 & 1) != 0)
         ) goto LAB_0335b04c;
      break;
    }
    puVar7 = (ulong *)puVar7[1];
  } while (puVar7 != (ulong *)0x0);
  lVar12 = (long)*(int *)*param_3;
  lVar9 = *(long *)(param_2 + 0x18);
  plVar8 = (long *)(lVar9 + lVar12 * 0x18);
  if ((char)plVar8[2] == '\x02') {
    puVar10 = *(ulong **)(lVar9 + lVar12 * 0x18 + 8);
    *param_1 = *plVar8;
    param_1[1] = (long)puVar10;
    uVar11 = 0;
    if (puVar10 != (ulong *)0x0) {
      do {
        uVar11 = *puVar10;
        if (((uint)uVar11 >> 2 & 1) != 0) {
          uVar11 = puVar10[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
          goto LAB_0335b0a8;
        }
        puVar10 = (ulong *)puVar10[1];
      } while (puVar10 != (ulong *)0x0);
      uVar11 = 0;
    }
LAB_0335b0a8:
    param_1[2] = uVar11;
    if ((uVar11 & 1) != 0) {
      piVar1 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else if ((*plVar8 == 0) && (uVar5 = *(uint *)(lVar9 + lVar12 * 0x18 + 0x14), 0 < (int)uVar5)) {
    plVar8 = (long *)(lVar9 + (ulong)uVar5 * 0x18);
    puVar10 = (ulong *)plVar8[1];
    *param_1 = *plVar8;
    param_1[1] = (long)puVar10;
    uVar11 = 0;
    if (puVar10 != (ulong *)0x0) {
      do {
        uVar11 = *puVar10;
        if (((uint)uVar11 >> 2 & 1) != 0) {
          uVar11 = puVar10[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
          goto LAB_0335b0f0;
        }
        puVar10 = (ulong *)puVar10[1];
      } while (puVar10 != (ulong *)0x0);
      uVar11 = 0;
    }
LAB_0335b0f0:
    param_1[2] = uVar11;
    if ((uVar11 & 1) != 0) {
      piVar1 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
LAB_0335b04c:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}


