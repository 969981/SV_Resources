/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03445c24; name: FUN_03445c24
 */


void FUN_03445c24(void *param_1,uint param_2,long *param_3,int param_4,int param_5,long param_6,
                 long param_7,long param_8,long param_9)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  
  if (*(char *)(param_6 + 0x88) == '\0') {
    if (param_9 != 0) {
      puVar1 = (undefined8 *)(param_9 + 0x18);
      if (param_2 < 2) {
        param_2 = 1;
      }
      uVar4 = (ulong)param_2;
      do {
        puVar1[1] = 0x3f80000000000000;
        puVar1[2] = 0xffff3f800000;
        uVar4 = uVar4 - 1;
        puVar1[-1] = 0x3f800000;
        *puVar1 = 0;
        puVar1[-3] = 0;
        puVar1[-2] = 0x3f800000;
        puVar1 = puVar1 + 6;
      } while (uVar4 != 0);
    }
  }
  else {
    pfVar2 = (float *)(param_9 + 0x18);
    if (param_2 < 2) {
      param_2 = 1;
    }
    uVar4 = (ulong)param_2;
    do {
      fVar17 = 0.0;
      fVar13 = 0.0;
      memcpy(pfVar2 + -6,param_1,0x30);
      fVar19 = 1.0;
      if (param_5 == 0) {
        local_ac = 0.0;
        fVar29 = 0.0;
        fVar25 = 0.0;
        fVar21 = 0.0;
        fVar27 = 1.0;
        fVar23 = 1.0;
        fVar20 = fVar13;
        fVar8 = fVar17;
        fVar22 = fVar17;
      }
      else {
        pfVar3 = (float *)*param_3;
        fVar6 = pfVar3[7] - *(float *)(param_6 + 0x7c);
        fVar5 = pfVar3[6] - *(float *)(param_6 + 0x78);
        fVar7 = pfVar3[8] - *(float *)(param_6 + 0x80);
        if (param_5 == 2) {
          fVar19 = pfVar3[4];
          fVar20 = pfVar3[5];
          fVar23 = *pfVar3;
          fVar22 = pfVar3[1];
          fVar24 = pfVar3[2];
          fVar25 = pfVar3[3];
          fVar8 = *(float *)(param_6 + 0x3c);
          fVar9 = *(float *)(param_6 + 0x40);
          fVar17 = fVar24 * fVar19 - fVar22 * fVar20;
          fVar15 = *(float *)(param_6 + 0x54);
          fVar16 = *(float *)(param_6 + 0x58);
          fVar26 = fVar23 * fVar20 - fVar25 * fVar24;
          fVar11 = *(float *)(param_6 + 0x44);
          fVar10 = *(float *)(param_6 + 0x48);
          fVar12 = *(float *)(param_6 + 0x4c);
          fVar14 = *(float *)(param_6 + 0x50);
          fVar28 = fVar25 * fVar22 - fVar23 * fVar19;
          fVar18 = *(float *)(param_6 + 0x5c);
          local_ac = fVar8 * fVar25 + fVar19 * fVar9 + fVar20 * fVar11;
          fVar27 = fVar10 * fVar25 + fVar19 * fVar12 + fVar20 * fVar14;
          fVar29 = fVar15 * fVar25 + fVar19 * fVar16 + fVar20 * fVar18;
          fVar25 = fVar8 * fVar23 + fVar22 * fVar9 + fVar24 * fVar11;
          fVar21 = fVar10 * fVar23 + fVar22 * fVar12 + fVar24 * fVar14;
          fVar23 = fVar15 * fVar23 + fVar22 * fVar16 + fVar24 * fVar18;
          fVar19 = fVar8 * fVar17 + fVar26 * fVar9 + fVar28 * fVar11;
          fVar24 = fVar10 * fVar17 + fVar26 * fVar12 + fVar28 * fVar14;
          fVar20 = fVar15 * fVar17 + fVar26 * fVar16 + fVar28 * fVar18;
        }
        else {
          local_ac = 0.0;
          fVar8 = *(float *)(param_6 + 0x3c);
          fVar9 = *(float *)(param_6 + 0x40);
          fVar11 = *(float *)(param_6 + 0x44);
          fVar10 = *(float *)(param_6 + 0x48);
          fVar12 = *(float *)(param_6 + 0x4c);
          fVar14 = *(float *)(param_6 + 0x50);
          fVar15 = *(float *)(param_6 + 0x54);
          fVar16 = *(float *)(param_6 + 0x58);
          fVar18 = *(float *)(param_6 + 0x5c);
          fVar29 = 0.0;
          fVar25 = 0.0;
          fVar21 = 0.0;
          fVar27 = 1.0;
          fVar23 = 1.0;
          fVar24 = fVar17;
          fVar20 = fVar17;
        }
        fVar22 = 1.0 / pfVar3[0x15];
        fVar26 = pfVar3[0x13];
        fVar17 = fVar22 * (fVar11 * fVar7 + fVar6 * fVar9 + fVar5 * fVar8);
        fVar8 = fVar22 * (fVar14 * fVar7 + fVar6 * fVar12 + fVar5 * fVar10);
        fVar22 = fVar22 * (fVar18 * fVar7 + fVar6 * fVar16 + fVar5 * fVar15);
        if (!(param_7 == 0 && param_8 == 0)) {
          fVar13 = SQRT(fVar17 * fVar17 + fVar8 * fVar8 + fVar22 * fVar22);
          if (param_7 != 0) {
            local_a4 = *(undefined4 *)(param_7 + 0x10);
            fVar26 = (float)FUN_03447dcc(fVar13,param_7,&local_a4);
            *(undefined4 *)(param_7 + 0x10) = local_a4;
          }
          if (param_8 == 0) {
            fVar13 = 0.0;
          }
          else {
            local_a8 = *(undefined4 *)(param_8 + 0x10);
            fVar13 = (float)FUN_03447dcc(fVar13,param_8,&local_a8);
            *(undefined4 *)(param_8 + 0x10) = local_a8;
          }
        }
        fVar5 = (float)NEON_fminnm(fVar26,pfVar3[0x14]);
        pfVar2[3] = fVar5 * pfVar2[3] * 0.01;
        pfVar2[4] = fVar13 * 0.01 * pfVar2[4];
        pfVar2[5] = (float)((uint)pfVar2[5] & (uint)pfVar3[0x16]);
        fVar13 = fVar24;
      }
      if (param_4 != 0) {
        fVar14 = pfVar2[-6];
        fVar9 = pfVar2[-5];
        fVar10 = *pfVar2;
        fVar11 = pfVar2[1];
        fVar16 = pfVar2[-4];
        fVar15 = pfVar2[-3];
        fVar5 = local_ac * fVar11;
        fVar18 = pfVar2[-2];
        fVar26 = pfVar2[-1];
        fVar6 = fVar27 * fVar9;
        fVar7 = fVar27 * fVar11;
        fVar12 = pfVar2[2];
        fVar24 = fVar29 * fVar9;
        fVar9 = local_ac * fVar9;
        fVar27 = fVar15 * fVar13 + fVar27 * fVar18 + fVar21 * fVar26;
        fVar8 = fVar8 + fVar13 * fVar10 + fVar7 + fVar21 * fVar12;
        fVar21 = fVar14 * fVar13 + fVar6 + fVar21 * fVar16;
        local_ac = fVar15 * fVar19 + local_ac * fVar18 + fVar25 * fVar26;
        fVar17 = fVar17 + fVar19 * fVar10 + fVar5 + fVar25 * fVar12;
        fVar22 = fVar22 + fVar20 * fVar10 + fVar29 * fVar11 + fVar23 * fVar12;
        fVar29 = fVar15 * fVar20 + fVar29 * fVar18 + fVar23 * fVar26;
        fVar25 = fVar14 * fVar19 + fVar9 + fVar25 * fVar16;
        fVar23 = fVar14 * fVar20 + fVar24 + fVar23 * fVar16;
      }
      pfVar2[-6] = fVar25;
      pfVar2[-5] = fVar21;
      *pfVar2 = fVar17;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
      pfVar2[1] = fVar8;
      pfVar2[2] = fVar22;
      pfVar2[-2] = fVar27;
      pfVar2[-1] = fVar29;
      pfVar2[-4] = fVar23;
      pfVar2[-3] = local_ac;
      pfVar2 = pfVar2 + 0xc;
    } while (uVar4 != 0);
  }
  return;
}


