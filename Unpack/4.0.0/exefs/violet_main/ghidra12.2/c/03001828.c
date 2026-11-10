/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03001828; name: FUN_03001828
 */


void FUN_03001828(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  MutexType *pMVar11;
  long lVar12;
  long lVar13;
  
  *param_1 = (long)(PTR_DAT_047e49e0 + 0x10);
  puVar3 = PTR_PTR_047d1a50;
  puVar2 = PTR_DAT_047d1a08;
  if (0 < (int)param_1[4]) {
    lVar12 = 0;
    do {
      lVar13 = *(long *)(param_1[3] + lVar12 * 8);
      FUN_031c34c8(*(long *)(lVar13 + 0x7e0) + 0x20);
      lVar4 = *(long *)(lVar13 + 0x10);
      uVar5 = *(uint *)(lVar13 + 0x6f8);
      if (*(char *)(lVar13 + 0x6ec) != '\0') {
        plVar6 = *(long **)(lVar13 + 0x6f0);
        if ((int)uVar5 < 1) {
          plVar8 = plVar6;
        }
        else {
          uVar1 = uVar5 & 3;
          plVar8 = plVar6;
          if (2 < uVar5 - 1) {
            iVar9 = -(uVar5 & 0xfffffffc);
            do {
              plVar7 = plVar6;
              if (*plVar8 != 0) {
                plVar7 = plVar6 + 1;
                *plVar6 = *plVar8;
              }
              plVar6 = plVar7;
              if (plVar8[1] != 0) {
                plVar6 = plVar7 + 1;
                *plVar7 = plVar8[1];
              }
              plVar7 = plVar6;
              if (plVar8[2] != 0) {
                plVar7 = plVar6 + 1;
                *plVar6 = plVar8[2];
              }
              plVar6 = plVar7;
              if (plVar8[3] != 0) {
                plVar6 = plVar7 + 1;
                *plVar7 = plVar8[3];
              }
              plVar8 = plVar8 + 4;
              iVar9 = iVar9 + 4;
            } while (iVar9 != 0);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            plVar7 = plVar6;
            if (*plVar8 != 0) {
              plVar7 = plVar6 + 1;
              *plVar6 = *plVar8;
            }
            plVar6 = plVar7;
            plVar8 = plVar8 + 1;
          }
          plVar8 = *(long **)(lVar13 + 0x6f0);
        }
        uVar5 = (uint)((ulong)((long)plVar6 - (long)plVar8) >> 3);
        *(undefined1 *)(lVar13 + 0x6ec) = 0;
      }
      if (uVar5 != 0) {
        if (lVar4 == 0) {
          (**(code **)(**(long **)(lVar13 + 0x6e0) + 0x28))
                    (*(long **)(lVar13 + 0x6e0),*(undefined8 *)(lVar13 + 0x6f0));
        }
        else {
          FUN_031c2998(lVar4,*(undefined8 *)(lVar13 + 0x6f0));
        }
      }
      *(undefined4 *)(lVar13 + 0x6f8) = 0;
      *(undefined4 *)(lVar13 + 0x6e8) = 0;
      if (*(long **)(lVar13 + 0x7e0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar13 + 0x7e0) + 0x10))();
      }
      puVar10 = *(undefined8 **)(lVar13 + 0x10);
      if (puVar10 != (undefined8 *)0x0) {
        if (*(int *)(puVar10 + 0xb) != 0) {
          (**(code **)(*(long *)*puVar10 + 0x28))((long *)*puVar10,puVar10[1]);
          *(undefined4 *)(puVar10 + 0xb) = 0;
        }
        *(undefined4 *)(puVar10 + 2) = 0;
        if ((-1 < (int)*(uint *)((long)puVar10 + 0x14)) && (puVar10[1] != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,puVar10[1],(ulong)*(uint *)((long)puVar10 + 0x14) << 3);
        }
        puVar10[1] = 0;
        *(undefined4 *)((long)puVar10 + 0x14) = 0x80000000;
        (**(code **)(puVar2 + 8))(0,puVar10,0);
      }
      *(undefined8 *)(lVar13 + 0x10) = 0;
      lVar4 = *(long *)(param_1[3] + lVar12 * 8);
      if (lVar4 != 0) {
        FUN_03001af8(lVar4);
        (**(code **)(puVar2 + 8))(0,lVar4,0);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[4]);
  }
  lVar12 = param_1[0xa6];
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x20) = 0;
    if ((-1 < (int)*(uint *)(lVar12 + 0x24)) && (*(long *)(lVar12 + 0x18) != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*(long *)(lVar12 + 0x18),(ulong)*(uint *)(lVar12 + 0x24) << 6);
    }
    pMVar11 = *(MutexType **)(lVar12 + 8);
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x24) = 0x80000000;
    if (pMVar11 != (MutexType *)0x0) {
      nn::os::FinalizeMutex(pMVar11);
      (**(code **)(puVar2 + 8))(0,pMVar11,0);
    }
    (**(code **)(puVar2 + 8))(0,lVar12,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 3);
  }
  param_1[3] = 0;
  puVar2 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


