/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03440b0c; name: FUN_03440b0c
 */


ulong FUN_03440b0c(long param_1,uint param_2,ulong param_3,uint param_4,uint param_5,byte param_6,
                  uint *param_7,long *param_8)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong *puVar13;
  int iVar14;
  
  *param_8 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    iVar14 = 0;
    iVar12 = iVar2 + -1;
    do {
      iVar4 = iVar12 - iVar14;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      uVar1 = iVar14 + (iVar4 >> 1);
      puVar7 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 8);
      uVar5 = (uint)puVar7[4];
      if (param_2 < uVar5) {
LAB_03440b44:
        iVar12 = uVar1 - 1;
      }
      else {
        if (param_2 <= uVar5) {
          uVar10 = *puVar7;
          if (uVar10 < param_3) goto LAB_03440b44;
          if (uVar10 == param_3) {
            if (param_3 <= (uVar10 - param_4) + (ulong)*param_7) {
              iVar14 = (int)puVar7[3];
              goto LAB_03440bec;
            }
            break;
          }
        }
        iVar14 = uVar1 + 1;
      }
    } while (iVar14 <= iVar12);
    if ((((uVar5 == param_2) && (uVar10 = *puVar7, uVar10 <= param_3)) &&
        (iVar14 = (int)puVar7[3], (int)param_3 <= (int)(((int)uVar10 - param_4) + iVar14))) ||
       ((((int)(uVar1 + 1) < iVar2 &&
         (puVar7 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)(uVar1 + 1) * 8),
         (uint)puVar7[4] == param_2)) &&
        ((uVar10 = *puVar7, uVar10 <= param_3 &&
         (iVar14 = (int)puVar7[3], (int)param_3 <= (int)(((int)uVar10 - param_4) + iVar14))))))) {
LAB_03440bec:
      param_3 = param_3 - uVar10;
      uVar1 = iVar14 - (int)param_3;
      if (uVar1 <= *param_7) {
        if ((uVar1 == *param_7 & param_6) == 0) {
          uVar5 = 0;
          if (param_5 != 0) {
            uVar5 = uVar1 / param_5;
          }
          if (uVar1 != uVar5 * param_5) {
            return 0;
          }
        }
        if (uVar1 < param_4) {
          return 0;
        }
        uVar10 = puVar7[1] + (param_3 & 0xffffffff);
        uVar11 = (ulong)param_5;
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar10 / uVar11;
        }
        if (uVar10 != uVar6 * uVar11) {
          return 0;
        }
        *param_7 = uVar1;
        sVar3 = *(short *)((long)puVar7 + 0x24);
        if (sVar3 == 0) {
          puVar9 = (ulong *)0x0;
          puVar13 = (ulong *)(param_1 + 0x18);
          do {
            puVar8 = puVar9;
            puVar9 = (ulong *)*puVar13;
            puVar13 = puVar9 + 2;
          } while (puVar9 != (ulong *)0x0 && puVar7 != puVar9);
          if (puVar9 != (ulong *)0x0) {
            puVar13 = (ulong *)(param_1 + 0x18);
            if (*(ulong **)(param_1 + 0x18) != puVar9) {
              puVar13 = puVar8 + 2;
            }
            *puVar13 = puVar9[2];
            if (*(ulong **)(param_1 + 0x10) == puVar9) {
              *(ulong **)(param_1 + 0x10) = puVar8;
            }
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          }
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (int)puVar7[3];
          sVar3 = *(short *)((long)puVar7 + 0x24);
          puVar7[2] = 0;
        }
        *(short *)((long)puVar7 + 0x24) = sVar3 + 1;
        *param_8 = (long)puVar7;
        return param_3 & 0xffffffff;
      }
    }
  }
  return 0;
}


