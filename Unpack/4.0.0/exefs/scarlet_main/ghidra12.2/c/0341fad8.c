/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341fad8; name: FUN_0341fad8
 */


void FUN_0341fad8(float param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined1 *param_7,undefined1 *param_8)

{
  long *plVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
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
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  
  if (((*(int *)(param_4 + 0x44) != *(int *)(param_2 + 0xa0)) ||
      (*(long *)(*(long *)(*(long *)(param_4 + 8) + 0x58) + 0x68) == *(long *)(param_2 + 0x70))) ||
     (uVar5 = *(uint *)(param_2 + 0x58), uVar5 == 0)) {
    return;
  }
  lVar6 = *(long *)(*(long *)(param_4 + 8) + 0x40);
  fVar17 = *(float *)(lVar6 + 0x78);
  fVar18 = *(float *)(lVar6 + 0x7c);
  fVar19 = *(float *)(lVar6 + 0x80);
  plVar7 = *(long **)(param_2 + 0x50);
  plVar9 = plVar7;
LAB_0341fb80:
  pfVar13 = (float *)*plVar9;
  if (((*(char *)(pfVar13 + 0x198) != '\0') && (*(float *)(param_4 + 0x44) == pfVar13[0x2e])) &&
     (pfVar13[0x20] != 0.0)) {
    plVar7 = *(long **)(pfVar13 + 0x1e);
LAB_0341fbb0:
    uVar5 = *(uint *)(plVar7 + 0x10);
    if (plVar7[(ulong)(uVar5 - 1) + 8] != param_2) {
      if (uVar5 != 0) {
        lVar6 = 0;
        do {
          if (*(char *)(*(long *)((long)plVar7 + lVar6) + 0x660) == '\0') goto LAB_0341ff38;
          lVar6 = lVar6 + 8;
        } while ((ulong)uVar5 * 8 != lVar6);
      }
      lVar6 = *(long *)(*(long *)(param_3 + 8) + 0x28);
      uVar3 = *(ushort *)(lVar6 + 0x38);
      if ((ulong)uVar3 != 0) {
        pfVar11 = (float *)*plVar7;
        fVar20 = 0.0;
        uVar12 = 0;
        do {
          lVar6 = *(long *)(lVar6 + 0x20) + uVar12 * 0x28;
          fVar25 = pfVar13[0xc];
          fVar16 = *(float *)(lVar6 + 0x1c) - pfVar13[1];
          fVar15 = *(float *)(lVar6 + 0x18) - *pfVar13;
          fVar22 = *(float *)(lVar6 + 0x20) - pfVar13[2];
          fVar23 = pfVar13[3] * fVar15 + fVar16 * pfVar13[4] + fVar22 * pfVar13[5];
          fVar14 = -fVar25;
          if ((-fVar25 <= fVar23) && (fVar14 = fVar25, fVar23 <= fVar25)) {
            fVar14 = fVar23;
          }
          fVar23 = pfVar13[0xd];
          fVar16 = pfVar13[6] * fVar15 + fVar16 * pfVar13[7] + fVar22 * pfVar13[8];
          fVar15 = -fVar23;
          if ((-fVar23 <= fVar16) && (fVar15 = fVar23, fVar16 <= fVar23)) {
            fVar15 = fVar16;
          }
          fVar26 = pfVar11[0xc];
          fVar21 = fVar19 - pfVar11[2];
          fVar16 = (pfVar13[2] - *(float *)(lVar6 + 0x20)) + fVar14 * pfVar13[5] +
                   pfVar13[8] * fVar15;
          fVar23 = fVar17 - *pfVar11;
          fVar22 = (*pfVar13 - *(float *)(lVar6 + 0x18)) + fVar14 * pfVar13[3] + pfVar13[6] * fVar15
          ;
          fVar15 = (pfVar13[1] - *(float *)(lVar6 + 0x1c)) + fVar14 * pfVar13[4] +
                   pfVar13[7] * fVar15;
          fVar25 = fVar18 - pfVar11[1];
          fVar24 = pfVar11[3] * fVar23 + fVar25 * pfVar11[4] + fVar21 * pfVar11[5];
          fVar14 = -fVar26;
          if ((-fVar26 <= fVar24) && (fVar14 = fVar26, fVar24 <= fVar26)) {
            fVar14 = fVar24;
          }
          fVar25 = pfVar11[6] * fVar23 + fVar25 * pfVar11[7] + fVar21 * pfVar11[8];
          fVar21 = pfVar11[0xd];
          fVar23 = fVar21;
          if (fVar25 <= fVar21) {
            fVar23 = fVar25;
          }
          fVar24 = -fVar21;
          if (-fVar21 <= fVar25) {
            fVar24 = fVar23;
          }
          fVar21 = (*pfVar11 - fVar17) + fVar14 * pfVar11[3] + pfVar11[6] * fVar24;
          fVar25 = (pfVar11[1] - fVar18) + fVar14 * pfVar11[4] + pfVar11[7] * fVar24;
          fVar23 = (pfVar11[2] - fVar19) + fVar14 * pfVar11[5] + pfVar11[8] * fVar24;
          fVar14 = *(float *)((long)plVar7 + 0x84) +
                   SQRT(fVar22 * fVar22 + fVar15 * fVar15 + fVar16 * fVar16);
          if (SQRT(fVar21 * fVar21 + fVar25 * fVar25 + fVar23 * fVar23) + fVar14 < param_1) {
            fVar14 = param_1 - fVar14;
            if (fVar20 <= fVar14) {
              fVar20 = fVar14;
            }
            FUN_034272f4(plVar7,param_2,param_5,param_6,param_7);
            lVar6 = *(long *)(*(long *)(param_3 + 8) + 0x58);
            if ((((*(int *)(PTR_DAT_047e6e68 + 0xc) != 0) && (0.0 < *(float *)(lVar6 + 100))) &&
                ((0 < *(int *)(lVar6 + 0xa8) || (*(int *)(lVar6 + 0x60) != 0)))) ||
               (0 < *(int *)(lVar6 + 0xac))) {
              lVar6 = *(long *)(param_3 + 0x20) + uVar12 * 0x90;
              plVar1 = (long *)(lVar6 + 0x80);
              uVar4 = *(ulong *)(pfVar13 + 0x1a);
              uVar5 = *(uint *)(lVar6 + 0x88);
              if (uVar5 != 0) {
                lVar6 = *plVar1;
                iVar8 = 0;
                do {
                  iVar2 = iVar8 + (uVar5 >> 1);
                  uVar10 = *(ulong *)(lVar6 + (long)iVar2 * 0x90);
                  if (uVar10 == uVar4) {
                    lVar6 = lVar6 + (long)iVar2 * 0x90;
                    if (*(char *)(lVar6 + 0x8c) == '\x02') {
                      *(char *)(lVar6 + 0x8c) = '\x01';
                    }
                    goto LAB_0341fe74;
                  }
                  if (uVar10 < uVar4) {
                    iVar8 = iVar2 + 1;
                  }
                  uVar5 = uVar5 - (uVar10 < uVar4) >> 1;
                } while (uVar5 != 0);
              }
              lVar6 = FUN_03422e74(plVar1,uVar4,auStack_94);
              *param_7 = 1;
              if (lVar6 != 0) {
LAB_0341fe74:
                if (*(float *)(lVar6 + 0x88) < param_1) {
                  *(float *)(lVar6 + 0x88) = param_1;
                }
              }
            }
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar3) goto code_r0x0341fea0;
          lVar6 = *(long *)(*(long *)(param_3 + 8) + 0x28);
        } while( true );
      }
    }
    goto LAB_0341ff38;
  }
  goto LAB_0341ff5c;
code_r0x0341fea0:
  if (0.0 < fVar20) {
    uVar12 = *(ulong *)(pfVar11 + 0x1a);
    uVar5 = *(uint *)(param_4 + 0x90);
    if (uVar5 != 0) {
      iVar8 = 0;
      lVar6 = *(long *)(param_4 + 0x88);
      do {
        iVar2 = iVar8 + (uVar5 >> 1);
        uVar4 = *(ulong *)(lVar6 + (long)iVar2 * 0x90);
        if (uVar4 == uVar12) {
          lVar6 = lVar6 + (long)iVar2 * 0x90;
          if (*(char *)(lVar6 + 0x8c) == '\x02') {
            *(char *)(lVar6 + 0x8c) = '\x01';
          }
          goto LAB_0341ff28;
        }
        if (uVar4 < uVar12) {
          iVar8 = iVar2 + 1;
        }
        uVar5 = uVar5 - (uVar4 < uVar12) >> 1;
      } while (uVar5 != 0);
    }
    lVar6 = FUN_03422e74((long *)(param_4 + 0x88),uVar12,auStack_98);
    *param_8 = 1;
    if (lVar6 != 0) {
LAB_0341ff28:
      if (*(float *)(lVar6 + 0x88) < fVar20) {
        *(float *)(lVar6 + 0x88) = fVar20;
      }
    }
  }
LAB_0341ff38:
  plVar7 = plVar7 + 0x12;
  if (plVar7 == (long *)(*(long *)(pfVar13 + 0x1e) + (ulong)(uint)pfVar13[0x20] * 0x90))
  goto code_r0x0341ff50;
  goto LAB_0341fbb0;
code_r0x0341ff50:
  plVar7 = *(long **)(param_2 + 0x50);
  uVar5 = *(uint *)(param_2 + 0x58);
LAB_0341ff5c:
  plVar9 = plVar9 + 1;
  if (plVar9 == plVar7 + uVar5) {
    return;
  }
  goto LAB_0341fb80;
}


