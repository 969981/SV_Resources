/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0116f850; name: FUN_0116f850
 */


long * FUN_0116f850(long *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  byte bVar16;
  
  puVar3 = &DAT_cbf29ce484222645;
  bVar16 = *param_2;
  pbVar4 = param_2;
  while (bVar16 != 0) {
    pbVar4 = pbVar4 + 1;
    puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar16) * 0x100000001b3);
    bVar16 = *pbVar4;
  }
  puVar8 = (undefined1 *)param_1[1];
  if (puVar8 != (undefined1 *)0x0) {
    uVar5 = (long)puVar8 - ((ulong)puVar8 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      puVar6 = (undefined1 *)((ulong)(puVar8 + -1) & (ulong)puVar3);
    }
    else {
      puVar6 = puVar3;
      if (puVar8 <= puVar3) {
        uVar2 = 0;
        if (puVar8 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar3 / (ulong)puVar8;
        }
        puVar6 = puVar3 + -(uVar2 * (long)puVar8);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)puVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      fVar10 = (float)*(undefined8 *)param_2;
      fVar11 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar12 = (float)*(undefined8 *)(param_2 + 0x10);
      fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
      fVar14 = (float)*(undefined8 *)(param_2 + 0x18);
      fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
      if (1 < uVar5) {
        do {
          puVar9 = (undefined1 *)plVar7[1];
          if (puVar9 == puVar3) {
            bVar16 = 1;
            if ((float)((ulong)plVar7[2] >> 0x20) == fVar11) {
              bVar16 = ~((float)plVar7[3] == (float)*(undefined8 *)(param_2 + 8));
            }
            bVar1 = 1;
            if ((float)plVar7[2] == fVar10) {
              bVar1 = bVar16;
            }
            bVar16 = 1;
            if ((((float)plVar7[5] == fVar14) && ((float)plVar7[4] == fVar12)) &&
               ((float)((ulong)plVar7[4] >> 0x20) == fVar13)) {
              bVar16 = ~((float)((ulong)plVar7[5] >> 0x20) == fVar15);
            }
            if (((*(int *)((long)plVar7 + 0x3c) == *(int *)(param_2 + 0x2c)) &&
                (!(bool)((bVar1 | bVar16) & 1))) &&
               ((*(float *)(plVar7 + 6) == *(float *)(param_2 + 0x20) &&
                ((*(float *)((long)plVar7 + 0x34) == *(float *)(param_2 + 0x24) &&
                 (*(float *)(plVar7 + 7) == *(float *)(param_2 + 0x28))))))) {
              return plVar7;
            }
          }
          else {
            if (puVar8 <= puVar9) {
              uVar5 = 0;
              if (puVar8 != (undefined1 *)0x0) {
                uVar5 = (ulong)puVar9 / (ulong)puVar8;
              }
              puVar9 = puVar9 + -(uVar5 * (long)puVar8);
            }
            if (puVar9 != puVar6) {
              return (long *)0x0;
            }
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        if ((undefined1 *)plVar7[1] == puVar3) {
          bVar16 = 1;
          if ((float)((ulong)plVar7[2] >> 0x20) == fVar11) {
            bVar16 = ~((float)plVar7[3] == (float)*(undefined8 *)(param_2 + 8));
          }
          bVar1 = 1;
          if ((float)plVar7[2] == fVar10) {
            bVar1 = bVar16;
          }
          bVar16 = 1;
          if ((((float)plVar7[5] == fVar14) && ((float)plVar7[4] == fVar12)) &&
             ((float)((ulong)plVar7[4] >> 0x20) == fVar13)) {
            bVar16 = ~((float)((ulong)plVar7[5] >> 0x20) == fVar15);
          }
          if (((*(int *)((long)plVar7 + 0x3c) == *(int *)(param_2 + 0x2c)) &&
              (!(bool)((bVar1 | bVar16) & 1))) &&
             ((*(float *)(plVar7 + 6) == *(float *)(param_2 + 0x20) &&
              ((*(float *)((long)plVar7 + 0x34) == *(float *)(param_2 + 0x24) &&
               (*(float *)(plVar7 + 7) == *(float *)(param_2 + 0x28))))))) {
            return plVar7;
          }
        }
        else if ((undefined1 *)((ulong)plVar7[1] & (ulong)(puVar8 + -1)) != puVar6) {
          return (long *)0x0;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return (long *)0x0;
}


