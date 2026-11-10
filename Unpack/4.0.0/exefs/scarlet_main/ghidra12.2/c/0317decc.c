/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317decc; name: FUN_0317decc
 */


void FUN_0317decc(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  
  lVar6 = param_1[2];
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[2] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  iVar5 = (int)param_1[1];
  iVar2 = (int)param_1[3];
  if (((((uint)((long)iVar2 << 1) < (uint)((long)iVar5 * 3)) && (-1 < iVar5)) &&
      ((ulong)((long)iVar5 * 3) >> 0x20 == 0)) &&
     ((-1 < iVar2 && (((long)iVar2 & 0x7fffffffffffffffU) >> 0x1f == 0)))) {
    FUN_02e8d9d0(param_1 + 2);
    iVar5 = (int)param_1[1];
  }
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + lVar6 * 0x20);
      iVar5 = *(int *)(puVar1 + 1);
      uVar7 = 0;
      if (iVar5 != 0) {
        piVar8 = (int *)*puVar1;
        uVar4 = (long)iVar5 * 4 - 4;
        uVar10 = (uVar4 >> 2) + 1;
        uVar7 = 0;
        if (uVar4 != 0) {
          lVar11 = -(uVar10 & 0x7ffffffffffffffe);
          piVar9 = piVar8;
          do {
            piVar8 = piVar9 + 2;
            uVar3 = (*piVar9 * -0x61c8864f & 0xff00ff00U) >> 8 |
                    (*piVar9 * -0x61c8864f & 0xff00ffU) << 8;
            uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
            uVar7 = uVar7 * 0x40 + -0x61c88647 + uVar3 + (uVar3 >> 2) ^ uVar7;
            uVar3 = (piVar9[1] * -0x61c8864f & 0xff00ff00U) >> 8 |
                    (piVar9[1] * -0x61c8864f & 0xff00ffU) << 8;
            uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
            uVar7 = uVar7 * 0x40 + -0x61c88647 + uVar3 + (uVar3 >> 2) ^ uVar7;
            lVar11 = lVar11 + 2;
            piVar9 = piVar8;
          } while (lVar11 != 0);
        }
        if ((uVar10 & 1) != 0) {
          uVar3 = (*piVar8 * -0x61c8864f & 0xff00ff00U) >> 8 |
                  (*piVar8 * -0x61c8864f & 0xff00ffU) << 8;
          uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar7 = uVar7 * 0x40 + uVar3 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar7;
        }
      }
      uVar10 = (ulong)(*(uint *)(param_1 + 3) & uVar7);
      while (piVar8 = (int *)(param_1[2] + uVar10 * 8 + 4), -1 < *piVar8) {
        uVar10 = uVar10 + 1 & (long)(int)*(uint *)(param_1 + 3);
      }
      *(uint *)(param_1[2] + uVar10 * 8) = uVar7;
      *piVar8 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  return;
}


