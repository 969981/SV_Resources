/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309575c; name: FUN_0309575c
 */


ulong FUN_0309575c(long *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  
  uVar5 = *(uint *)(param_1 + 3);
  uVar6 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)(int)uVar5 << 1) < (uint)uVar6 && -2 < (int)param_1[1]) && uVar6 >> 0x20 == 0)
      && (-1 < (int)uVar5)) && (((long)(int)uVar5 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar5 = *(uint *)(param_1 + 3);
  }
  uVar4 = *param_2 * -0x61c8864f;
  lVar3 = param_1[2];
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar1 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar6 = (ulong)(uVar1 & uVar5);
  puVar2 = (uint *)(lVar3 + uVar6 * 8);
  puVar7 = puVar2 + 1;
  uVar4 = *puVar7;
  if (-1 < (int)uVar4) {
    do {
      if ((*puVar2 == uVar1) && (*(int *)(*param_1 + (ulong)uVar4 * 0x38) == *param_2))
      goto LAB_03095838;
      uVar6 = uVar6 + 1 & (long)(int)uVar5;
      puVar2 = (uint *)(lVar3 + uVar6 * 8);
      puVar7 = puVar2 + 1;
      uVar4 = *puVar7;
    } while (-1 < (int)uVar4);
  }
  uVar5 = *(uint *)(param_1 + 1);
  *puVar2 = uVar1;
  *puVar7 = uVar5;
  uVar4 = *(uint *)(param_1 + 1);
  lVar3 = param_1[2];
LAB_03095838:
  return (ulong)uVar4 | ((ulong)((long)puVar2 - lVar3) >> 3) << 0x20;
}


