/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b3c2c; name: FUN_029b3c2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029b3c2c(long param_1,ushort *param_2,uint param_3,long param_4,undefined8 *param_5)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 auVar33 [16];
  
  if (0 < (int)param_3) {
    plVar3 = (long *)(param_1 + 0x48);
    bVar19 = (byte)_DAT_03cab270;
    bVar20 = (byte)((ulong)_DAT_03cab270 >> 0x20);
    bVar21 = (byte)_UNK_03cab278;
    bVar22 = (byte)((ulong)_UNK_03cab278 >> 0x20);
    if (param_4 == 0) {
      if (param_5 != (undefined8 *)0x0) {
        auVar23 = NEON_fmov(0x3f800000,4);
        uVar15 = (ulong)param_3;
        do {
          uVar8 = param_5[1];
          lVar13 = (ulong)*param_2 * 0x40 + *plVar3;
          *(undefined8 *)((long)plVar3 + lVar13 + 0x20) = *param_5;
          *(int *)((long)plVar3 + lVar13 + 0x28) = (int)uVar8;
          uVar15 = uVar15 - 1;
          *(byte *)((long)plVar3 + lVar13 + 0x1e) =
               *(byte *)((long)plVar3 + lVar13 + 0x1e) & 0xf7 |
               (((~-((float)*param_5 == auVar23._0_4_) & bVar19) +
                 (~-((float)((ulong)*param_5 >> 0x20) == auVar23._4_4_) & bVar20) +
                 (~-((float)param_5[1] == auVar23._8_4_) & bVar21) +
                 (~-((float)((ulong)param_5[1] >> 0x20) == auVar23._12_4_) & bVar22) & 7) != 0) << 3
          ;
          param_5 = param_5 + 2;
          param_2 = param_2 + 1;
        } while (uVar15 != 0);
      }
    }
    else {
      auVar23 = NEON_fmov(0x3f800000,4);
      uVar15 = (ulong)param_3;
      puVar16 = (undefined8 *)(param_4 + 0x10);
      puVar17 = param_5;
      do {
        uVar11 = puVar16[-1];
        uVar8 = puVar16[-2];
        puVar4 = (undefined8 *)((long)plVar3 + (ulong)*param_2 * 0x40 + *plVar3);
        puVar4[1] = uVar11;
        *puVar4 = uVar8;
        fVar7 = (float)uVar8 * (float)uVar8;
        fVar9 = (float)((ulong)uVar8 >> 0x20);
        fVar9 = fVar9 * fVar9;
        uVar24 = (undefined1)((uint)fVar9 >> 8);
        uVar25 = (undefined1)((uint)fVar9 >> 0x10);
        uVar26 = (undefined1)((uint)fVar9 >> 0x18);
        fVar10 = (float)uVar11 * (float)uVar11;
        uVar27 = (undefined1)((uint)fVar10 >> 8);
        uVar28 = (undefined1)((uint)fVar10 >> 0x10);
        uVar29 = (undefined1)((uint)fVar10 >> 0x18);
        fVar12 = (float)((ulong)uVar11 >> 0x20);
        fVar12 = fVar12 * fVar12;
        uVar30 = (undefined1)((uint)fVar12 >> 8);
        uVar31 = (undefined1)((uint)fVar12 >> 0x10);
        uVar32 = (undefined1)((uint)fVar12 >> 0x18);
        auVar33[4] = SUB41(fVar9,0);
        auVar33._0_4_ = fVar7;
        auVar33[5] = uVar24;
        auVar33[6] = uVar25;
        auVar33[7] = uVar26;
        auVar33[8] = SUB41(fVar10,0);
        auVar33[9] = uVar27;
        auVar33[10] = uVar28;
        auVar33[0xb] = uVar29;
        auVar33[0xc] = SUB41(fVar12,0);
        auVar33[0xd] = uVar30;
        auVar33[0xe] = uVar31;
        auVar33[0xf] = uVar32;
        auVar6[4] = SUB41(fVar9,0);
        auVar6._0_4_ = fVar7;
        auVar6[5] = uVar24;
        auVar6[6] = uVar25;
        auVar6[7] = uVar26;
        auVar6[8] = SUB41(fVar10,0);
        auVar6[9] = uVar27;
        auVar6[10] = uVar28;
        auVar6[0xb] = uVar29;
        auVar6[0xc] = SUB41(fVar12,0);
        auVar6[0xd] = uVar30;
        auVar6[0xe] = uVar31;
        auVar6[0xf] = uVar32;
        auVar33 = NEON_ext(auVar33,auVar6,8,1);
        pbVar18 = (byte *)((long)puVar4 + 0x1e);
        bVar5 = *pbVar18;
        bVar1 = (7.6154333e-07 < auVar33._0_4_ + fVar7 + fVar9) << 2;
        *pbVar18 = bVar5 & 0xfb | bVar1;
        uVar8 = puVar16[1];
        puVar4[2] = *puVar16;
        *(int *)(puVar4 + 3) = (int)uVar8;
        bVar2 = (((~-((float)*puVar16 == 0.0) & bVar19) +
                  (~-((float)((ulong)*puVar16 >> 0x20) == 0.0) & bVar20) +
                  (~-((float)puVar16[1] == 0.0) & bVar21) +
                  (~-((float)((ulong)puVar16[1] >> 0x20) == 0.0) & bVar22) & 7) != 0) << 1;
        *pbVar18 = bVar5 & 0xf9 | bVar1 | bVar2;
        if (param_5 != (undefined8 *)0x0) {
          uVar8 = puVar17[1];
          puVar4[4] = *puVar17;
          *(int *)(puVar4 + 5) = (int)uVar8;
          *pbVar18 = bVar5 & 0xf0 |
                     bVar5 & 1 | bVar1 | bVar2 |
                     (((~-((float)*puVar17 == auVar23._0_4_) & bVar19) +
                       (~-((float)((ulong)*puVar17 >> 0x20) == auVar23._4_4_) & bVar20) +
                       (~-((float)puVar17[1] == auVar23._8_4_) & bVar21) +
                       (~-((float)((ulong)puVar17[1] >> 0x20) == auVar23._12_4_) & bVar22) & 7) != 0
                     ) << 3;
        }
        puVar16 = puVar16 + 4;
        puVar17 = puVar17 + 2;
        uVar15 = uVar15 - 1;
        param_2 = param_2 + 1;
      } while (uVar15 != 0);
    }
  }
  FUN_00cb0a40(param_1);
  uVar15 = FUN_00cb2110(param_1);
  if (*(char *)(param_1 + 0x94) == '\0') {
    return;
  }
  uVar14 = 2;
  if ((uVar15 & 1) != 0) {
    uVar14 = 3;
  }
  FUN_00cb04b4(param_1 + 0xa0,param_1,uVar14);
  return;
}


