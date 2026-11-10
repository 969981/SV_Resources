/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034d34c0; name: FUN_034d34c0
 */


void FUN_034d34c0(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 uint param_6,long param_7)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float afStack_50 [4];
  
  uVar5 = (uint)param_5;
  if ((((uint)((ulong)param_5 >> 0x10) & 0xffff ^ uVar5 >> 0x15) & 1) != 0) {
    uVar5 = uVar5 & 0xff9fffff | 0x30000;
  }
  uVar2 = uVar5 >> 0xc & 0xfffffff7;
  puVar7 = (undefined8 *)((long)afStack_50 - ((ulong)((uVar5 & 0xff) * 0xc + 0xf) & 0x1ff0));
  if (uVar2 == 0) {
    uVar5 = 0;
    bVar4 = true;
    pfVar6 = afStack_50;
  }
  else {
    uVar9 = 0;
    uVar5 = 0;
    uVar11 = 1;
    puVar12 = puVar7;
    do {
      if ((uVar11 & uVar2) != 0) {
        uVar3 = (&DAT_03d986a4)[uVar9 * 3];
        *puVar12 = *(undefined8 *)((long)&DAT_03d9869c + uVar9 * 0xc);
        *(undefined4 *)(puVar12 + 1) = uVar3;
        puVar12 = (undefined8 *)((long)puVar12 + 0xc);
        uVar5 = uVar5 + 1;
      }
      uVar11 = uVar11 * 2;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar11 - 1 < uVar2);
    pfVar6 = (float *)((long)puVar7 - ((ulong)(uVar5 * 3) * 4 + 0xf & 0x7fffffff0));
    if (uVar5 == 0) {
      bVar4 = true;
    }
    else {
      uVar9 = 0;
      do {
        fVar18 = *(float *)((long)puVar7 + (uVar9 & 0xffffffff) * 4);
        fVar18 = (float)NEON_fminnm(fVar18 + param_1 * (ABS(fVar18) + 1.0),0x3f800000);
        if (fVar18 <= -1.0) {
          fVar18 = -1.0;
        }
        pfVar6[uVar9 & 0xffffffff] = fVar18;
        uVar2 = (int)uVar9 + 1;
        fVar18 = *(float *)((long)puVar7 + (ulong)uVar2 * 4);
        fVar18 = (float)NEON_fminnm(fVar18 + param_2 * (ABS(fVar18) + 1.0),0x3f800000);
        if (fVar18 <= -1.0) {
          fVar18 = -1.0;
        }
        pfVar6[uVar2] = fVar18;
        uVar2 = (int)uVar9 + 2;
        uVar9 = uVar9 + 3;
        fVar18 = *(float *)((long)puVar7 + (ulong)uVar2 * 4);
        fVar18 = (float)NEON_fminnm(fVar18 + param_3 * (ABS(fVar18) + 1.0),0x3f800000);
        if (fVar18 <= -1.0) {
          fVar18 = -1.0;
        }
        pfVar6[uVar2] = fVar18;
      } while ((ulong)uVar5 * 2 + (ulong)uVar5 != uVar9);
      bVar4 = false;
    }
  }
  FUN_034d3790(uVar5,pfVar6,param_6,param_7);
  if ((((param_6 >> 0xe & 1) != 0) && (param_4 < 1.0)) && ((param_6 & 0x3000) != 0)) {
    if (bVar4) {
      return;
    }
    uVar9 = 0;
    uVar8 = (ulong)uVar5;
    do {
      uVar10 = uVar9 & 0xfffffffc;
      uVar9 = uVar9 + ((ulong)((param_6 & 0xff) + 3) & 0x1fc);
      pfVar6 = (float *)(param_7 + uVar10 * 4);
      fVar18 = pfVar6[2] * (0.5 - param_4 * 0.5);
      uVar8 = uVar8 - 1;
      pfVar6[2] = pfVar6[2] * param_4;
      *pfVar6 = *pfVar6 + fVar18;
      pfVar6[1] = pfVar6[1] + fVar18;
    } while (uVar8 != 0);
  }
  if (!bVar4) {
    uVar2 = (param_6 & 0xff) + 3;
    uVar8 = (ulong)(uVar2 >> 2);
    uVar10 = uVar8 * 0x10 - 1;
    uVar11 = ((uint)(uVar10 >> 4) & 0xfffffff) + 1;
    uVar9 = 0;
    do {
      pauVar14 = (undefined1 (*) [16])(param_7 + (ulong)((uVar2 & 0x1fc) * (int)uVar9) * 4);
      pauVar1 = pauVar14 + uVar8;
      if (pauVar14 < pauVar1) {
        if ((uVar11 & 3) != 0) {
          pauVar13 = pauVar14;
          lVar15 = -((ulong)uVar11 & 3);
          do {
            auVar16 = NEON_frsqrte(*pauVar13,4);
            auVar16 = NEON_frecpe(auVar16,4);
            bVar4 = lVar15 != -1;
            lVar15 = lVar15 + 1;
            pauVar14 = pauVar13 + 1;
            *(long *)(*pauVar13 + 8) = auVar16._8_8_;
            *(long *)*pauVar13 = auVar16._0_8_;
            pauVar13 = pauVar14;
          } while (bVar4);
        }
        if (0x2f < uVar10) {
          do {
            auVar17 = NEON_frsqrte(pauVar14[1],4);
            auVar16 = NEON_frsqrte(*pauVar14,4);
            auVar17 = NEON_frecpe(auVar17,4);
            auVar16 = NEON_frecpe(auVar16,4);
            *(long *)(*pauVar14 + 8) = auVar16._8_8_;
            *(long *)*pauVar14 = auVar16._0_8_;
            *(long *)(pauVar14[1] + 8) = auVar17._8_8_;
            *(long *)pauVar14[1] = auVar17._0_8_;
            auVar16 = NEON_frsqrte(pauVar14[2],4);
            auVar17 = NEON_frecpe(auVar16,4);
            auVar16 = NEON_frsqrte(pauVar14[3],4);
            auVar16 = NEON_frecpe(auVar16,4);
            *(long *)(pauVar14[2] + 8) = auVar17._8_8_;
            *(long *)pauVar14[2] = auVar17._0_8_;
            *(long *)(pauVar14[3] + 8) = auVar16._8_8_;
            *(long *)pauVar14[3] = auVar16._0_8_;
            pauVar14 = pauVar14 + 4;
          } while (pauVar14 < pauVar1);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar5);
  }
  return;
}


