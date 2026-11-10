/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f6c2b0; name: FUN_02f6c2b0
 */


void FUN_02f6c2b0(long param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,
                 byte param_6,long *param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar11 + 0x658);
  if ((*(byte *)(param_3 + 0x96) >> 4 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x40);
    uVar1 = *(uint *)(*param_5 + 0x54) | *(uint *)(*param_4 + 0x54) |
            *(uint *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(*param_4 + 0x8a) * 0x50 + 0x14)
            | *(uint *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(*param_5 + 0x8a) * 0x50 +
                       0x14);
    if ((*(uint *)(lVar8 + 0x318) & uVar1) != 0) {
      if (*(int *)(lVar8 + 0x1458) == 0) {
        lVar10 = 0;
        puVar9 = (undefined8 *)(lVar8 + 0x328);
        do {
          if ((*(uint *)(puVar9 + -1) & uVar1) != 0) {
            (**(code **)(*(long *)*puVar9 + 0x28))
                      ((long *)*puVar9,param_1,param_2,param_4,param_5,param_3);
          }
          lVar10 = lVar10 + 1;
          puVar9 = puVar9 + 2;
        } while (lVar10 < *(int *)(lVar8 + 0x31c));
      }
      else {
        lVar10 = (long)*(int *)(lVar8 + 0x1458) << 3;
        puVar9 = *(undefined8 **)(lVar8 + 0x1450);
        do {
          (**(code **)(*(long *)*puVar9 + 0xb8))
                    ((long *)*puVar9,param_1,param_2,param_4,param_5,param_3);
          lVar10 = lVar10 + -8;
          puVar9 = puVar9 + 1;
        } while (lVar10 != 0);
        lVar10 = 0;
        puVar9 = (undefined8 *)(lVar8 + 0x328);
        do {
          if ((*(uint *)(puVar9 + -1) & uVar1) != 0) {
            (**(code **)(*(long *)*puVar9 + 0x28))
                      ((long *)*puVar9,param_1,param_2,param_4,param_5,param_3);
          }
          lVar10 = lVar10 + 1;
          puVar9 = puVar9 + 2;
        } while (lVar10 < *(int *)(lVar8 + 0x31c));
        if (*(int *)(lVar8 + 0x1458) != 0) {
          lVar10 = (long)*(int *)(lVar8 + 0x1458) << 3;
          puVar9 = *(undefined8 **)(lVar8 + 0x1450);
          do {
            (**(code **)(*(long *)*puVar9 + 0xc0))
                      ((long *)*puVar9,param_1,param_2,param_4,param_5,param_3);
            lVar10 = lVar10 + -8;
            puVar9 = puVar9 + 1;
          } while (lVar10 != 0);
        }
      }
    }
  }
  lVar8 = *(long *)(param_3 + 0x98);
  if ((*(byte *)(lVar8 + 0x2c) >> 6 & 1) == 0) {
    (**(code **)(*plVar5 + 0x48))(plVar5,param_8,param_4[1],param_5[1]);
    puVar7 = *(uint **)(lVar8 + 0x20);
    if (puVar7 != (uint *)0x0) {
      puVar6 = (uint *)param_7[3];
      if (puVar6 == puVar7) {
        iVar4 = (int)param_7[4] + 1;
      }
      else {
        if ((puVar6 != (uint *)0x0) && (lVar10 = *param_7, lVar10 != 0)) {
          uVar1 = *(uint *)(param_7 + 4);
          if (uVar1 == (*puVar6 & 0xffff)) {
            puVar9 = (undefined8 *)param_7[2];
            *(undefined8 *)(*(long *)(lVar10 + 0x10) + (long)(int)puVar6[1] * 8) = 0;
            *(undefined1 *)(lVar10 + 0xc) = 1;
            iVar4 = *(int *)(puVar9 + 0xb);
            lVar10 = puVar9[1];
            *(uint **)(lVar10 + (long)iVar4 * 8) = puVar6;
            *(int *)(puVar9 + 0xb) = iVar4 + 1;
            if (*(int *)((long)puVar9 + 0x5c) <= iVar4 + 1) {
              (**(code **)(*(long *)*puVar9 + 0x28))
                        ((long *)*puVar9,lVar10 + (long)(iVar4 + -5) * 8,6);
              *(int *)(puVar9 + 0xb) = iVar4 + -5;
            }
          }
          else {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar3) {
                *puVar6 = *puVar6 - uVar1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        iVar4 = 1;
        param_7[3] = (long)puVar7;
      }
      *(int *)(param_7 + 4) = iVar4;
    }
    (**(code **)(*plVar5 + 0x50))
              (plVar5,param_8,param_1,lVar11 + 0x530,lVar8,param_3,param_4,param_5,param_6 & 1);
  }
  else {
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined2 *)(lVar8 + 0x28) = 0;
  }
  return;
}


