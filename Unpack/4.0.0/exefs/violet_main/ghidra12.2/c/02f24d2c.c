/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f24d2c; name: FUN_02f24d2c
 */


void FUN_02f24d2c(long *param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      puVar6 = (undefined8 *)(*param_1 + lVar5 * 0x20);
      if (*(int *)((long)puVar6 + 0xc) != 0) {
        do {
          if (*(int *)((long)puVar6 + 0xc) != 0) {
            uVar1 = *(ushort *)((long)puVar6 + 10);
            uVar9 = (uint)uVar1;
            if (uVar1 != 0) {
              puVar7 = (uint *)*puVar6;
              uVar8 = *(int *)((long)puVar6 + 0xc) - (uint)uVar1;
              puVar4 = (uint *)((long)puVar7 + (ulong)*(ushort *)(puVar6 + 1) + 0x20);
              do {
                while (plVar2 = *(long **)(param_2 + (ulong)*(byte *)((long)puVar4 + 3) * 8 + 8),
                      (**(code **)(*plVar2 + 0x20))(plVar2,puVar4), (int)uVar9 < 2) {
                  if ((uVar8 == 0) || (puVar7 = *(uint **)(puVar7 + 2), puVar7 == (uint *)0x0))
                  goto LAB_02f24e0c;
                  uVar9 = *puVar7 & 0xffff;
                  if ((int)uVar8 <= (int)(*puVar7 & 0xffff)) {
                    uVar9 = uVar8;
                  }
                  if ((int)uVar9 < 1) goto LAB_02f24e0c;
                  uVar8 = uVar8 - uVar9;
                  puVar4 = puVar7 + 8;
                  Hint_Prefetch(*(long *)(puVar7 + 2),0,0,0);
                  Hint_Prefetch(*(long *)(puVar7 + 2) + 0x40,0,0,0);
                  Hint_Prefetch(puVar7 + 0x20,0,0,0);
                  Hint_Prefetch(puVar7 + 0x30,0,0,0);
                  if (puVar4 == (uint *)0x0) goto LAB_02f24e0c;
                }
                uVar9 = uVar9 - 1;
                puVar4 = (uint *)((long)puVar4 + (ulong)(ushort)*puVar4);
              } while (puVar4 != (uint *)0x0);
            }
          }
LAB_02f24e0c:
          puVar6 = (undefined8 *)puVar6[2];
        } while (puVar6 != (undefined8 *)0x0);
        iVar3 = (int)param_1[1];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}


