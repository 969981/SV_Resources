/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03428974; name: FUN_03428974
 */


void FUN_03428974(long *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((int)param_1[1] != 0) {
    plVar7 = (long *)*param_1;
    do {
      *(undefined4 *)(plVar7 + 0x11) = 0;
      lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x58);
      uVar8 = (ulong)((int)plVar7[0x10] - 1);
      uVar9 = *(uint *)(lVar12 + 0xd8);
      fVar17 = 0.0;
      if (uVar9 != 0) {
        iVar14 = 0;
        lVar12 = *(long *)(lVar12 + 0xd0);
        uVar10 = *(ulong *)(plVar7[uVar8] + 0x68);
        uVar16 = uVar9;
        do {
          uVar1 = iVar14 + (uVar16 >> 1);
          uVar5 = *(ulong *)(lVar12 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 |
                                      (ulong)uVar1 << 4));
          if (uVar5 == uVar10) {
            fVar17 = 0.0;
            if (*(float *)(lVar12 + (long)(int)uVar1 * 0x10 + 8) < 0.0) goto LAB_03428a44;
            break;
          }
          if (uVar5 < uVar10) {
            iVar14 = uVar1 + 1;
          }
          uVar16 = uVar16 - (uVar5 < uVar10) >> 1;
        } while (uVar16 != 0);
        iVar14 = 0;
        do {
          uVar16 = iVar14 + (uVar9 >> 1);
          uVar5 = *(ulong *)(lVar12 + (-(ulong)(uVar16 >> 0x1f) & 0xfffffff000000000 |
                                      (ulong)uVar16 << 4));
          if (uVar5 == uVar10) {
            fVar17 = *(float *)(lVar12 + (long)(int)uVar16 * 0x10 + 8);
            goto LAB_03428a44;
          }
          if (uVar5 < uVar10) {
            iVar14 = uVar16 + 1;
          }
          uVar9 = uVar9 - (uVar5 < uVar10) >> 1;
        } while (uVar9 != 0);
        fVar17 = 0.0;
      }
LAB_03428a44:
      *(float *)(plVar7 + 0x11) = fVar17;
      lVar15 = *(long *)(*(long *)(param_3 + 8) + 0x58);
      lVar12 = *plVar7;
      uVar9 = *(uint *)(lVar15 + 0xd8);
      if (uVar9 == 0) {
        if (fVar17 <= 0.0) goto LAB_03428aec;
      }
      else {
        uVar10 = *(ulong *)(lVar12 + 0x68);
        iVar14 = 0;
        lVar15 = *(long *)(lVar15 + 0xd0);
        uVar16 = uVar9;
        do {
          uVar1 = iVar14 + (uVar16 >> 1);
          uVar5 = *(ulong *)(lVar15 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 |
                                      (ulong)uVar1 << 4));
          if (uVar5 == uVar10) {
            fVar18 = *(float *)(lVar15 + (long)(int)uVar1 * 0x10 + 8);
            goto LAB_03428ab4;
          }
          if (uVar5 < uVar10) {
            iVar14 = uVar1 + 1;
          }
          uVar16 = uVar16 - (uVar5 < uVar10) >> 1;
        } while (uVar16 != 0);
        fVar18 = 0.0;
LAB_03428ab4:
        if (fVar17 <= fVar18) {
          iVar14 = 0;
          do {
            uVar16 = iVar14 + (uVar9 >> 1);
            uVar5 = *(ulong *)(lVar15 + (-(ulong)(uVar16 >> 0x1f) & 0xfffffff000000000 |
                                        (ulong)uVar16 << 4));
            if (uVar5 == uVar10) {
              fVar17 = *(float *)(lVar15 + (long)(int)uVar16 * 0x10 + 8);
              goto LAB_03428afc;
            }
            if (uVar5 < uVar10) {
              iVar14 = uVar16 + 1;
            }
            uVar9 = uVar9 - (uVar5 < uVar10) >> 1;
          } while (uVar9 != 0);
LAB_03428aec:
          fVar17 = 0.0;
        }
      }
LAB_03428afc:
      *(float *)(plVar7 + 0x11) = fVar17;
      if ((int)plVar7[0x10] != 1) {
        uVar10 = 0;
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        do {
          uVar10 = uVar10 + 1;
          uVar13 = *(ulong *)(lVar12 + 0x68);
          uVar11 = *(ulong *)(plVar7[uVar10] + 0x68);
          uVar9 = *(uint *)(param_4 + 0x50);
          uVar5 = uVar11;
          if (uVar11 <= uVar13) {
            uVar5 = uVar13;
            uVar13 = uVar11;
          }
          if (uVar9 == 0) {
            fVar18 = 0.0;
            if (0.0 < fVar17) {
              fVar18 = fVar17;
            }
          }
          else {
            lVar12 = *(long *)(param_4 + 0x48);
            iVar14 = 0;
            uVar16 = uVar9;
            do {
              iVar2 = iVar14 + (uVar16 >> 1);
              puVar6 = (ulong *)(lVar12 + (long)iVar2 * 0x18);
              uVar11 = *puVar6;
              uVar3 = puVar6[1];
              if (uVar11 == uVar13 && uVar3 == uVar5) {
                fVar19 = *(float *)(lVar12 + (long)iVar2 * 0x18 + 0x10);
                goto LAB_03428bc8;
              }
              bVar4 = uVar3 < uVar5;
              if (uVar11 != uVar13) {
                bVar4 = uVar11 < uVar13;
              }
              if (bVar4 != 0) {
                iVar14 = iVar2 + 1;
              }
              uVar16 = uVar16 - bVar4 >> 1;
            } while (uVar16 != 0);
            fVar19 = 0.0;
LAB_03428bc8:
            fVar18 = fVar17;
            if (fVar17 <= fVar19) {
              iVar14 = 0;
              do {
                iVar2 = iVar14 + (uVar9 >> 1);
                puVar6 = (ulong *)(lVar12 + (long)iVar2 * 0x18);
                uVar11 = *puVar6;
                uVar3 = puVar6[1];
                if (uVar11 == uVar13 && uVar3 == uVar5) {
                  fVar18 = *(float *)(lVar12 + (long)iVar2 * 0x18 + 0x10);
                  goto LAB_03428c2c;
                }
                bVar4 = uVar3 < uVar5;
                if (uVar11 != uVar13) {
                  bVar4 = uVar11 < uVar13;
                }
                if (bVar4 != 0) {
                  iVar14 = iVar2 + 1;
                }
                uVar9 = uVar9 - bVar4 >> 1;
              } while (uVar9 != 0);
              fVar18 = 0.0;
            }
          }
LAB_03428c2c:
          fVar17 = fVar18;
          *(float *)(plVar7 + 0x11) = fVar17;
          if (uVar10 == uVar8) break;
          lVar12 = plVar7[uVar10];
        } while( true );
      }
      plVar7 = plVar7 + 0x12;
    } while (plVar7 != (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x90));
  }
  return;
}


