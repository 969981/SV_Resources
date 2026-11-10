/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00409c50; name: FUN_00409c50
 */


undefined8 FUN_00409c50(long *param_1,long *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  
  iVar6 = *param_3;
  if (iVar6 == 0) {
    FUN_003eb9f0(param_1,0);
  }
  else {
    iVar15 = (int)param_2[1];
    if (param_2 != param_1) {
      lVar3 = FUN_003eb9a0(param_1);
      if (lVar3 == 0) {
        return 0;
      }
      iVar15 = (int)param_2[1];
      if (0 < iVar15) {
        lVar7 = *param_2;
        lVar3 = 0;
        lVar8 = *param_1;
        do {
          lVar11 = lVar3 * 4;
          lVar3 = lVar3 + 1;
          *(undefined4 *)(lVar8 + lVar11) = *(undefined4 *)(lVar7 + lVar11);
          iVar15 = (int)param_2[1];
        } while (lVar3 < iVar15);
      }
      *(int *)(param_1 + 1) = iVar15;
      iVar6 = *param_3;
    }
    puVar5 = (uint *)*param_1;
    iVar1 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar1 = iVar6;
    }
    iVar1 = iVar1 >> 5;
    uVar14 = iVar15 - 1;
    uVar9 = (ulong)uVar14;
    if (iVar1 < (int)uVar14) {
      uVar9 = (ulong)(int)uVar14;
      do {
        uVar14 = puVar5[uVar9];
        if (uVar14 != 0) {
          lVar3 = uVar9 - (long)iVar1;
          do {
            puVar5[uVar9] = 0;
            iVar6 = *param_3;
            iVar15 = param_3[1];
            if (iVar15 != 0) {
              lVar7 = 8;
              do {
                iVar6 = iVar6 - iVar15;
                iVar15 = iVar6 + 0x1f;
                if (-1 < iVar6) {
                  iVar15 = iVar6;
                }
                uVar10 = (int)uVar9 - (iVar15 >> 5);
                uVar12 = iVar6 % 0x20;
                uVar4 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2;
                *(uint *)((long)puVar5 + uVar4) =
                     *(uint *)((long)puVar5 + uVar4) ^ uVar14 >> (ulong)(uVar12 & 0x1f);
                if (uVar12 != 0) {
                  puVar5[(long)(int)uVar10 + -1] =
                       puVar5[(long)(int)uVar10 + -1] ^ uVar14 << (ulong)(-uVar12 & 0x1f);
                }
                iVar15 = *(int *)((long)param_3 + lVar7);
                lVar7 = lVar7 + 4;
                iVar6 = *param_3;
              } while (iVar15 != 0);
            }
            uVar10 = iVar6 % 0x20;
            puVar5[lVar3] = puVar5[lVar3] ^ uVar14 >> (ulong)(uVar10 & 0x1f);
            if (uVar10 != 0) {
              puVar5[lVar3 + -1] = puVar5[lVar3 + -1] ^ uVar14 << (ulong)(-uVar10 & 0x1f);
            }
            uVar14 = puVar5[uVar9];
          } while (uVar14 != 0);
        }
        uVar9 = uVar9 - 1;
      } while ((long)iVar1 < (long)uVar9);
    }
    if ((int)uVar9 == iVar1) {
      uVar14 = puVar5[iVar1];
      uVar12 = *param_3 % 0x20;
      uVar10 = uVar14 >> (ulong)(uVar12 & 0x1f);
      if (uVar10 != 0) {
        do {
          uVar2 = 0;
          if (uVar12 != 0) {
            uVar2 = 0xffffffffU >> (ulong)(-uVar12 & 0x1f) & uVar14;
          }
          puVar5[iVar1] = uVar2;
          *puVar5 = *puVar5 ^ uVar10;
          uVar14 = param_3[1];
          if (uVar14 != 0) {
            puVar13 = (uint *)(param_3 + 2);
            do {
              uVar12 = uVar14 + 0x1f;
              if (-1 < (int)uVar14) {
                uVar12 = uVar14;
              }
              uVar9 = -(ulong)((uint)((int)uVar12 >> 5) >> 0x1f) & 0xfffffffc00000000 |
                      (ulong)(uint)((int)uVar12 >> 5) << 2;
              uVar14 = (int)uVar14 % 0x20;
              *(uint *)((long)puVar5 + uVar9) =
                   *(uint *)((long)puVar5 + uVar9) ^ uVar10 << (ulong)(uVar14 & 0x1f);
              if ((uVar14 != 0) && (uVar14 = uVar10 >> (ulong)(-uVar14 & 0x1f), uVar14 != 0)) {
                lVar3 = (long)((ulong)uVar12 << 0x20) >> 0x25;
                puVar5[lVar3 + 1] = puVar5[lVar3 + 1] ^ uVar14;
              }
              uVar14 = *puVar13;
              puVar13 = puVar13 + 1;
            } while (uVar14 != 0);
          }
          uVar14 = puVar5[iVar1];
          uVar12 = *param_3 % 0x20;
          uVar10 = uVar14 >> (ulong)(uVar12 & 0x1f);
        } while (uVar10 != 0);
      }
    }
    FUN_003ebc30(param_1);
  }
  return 1;
}


