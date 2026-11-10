/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317fd40; name: FUN_0317fd40
 */


void FUN_0317fd40(long *param_1)

{
  int iVar1;
  uint uVar3;
  uint uVar2;
  uint uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  
  lVar6 = param_1[2];
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[2] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  iVar5 = (int)param_1[1];
  iVar1 = (int)param_1[3];
  if (((((uint)((long)iVar1 << 1) < (uint)((long)iVar5 * 3)) && (-1 < iVar5)) &&
      ((ulong)((long)iVar5 * 3) >> 0x20 == 0)) &&
     ((-1 < iVar1 && (((long)iVar1 & 0x7fffffffffffffffU) >> 0x1f == 0)))) {
    FUN_02e8d9d0(param_1 + 2);
    iVar5 = (int)param_1[1];
  }
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      piVar7 = (int *)(*param_1 + lVar6 * 0x50);
      uVar2 = (piVar7[2] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar7[2] * -0x61c8864f & 0xff00ffU) << 8;
      uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar7[1] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar7[1] * -0x61c8864f & 0xff00ffU) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar4 = (*piVar7 * -0x61c8864f & 0xff00ff00U) >> 8 | (*piVar7 * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar3 + 0x9e3779b9 + uVar2 * 0x40 + (uVar3 >> 2) ^ uVar2;
      uVar4 = uVar4 * 0x40 + -0x61c88647 + uVar2 + (uVar2 >> 2) ^ uVar4;
      uVar8 = (ulong)(uVar4 & *(uint *)(param_1 + 3));
      while (piVar7 = (int *)(param_1[2] + uVar8 * 8 + 4), -1 < *piVar7) {
        uVar8 = uVar8 + 1 & (long)(int)*(uint *)(param_1 + 3);
      }
      *(uint *)(param_1[2] + uVar8 * 8) = uVar4;
      *piVar7 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  return;
}


