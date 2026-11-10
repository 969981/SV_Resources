/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317efc0; name: FUN_0317efc0
 */


void FUN_0317efc0(long *param_1)

{
  int iVar1;
  uint uVar3;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  int *piVar10;
  
  lVar7 = param_1[2];
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    param_1[2] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  iVar6 = (int)param_1[1];
  iVar1 = (int)param_1[3];
  if (((((uint)((long)iVar1 << 1) < (uint)((long)iVar6 * 3)) && (-1 < iVar6)) &&
      ((ulong)((long)iVar6 * 3) >> 0x20 == 0)) &&
     ((-1 < iVar1 && (((long)iVar1 & 0x7fffffffffffffffU) >> 0x1f == 0)))) {
    FUN_02e8d9d0(param_1 + 2);
    iVar6 = (int)param_1[1];
  }
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      pfVar8 = (float *)(*param_1 + lVar7 * 0x70);
      uVar2 = ((int)pfVar8[2] * -0x61c8864f & 0xff00ff00U) >> 8 |
              ((int)pfVar8[2] * -0x61c8864f & 0xff00ffU) << 8;
      uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = ((int)pfVar8[1] * -0x61c8864f & 0xff00ff00U) >> 8 |
              ((int)pfVar8[1] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = ((int)*pfVar8 * -0x61c8864f & 0xff00ff00U) >> 8 |
              ((int)*pfVar8 * -0x61c8864f & 0xff00ffU) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar5 = ((int)pfVar8[4] * -0x61c8864f & 0xff00ff00U) >> 8 |
              ((int)pfVar8[4] * -0x61c8864f & 0xff00ffU) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar2 = uVar2 + 0x9e3779b9 + (uVar2 >> 2);
      uVar2 = uVar5 + 0x9e3779b9 + (uVar5 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = ((int)pfVar8[5] * -0x61c8864f & 0xff00ff00U) >> 8 |
              ((int)pfVar8[5] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar4 = ((int)pfVar8[6] * -0x61c8864f & 0xff00ff00U) >> 8 |
              ((int)pfVar8[6] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar3 + 0x9e3779b9 + (uVar3 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar9 = (ulong)(uVar2 & *(uint *)(param_1 + 3));
      while (piVar10 = (int *)(param_1[2] + uVar9 * 8 + 4), -1 < *piVar10) {
        uVar9 = uVar9 + 1 & (long)(int)*(uint *)(param_1 + 3);
      }
      *(uint *)(param_1[2] + uVar9 * 8) = uVar2;
      *piVar10 = (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_1[1]);
  }
  return;
}


