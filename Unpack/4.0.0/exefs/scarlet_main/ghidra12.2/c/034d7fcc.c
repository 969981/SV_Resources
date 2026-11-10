/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d7fcc; name: FUN_034d7fcc
 */


void FUN_034d7fcc(long param_1,uint *param_2,ushort *param_3)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  
  lVar13 = *(long *)(param_1 + 0x18);
  uVar12 = *(uint *)(lVar13 + 699);
  if ((uVar12 >> 0x17 & 1) == 0) {
    uVar5 = *(ushort *)(lVar13 + 0x2b8);
    uVar11 = 0;
    if ((ulong)*(uint *)PTR_DAT_047e6fa0 != 0) {
      uVar11 = (uint)(((ulong)*(uint *)(lVar13 + 0x2b4) * (ulong)*(uint *)(param_1 + 0x24)) /
                     (ulong)*(uint *)PTR_DAT_047e6fa0);
    }
  }
  else {
    uVar5 = *(ushort *)(lVar13 + 0x2b8);
    if (uVar5 == 0) {
      fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2c));
      fVar14 = fVar14 + (float)(int)(uVar5 - 1) *
                        (float)((*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) + 1);
    }
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x24));
    uVar11 = (uint)(((fVar14 * 1000.0) / fVar15) * 0.001 * fVar15 * *(float *)(lVar13 + 0x2b4));
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x34);
  *param_3 = uVar5;
  if ((uVar5 - 1 == 0) || (uVar11 <= uVar4 || uVar4 <= uVar3)) {
    *param_2 = uVar11;
  }
  else {
    uVar4 = (uVar4 - uVar3) + 1;
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = (uVar11 - uVar3) / uVar4;
    }
    uVar9 = (uint)uVar5;
    if ((uVar9 == 0) || (uVar7 < uVar9)) {
      uVar1 = 0;
      if (uVar9 != 0) {
        uVar1 = uVar5 - (short)uVar7;
      }
      *param_3 = uVar1;
      *param_2 = ((uVar11 - uVar3) - uVar7 * uVar4) + uVar3;
    }
    else {
      *param_2 = uVar11 - (uVar5 - 1) * uVar4;
      *param_3 = 1;
    }
  }
  if (((uVar12 >> 0x18 & 1) != 0) &&
     (uVar8 = (ulong)*(uint *)(param_1 + 0xa0), *(uint *)(param_1 + 0xa0) != 0)) {
    uVar12 = 0;
    lVar13 = *(long *)(param_1 + 0xa8);
    lVar10 = 0;
    do {
      uVar3 = *(int *)(lVar13 + 4) - *param_2;
      uVar11 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar11 = uVar3;
      }
      lVar2 = lVar13;
      if (lVar10 != 0 && uVar12 <= uVar11) {
        lVar2 = lVar10;
        uVar11 = uVar12;
      }
      uVar12 = uVar11;
      uVar8 = uVar8 - 1;
      lVar13 = lVar13 + 0x10;
      lVar10 = lVar2;
    } while (uVar8 != 0);
    if (lVar2 != 0) {
      uVar12 = *(uint *)(lVar2 + 4);
      *param_2 = uVar12;
      uVar5 = *param_3;
      iVar6 = uVar5 - 1;
      if (iVar6 != 0) {
        uVar11 = *(uint *)(param_1 + 0x30);
        uVar3 = *(uint *)(param_1 + 0x34);
        if (uVar3 < uVar12 && uVar11 < uVar3) {
          uVar3 = (uVar3 - uVar11) + 1;
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = (uVar12 - uVar11) / uVar3;
          }
          if ((uVar5 != 0) && (uVar5 <= uVar4)) {
            *param_2 = uVar12 - iVar6 * uVar3;
            *param_3 = 1;
            return;
          }
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar5 - (short)uVar4;
          }
          *param_3 = uVar1;
          uVar12 = ((uVar12 - uVar11) - uVar4 * uVar3) + uVar11;
        }
      }
      *param_2 = uVar12;
    }
  }
  return;
}


