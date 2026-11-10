/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e5f68; name: FUN_008e5f68
 */


undefined8
FUN_008e5f68(float param_1,undefined8 param_2,long param_3,long *param_4,uint *param_5,long param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(int *)(param_3 + 0x12b8) < *(int *)(param_6 + 0x28)) {
    FUN_008d43e0("Particle sort has failed. More buffer size is needed. \n");
    *param_4 = 0;
    *param_5 = 0;
    return 0;
  }
  *param_4 = *(long *)(*(long *)(param_3 + 0x10) + (long)param_8 * 0x9e8 + 0x9d8);
  *param_5 = 0;
  plVar5 = (long *)(param_6 + 0x1d0);
  if (*(char *)(*(long *)(param_6 + 0xa0) + 0x752) != '\0') {
    plVar5 = *(long **)(param_6 + 0xc0);
  }
  if (param_7 == 3) {
    iVar12 = *(int *)(param_6 + 0x28);
    if (iVar12 < 1) {
      uVar10 = 0;
    }
    else {
      lVar8 = 0;
      uVar10 = 0;
      lVar9 = 0;
      lVar11 = 0xc;
      do {
        lVar13 = *(long *)(param_6 + 0xb0) + lVar8;
        if (param_1 - *(float *)(lVar13 + 8) < *(float *)(lVar13 + 0xc)) {
          *(undefined4 *)(*param_4 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3)) =
               *(undefined4 *)(plVar5[1] + lVar11);
          *(int *)(*param_4 + (long)(int)*param_5 * 8 + 4) = (int)lVar9;
          uVar10 = (ulong)(*param_5 + 1);
          *param_5 = *param_5 + 1;
          iVar12 = *(int *)(param_6 + 0x28);
        }
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x10;
        lVar8 = lVar8 + 0x20;
      } while (lVar9 < iVar12);
    }
    FUN_008e7290(*param_4,*param_4 + (long)(int)uVar10 * 8,auStack_40);
  }
  else if (param_7 == 2) {
    iVar12 = *(int *)(param_6 + 0x28);
    if (iVar12 < 1) {
      uVar10 = 0;
    }
    else {
      lVar13 = *(long *)(param_3 + 0x10) + (long)param_8 * 0x9e8;
      param_2 = 0;
      lVar8 = 0;
      lVar11 = 0;
      uVar10 = 0;
      lVar9 = 0;
      do {
        lVar4 = *(long *)(param_6 + 0xb0) + lVar8;
        if (param_1 - *(float *)(lVar4 + 8) < *(float *)(lVar4 + 0xc)) {
          uVar15 = *(undefined8 *)(*plVar5 + lVar11);
          fVar6 = *(float *)((undefined8 *)(*plVar5 + lVar11) + 1);
          cVar7 = *(char *)(*(long *)(param_6 + 0xa0) + 0x753);
          if (cVar7 == '\x02') {
            puVar1 = (undefined4 *)(*(long *)(param_6 + 0x210) + lVar11);
            puVar2 = (undefined4 *)(*(long *)(param_6 + 0x218) + lVar11);
            pfVar3 = (float *)(*(long *)(param_6 + 0x220) + lVar11);
            uVar17 = *(undefined8 *)(param_6 + 0x370);
            uVar18 = CONCAT44(*puVar2,*puVar1);
            fVar21 = *pfVar3;
            uVar19 = CONCAT44(puVar2[1],puVar1[1]);
            fVar22 = pfVar3[1];
            uVar20 = CONCAT44(puVar2[2],puVar1[2]);
            fVar23 = pfVar3[2];
            fVar24 = (float)*(undefined8 *)(param_6 + 0x378);
          }
          else if (cVar7 == '\0') {
            fVar21 = (float)*(undefined8 *)(param_6 + 0x348);
            uVar18 = *(undefined8 *)(param_6 + 0x340);
            fVar22 = (float)*(undefined8 *)(param_6 + 0x358);
            uVar19 = *(undefined8 *)(param_6 + 0x350);
            fVar23 = (float)*(undefined8 *)(param_6 + 0x368);
            uVar20 = *(undefined8 *)(param_6 + 0x360);
            fVar24 = (float)*(undefined8 *)(param_6 + 0x378);
            uVar17 = *(undefined8 *)(param_6 + 0x370);
          }
          else {
            puVar1 = (undefined4 *)(*(long *)(param_6 + 0x210) + lVar11);
            puVar2 = (undefined4 *)(*(long *)(param_6 + 0x218) + lVar11);
            pfVar3 = (float *)(*(long *)(param_6 + 0x220) + lVar11);
            uVar18 = CONCAT44(*puVar2,*puVar1);
            fVar21 = *pfVar3;
            uVar19 = CONCAT44(puVar2[1],puVar1[1]);
            fVar22 = pfVar3[1];
            uVar20 = CONCAT44(puVar2[2],puVar1[2]);
            uVar17 = CONCAT44(puVar2[3],puVar1[3]);
            fVar23 = pfVar3[2];
            fVar24 = pfVar3[3];
          }
          fVar14 = (float)uVar15;
          fVar16 = (float)((ulong)uVar15 >> 0x20);
          *(float *)(*param_4 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3)) =
               *(float *)(lVar13 + 0x684) +
               *(float *)(lVar13 + 0x680) *
               (fVar24 + fVar21 * fVar14 + fVar22 * fVar16 + fVar23 * fVar6) +
               *(float *)(lVar13 + 0x678) *
               ((float)uVar17 +
               (float)uVar18 * fVar14 + (float)uVar19 * fVar16 + (float)uVar20 * fVar6) +
               *(float *)(lVar13 + 0x67c) *
               ((float)((ulong)uVar17 >> 0x20) +
               (float)((ulong)uVar18 >> 0x20) * fVar14 + (float)((ulong)uVar19 >> 0x20) * fVar16 +
               (float)((ulong)uVar20 >> 0x20) * fVar6);
          *(int *)(*param_4 + (long)(int)*param_5 * 8 + 4) = (int)lVar9;
          uVar10 = (ulong)(*param_5 + 1);
          *param_5 = *param_5 + 1;
          iVar12 = *(int *)(param_6 + 0x28);
        }
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x10;
        lVar8 = lVar8 + 0x20;
      } while (lVar9 < iVar12);
    }
    lVar11 = *param_4;
    lVar9 = lVar11 + (long)(int)uVar10 * 8;
    if (*(char *)(*(long *)(*(long *)(param_6 + 0x238) + 0x10) + 0x89b) == '\0') {
      FUN_008e9b90(param_1,param_2,lVar11,lVar9,auStack_38);
    }
    else {
      FUN_008e8a50(lVar11,lVar9,auStack_28);
    }
  }
  else if (param_7 == 1) {
    iVar12 = *(int *)(param_6 + 0x28);
    if (iVar12 < 1) {
      uVar10 = 0;
    }
    else {
      lVar8 = 0;
      uVar10 = 0;
      lVar9 = 0;
      lVar11 = 0xc;
      do {
        lVar13 = *(long *)(param_6 + 0xb0) + lVar8;
        if (param_1 - *(float *)(lVar13 + 8) < *(float *)(lVar13 + 0xc)) {
          *(undefined4 *)(*param_4 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3)) =
               *(undefined4 *)(plVar5[1] + lVar11);
          *(int *)(*param_4 + (long)(int)*param_5 * 8 + 4) = (int)lVar9;
          uVar10 = (ulong)(*param_5 + 1);
          *param_5 = *param_5 + 1;
          iVar12 = *(int *)(param_6 + 0x28);
        }
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x10;
        lVar8 = lVar8 + 0x20;
      } while (lVar9 < iVar12);
    }
    FUN_008e7e70(*param_4,*param_4 + (long)(int)uVar10 * 8,auStack_30);
  }
  return 1;
}


