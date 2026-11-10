/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c4dc4; name: FUN_030c4dc4
 */


void FUN_030c4dc4(long param_1,uint *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar7 = *param_2;
  uVar2 = (ulong)uVar7;
  if (-1 < (int)uVar7) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      if ((int)uVar7 < iVar1) {
        if ((param_3 >> 1 & 1) == 0) {
          uVar7 = *(uint *)(**(long **)(param_1 + 0x68) + uVar2 * 4) >> 0x16;
          lVar5 = *(long *)(param_1 + 0x40);
          if (*(char *)((long)param_2 + 6) == '\0') {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)(lVar5 + uVar2 * 0x80 + 0x28);
          }
        }
        else {
          lVar5 = *(long *)(param_1 + 0x40);
          lVar3 = lVar5 + uVar2 * 0x80;
          uVar8 = *(undefined4 *)(lVar3 + 0x2c);
          uVar7 = *(uint *)(lVar3 + 8) >> 0x16;
        }
        puVar4 = (undefined8 *)(lVar5 + uVar2 * 0x80 + 0x70);
      }
      else {
        lVar3 = *(long *)(param_1 + 0x40) + (long)iVar1 * 0x80;
        uVar8 = 0;
        uVar7 = *(uint *)(lVar3 + -0x74) >> 0x16;
        puVar4 = (undefined8 *)(lVar3 + -0x10);
      }
      goto LAB_030c4e84;
    }
  }
  uVar8 = 0;
  uVar7 = *(uint *)(param_1 + 0x104) >> 0x16;
  puVar4 = (undefined8 *)(param_1 + 0x30);
LAB_030c4e84:
  puVar9 = *(undefined8 **)(param_1 + 0xc0);
  uVar14 = puVar4[1];
  uVar11 = *puVar4;
  uVar16 = *(undefined8 *)(param_2 + 6);
  uVar15 = *(undefined8 *)(param_2 + 4);
  plVar6 = (long *)*puVar9;
  if (plVar6 != (long *)0x0) {
    iVar1 = (int)plVar6[1];
    lVar3 = (long)iVar1;
    if ((int)(*(uint *)((long)plVar6 + 0xc) & 0x7fffffff) <= iVar1) {
      FUN_0308eb60(plVar6,PTR_PTR_047d1a50,lVar3 + 1);
      iVar1 = (int)plVar6[1];
    }
    puVar4 = (undefined8 *)(*plVar6 + (long)iVar1 * 0x30);
    puVar4[1] = uVar16;
    *puVar4 = uVar15;
    puVar4[3] = uVar14;
    puVar4[2] = uVar11;
    *(undefined4 *)(puVar4 + 4) = uVar8;
    *(uint *)((long)puVar4 + 0x24) = uVar7;
    *(char *)(puVar4 + 5) = (char)param_3;
    *(int *)(plVar6 + 1) = (int)(lVar3 + 1);
  }
  puVar4 = (undefined8 *)puVar9[1];
  if ((puVar4 != (undefined8 *)0x0) && (*(int *)((long)puVar9 + 0x14) < *(int *)(puVar9 + 2))) {
    puVar4[1] = uVar16;
    *puVar4 = uVar15;
    puVar4[3] = uVar14;
    puVar4[2] = uVar11;
    *(undefined4 *)(puVar4 + 4) = uVar8;
    *(uint *)((long)puVar4 + 0x24) = uVar7;
    *(char *)(puVar4 + 5) = (char)param_3;
    puVar9[1] = puVar9[1] + 0x30;
    *(int *)((long)puVar9 + 0x14) = *(int *)((long)puVar9 + 0x14) + 1;
  }
  if (0 < *(int *)(puVar9 + 3)) {
    fVar10 = (float)puVar9[4] - (float)*(undefined8 *)(param_2 + 4);
    fVar12 = (float)((ulong)puVar9[4] >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
    fVar13 = (float)puVar9[5] - (float)*(undefined8 *)(param_2 + 6);
    fVar10 = fVar10 * fVar10;
    fVar12 = fVar12 * fVar12;
    fVar13 = fVar13 * fVar13;
    puVar9[6] = CONCAT44((float)((ulong)puVar9[6] >> 0x20) + SQRT(fVar10 + fVar12 + fVar13),
                         (float)puVar9[6] + SQRT(fVar10 + fVar12 + fVar13));
  }
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  uVar11 = *(undefined8 *)(param_2 + 4);
  puVar9[5] = *(undefined8 *)(param_2 + 6);
  puVar9[4] = uVar11;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)param_2;
  uVar11 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0xe0) = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xf0) = uVar11;
  return;
}


