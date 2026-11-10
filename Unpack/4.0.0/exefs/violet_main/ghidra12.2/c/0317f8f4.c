/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317f8f4; name: FUN_0317f8f4
 */


void FUN_0317f8f4(long *param_1)

{
  int iVar1;
  uint uVar3;
  uint uVar2;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
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
      piVar8 = (int *)(*param_1 + lVar6 * 0x40);
      uVar2 = (piVar8[2] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar8[2] * -0x61c8864f & 0xff00ffU) << 8;
      uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (piVar8[1] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar8[1] * -0x61c8864f & 0xff00ffU) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar4 = (piVar8[3] * -0x61c8864f & 0xff00ff00U) >> 8 |
              (piVar8[3] * -0x61c8864f & 0xff00ffU) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar2 = uVar3 + 0x9e3779b9 + uVar2 * 0x40 + (uVar3 >> 2) ^ uVar2;
      uVar3 = (*piVar8 * -0x61c8864f & 0xff00ff00U) >> 8 | (*piVar8 * -0x61c8864f & 0xff00ffU) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar2 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar2 * 0x40 ^ uVar2;
      uVar3 = uVar3 * 0x40 + -0x61c88647 + uVar2 + (uVar2 >> 2) ^ uVar3;
      uVar7 = (ulong)(uVar3 & *(uint *)(param_1 + 3));
      while (piVar8 = (int *)(param_1[2] + uVar7 * 8 + 4), -1 < *piVar8) {
        uVar7 = uVar7 + 1 & (long)(int)*(uint *)(param_1 + 3);
      }
      *(uint *)(param_1[2] + uVar7 * 8) = uVar3;
      *piVar8 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  return;
}


