/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bc2a4; name: FUN_031bc2a4
 */


void FUN_031bc2a4(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  MutexType *pMVar14;
  long lVar15;
  
  *param_1 = (long)&PTR_LAB_046a3270;
  if ((int)param_1[5] != 0) {
    lVar13 = param_1[4];
    lVar15 = lVar13 + (long)(int)param_1[5] * 0x40;
    do {
      lVar8 = *(long *)(lVar13 + 0x20);
      if (lVar8 != 0) {
        puVar9 = *(ulong **)(lVar13 + 0x28);
        puVar10 = puVar9;
        while (uVar12 = *puVar10, ((uint)uVar12 >> 8 & 1) == 0) {
          if (((uVar12 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
          goto LAB_031bc344;
        }
        if ((puVar10 != (ulong *)0x0) &&
           ((code *)puVar10[(ulong)(byte)POPCOUNT((char)uVar12) + 2] != (code *)0x0)) {
          (*(code *)puVar10[(ulong)(byte)POPCOUNT((char)uVar12) + 2])(lVar8,puVar9,1);
          lVar8 = *(long *)(lVar13 + 0x20);
          puVar9 = *(ulong **)(lVar13 + 0x28);
        }
LAB_031bc344:
        uVar11 = (uint)*puVar9;
        if ((uVar11 >> 0x13 & 1) == 0) {
          do {
            puVar9 = (ulong *)puVar9[1];
            uVar11 = (uint)*puVar9;
          } while ((uVar11 >> 0x13 & 1) == 0);
        }
        uVar12 = CONCAT44(uVar11,uVar11) & 0x7ffff0007ffff;
        (**(code **)(*(long *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar12) +
                                                   POPCOUNT((char)(uVar12 >> 8)) +
                                                  POPCOUNT((char)(uVar12 >> 0x10))) + 2] + 0x20))
                  ((long *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar12) +
                                                POPCOUNT((char)(uVar12 >> 8)) +
                                               POPCOUNT((char)(uVar12 >> 0x10))) + 2],lVar8);
        *(long *)(lVar13 + 0x20) = 0;
        *(undefined8 *)(lVar13 + 0x28) = 0;
        uVar12 = *(ulong *)(lVar13 + 0x30);
        *(undefined8 *)(lVar13 + 0x30) = 0;
        if ((uVar12 & 1) != 0) {
          plVar7 = (long *)(uVar12 & 0xfffffffffffffffe);
          plVar2 = plVar7 + 1;
          do {
            lVar8 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = (int)lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar7 != (long *)0x0) && ((int)lVar8 == 1)) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      lVar13 = lVar13 + 0x40;
    } while (lVar13 != lVar15);
  }
  puVar5 = PTR_DAT_047d1a08;
  pMVar14 = (MutexType *)param_1[0xe];
  if (pMVar14 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar14);
    (**(code **)(puVar5 + 8))(0,pMVar14,0);
  }
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  puVar6 = PTR_PTR_047d1a50;
  if ((int)param_1[0xb] != 0) {
    (**(code **)(puVar5 + 8))(PTR_PTR_047d1a50[8],param_1[10],0);
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[10] = 0;
  }
  lVar13 = param_1[8];
  if ((lVar13 != 0) && (*(int *)(lVar13 + 4) != -2)) {
    (**(code **)(puVar5 + 8))(puVar6[8],lVar13,0);
    param_1[8] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if ((int)param_1[7] != 0) {
    lVar15 = param_1[6];
    lVar13 = (long)(int)param_1[7] * 0xa0;
    do {
      lVar8 = lVar15 + lVar13;
      *(undefined4 *)(lVar8 + -0x90) = 0;
      if ((-1 < *(int *)(lVar8 + -0x8c)) && (*(long *)(lVar8 + -0x98) != 0)) {
        (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))();
      }
      lVar13 = lVar13 + -0xa0;
      *(undefined8 *)(lVar8 + -0x98) = 0;
      *(undefined4 *)(lVar8 + -0x8c) = 0x80000000;
    } while (lVar13 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) * 0xa0);
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  param_1[6] = 0;
  if ((int)param_1[5] != 0) {
    puVar10 = (ulong *)param_1[4];
    puVar9 = puVar10 + (long)(int)param_1[5] * 8;
    do {
      puVar1 = puVar9 + -2;
      puVar9 = puVar9 + -8;
      if ((*puVar1 & 1) != 0) {
        plVar7 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar2 = plVar7 + 1;
        do {
          lVar13 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar7 != (long *)0x0) && ((int)lVar13 == 1)) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      if ((*puVar9 & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,*puVar9 - 1,0);
      }
    } while (puVar9 != puVar10);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 6);
  }
  param_1[4] = 0;
  puVar5 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar5 + 0x10);
  return;
}


