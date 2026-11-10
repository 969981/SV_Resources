/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d53a0; name: FUN_034d53a0
 */


undefined8 FUN_034d53a0(float param_1,long param_2,uint param_3,undefined1 (*param_4) [16])

{
  uint *puVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  
  uVar7 = param_3 - (param_3 >> 0xf & 1);
  uVar3 = uVar7 & 0xff;
  if ((uVar3 - 1 < 7) && (uVar4 = param_3 & 0xffff7f00, (uVar4 >> 0xc & 0xff9c8) == 0)) {
    uVar5 = uVar4 | uVar7 & 0xff;
    if (((param_3 & 0xf00) == 0x100) && ((uVar7 & 0xfe) != 0)) {
      puVar11 = *(uint **)(param_2 + 0xb8);
      uVar6 = *(uint *)(param_2 + 0xc0);
      uVar13 = (ulong)uVar6;
      puVar12 = puVar11;
      if ((uVar6 != 0) && (*puVar11 != uVar5)) {
        lVar16 = uVar13 * 0x10;
        puVar17 = puVar11;
        do {
          lVar16 = lVar16 + -0x10;
          if (lVar16 == 0) goto LAB_034d5474;
          puVar12 = puVar17 + 4;
          puVar1 = puVar17 + 4;
          puVar17 = puVar12;
        } while (*puVar1 != uVar5);
      }
      if (puVar12 == puVar11 + (ulong)uVar6 * 4) {
LAB_034d5474:
        lVar16 = FUN_0349c8dc(param_2,uVar5);
        if (((param_3 >> 0xe & 1) != 0) && (lVar16 != 0)) {
          puVar11 = *(uint **)(param_2 + 0xb8);
          uVar13 = (ulong)*(uint *)(param_2 + 0xc0);
          goto LAB_034d5490;
        }
LAB_034d54f8:
        if (lVar16 == 0) goto LAB_034d5740;
      }
      else if ((param_3 >> 0xe & 1) != 0) {
LAB_034d5490:
        uVar7 = param_3 & 0xffff3f00 | uVar7 - (param_3 >> 0xe & 1) & 0xff;
        puVar12 = puVar11;
        if (((int)uVar13 != 0) && (*puVar11 != uVar7)) {
          lVar16 = uVar13 * 0x10;
          puVar17 = puVar11;
          do {
            lVar16 = lVar16 + -0x10;
            if (lVar16 == 0) goto LAB_034d54f0;
            puVar12 = puVar17 + 4;
            puVar1 = puVar17 + 4;
            puVar17 = puVar12;
          } while (*puVar1 != uVar7);
        }
        if (puVar12 == puVar11 + uVar13 * 4) {
LAB_034d54f0:
          lVar16 = FUN_0349c8dc(param_2);
          goto LAB_034d54f8;
        }
      }
    }
    param_3 = param_3 & 0xff;
    if (param_3 != 0) {
      memset(param_4,0,(ulong)(param_3 << 2));
    }
    if ((uVar4 >> 0xc == 3) && (*(int *)(param_2 + 0x7c) == 1)) {
      fVar20 = sinf(param_1);
      uVar13 = 1;
      fVar20 = fVar20 * (fVar20 * -0.20710677 + 0.5) + 0.70710677;
      fVar20 = fVar20 * fVar20;
      fVar23 = 1.0 - fVar20;
      if (1.0 < fVar20) {
        fVar23 = 0.0;
      }
      *(float *)*param_4 = *(float *)*param_4 + fVar23;
    }
    else {
      nn::os::LockMutex((MutexType *)(param_2 + 200));
      puVar12 = *(uint **)(param_2 + 0xb8);
      uVar7 = *(uint *)(param_2 + 0xc0);
      if ((uVar7 == 0) || (*puVar12 == uVar5)) {
        puVar11 = puVar12;
      }
      else {
        lVar16 = (ulong)uVar7 * 0x10;
        puVar17 = puVar12;
        do {
          lVar16 = lVar16 + -0x10;
          if (lVar16 == 0) goto LAB_034d55ec;
          puVar11 = puVar17 + 4;
          puVar1 = puVar17 + 4;
          puVar17 = puVar11;
        } while (*puVar1 != uVar5);
      }
      if (puVar11 == puVar12 + (ulong)uVar7 * 4) {
LAB_034d55ec:
        lVar16 = FUN_0349c8dc(param_2,uVar5);
      }
      else {
        lVar16 = *(long *)(puVar11 + 2);
      }
      nn::os::UnlockMutex((MutexType *)(param_2 + 200));
      if (lVar16 == 0) goto LAB_034d5740;
      uVar7 = uVar3 + 2;
      if (3 < uVar3) {
        uVar7 = uVar3;
      }
      fVar20 = sinf(param_1);
      fVar23 = cosf(param_1);
      pfVar14 = (float *)(lVar16 + 8);
      uVar13 = 1;
      puVar12 = (uint *)(&DAT_03d984dc + (ulong)(uVar3 - 1) * 0x20);
      do {
        puVar11 = puVar12;
        pfVar2 = pfVar14 + -2;
        pfVar8 = pfVar14 + -1;
        fVar24 = *pfVar14;
        pfVar9 = pfVar14 + 1;
        if (uVar7 <= uVar13) break;
        pfVar14 = pfVar14 + 4;
        uVar13 = uVar13 + 1;
        puVar12 = puVar11 + 1;
      } while (*pfVar2 * fVar20 < -(*pfVar8 * fVar23) || fVar24 * fVar20 < -(*pfVar9 * fVar23));
      fVar24 = fVar24 * fVar20 + 1.1920929e-07 + *pfVar9 * fVar23;
      fVar23 = *pfVar2 * fVar20 + 1.1920929e-07 + *pfVar8 * fVar23;
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar20 = 1.0 / (fVar24 + fVar23);
      uVar13 = (ulong)(*puVar11 >> 0xe) & 0x3fffc;
      *(float *)(*param_4 + uVar13) = *(float *)(*param_4 + uVar13) + fVar23 * fVar20;
      fVar20 = fVar20 * fVar24;
      uVar13 = (ulong)*(ushort *)((long)puVar11 + 6);
    }
    uVar15 = (ulong)(param_3 + 3 >> 2);
    *(float *)(*param_4 + uVar13 * 4) = *(float *)(*param_4 + uVar13 * 4) + fVar20;
    if (param_4 < param_4 + uVar15) {
      lVar16 = uVar15 * 0x10 + -1;
      pauVar18 = param_4;
      if (((uint)lVar16 >> 4 & 1) == 0) {
        auVar21 = NEON_frsqrte(*param_4,4);
        auVar21 = NEON_frecpe(auVar21,4);
        pauVar18 = param_4 + 1;
        *(long *)(*param_4 + 8) = auVar21._8_8_;
        *(long *)*param_4 = auVar21._0_8_;
      }
      if (lVar16 != 0xf) {
        do {
          auVar22 = NEON_frsqrte(pauVar18[1],4);
          auVar21 = NEON_frsqrte(*pauVar18,4);
          auVar25 = NEON_frecpe(auVar21,4);
          auVar21 = NEON_frecpe(auVar22,4);
          pauVar19 = pauVar18 + 2;
          *(long *)(*pauVar18 + 8) = auVar25._8_8_;
          *(long *)*pauVar18 = auVar25._0_8_;
          *(long *)(pauVar18[1] + 8) = auVar21._8_8_;
          *(long *)pauVar18[1] = auVar21._0_8_;
          pauVar18 = pauVar19;
        } while (pauVar19 < param_4 + uVar15);
      }
    }
    uVar10 = 1;
  }
  else {
LAB_034d5740:
    uVar10 = 2;
  }
  return uVar10;
}


