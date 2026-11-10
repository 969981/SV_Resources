/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03361118; name: FUN_03361118
 */


ulong FUN_03361118(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  
  uVar6 = *(uint *)(param_1 + 3);
  uVar8 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)(int)uVar6 << 1) < (uint)uVar8 && -2 < (int)param_1[1]) && uVar8 >> 0x20 == 0)
      && (-1 < (int)uVar6)) && (((long)(int)uVar6 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar6 = *(uint *)(param_1 + 3);
  }
  lVar5 = *param_2;
  uVar1 = (int)lVar5 * -0x61c8864f;
  uVar7 = (int)((ulong)lVar5 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  lVar4 = param_1[2];
  uVar1 = uVar2 + (uVar2 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1;
  uVar8 = (ulong)(uVar1 & uVar6);
  puVar3 = (uint *)(lVar4 + uVar8 * 8);
  puVar9 = puVar3 + 1;
  uVar7 = *puVar9;
  if (-1 < (int)uVar7) {
    do {
      if ((*puVar3 == uVar1) && (*(long *)(*param_1 + (ulong)uVar7 * 8) == lVar5))
      goto LAB_0336120c;
      uVar8 = uVar8 + 1 & (long)(int)uVar6;
      puVar3 = (uint *)(lVar4 + uVar8 * 8);
      puVar9 = puVar3 + 1;
      uVar7 = *puVar9;
    } while (-1 < (int)uVar7);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *puVar3 = uVar1;
  *puVar9 = uVar6;
  uVar7 = *(uint *)(param_1 + 1);
  lVar4 = param_1[2];
LAB_0336120c:
  return (ulong)uVar7 | ((ulong)((long)puVar3 - lVar4) >> 3) << 0x20;
}


