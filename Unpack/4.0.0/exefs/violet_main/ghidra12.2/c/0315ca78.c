/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0315ca78; name: FUN_0315ca78
 */


void FUN_0315ca78(long *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  lVar4 = param_1[2];
  if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar4,0);
    param_1[2] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  iVar3 = (int)param_1[1];
  iVar1 = (int)param_1[3];
  if (((((uint)((long)iVar1 << 1) < (uint)((long)iVar3 * 3)) && (-1 < iVar3)) &&
      ((ulong)((long)iVar3 * 3) >> 0x20 == 0)) &&
     ((-1 < iVar1 && (((long)iVar1 & 0x7fffffffffffffffU) >> 0x1f == 0)))) {
    FUN_02e8d9d0(param_1 + 2);
    iVar3 = (int)param_1[1];
  }
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      piVar6 = (int *)(*param_1 + lVar4 * 0x10);
      uVar2 = (piVar6[1] << 5 ^ *piVar6 << 0x1b ^ piVar6[2]) * -0x61c8864f;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar5 = (ulong)(uVar2 & *(uint *)(param_1 + 3));
      while (piVar6 = (int *)(param_1[2] + uVar5 * 8 + 4), -1 < *piVar6) {
        uVar5 = uVar5 + 1 & (long)(int)*(uint *)(param_1 + 3);
      }
      *(uint *)(param_1[2] + uVar5 * 8) = uVar2;
      *piVar6 = (int)lVar4;
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_1[1]);
  }
  return;
}


