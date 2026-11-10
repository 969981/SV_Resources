/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03418760; name: FUN_03418760
 */


/* WARNING: Removing unreachable block (ram,0x03418988) */
/* WARNING: Removing unreachable block (ram,0x03418a2c) */

ulong FUN_03418760(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 (*local_60) [16];
  undefined1 (*local_38) [16];
  
  if (*(int *)(param_3[0x28] + 4) <= (int)param_5) {
    if (*(int *)(param_3[0x28] + 4) == (int)param_5) {
      uVar4 = FUN_03418ab8(param_1,param_2,param_3,param_4,param_6);
      return uVar4;
    }
    uVar3 = 0;
    goto LAB_03418a98;
  }
  uVar3 = *(uint *)param_3[0x28];
  if (((int)uVar3 < 1) || (uVar3 == 1)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    fVar12 = (*(float *)(param_3[1] + 8) - *(float *)(*param_3 + 8)) * 0.5;
    fVar15 = (*(float *)param_3[1] - *(float *)*param_3) * 0.5;
    fVar16 = (*(float *)(param_3[1] + 4) - *(float *)(*param_3 + 4)) * 0.5;
    fVar12 = fVar15 * fVar15 + fVar16 * fVar16 + fVar12 * fVar12;
    auVar10 = NEON_fmin(*param_2,*param_3,4);
    fVar16 = *(float *)(param_1 + 0x10);
    auVar11 = NEON_fmax(param_2[1],param_3[1],4);
    fVar14 = (auVar11._4_4_ - auVar10._4_4_) * 0.5;
    fVar15 = fVar12 * fVar16 * SQRT(fVar12);
    fVar12 = (auVar11._0_4_ - auVar10._0_4_) * 0.5;
    fVar13 = (auVar11._8_4_ - auVar10._8_4_) * 0.5;
    fVar12 = fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13;
    fVar12 = fVar12 * fVar16 * SQRT(fVar12) - fVar15;
    uVar4 = 1;
    pauVar5 = param_3;
    do {
      pauVar9 = pauVar5 + 2;
      fVar13 = (*(float *)pauVar5[3] - *(float *)*pauVar9) * 0.5;
      auVar10 = NEON_fmin(*param_2,*pauVar9,4);
      fVar14 = (*(float *)(pauVar5[3] + 4) - *(float *)(pauVar5[2] + 4)) * 0.5;
      auVar11 = NEON_fmax(param_2[1],pauVar5[3],4);
      fVar18 = (auVar11._0_4_ - auVar10._0_4_) * 0.5;
      fVar17 = (*(float *)(pauVar5[3] + 8) - *(float *)(pauVar5[2] + 8)) * 0.5;
      fVar19 = (auVar11._4_4_ - auVar10._4_4_) * 0.5;
      fVar13 = fVar13 * fVar13 + fVar14 * fVar14 + fVar17 * fVar17;
      fVar14 = (auVar11._8_4_ - auVar10._8_4_) * 0.5;
      fVar14 = fVar18 * fVar18 + fVar19 * fVar19 + fVar14 * fVar14;
      fVar17 = fVar13 * fVar16 * SQRT(fVar13);
      fVar18 = fVar14 * fVar16 * SQRT(fVar14) - fVar17;
      fVar13 = fVar18;
      fVar14 = fVar17;
      iVar1 = (int)uVar4;
      if (fVar15 <= fVar17 || fVar18 != fVar12) {
        fVar13 = fVar12;
        fVar14 = fVar15;
        iVar1 = iVar6;
      }
      bVar2 = fVar18 < fVar12;
      iVar6 = iVar1;
      fVar12 = fVar13;
      fVar15 = fVar14;
      if (bVar2) {
        iVar6 = (int)uVar4;
        fVar12 = fVar18;
        fVar15 = fVar17;
      }
      uVar4 = uVar4 + 1;
      pauVar5 = pauVar9;
    } while (uVar3 != uVar4);
  }
  uVar4 = FUN_03418760(param_1,param_2,*(undefined8 *)(param_3[0x20] + (long)iVar6 * 8),&local_38,
                       param_5,param_6);
  if ((uVar4 & 1) == 0) {
    param_3 = param_3 + (long)iVar6 * 2;
    uVar3 = 0;
    auVar11 = NEON_fmin(*param_2,*param_3,4);
    auVar10 = NEON_fmax(param_2[1],param_3[1],4);
    *(long *)(*param_3 + 8) = auVar11._8_8_;
    *(long *)*param_3 = auVar11._0_8_;
    *(long *)(param_3[1] + 8) = auVar10._8_8_;
    *(long *)param_3[1] = auVar10._0_8_;
    goto LAB_03418a98;
  }
  pauVar5 = *(undefined1 (**) [16])(param_3[0x20] + (long)iVar6 * 8);
  uVar3 = *(uint *)pauVar5[0x28];
  auVar10 = *pauVar5;
  auVar11 = pauVar5[1];
  if (1 < (int)uVar3) {
    if (uVar3 == 2) {
      lVar7 = 1;
    }
    else {
      uVar4 = 0;
      pauVar9 = pauVar5 + 5;
      do {
        uVar8 = uVar4;
        auVar11 = NEON_fmax(auVar11,pauVar9[-2],4);
        uVar4 = uVar8 + 2;
        auVar10 = NEON_fmin(auVar10,pauVar9[-3],4);
        auVar10 = NEON_fmin(auVar10,pauVar9[-1],4);
        auVar11 = NEON_fmax(auVar11,*pauVar9,4);
        pauVar9 = pauVar9 + 4;
      } while (((ulong)uVar3 - 1 & 0xfffffffffffffffe) != uVar4);
      lVar7 = uVar8 + 3;
      if (((ulong)uVar3 - 1 & 1) == 0) goto LAB_034189f8;
    }
    auVar11 = NEON_fmax(auVar11,(pauVar5 + lVar7 * 2)[1],4);
    auVar10 = NEON_fmin(auVar10,pauVar5[lVar7 * 2],4);
  }
LAB_034189f8:
  pauVar5 = param_3 + (long)iVar6 * 2;
  *(long *)(*pauVar5 + 8) = auVar10._8_8_;
  *(long *)*pauVar5 = auVar10._0_8_;
  *(long *)(pauVar5[1] + 8) = auVar11._8_8_;
  *(long *)pauVar5[1] = auVar11._0_8_;
  local_60 = local_38;
  uVar3 = *(uint *)local_38[0x28];
  auVar10 = *local_38;
  auVar11 = local_38[1];
  if (1 < (int)uVar3) {
    if (uVar3 == 2) {
      lVar7 = 1;
    }
    else {
      uVar4 = 0;
      pauVar5 = local_38 + 5;
      do {
        uVar8 = uVar4;
        auVar11 = NEON_fmax(auVar11,pauVar5[-2],4);
        uVar4 = uVar8 + 2;
        auVar10 = NEON_fmin(auVar10,pauVar5[-3],4);
        auVar10 = NEON_fmin(auVar10,pauVar5[-1],4);
        auVar11 = NEON_fmax(auVar11,*pauVar5,4);
        pauVar5 = pauVar5 + 4;
      } while (((ulong)uVar3 - 1 & 0xfffffffffffffffe) != uVar4);
      lVar7 = uVar8 + 3;
      if (((ulong)uVar3 - 1 & 1) == 0) goto LAB_03418a7c;
    }
    auVar11 = NEON_fmax(auVar11,(local_38 + lVar7 * 2)[1],4);
    auVar10 = NEON_fmin(auVar10,local_38[lVar7 * 2],4);
  }
LAB_03418a7c:
  uStack_78 = auVar10._8_8_;
  local_80 = auVar10._0_8_;
  uStack_68 = auVar11._8_8_;
  uStack_70 = auVar11._0_8_;
  uVar3 = FUN_03418ab8(param_1,&local_80,param_3,param_4,param_6);
LAB_03418a98:
  return (ulong)(uVar3 & 1);
}


