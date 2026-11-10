/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01170930; name: FUN_01170930
 */


void FUN_01170930(long *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *unaff_x22;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long *local_48 [3];
  
  puVar8 = &DAT_cbf29ce484222645;
  bVar7 = *param_2;
  pbVar2 = param_2;
  while (bVar7 != 0) {
    pbVar2 = pbVar2 + 1;
    puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar7) * 0x100000001b3);
    bVar7 = *pbVar2;
  }
  puVar9 = (undefined1 *)param_1[1];
  if (puVar9 != (undefined1 *)0x0) {
    uVar4 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      unaff_x22 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar8);
    }
    else {
      unaff_x22 = puVar8;
      if (puVar9 <= puVar8) {
        uVar5 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar8 / (ulong)puVar9;
        }
        unaff_x22 = puVar8 + -(uVar5 * (long)puVar9);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)unaff_x22 * 8);
    if (plVar3 != (long *)0x0) {
      fVar10 = (float)*(undefined8 *)param_2;
      fVar11 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar12 = (float)*(undefined8 *)(param_2 + 0x10);
      fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
      fVar14 = (float)*(undefined8 *)(param_2 + 0x18);
      fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
      if (uVar4 < 2) {
        while ((plVar3 = (long *)*plVar3, plVar3 != (long *)0x0 &&
               ((undefined1 *)plVar3[1] == puVar8 ||
                (undefined1 *)((ulong)plVar3[1] & (ulong)(puVar9 + -1)) == unaff_x22))) {
          bVar7 = 1;
          if ((float)((ulong)plVar3[2] >> 0x20) == fVar11) {
            bVar7 = ~((float)plVar3[3] == (float)*(undefined8 *)(param_2 + 8));
          }
          bVar1 = 1;
          if ((float)plVar3[2] == fVar10) {
            bVar1 = bVar7;
          }
          bVar7 = 1;
          if ((((float)plVar3[5] == fVar14) && ((float)plVar3[4] == fVar12)) &&
             ((float)((ulong)plVar3[4] >> 0x20) == fVar13)) {
            bVar7 = ~((float)((ulong)plVar3[5] >> 0x20) == fVar15);
          }
          if (((*(int *)((long)plVar3 + 0x3c) == *(int *)(param_2 + 0x2c)) &&
              (!(bool)((bVar1 | bVar7) & 1))) &&
             ((*(float *)(plVar3 + 6) == *(float *)(param_2 + 0x20) &&
              ((*(float *)((long)plVar3 + 0x34) == *(float *)(param_2 + 0x24) &&
               (*(float *)(plVar3 + 7) == *(float *)(param_2 + 0x28))))))) {
            return;
          }
        }
      }
      else {
        while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
          puVar6 = (undefined1 *)plVar3[1];
          if (puVar6 != puVar8) {
            if (puVar9 <= puVar6) {
              uVar4 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar4 = (ulong)puVar6 / (ulong)puVar9;
              }
              puVar6 = puVar6 + -(uVar4 * (long)puVar9);
            }
            if (puVar6 != unaff_x22) break;
          }
          bVar7 = 1;
          if ((float)((ulong)plVar3[2] >> 0x20) == fVar11) {
            bVar7 = ~((float)plVar3[3] == (float)*(undefined8 *)(param_2 + 8));
          }
          bVar1 = 1;
          if ((float)plVar3[2] == fVar10) {
            bVar1 = bVar7;
          }
          bVar7 = 1;
          if ((((float)plVar3[5] == fVar14) && ((float)plVar3[4] == fVar12)) &&
             ((float)((ulong)plVar3[4] >> 0x20) == fVar13)) {
            bVar7 = ~((float)((ulong)plVar3[5] >> 0x20) == fVar15);
          }
          if (((*(int *)((long)plVar3 + 0x3c) == *(int *)(param_2 + 0x2c)) &&
              (!(bool)((bVar1 | bVar7) & 1))) &&
             ((*(float *)(plVar3 + 6) == *(float *)(param_2 + 0x20) &&
              ((*(float *)((long)plVar3 + 0x34) == *(float *)(param_2 + 0x24) &&
               (*(float *)(plVar3 + 7) == *(float *)(param_2 + 0x28))))))) {
            return;
          }
        }
      }
    }
  }
  FUN_01170cc4(local_48,param_1,puVar8);
  if ((puVar9 == (undefined1 *)0x0) ||
     (*(float *)(param_1 + 0xd) * (float)puVar9 < (float)(param_1[0xb] + 1))) {
    uVar4 = (ulong)(puVar9 < (undefined1 *)0x3 || ((ulong)puVar9 & (ulong)(puVar9 + -1)) != 0) |
            (long)puVar9 << 1;
    uVar5 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xd));
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    FUN_01170e48(param_1,uVar5);
    puVar9 = (undefined1 *)param_1[1];
    if (((ulong)puVar9 & (ulong)(puVar9 + -1)) == 0) {
      unaff_x22 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar8);
    }
    else if (puVar8 < puVar9) {
      unaff_x22 = puVar8;
    }
    else {
      uVar4 = 0;
      if (puVar9 != (undefined1 *)0x0) {
        uVar4 = (ulong)puVar8 / (ulong)puVar9;
      }
      unaff_x22 = puVar8 + -(uVar4 * (long)puVar9);
    }
  }
  plVar3 = *(long **)(*param_1 + (long)unaff_x22 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
    *(long **)(*param_1 + (long)unaff_x22 * 8) = plVar3;
    if (*local_48[0] != 0) {
      puVar8 = *(undefined1 **)(*local_48[0] + 8);
      if (((ulong)puVar9 & (ulong)(puVar9 + -1)) == 0) {
        puVar8 = (undefined1 *)((ulong)puVar8 & (ulong)(puVar9 + -1));
      }
      else if (puVar9 <= puVar8) {
        uVar4 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar8 / (ulong)puVar9;
        }
        puVar8 = puVar8 + -(uVar4 * (long)puVar9);
      }
      *(long **)(*param_1 + (long)puVar8 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


