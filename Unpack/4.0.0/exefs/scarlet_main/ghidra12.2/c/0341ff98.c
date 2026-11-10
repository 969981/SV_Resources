/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341ff98; name: FUN_0341ff98
 */


void FUN_0341ff98(float param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined1 *param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  
  if (((*(int *)(param_3 + 0x44) == *(int *)(param_2 + 0xa0)) &&
      (*(long *)(*(long *)(*(long *)(param_3 + 8) + 0x58) + 0x68) != *(long *)(param_2 + 0x70))) &&
     (uVar4 = *(uint *)(param_2 + 0x58), uVar4 != 0)) {
    lVar2 = *(long *)(*(long *)(param_3 + 8) + 0x40);
    fVar16 = *(float *)(lVar2 + 0x78);
    fVar17 = *(float *)(lVar2 + 0x7c);
    fVar18 = *(float *)(lVar2 + 0x80);
    plVar7 = *(long **)(param_2 + 0x50);
    plVar11 = plVar7;
    do {
      lVar2 = *plVar11;
      if (((*(char *)(lVar2 + 0x660) != '\0') &&
          (*(int *)(param_3 + 0x44) == *(int *)(lVar2 + 0xb8))) &&
         (uVar3 = (ulong)*(uint *)(lVar2 + 0x80), *(uint *)(lVar2 + 0x80) != 0)) {
        plVar5 = *(long **)(lVar2 + 0x78);
        plVar7 = plVar5;
        do {
          uVar4 = *(uint *)(plVar7 + 0x10);
          if (plVar7[(ulong)(uVar4 - 1) + 8] != param_2) {
            if (uVar4 != 0) {
              lVar8 = 0;
              do {
                if (*(char *)(*(long *)((long)plVar7 + lVar8) + 0x660) == '\0') goto LAB_0342020c;
                lVar8 = lVar8 + 8;
              } while ((ulong)uVar4 * 8 != lVar8);
            }
            pfVar10 = (float *)*plVar7;
            fVar14 = fVar17 - pfVar10[1];
            fVar13 = fVar16 - *pfVar10;
            fVar20 = pfVar10[0xc];
            fVar15 = fVar18 - pfVar10[2];
            fVar19 = pfVar10[3] * fVar13 + fVar14 * pfVar10[4] + fVar15 * pfVar10[5];
            fVar12 = -fVar20;
            if ((-fVar20 <= fVar19) && (fVar12 = fVar20, fVar19 <= fVar20)) {
              fVar12 = fVar19;
            }
            fVar19 = pfVar10[0xd];
            fVar14 = pfVar10[6] * fVar13 + fVar14 * pfVar10[7] + fVar15 * pfVar10[8];
            fVar13 = -fVar19;
            if ((-fVar19 <= fVar14) && (fVar13 = fVar19, fVar14 <= fVar19)) {
              fVar13 = fVar14;
            }
            fVar15 = (*pfVar10 - fVar16) + fVar12 * pfVar10[3] + pfVar10[6] * fVar13;
            fVar14 = (pfVar10[1] - fVar17) + fVar12 * pfVar10[4] + pfVar10[7] * fVar13;
            fVar12 = (pfVar10[2] - fVar18) + fVar12 * pfVar10[5] + pfVar10[8] * fVar13;
            if (SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar12 * fVar12) +
                *(float *)((long)plVar7 + 0x84) < param_1) {
              FUN_034272f4(plVar7,param_2,param_4,param_5,auStack_88);
              uVar3 = *(ulong *)(pfVar10 + 0x1a);
              uVar4 = *(uint *)(param_3 + 0x90);
              if (uVar4 != 0) {
                lVar8 = *(long *)(param_3 + 0x88);
                iVar6 = 0;
                do {
                  iVar1 = iVar6 + (uVar4 >> 1);
                  uVar9 = *(ulong *)(lVar8 + (long)iVar1 * 0x90);
                  if (uVar9 == uVar3) {
                    lVar8 = lVar8 + (long)iVar1 * 0x90;
                    if (*(char *)(lVar8 + 0x8c) == '\x02') {
                      *(char *)(lVar8 + 0x8c) = '\x01';
                    }
                    goto LAB_034201ec;
                  }
                  if (uVar9 < uVar3) {
                    iVar6 = iVar1 + 1;
                  }
                  uVar4 = uVar4 - (uVar9 < uVar3) >> 1;
                } while (uVar4 != 0);
              }
              lVar8 = FUN_03422e74((long *)(param_3 + 0x88),uVar3,auStack_84);
              *param_6 = 1;
              if (lVar8 != 0) {
LAB_034201ec:
                fVar12 = param_1 - *(float *)((long)plVar7 + 0x84);
                if (*(float *)(lVar8 + 0x88) < fVar12) {
                  *(float *)(lVar8 + 0x88) = fVar12;
                }
              }
              plVar5 = *(long **)(lVar2 + 0x78);
              uVar3 = (ulong)*(uint *)(lVar2 + 0x80);
            }
          }
LAB_0342020c:
          plVar7 = plVar7 + 0x12;
        } while (plVar7 != plVar5 + uVar3 * 0x12);
        plVar7 = *(long **)(param_2 + 0x50);
        uVar4 = *(uint *)(param_2 + 0x58);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar7 + uVar4);
  }
  return;
}


