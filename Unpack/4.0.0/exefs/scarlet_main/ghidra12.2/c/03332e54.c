/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03332e54; name: FUN_03332e54
 */


void FUN_03332e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  long local_40;
  undefined8 local_38;
  
  puVar5 = (ulong *)FUN_03325d70(param_3,param_4);
  uVar7 = *puVar5;
  uVar9 = CONCAT44((int)uVar7,(int)uVar7) & 0xffff0000ffff;
  puVar5[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8))) + 2] = 0;
  puVar12 = puVar5;
  if ((uVar7 & 1) == 0) {
    puVar11 = puVar5;
    do {
      puVar11 = (ulong *)puVar11[1];
    } while ((*puVar11 & 1) == 0);
    if ((puVar5 == (ulong *)0x0) || ((puVar11[2] & 0x1f) != 8)) {
      if ((uVar7 & 1) == 0) {
        do {
          puVar12 = (ulong *)puVar12[1];
        } while ((*puVar12 & 1) == 0);
      }
      goto LAB_0333306c;
    }
  }
  else if ((puVar5 == (ulong *)0x0) || ((puVar5[2] & 0x1f) != 8)) {
LAB_0333306c:
    if (puVar5 == (ulong *)0x0) {
      return;
    }
    if ((puVar12[2] & 0x1f) != 6) {
      return;
    }
    local_40 = 0;
    local_38 = -0x8000000000000000;
    FUN_033331c8(param_1,param_2,&local_40);
    if (0 < (int)local_38) {
      lVar13 = 0;
      do {
        uVar7 = *puVar5;
        lVar8 = *(long *)(local_40 + lVar13 * 0x18);
        uVar10 = (uint)uVar7;
        if ((uVar10 >> 0x11 & 1) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT44(uVar10,uVar10) & 0x1ffff0001ffff;
          uVar9 = (ulong)(ushort)puVar5[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                      POPCOUNT((char)(uVar9 >> 8)) +
                                                     POPCOUNT((char)(uVar9 >> 0x10))) + 2];
        }
        puVar12 = puVar5;
        if ((uVar10 >> 2 & 1) == 0) {
          do {
            puVar12 = (ulong *)puVar12[1];
            if (puVar12 == (ulong *)0x0) goto LAB_03333120;
            uVar7 = *puVar12;
          } while (((uint)uVar7 >> 2 & 1) == 0);
        }
        if ((puVar12[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2] & 1) == 0) {
LAB_03333120:
          *(undefined4 *)(lVar8 + uVar9) = 0;
        }
        else {
          plVar6 = (long *)(puVar12[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2] & 0xfffffffffffffffe);
          plVar2 = plVar6 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          *(undefined4 *)(lVar8 + uVar9) = 0;
          do {
            lVar8 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = (int)lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)local_38);
    }
    goto LAB_03333184;
  }
  if ((uVar7 & 1) == 0) {
    do {
      puVar12 = (ulong *)puVar12[1];
      if (puVar12 == (ulong *)0x0) goto LAB_03332f50;
    } while ((*puVar12 & 1) == 0);
  }
  if ((puVar12 != (ulong *)0x0) && ((int)(puVar12[2] >> 8) != 0)) {
    return;
  }
LAB_03332f50:
  local_40 = 0;
  local_38 = -0x8000000000000000;
  FUN_033331c8(param_1,param_2,&local_40);
  if (0 < (int)local_38) {
    lVar13 = 0;
    do {
      uVar7 = *puVar5;
      lVar8 = *(long *)(local_40 + lVar13 * 0x18);
      uVar10 = (uint)uVar7;
      if ((uVar10 >> 0x11 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = CONCAT44(uVar10,uVar10) & 0x1ffff0001ffff;
        uVar9 = (ulong)(ushort)puVar5[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                    POPCOUNT((char)(uVar9 >> 8)) +
                                                   POPCOUNT((char)(uVar9 >> 0x10))) + 2];
      }
      puVar12 = puVar5;
      if ((uVar10 >> 2 & 1) == 0) {
        do {
          puVar12 = (ulong *)puVar12[1];
          if (puVar12 == (ulong *)0x0) {
            uVar7 = 0;
            goto LAB_03333014;
          }
          uVar7 = *puVar12;
        } while (((uint)uVar7 >> 2 & 1) == 0);
      }
      uVar7 = puVar12[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2];
      if ((uVar7 & 1) != 0) {
        piVar1 = (int *)((uVar7 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
LAB_03333014:
      if (*(int *)(lVar8 + uVar9) != 0) {
        *(undefined4 *)(lVar8 + uVar9) = 0;
      }
      if ((uVar7 & 1) != 0) {
        plVar6 = (long *)(uVar7 & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)local_38);
  }
LAB_03333184:
  lVar13 = local_38;
  uVar7 = (ulong)local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar13) && (local_40 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_40,uVar7 * 0x18);
  }
  return;
}


