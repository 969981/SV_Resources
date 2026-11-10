/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e24f0; name: FUN_033e24f0
 */


void FUN_033e24f0(undefined4 param_1,undefined4 param_2,long *param_3,uint param_4,uint param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar3 = *(uint *)(param_3 + 1);
  uVar7 = (ulong)param_4;
  if ((uVar3 & 0xf00) == 0x200) {
    memcpy(param_6,(void *)(*param_3 + (ulong)param_5 * 4),uVar7 << 2);
    return;
  }
  if ((uVar3 & 0xf00) == 0x100) {
    fVar12 = (float)NEON_fminnm(param_1,0x3f800000);
    fVar11 = (float)NEON_fminnm(param_2,0x3f800000);
    fVar9 = 0.0;
    if ((uVar3 & 0x1000) != 0) {
      fVar9 = 1.0;
    }
    if ((uVar3 & 0x2000) != 0) {
      fVar9 = fVar9 + 1.0;
    }
    if ((uVar3 & 0x200000) != 0) {
      fVar9 = fVar9 + 1.0;
    }
    if ((uVar3 & 0x400000) != 0) {
      fVar9 = fVar9 + 1.0;
    }
    if ((uVar3 & 0x10000) != 0) {
      fVar9 = fVar9 + 1.0;
    }
    if ((uVar3 & 0x20000) != 0) {
      fVar9 = fVar9 + 1.0;
    }
    fVar13 = 0.0;
    if ((uVar3 & 0x4000) != 0) {
      fVar13 = fVar12 * fVar12;
    }
    uVar8 = uVar3 >> 0xc;
    fVar14 = 0.0;
    if ((uVar3 & 0x8000) != 0) {
      fVar14 = fVar11 * fVar11;
    }
    memset(param_6,0,-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2);
    if (uVar8 != 0) {
      uVar7 = 0;
      uVar3 = 1;
      fVar9 = SQRT(1.0 / (fVar14 + fVar13 + fVar9));
      do {
        if (uVar8 == 8) {
          fVar13 = fVar9;
          if ((uVar3 & 4) != 0) {
            fVar13 = fVar9 * fVar12;
          }
          uVar8 = 0;
          fVar13 = fVar13 * fVar11;
LAB_033e2628:
          if (0 < (int)param_4) {
            puVar4 = (undefined8 *)
                     (*param_3 + uVar7 * *(ushort *)(param_3 + 2) * 4 + (ulong)param_5 * 4);
            puVar6 = param_6;
            iVar5 = param_4 + 4;
            do {
              iVar5 = iVar5 + -4;
              uVar10 = *puVar4;
              puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) +
                                   fVar13 * (float)((ulong)puVar4[1] >> 0x20),
                                   (float)puVar6[1] + fVar13 * (float)puVar4[1]);
              *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) +
                                 fVar13 * (float)((ulong)uVar10 >> 0x20),
                                 (float)*puVar6 + fVar13 * (float)uVar10);
              puVar4 = puVar4 + 2;
              puVar6 = puVar6 + 2;
            } while (4 < iVar5);
          }
          uVar8 = uVar8 & (uVar3 ^ 0xffffffff);
          uVar7 = (ulong)((int)uVar7 + 1);
        }
        else {
          uVar2 = uVar3;
          if ((uVar3 & uVar8) != 0) {
            do {
              if ((uVar2 >> 3 & 1) == 0) {
                fVar13 = fVar9;
                uVar3 = uVar2;
                if ((uVar2 & 4) != 0) {
                  fVar13 = fVar9 * fVar12;
                }
                goto LAB_033e2628;
              }
              uVar3 = uVar2 << 1;
              uVar1 = uVar2 << 1;
              uVar2 = uVar3;
            } while ((uVar8 & uVar1) != 0);
          }
        }
        uVar3 = uVar3 << 1;
      } while (uVar8 != 0);
    }
  }
  else {
    memset(param_6,0,-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2);
    if (((char)param_3[1] != '\0') && (0 < (int)param_4)) {
      uVar7 = 0;
      fVar9 = 1.0 / SQRT((float)(uVar3 & 0xff));
      do {
        puVar4 = (undefined8 *)
                 (*param_3 + uVar7 * *(ushort *)(param_3 + 2) * 4 + (ulong)param_5 * 4);
        puVar6 = param_6;
        iVar5 = param_4 + 4;
        do {
          iVar5 = iVar5 + -4;
          uVar10 = *puVar4;
          puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) +
                               fVar9 * (float)((ulong)puVar4[1] >> 0x20),
                               (float)puVar6[1] + fVar9 * (float)puVar4[1]);
          *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) +
                             fVar9 * (float)((ulong)uVar10 >> 0x20),
                             (float)*puVar6 + fVar9 * (float)uVar10);
          puVar4 = puVar4 + 2;
          puVar6 = puVar6 + 2;
        } while (4 < iVar5);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(byte *)(param_3 + 1));
    }
  }
  return;
}


