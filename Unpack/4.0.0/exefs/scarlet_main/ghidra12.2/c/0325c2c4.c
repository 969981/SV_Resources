/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0325c2c4; name: FUN_0325c2c4
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0325c2c4(undefined8 param_1,long *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  float local_100 [5];
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong auStack_c8 [4];
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  puVar16 = (undefined8 *)0x0;
  if (*param_2 != 0) {
    puVar16 = (undefined8 *)(*param_2 + (long)param_2);
  }
  if ((int)param_2[1] != 0) {
    puVar2 = puVar16 + (long)(int)param_2[1] * 0x10;
    param_1 = 0;
    do {
      uVar22 = puVar16[0xd];
      uVar21 = puVar16[0xc];
      uVar24 = puVar16[2];
      fVar23 = (float)uVar24;
      fVar25 = (float)*puVar16;
      uVar27 = puVar16[6];
      uVar29 = puVar16[4];
      fVar26 = (float)uVar27;
      fVar28 = (float)uVar29;
      iVar20 = (int)uVar21;
      uVar14 = puVar16[10];
      uVar12 = puVar16[8];
      cVar3 = *(char *)(puVar16 + 0xe);
      bVar5 = iVar20 != 0;
      if (cVar3 != '\0') {
        bVar5 = iVar20 != -1;
      }
      if (bVar5) {
        local_100[0] = (fVar23 - fVar25) * (fVar26 - fVar28) * ((float)uVar14 - (float)uVar12);
        local_100[1] = 0.0;
        uStack_d8 = uVar12 & 0xffffffff;
        local_e0 = CONCAT44(fVar28,fVar25);
        auStack_c8[0] = uVar14 & 0xffffffff;
        uStack_d0 = CONCAT44(fVar26,fVar23);
      }
      uVar10 = (ulong)bVar5;
      bVar6 = *(int *)((long)puVar16 + 100) != 0;
      if (cVar3 != '\0') {
        bVar6 = *(int *)((long)puVar16 + 100) != -1;
      }
      if (bVar6) {
        uVar10 = (ulong)(bVar5 + 1);
        auStack_c8[2] = (ulong)*(uint *)((long)puVar16 + 0x44);
        auStack_c8[1] =
             CONCAT44(*(undefined4 *)((long)puVar16 + 0x24),*(undefined4 *)((long)puVar16 + 4));
        local_100[2] = ((float)((ulong)uVar24 >> 0x20) - (float)((ulong)*puVar16 >> 0x20)) *
                       ((float)((ulong)uVar27 >> 0x20) - (float)((ulong)uVar29 >> 0x20)) *
                       ((float)(uVar14 >> 0x20) - (float)(uVar12 >> 0x20));
        uStack_a8 = (ulong)*(uint *)((long)puVar16 + 0x54);
        auStack_c8[3] =
             CONCAT44(*(undefined4 *)((long)puVar16 + 0x34),*(undefined4 *)((long)puVar16 + 0x14));
        local_100[3] = 1.4013e-45;
      }
      bVar5 = *(int *)(puVar16 + 0xd) != 0;
      if (cVar3 != '\0') {
        bVar5 = *(int *)(puVar16 + 0xd) != -1;
      }
      if (bVar5) {
        uVar10 = (ulong)((int)uVar10 + 1);
        uStack_98 = (ulong)(uint)puVar16[9];
        local_a0 = CONCAT44(*(undefined4 *)(puVar16 + 5),*(undefined4 *)(puVar16 + 1));
        local_100[4] = ((float)puVar16[3] - (float)puVar16[1]) *
                       ((float)puVar16[7] - (float)puVar16[5]) *
                       ((float)puVar16[0xb] - (float)puVar16[9]);
        uStack_88 = (ulong)(uint)puVar16[0xb];
        local_90 = CONCAT44(*(undefined4 *)(puVar16 + 7),*(undefined4 *)(puVar16 + 3));
        local_ec = 2;
      }
      bVar5 = *(int *)((long)puVar16 + 0x6c) != 0;
      if (cVar3 != '\0') {
        bVar5 = *(int *)((long)puVar16 + 0x6c) != -1;
      }
      if (bVar5) {
        uVar10 = (ulong)((int)uVar10 + 1);
        uStack_78 = (ulong)*(uint *)((long)puVar16 + 0x4c);
        local_80 = CONCAT44(*(undefined4 *)((long)puVar16 + 0x2c),
                            *(undefined4 *)((long)puVar16 + 0xc));
        local_e8 = ((float)((ulong)puVar16[3] >> 0x20) - (float)((ulong)puVar16[1] >> 0x20)) *
                   ((float)((ulong)puVar16[7] >> 0x20) - (float)((ulong)puVar16[5] >> 0x20)) *
                   ((float)((ulong)puVar16[0xb] >> 0x20) - (float)((ulong)puVar16[9] >> 0x20));
        uStack_68 = (ulong)*(uint *)((long)puVar16 + 0x5c);
        local_70 = CONCAT44(*(undefined4 *)((long)puVar16 + 0x3c),
                            *(undefined4 *)((long)puVar16 + 0x1c));
        local_e4 = 3;
LAB_0325c560:
        uVar14 = 0;
        do {
          fVar23 = local_100[uVar14 * 2];
          fVar25 = local_100[uVar14 * 2 + 1];
          if (uVar14 != 0) {
            uVar12 = uVar14;
            do {
              pfVar1 = local_100 + (ulong)((int)uVar12 - 1) * 2;
              if (fVar23 <= *pfVar1) goto LAB_0325c5a0;
              *(undefined8 *)(local_100 + uVar12 * 2) = *(undefined8 *)pfVar1;
              uVar4 = uVar12 - 1;
              bVar5 = 0 < (long)uVar12;
              uVar12 = uVar4;
            } while (uVar4 != 0 && bVar5);
          }
          uVar12 = 0;
LAB_0325c5a0:
          lVar18 = (long)(uVar12 << 0x20) >> 0x1d;
          uVar14 = uVar14 + 1;
          *(float *)((long)local_100 + lVar18) = fVar23;
          *(float *)((long)local_100 + lVar18 + 4) = fVar25;
        } while (uVar14 != uVar10);
        uVar14 = 0;
        piVar11 = (int *)((ulong)local_100 | 4);
        do {
          switch(*piVar11) {
          case 0:
            iVar15 = iVar20;
            break;
          case 1:
            iVar15 = (int)((ulong)uVar21 >> 0x20);
            break;
          case 2:
            iVar15 = (int)uVar22;
            break;
          case 3:
            iVar15 = (int)((ulong)uVar22 >> 0x20);
            break;
          default:
            iVar15 = 0;
          }
          *(int *)((long)puVar16 + uVar14 * 4 + 0x60) = iVar15;
          lVar18 = (long)*piVar11;
          iVar15 = (int)uVar14;
          puVar7 = puVar16 + 4;
          puVar8 = puVar16 + 10;
          puVar9 = puVar16 + 8;
          puVar13 = puVar16;
          puVar17 = puVar16 + 6;
          puVar19 = puVar16 + 2;
          if (iVar15 != 0) {
            if (iVar15 == 2) {
              puVar7 = puVar16 + 5;
              puVar8 = puVar16 + 0xb;
              puVar9 = puVar16 + 9;
              puVar13 = puVar16 + 1;
              puVar17 = puVar16 + 7;
              puVar19 = puVar16 + 3;
            }
            else if (iVar15 == 1) {
              puVar7 = (undefined8 *)((long)puVar16 + 0x24);
              puVar8 = (ulong *)((long)puVar16 + 0x54);
              puVar9 = (ulong *)((long)puVar16 + 0x44);
              puVar13 = (undefined8 *)((long)puVar16 + 4);
              puVar17 = (undefined8 *)((long)puVar16 + 0x34);
              puVar19 = (undefined8 *)((long)puVar16 + 0x14);
            }
            else {
              puVar7 = (undefined8 *)((long)puVar16 + 0x2c);
              puVar8 = (ulong *)((long)puVar16 + 0x5c);
              puVar9 = (ulong *)((long)puVar16 + 0x4c);
              puVar13 = (undefined8 *)((long)puVar16 + 0xc);
              puVar17 = (undefined8 *)((long)puVar16 + 0x3c);
              puVar19 = (undefined8 *)((long)puVar16 + 0x1c);
            }
          }
          *(undefined4 *)puVar13 = *(undefined4 *)(&local_e0 + lVar18 * 4);
          *(undefined4 *)puVar19 = *(undefined4 *)((long)&uStack_d0 + lVar18 * 0x20);
          *(undefined4 *)puVar7 = *(undefined4 *)((long)&local_e0 + lVar18 * 0x20 + 4);
          *(undefined4 *)puVar17 = *(undefined4 *)((long)auStack_c8 + lVar18 * 0x20 + -4);
          *(uint *)puVar9 = (uint)(&uStack_d8)[lVar18 * 4];
          uVar14 = uVar14 + 1;
          piVar11 = piVar11 + 2;
          *(uint *)puVar8 = (uint)auStack_c8[lVar18 * 4];
        } while (uVar10 != uVar14);
      }
      else if ((int)uVar10 != 0) goto LAB_0325c560;
      puVar16 = puVar16 + 0x10;
    } while (puVar16 != puVar2);
  }
  return param_1;
}


