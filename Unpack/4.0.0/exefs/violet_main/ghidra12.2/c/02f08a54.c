/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f08a54; name: FUN_02f08a54
 */


void FUN_02f08a54(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  MutexType *pMVar15;
  long *plVar16;
  ulong uVar17;
  
  *param_1 = 0;
  lVar13 = param_1[2];
  uVar3 = *(uint *)((long)param_1 + 0x34);
  if (*(int *)(param_1 + 6) != 0) {
    uVar1 = uVar3 + 1;
    if ((*(byte *)(lVar13 + 0x54) & 0xf) == 0) {
      uVar17 = 0;
      if (uVar1 < 2) {
        uVar3 = 0;
      }
      do {
        if (uVar3 == uVar17) goto LAB_02f08b10;
        uVar17 = uVar17 + 1;
      } while ((*(byte *)(lVar13 + (uVar17 & 0xffffffff) * 0xc0 + 0x54) & 0xf) == 0);
      if ((int)uVar17 == -1) goto LAB_02f08b10;
    }
    else {
      uVar17 = 0;
    }
    do {
      FUN_02f08f10(param_1,*(undefined4 *)(lVar13 + (uVar17 & 0xffffffff) * 0xc0 + 0x50));
      pbVar12 = (byte *)(lVar13 + 0x54 + (ulong)((int)uVar17 + 1) * 0xc0);
      do {
        uVar3 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar3;
        if (uVar1 <= uVar3) goto LAB_02f08b10;
        bVar4 = *pbVar12;
        pbVar12 = pbVar12 + 0xc0;
      } while ((bVar4 & 0xf) == 0);
    } while( true );
  }
LAB_02f08b10:
  FUN_02f0b1b0(param_1 + 0x15);
  puVar7 = PTR_DAT_047d1a08;
  lVar13 = param_1[0x21];
  while (lVar13 != 0) {
    lVar14 = *(long *)(lVar13 + 8);
    (**(code **)(puVar7 + 8))(0,lVar13,0);
    lVar13 = lVar14;
  }
  pMVar15 = (MutexType *)param_1[0x20];
  if (pMVar15 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar15);
    (**(code **)(puVar7 + 8))(0,pMVar15,0);
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  puVar8 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1e],(ulong)*(uint *)((long)param_1 + 0xfc) << 5);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[0x1c],(ulong)*(uint *)((long)param_1 + 0xec) << 2);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < *(int *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))(puVar8);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[0x18],(ulong)*(uint *)((long)param_1 + 0xcc) << 4);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  FUN_02f0b1b0(param_1 + 0x15);
  if (0 < (int)*(uint *)((long)param_1 + 0xbc)) {
    lVar14 = 0;
    lVar13 = (ulong)*(uint *)((long)param_1 + 0xbc) + 1;
    do {
      if (*(short *)(param_1[0x16] + lVar14) != -1) {
        *(undefined2 *)(param_1[0x16] + lVar14) = 0xffff;
      }
      lVar13 = lVar13 + -1;
      lVar14 = lVar14 + 0x10;
    } while (lVar13 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x17);
  *(uint *)(param_1 + 0x17) = uVar3 & 0x80000000;
  if ((-1 < (int)uVar3) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[0x16],(long)*(int *)((long)param_1 + 0xbc) * 0x10 + 0x10);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffff00000000;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar16 = (long *)param_1[0x13];
    plVar10 = plVar16 + *(int *)(param_1 + 0x14);
    do {
      plVar10 = plVar10 + -1;
      plVar9 = (long *)*plVar10;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar2 = plVar9 + 2;
        do {
          lVar13 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
    } while (plVar10 != plVar16);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[0x13],(ulong)*(uint *)((long)param_1 + 0xa4) << 3);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[0x11],(ulong)*(uint *)((long)param_1 + 0x94) << 3);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[0xf],(ulong)*(uint *)((long)param_1 + 0x84) << 3);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) << 3);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) * 0x18);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) << 2);
  }
  iVar11 = *(int *)(param_1 + 3);
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  if (0 < iVar11) {
    lVar13 = 0;
    do {
      if (((*(byte *)(param_1[2] + lVar13 * 0xc0 + 0x54) & 0xf) != 0) &&
         (plVar10 = *(long **)(param_1[2] + lVar13 * 0xc0 + 0x78), plVar10 != (long *)0x0)) {
        if (plVar10[1] != 0) {
          plVar16 = plVar10 + 2;
          do {
            lVar14 = *plVar16;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
        iVar11 = *(int *)(param_1 + 3);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar11);
  }
  if (param_1[4] != 0) {
    (**(code **)(puVar7 + 8))(0,param_1[4],0);
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[2],(ulong)*(uint *)((long)param_1 + 0x1c) * 0xc0);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  return;
}


