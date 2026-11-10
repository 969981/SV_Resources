/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031807a4; name: FUN_031807a4
 */


void FUN_031807a4(long *param_1)

{
  int iVar1;
  uint uVar3;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  
  lVar19 = param_1[2];
  if ((lVar19 != 0) && (*(int *)(lVar19 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar19,0);
    param_1[2] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  iVar18 = (int)param_1[1];
  iVar1 = (int)param_1[3];
  if (((((uint)((long)iVar1 << 1) < (uint)((long)iVar18 * 3)) && (-1 < iVar18)) &&
      ((ulong)((long)iVar18 * 3) >> 0x20 == 0)) &&
     ((-1 < iVar1 && (((long)iVar1 & 0x7fffffffffffffffU) >> 0x1f == 0)))) {
    FUN_02e8d9d0(param_1 + 2);
    iVar18 = (int)param_1[1];
  }
  if (0 < iVar18) {
    lVar19 = 0;
    do {
      piVar20 = (int *)(*param_1 + lVar19 * 0x84);
      uVar2 = (piVar20[1] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[1] * -0x61c8864f & 0xff00ffU) << 8;
      uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[3] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[3] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[4] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[4] * -0x61c8864f & 0xff00ffU) << 8;
      uVar5 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[5] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[5] * -0x61c8864f & 0xff00ffU) << 8;
      uVar6 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[6] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[6] * -0x61c8864f & 0xff00ffU) << 8;
      uVar7 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[7] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[7] * -0x61c8864f & 0xff00ffU) << 8;
      uVar8 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[8] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[8] * -0x61c8864f & 0xff00ffU) << 8;
      uVar9 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[0xb] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0xb] * -0x61c8864f & 0xff00ffU) << 8;
      uVar10 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[0xc] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0xc] * -0x61c8864f & 0xff00ffU) << 8;
      uVar11 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[0xd] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0xd] * -0x61c8864f & 0xff00ffU) << 8;
      uVar12 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[0xe] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0xe] * -0x61c8864f & 0xff00ffU) << 8;
      uVar13 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[0xf] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0xf] * -0x61c8864f & 0xff00ffU) << 8;
      uVar14 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[2] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[2] * -0x61c8864f & 0xff00ffU) << 8;
      uVar15 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar20[9] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[9] * -0x61c8864f & 0xff00ffU) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar16 = (piVar20[10] * -0x61c8864f & 0xff00ff00U) >> 8 |
               (piVar20[10] * -0x61c8864f & 0xff00ffU) << 8;
      uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
      uVar17 = (piVar20[0x10] * -0x61c8864f & 0xff00ff00U) >> 8 |
               (piVar20[0x10] * -0x61c8864f & 0xff00ffU) << 8;
      uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
      uVar3 = uVar3 * 0x40 + -0x61c88647 + uVar15 + (uVar15 >> 2) ^ uVar3;
      uVar2 = uVar2 * 0x40 + -0x61c88647 + uVar16 + (uVar16 >> 2) ^ uVar2;
      uVar3 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar3 * 0x40 ^ uVar3;
      uVar2 = uVar10 + 0x9e3779b9 + (uVar10 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar3 = uVar5 + 0x9e3779b9 + (uVar5 >> 2) + uVar3 * 0x40 ^ uVar3;
      uVar2 = uVar11 + 0x9e3779b9 + (uVar11 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar3 = uVar6 + 0x9e3779b9 + (uVar6 >> 2) + uVar3 * 0x40 ^ uVar3;
      uVar2 = uVar12 + 0x9e3779b9 + (uVar12 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar3 = uVar7 + 0x9e3779b9 + (uVar7 >> 2) + uVar3 * 0x40 ^ uVar3;
      uVar2 = uVar13 + 0x9e3779b9 + (uVar13 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar3 = uVar8 + 0x9e3779b9 + (uVar8 >> 2) + uVar3 * 0x40 ^ uVar3;
      uVar2 = uVar14 + 0x9e3779b9 + (uVar14 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar3 = uVar9 + 0x9e3779b9 + (uVar9 >> 2) + uVar3 * 0x40 ^ uVar3;
      uVar2 = uVar17 + 0x9e3779b9 + (uVar17 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar3 = uVar3 * 0x40 + -0x61c88647 + uVar2 + (uVar2 >> 2) ^ uVar3;
      uVar2 = (piVar20[0x11] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x11] * -0x61c8864f & 0xff00ffU) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar4 = (piVar20[0x12] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x12] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar2 * 0x40 + -0x61c88647 + uVar4 + (uVar4 >> 2) ^ uVar2;
      uVar4 = (piVar20[0x13] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x13] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = (piVar20[0x14] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x14] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = (piVar20[0x15] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x15] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = (piVar20[0x16] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x16] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = (piVar20[0x17] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x17] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = (piVar20[0x18] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x18] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar3 = uVar3 * 0x40 + -0x61c88647 + uVar2 + (uVar2 >> 2) ^ uVar3;
      uVar2 = (piVar20[0x19] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x19] * -0x61c8864f & 0xff00ffU) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar4 = (piVar20[0x1a] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x1a] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar2 * 0x40 + -0x61c88647 + uVar4 + (uVar4 >> 2) ^ uVar2;
      uVar4 = (piVar20[0x1b] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x1b] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = (piVar20[0x1c] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x1c] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = (piVar20[0x1d] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x1d] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = (piVar20[0x1e] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x1e] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar5 = (piVar20[0x1f] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar20[0x1f] * -0x61c8864f & 0xff00ffU) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar2 = uVar5 + 0x9e3779b9 + (uVar5 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = (*piVar20 * -0x61c8864f & 0xff00ff00U) >> 8 |
              (*piVar20 * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar3 = uVar3 * 0x40 + -0x61c88647 + uVar2 + (uVar2 >> 2) ^ uVar3;
      uVar4 = uVar4 * 0x40 + -0x61c88647 + uVar3 + (uVar3 >> 2) ^ uVar4;
      uVar21 = (ulong)(uVar4 & *(uint *)(param_1 + 3));
      while (piVar20 = (int *)(param_1[2] + uVar21 * 8 + 4), -1 < *piVar20) {
        uVar21 = uVar21 + 1 & (long)(int)*(uint *)(param_1 + 3);
      }
      *(uint *)(param_1[2] + uVar21 * 8) = uVar4;
      *piVar20 = (int)lVar19;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)param_1[1]);
  }
  return;
}


