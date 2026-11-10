/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086d980; name: FUN_0086d980
 */


void FUN_0086d980(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_74;
  
  lVar9 = param_1 + (long)param_2 * 4;
  fVar10 = *(float *)(lVar9 + 0x2960);
  fVar12 = *(float *)(lVar9 + 0x2560);
  lVar1 = param_1 + (long)param_2 * 0x10;
  fVar20 = *(float *)(lVar9 + 0x2760) - fVar10;
  uVar15 = *(undefined8 *)(lVar1 + 0x1d68);
  uVar21 = *(undefined8 *)(lVar1 + 0x1d60);
  fVar17 = (float)uVar21 * fVar12;
  fVar18 = (float)((ulong)uVar21 >> 0x20) * fVar12;
  fVar19 = (float)uVar15 * fVar12;
  fVar12 = (float)((ulong)uVar15 >> 0x20) * fVar12;
  fVar13 = -fVar20;
  local_90 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) + fVar18 * fVar13,
                      (float)*(undefined8 *)(param_1 + 0x90) + fVar17 * fVar13);
  uStack_88 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) + fVar12 * fVar13,
                       (float)*(undefined8 *)(param_1 + 0x98) + fVar19 * fVar13);
  iVar4 = *(int *)(param_1 + 0xd58);
  if (iVar4 < 1) {
    local_74 = -1;
  }
  else {
    fVar10 = *(float *)(lVar9 + 0x2760) - (fVar10 + fVar10);
    uVar21 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
    uVar6 = *(ulong *)(PTR_DAT_047d19b0 + 0x30);
    uVar8 = *(ulong *)(PTR_DAT_047d19b0 + 0x20);
    iVar5 = 0;
    bVar3 = false;
    local_74 = -1;
    local_d8 = uVar6;
    do {
      iVar2 = 0;
      if (iVar4 <= param_2 + iVar5) {
        iVar2 = iVar4;
      }
      iVar4 = (param_2 + iVar5) - iVar2;
      if (iVar5 == iVar2) {
LAB_0086dab8:
        lVar9 = (long)iVar4;
        uVar7 = uVar8;
        if ((!bVar3) ||
           (lVar1 = param_1 + lVar9 * 0x10, uVar15 = *(undefined8 *)(lVar1 + 0x1d60),
           fVar13 = (fVar17 * (float)uVar15 + fVar18 * (float)((ulong)uVar15 >> 0x20) +
                    fVar19 * (float)*(undefined8 *)(lVar1 + 0x1d68)) *
                    *(float *)(param_1 + lVar9 * 4 + 0x2560), uVar7 = (ulong)(uint)fVar13,
           (float)uVar6 <= fVar13)) {
          FUN_0086d6d4(param_1,iVar4,&local_90,&local_a0,local_b0);
          fVar13 = *(float *)(param_1 + lVar9 * 4 + 0x2560);
          fVar14 = (float)*(undefined8 *)(param_1 + 0x60) * fVar13;
          fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar13;
          fVar11 = (float)local_b0[1];
          if (((0.0 <= (float)((ulong)local_b0[0] >> 0x20) + fVar16 &&
               0.0 <= (float)local_b0[0] + fVar14) && 0.0 <= fVar11 + fVar14) &&
              0.0 <= (float)((ulong)local_b0[1] >> 0x20) + fVar16) {
            uStack_c8 = uStack_98;
            local_d0 = local_a0;
            if (iVar5 == iVar2) {
              local_74 = param_2;
              break;
            }
            if (bVar3) {
              bVar3 = true;
            }
            else {
              lVar9 = param_1 + lVar9 * 0x10;
              uVar15 = *(undefined8 *)(lVar9 + 0x1d60);
              uVar7 = (ulong)(uint)(fVar13 * (fVar17 * (float)uVar15 +
                                              fVar18 * (float)((ulong)uVar15 >> 0x20) +
                                             fVar19 * (float)*(undefined8 *)(lVar9 + 0x1d68)));
              bVar3 = true;
            }
          }
          else {
            if (bVar3) goto LAB_0086da34;
            uVar15 = NEON_fminp(local_b0[0],local_b0[0],4);
            uVar15 = NEON_fmin(CONCAT44(fVar11,fVar11),uVar15,4);
            fVar13 = (float)uVar15 * ((float)uVar21 / fVar13);
            bVar3 = false;
            if (fVar13 <= (float)local_d8) goto LAB_0086da38;
            uVar7 = uVar6;
            local_d8 = (ulong)(uint)fVar13;
          }
          uStack_c8 = uStack_98;
          local_d0 = local_a0;
          uVar6 = uVar7;
          local_74 = iVar4;
        }
        else {
LAB_0086da34:
          bVar3 = true;
        }
      }
      else {
        lVar9 = param_1 + (long)iVar4 * 4;
        if (fVar10 <= *(float *)(lVar9 + 0x2760)) {
          if ((*(char *)(param_1 + iVar4 + 0x2b60) == '\0') &&
             ((float)*(undefined8 *)(param_1 + 0x60) <
              *(float *)(param_1 + (long)iVar4 * 4 + 0x2960))) {
            FUN_0086d3b0(param_1,iVar4);
            if (*(float *)(lVar9 + 0x2760) < fVar10) goto LAB_0086da38;
          }
          goto LAB_0086dab8;
        }
      }
LAB_0086da38:
      iVar4 = *(int *)(param_1 + 0xd58);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)(param_1 + 0x4df0) = local_74;
  *(uint *)(param_1 + 0x4de8) = (uint)(fVar20 < 0.0);
  *(undefined4 *)(param_1 + 0x4dec) = 3;
  *(ulong *)(param_1 + 0x4e08) = CONCAT44(fVar12,fVar19);
  *(ulong *)(param_1 + 0x4e00) = CONCAT44(fVar18,fVar17);
  *(float *)(param_1 + 0x4e10) = fVar20;
  *(undefined8 *)(param_1 + 0x4e28) = uStack_c8;
  *(undefined8 *)(param_1 + 20000) = local_d0;
  return;
}


