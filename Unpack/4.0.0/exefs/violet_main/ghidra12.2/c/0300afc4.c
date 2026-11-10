/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300afc4; name: FUN_0300afc4
 */


void FUN_0300afc4(long *param_1,float *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  
  lVar10 = *param_1;
  if (0 < *(int *)(lVar10 + 0x15d4)) {
    uVar17 = *(undefined8 *)(param_2 + 2);
    uVar14 = *(undefined8 *)param_2;
    lVar7 = 0;
    lVar8 = 0;
    iVar9 = 0;
    lVar11 = 0x148;
    lVar12 = 4;
    do {
      fVar13 = (float)uVar14;
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      fVar16 = (float)uVar17;
      if ((*(char *)(lVar10 + 0x1688) == '\0') ||
         (*(char *)(*(long *)(lVar10 + 0x1690) + lVar8) != '\0')) {
        iVar9 = iVar9 + 1;
        pfVar3 = (float *)(*(long *)(lVar10 + 0x15c0) + lVar12);
        fVar18 = *pfVar3;
        fVar19 = pfVar3[1];
        pfVar4 = (float *)(*(long *)(lVar10 + 0x15c0) + lVar12);
        pfVar4[2] = fVar16 + pfVar3[2];
        pfVar4[3] = pfVar3[3] + 0.0;
        *pfVar4 = fVar13 + fVar18;
        pfVar4[1] = fVar15 + fVar19;
        pfVar3 = (float *)(param_1[3] + lVar7);
        cVar2 = *(char *)(pfVar3 + 9);
        if (cVar2 == '\x10' || cVar2 == '\b') {
          auVar22._0_4_ = fVar13 * *pfVar3;
          auVar22._4_4_ = fVar15 * pfVar3[1];
          auVar22._8_4_ = fVar16 * pfVar3[2];
          auVar22._12_4_ = pfVar3[3] * 0.0;
          auVar23 = NEON_ext(auVar22,auVar22,8,1);
          pfVar3[3] = pfVar3[3] - (auVar22._0_4_ + auVar22._4_4_ + auVar23._0_4_);
          if (cVar2 == '\x10') {
            pfVar3 = (float *)(param_1[5] + lVar11);
            fVar18 = *param_2;
            fVar19 = param_2[1];
            *(ulong *)(pfVar3 + -0x48) = (ulong)(uint)(pfVar3[-0x48] + param_2[2]);
            *(ulong *)(pfVar3 + -0x4a) = CONCAT44(pfVar3[-0x49] + fVar19,pfVar3[-0x4a] + fVar18);
            auVar6 = *(undefined1 (*) [12])(pfVar3 + -0x4f);
            uVar24 = *(undefined8 *)(param_2 + 2);
            fVar18 = (float)*(undefined8 *)param_2;
            fVar19 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
            fVar20 = (float)uVar24;
            pfVar3[-0x50] = pfVar3[-0x50] + fVar20;
            pfVar3[-0x4f] = pfVar3[-0x4f] + (float)((ulong)uVar24 >> 0x20);
            pfVar3[-0x52] = pfVar3[-0x52] + fVar18;
            pfVar3[-0x51] = pfVar3[-0x51] + fVar19;
            *(ulong *)*(undefined1 (*) [12])(pfVar3 + -0x4f) =
                 CONCAT44(fVar19 + auVar6._4_4_,fVar18 + auVar6._0_4_);
            pfVar3[-0x4d] = fVar20 + auVar6._8_4_;
            uVar24 = *(undefined8 *)(param_2 + 2);
            fVar18 = (float)*(undefined8 *)param_2;
            fVar19 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
            pfVar3[-5] = pfVar3[-5] + fVar18;
            pfVar3[-4] = pfVar3[-4] + fVar19;
            pfVar3[-3] = pfVar3[-3] + (float)uVar24;
            *(ulong *)(pfVar3 + -2) =
                 CONCAT44(fVar19 + (float)((ulong)*(undefined8 *)(pfVar3 + -2) >> 0x20),
                          fVar18 + (float)*(undefined8 *)(pfVar3 + -2));
            *pfVar3 = (float)uVar24 + *pfVar3;
          }
        }
      }
      lVar10 = *param_1;
      lVar8 = lVar8 + 1;
      lVar11 = lVar11 + 0x150;
      lVar7 = lVar7 + 0x28;
      lVar12 = lVar12 + 0x14;
    } while (iVar9 < *(int *)(lVar10 + 0x15d4));
    if ((0 < *(int *)(lVar10 + 0x15d4)) && (*(char *)(lVar10 + 0x15de) != '\0')) {
      lVar11 = 0;
      lVar8 = 0;
      iVar9 = 0;
      do {
        if ((*(char *)(lVar10 + 0x1688) == '\0') ||
           (*(char *)(*(long *)(lVar10 + 0x1690) + lVar8) != '\0')) {
          puVar1 = (undefined8 *)(param_1[0xb] + lVar11);
          iVar9 = iVar9 + 1;
          if (*(char *)((long)puVar1 + 0x24) == '\x10' || *(char *)((long)puVar1 + 0x24) == '\b') {
            fVar18 = fVar13 * (float)*puVar1;
            fVar19 = fVar15 * (float)((ulong)*puVar1 >> 0x20);
            fVar20 = fVar16 * (float)puVar1[1];
            fVar21 = (float)((ulong)puVar1[1] >> 0x20) * 0.0;
            auVar23._4_4_ = fVar19;
            auVar23._0_4_ = fVar18;
            auVar23._8_4_ = fVar20;
            auVar23._12_4_ = fVar21;
            auVar5._4_4_ = fVar19;
            auVar5._0_4_ = fVar18;
            auVar5._8_4_ = fVar20;
            auVar5._12_4_ = fVar21;
            auVar22 = NEON_ext(auVar23,auVar5,8,1);
            *(float *)((long)puVar1 + 0xc) =
                 *(float *)((long)puVar1 + 0xc) - (fVar18 + fVar19 + auVar22._0_4_);
            lVar10 = *param_1;
          }
        }
        lVar8 = lVar8 + 1;
        lVar11 = lVar11 + 0x28;
      } while (iVar9 < *(int *)(lVar10 + 0x15d4));
    }
  }
  return;
}


