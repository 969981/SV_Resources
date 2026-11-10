/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034263b8; name: FUN_034263b8
 */


void FUN_034263b8(undefined8 *param_1,long param_2,uint param_3,undefined4 *param_4,ulong param_5)

{
  float *pfVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar27 = param_1;
  if (*(int *)(param_1 + 0xf) != 0) {
    puVar27 = (undefined8 *)((long)param_1 + (ulong)(*(int *)(param_1 + 0xf) - 1) * 0xc + 0xc);
  }
  local_70 = *puVar27;
  local_68 = *(undefined4 *)(puVar27 + 1);
  uVar25 = (ulong)param_3;
  uVar5 = 0x50c5d1f;
  if (param_3 < *(int *)(param_2 + 0x80) - 1U) {
    uVar26 = uVar25;
    if ((param_5 & 1) == 0) {
      puVar27 = (undefined8 *)(param_2 + uVar25 * 8);
      do {
        local_80 = 0;
        local_78 = 0;
        uVar25 = uVar25 + 1;
        FUN_034237c0(*puVar27,&local_70,puVar27[1],&local_80);
        uVar13 = *puVar27;
        uVar21 = uVar5;
        if (*(int *)(param_1 + 0x12) != 0) {
          uVar21 = *(int *)(param_1 + 0x12) * 0x1000193;
        }
        uVar9 = (uint)uVar13;
        uVar10 = (uint)((ulong)uVar13 >> 0x20);
        *(uint *)(param_1 + 0x12) =
             (((((((uVar21 ^ uVar9 & 0xff) * 0x1000193 ^ uVar9 >> 8 & 0xff) * 0x1000193 ^
                 uVar9 >> 0x10 & 0xff) * 0x1000193 ^ uVar9 >> 0x18) * 0x1000193 ^ uVar10 & 0xff) *
               0x1000193 ^ uVar10 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)uVar13 >> 0x30) & 0xff)
             * 0x1000193 ^ (uint)(byte)((ulong)uVar13 >> 0x38);
        local_90 = local_80;
        local_88 = local_78;
        FUN_03425f98(param_1,&local_90,*(undefined8 *)(puVar27[8] + 0x70),*puVar27);
        local_70 = local_80;
        local_68 = local_78;
        puVar27 = puVar27 + 1;
      } while (uVar25 < *(int *)(param_2 + 0x80) - 1);
      uVar25 = uVar25 & 0xffffffff;
    }
    else {
      do {
        uVar25 = uVar26 + 1;
        plVar3 = (long *)(param_2 + uVar25 * 8);
        lVar12 = plVar3[8];
        lVar8 = *(long *)(param_2 + uVar26 * 8);
        lVar11 = *plVar3;
        uVar14 = *(ulong *)(lVar8 + 0x68);
        uVar17 = *(ulong *)(lVar11 + 0x68);
        uVar21 = *(uint *)(lVar12 + 0x88);
        uVar20 = uVar17;
        if (uVar17 <= uVar14) {
          uVar20 = uVar14;
          uVar14 = uVar17;
        }
        if (uVar21 != 0) {
          lVar15 = *(long *)(lVar12 + 0x80);
          iVar19 = 0;
LAB_0342648c:
          iVar2 = iVar19 + (uVar21 >> 1);
          lVar23 = (long)iVar2;
          puVar24 = (ulong *)(lVar15 + (long)iVar2 * 0x48);
          uVar17 = *puVar24;
          uVar4 = puVar24[1];
          if (uVar17 != uVar14 || uVar4 != uVar20) goto code_r0x034264a8;
          if ((*(float *)(lVar15 + lVar23 * 0x48 + 0x14) != 3.4028235e+38) &&
             (uVar21 = *(uint *)(lVar15 + lVar23 * 0x48 + 0x40), uVar21 != 0)) {
            lVar16 = *(long *)(lVar15 + lVar23 * 0x48 + 0x38);
            lVar18 = (ulong)uVar21 * 0x94;
            uVar20 = lVar18 - 0x94;
            uVar21 = ((uint)(uVar20 / 0x94) & 0x1ffffff) + 1;
            lVar15 = 0;
            lVar23 = lVar16;
            if ((uVar21 & 3) == 0) {
              fVar28 = 3.4028235e+38;
            }
            else {
              lVar22 = -((ulong)uVar21 & 3);
              lVar7 = lVar15;
              fVar29 = 3.4028235e+38;
              do {
                fVar28 = (float)NEON_fminnm(*(float *)(lVar23 + 0x80),fVar29);
                lVar15 = lVar23;
                if (fVar29 <= *(float *)(lVar23 + 0x80)) {
                  lVar15 = lVar7;
                }
                lVar23 = lVar23 + 0x94;
                bVar6 = lVar22 != -1;
                lVar22 = lVar22 + 1;
                lVar7 = lVar15;
                fVar29 = fVar28;
              } while (bVar6);
            }
            if (0x1bb < uVar20) {
              do {
                fVar29 = (float)NEON_fminnm(*(float *)(lVar23 + 0x80),fVar28);
                lVar22 = lVar23;
                if (fVar28 <= *(float *)(lVar23 + 0x80)) {
                  lVar22 = lVar15;
                }
                fVar28 = (float)NEON_fminnm(*(float *)(lVar23 + 0x114),fVar29);
                lVar15 = lVar23 + 0x94;
                if (fVar29 <= *(float *)(lVar23 + 0x114)) {
                  lVar15 = lVar22;
                }
                fVar29 = (float)NEON_fminnm(*(float *)(lVar23 + 0x1a8),fVar28);
                pfVar1 = (float *)(lVar23 + 0x23c);
                lVar22 = lVar23 + 0x128;
                if (fVar28 <= *(float *)(lVar23 + 0x1a8)) {
                  lVar22 = lVar15;
                }
                fVar28 = (float)NEON_fminnm(*pfVar1,fVar29);
                lVar15 = lVar23 + 0x1bc;
                lVar23 = lVar23 + 0x250;
                if (fVar29 <= *pfVar1) {
                  lVar15 = lVar22;
                }
              } while (lVar16 + lVar18 != lVar23);
            }
            if (lVar15 == 0) goto LAB_034264e8;
            FUN_034260b4(param_1,lVar15,lVar8,lVar11,
                         *(undefined8 *)(*(long *)(param_2 + uVar26 * 8 + 0x40) + 0x70),
                         *(undefined8 *)(lVar12 + 0x70));
            goto LAB_034265b0;
          }
        }
LAB_034264e8:
        local_80 = 0;
        local_78 = 0;
        FUN_034237c0(lVar8,&local_70,lVar11,&local_80);
        puVar27 = (undefined8 *)(param_2 + uVar26 * 8);
        uVar13 = *puVar27;
        uVar21 = uVar5;
        if (*(int *)(param_1 + 0x12) != 0) {
          uVar21 = *(int *)(param_1 + 0x12) * 0x1000193;
        }
        uVar9 = (uint)uVar13;
        uVar10 = (uint)((ulong)uVar13 >> 0x20);
        *(uint *)(param_1 + 0x12) =
             (((((((uVar21 ^ uVar9 & 0xff) * 0x1000193 ^ uVar9 >> 8 & 0xff) * 0x1000193 ^
                 uVar9 >> 0x10 & 0xff) * 0x1000193 ^ uVar9 >> 0x18) * 0x1000193 ^ uVar10 & 0xff) *
               0x1000193 ^ uVar10 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)uVar13 >> 0x30) & 0xff)
             * 0x1000193 ^ (uint)(byte)((ulong)uVar13 >> 0x38);
        local_90 = local_80;
        local_88 = local_78;
        FUN_03425f98(param_1,&local_90,*(undefined8 *)(puVar27[8] + 0x70),*puVar27);
        local_70 = local_80;
        local_68 = local_78;
LAB_034265b0:
        uVar26 = uVar25;
      } while (uVar25 < *(int *)(param_2 + 0x80) - 1);
    }
  }
  puVar27 = (undefined8 *)(param_2 + (uVar25 & 0xffffffff) * 8);
  local_80 = 0;
  local_78 = 0;
  FUN_034237c0(*puVar27,&local_70,param_4,&local_80);
  uVar13 = *puVar27;
  if (*(int *)(param_1 + 0x12) != 0) {
    uVar5 = *(int *)(param_1 + 0x12) * 0x1000193;
  }
  uVar10 = (uint)uVar13;
  uVar21 = (uint)((ulong)uVar13 >> 0x20);
  *(uint *)(param_1 + 0x12) =
       (((((((uVar5 ^ uVar10 & 0xff) * 0x1000193 ^ uVar10 >> 8 & 0xff) * 0x1000193 ^
           uVar10 >> 0x10 & 0xff) * 0x1000193 ^ uVar10 >> 0x18) * 0x1000193 ^ uVar21 & 0xff) *
         0x1000193 ^ uVar21 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)uVar13 >> 0x30) & 0xff) *
       0x1000193 ^ (uint)(byte)((ulong)uVar13 >> 0x38);
  local_a0 = local_80;
  local_98 = local_78;
  FUN_03425f98(param_1,&local_a0,*(undefined8 *)(puVar27[8] + 0x70),*puVar27);
  fVar29 = *(float *)((long)param_1 + 0x84);
  fVar28 = *(float *)(param_2 + 0x88);
  uVar5 = *(uint *)(param_2 + 0x80);
  if (uVar5 == 0) {
    if (fVar29 <= fVar28) {
      fVar29 = fVar28;
    }
  }
  else {
    fVar30 = fVar28;
    if (uVar5 == 1) {
      uVar25 = 0;
    }
    else {
      uVar25 = 0;
      do {
        plVar3 = (long *)(param_2 + uVar25 * 8);
        uVar25 = uVar25 + 2;
        fVar31 = *(float *)(*plVar3 + 0xc4);
        if (fVar30 <= fVar31) {
          fVar30 = fVar31;
        }
        fVar31 = *(float *)(plVar3[1] + 0xc4);
        if (fVar30 <= fVar31) {
          fVar30 = fVar31;
        }
      } while (((ulong)uVar5 & 0xfffffffe) != uVar25);
    }
    if (((uVar5 & 1) != 0) &&
       (fVar31 = *(float *)(*(long *)(param_2 + uVar25 * 8) + 0xc4), fVar30 <= fVar31)) {
      fVar30 = fVar31;
    }
    if (fVar29 <= fVar30) {
      if (uVar5 != 1) {
        uVar25 = 0;
        do {
          plVar3 = (long *)(param_2 + uVar25 * 8);
          uVar25 = uVar25 + 2;
          fVar29 = *(float *)(*plVar3 + 0xc4);
          if (fVar28 <= fVar29) {
            fVar28 = fVar29;
          }
          fVar29 = *(float *)(plVar3[1] + 0xc4);
          if (fVar28 <= fVar29) {
            fVar28 = fVar29;
          }
        } while (((ulong)uVar5 & 0xfffffffe) != uVar25);
      }
      fVar29 = fVar28;
      if ((uVar5 & 1) != 0) {
      }
    }
  }
  *(float *)((long)param_1 + 0x84) = fVar29;
  *(undefined4 *)((long)param_1 + 0x6c) = *param_4;
  *(undefined4 *)(param_1 + 0xe) = param_4[1];
  *(undefined4 *)((long)param_1 + 0x74) = param_4[2];
  return;
code_r0x034264a8:
  bVar6 = uVar4 < uVar20;
  if (uVar17 != uVar14) {
    bVar6 = uVar17 < uVar14;
  }
  if (bVar6 != 0) {
    iVar19 = iVar2 + 1;
  }
  uVar21 = uVar21 - bVar6 >> 1;
  if (uVar21 == 0) goto LAB_034264e8;
  goto LAB_0342648c;
}


