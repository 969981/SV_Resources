/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01329b00; name: FUN_01329b00
 */


float FUN_01329b00(undefined8 param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  int *piVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  byte local_d0 [8];
  char acStack_c8 [8];
  undefined4 auStack_c0 [28];
  
  piVar3 = (int *)*param_2;
  if (((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x17) ||
      (uVar7 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar7 == 0)) ||
     (puVar4 = (uint *)((long)piVar3 + uVar7), puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4),
     *puVar4 < 8)) {
LAB_01329ba0:
    uVar7 = 0;
  }
  else {
    puVar4 = puVar4 + 8;
    piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
    piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar7 == 0))
    goto LAB_01329ba0;
    uVar7 = (ulong)*(uint *)((long)piVar3 + uVar7);
  }
  puVar12 = &DAT_cbf29ce484222645;
  memset(local_d0,0,0x80);
  sVar2 = strlen((char *)local_d0);
  *(undefined4 *)((long)auStack_c0 + sVar2) = 0x746573;
  *(undefined8 *)(local_d0 + sVar2) = s_PfxRadialBlurOffset_03bfdd9f._0_8_;
  *(undefined8 *)(acStack_c8 + sVar2) = s_PfxRadialBlurOffset_03bfdd9f._8_8_;
  sVar2 = strlen((char *)local_d0);
  (local_d0 + sVar2)[0] = 0x5f;
  (local_d0 + sVar2)[1] = 0;
  strcat((char *)local_d0,*(char **)(param_3 + 8));
  if (local_d0[0] != 0) {
    pbVar5 = (byte *)((ulong)local_d0 | 1);
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)local_d0[0]) * 0x100000001b3);
      local_d0[0] = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (local_d0[0] != 0);
  }
  puVar6 = (undefined1 *)param_2[0x2c];
  fVar14 = 0.0;
  if (puVar6 != (undefined1 *)0x0) {
    uVar8 = (long)puVar6 - ((ulong)puVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar6 + -1) & (ulong)puVar12);
    }
    else {
      puVar9 = puVar12;
      if (puVar6 <= puVar12) {
        uVar1 = 0;
        if (puVar6 != (undefined1 *)0x0) {
          uVar1 = (ulong)puVar12 / (ulong)puVar6;
        }
        puVar9 = puVar12 + -(uVar1 * (long)puVar6);
      }
    }
    plVar10 = *(long **)(param_2[0x2b] + (long)puVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if ((undefined1 *)plVar10[1] == puVar12) {
            if ((undefined1 *)plVar10[2] == puVar12) goto LAB_01329d2c;
          }
          else if ((undefined1 *)((ulong)plVar10[1] & (ulong)(puVar6 + -1)) != puVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          puVar11 = (undefined1 *)plVar10[1];
          if (puVar11 == puVar12) {
            if ((undefined1 *)plVar10[2] == puVar12) goto LAB_01329d2c;
          }
          else {
            if (puVar6 <= puVar11) {
              uVar8 = 0;
              if (puVar6 != (undefined1 *)0x0) {
                uVar8 = (ulong)puVar11 / (ulong)puVar6;
              }
              puVar11 = puVar11 + -(uVar8 * (long)puVar6);
            }
            if (puVar11 != puVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_01329d30:
  piVar3 = (int *)*param_2;
  fVar15 = fVar14;
  if (((0x16 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
      (uVar8 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar8 != 0)) &&
     (puVar4 = (uint *)((long)piVar3 + uVar8), puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4),
     3 < *puVar4)) {
    puVar4 = puVar4 + 4;
    piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
    piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
    fVar15 = 0.0;
    if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (uVar8 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar8 != 0)) {
      fVar15 = *(float *)((long)piVar3 + uVar8);
    }
  }
  fVar13 = (float)(**(code **)(PTR_PTR_047d9248 + uVar7 * 8))(param_1);
  return fVar14 + (fVar15 - fVar14) * fVar13;
LAB_01329d2c:
  fVar14 = *(float *)(plVar10 + 6);
  goto LAB_01329d30;
}


