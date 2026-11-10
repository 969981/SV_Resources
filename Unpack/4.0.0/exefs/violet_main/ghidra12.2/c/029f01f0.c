/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029f01f0; name: FUN_029f01f0
 */


void FUN_029f01f0(uint *param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int *piVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  int *local_70;
  int *piStack_68;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    puVar13 = param_1 + 1;
    puVar1 = param_3 + 4;
    if (param_2 == (uint *)0x0) {
      local_70 = (int *)((long)puVar13 + (ulong)*puVar13);
      piStack_68 = (int *)0x0;
      (*(code *)*param_3)(puVar1,&local_70);
      if (uVar3 != 1) {
        local_70 = (int *)((long)(param_1 + 2) + (ulong)param_1[2]);
        piStack_68 = (int *)0x0;
        (*(code *)*param_3)(puVar1,&local_70);
        if (uVar3 != 2) {
          local_70 = (int *)((long)(param_1 + 3) + (ulong)param_1[3]);
          piStack_68 = (int *)0x0;
          (*(code *)*param_3)(puVar1,&local_70);
          if (uVar3 != 3) {
            lVar11 = (ulong)uVar3 - 3;
            puVar13 = param_1 + 4;
            do {
              local_70 = (int *)((long)puVar13 + (ulong)*puVar13);
              piStack_68 = (int *)0x0;
              (*(code *)*param_3)(puVar1,&local_70);
              lVar11 = lVar11 + -1;
              puVar13 = puVar13 + 1;
            } while (lVar11 != 0);
          }
        }
      }
    }
    else {
      uVar12 = 0;
      do {
        local_70 = (int *)((long)(puVar13 + uVar12) + (ulong)puVar13[uVar12]);
        if ((*(ushort *)((long)local_70 - (long)*local_70) < 5) ||
           (uVar5 = (ulong)((ushort *)((long)local_70 - (long)*local_70))[2], uVar5 == 0)) {
          lVar11 = 0;
        }
        else {
          puVar9 = (uint *)((long)local_70 + uVar5);
          lVar11 = (long)puVar9 + (ulong)*puVar9;
        }
        bVar4 = *(byte *)(lVar11 + 4);
        puVar6 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          puVar6 = &DAT_cbf29ce484222645;
          pbVar8 = (byte *)(lVar11 + 5);
          do {
            puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar4 != 0);
        }
        if (*param_2 == 0) {
          piStack_68 = (int *)0x0;
        }
        else {
          piVar7 = (int *)0x0;
          puVar9 = param_2 + 1;
          do {
            piStack_68 = (int *)((long)puVar9 + (ulong)*puVar9);
            if ((*(ushort *)((long)piStack_68 - (long)*piStack_68) < 5) ||
               (uVar5 = (ulong)((ushort *)((long)piStack_68 - (long)*piStack_68))[2], uVar5 == 0)) {
              lVar11 = 0;
            }
            else {
              puVar2 = (uint *)((long)piStack_68 + uVar5);
              lVar11 = (long)puVar2 + (ulong)*puVar2;
            }
            bVar4 = *(byte *)(lVar11 + 4);
            puVar10 = &DAT_cbf29ce484222645;
            if (bVar4 != 0) {
              puVar10 = &DAT_cbf29ce484222645;
              pbVar8 = (byte *)(lVar11 + 5);
              do {
                puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar4) * 0x100000001b3);
                bVar4 = *pbVar8;
                pbVar8 = pbVar8 + 1;
              } while (bVar4 != 0);
            }
            puVar9 = puVar9 + 1;
            if (puVar6 != puVar10) {
              piStack_68 = piVar7;
            }
          } while ((puVar9 != param_2 + 1 + *param_2) && (piVar7 = piStack_68, puVar6 != puVar10));
        }
        (*(code *)*param_3)(puVar1,&local_70);
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar3);
    }
  }
  return;
}


