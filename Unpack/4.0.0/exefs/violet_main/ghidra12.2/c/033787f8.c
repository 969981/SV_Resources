/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033787f8; name: FUN_033787f8
 */


ulong FUN_033787f8(long *param_1)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar5 = *(uint *)(param_1 + 3);
  uVar4 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)(int)uVar5 << 1) < (uint)uVar4 && -2 < (int)param_1[1]) && uVar4 >> 0x20 == 0)
      && (-1 < (int)uVar5)) && (((long)(int)uVar5 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar5 = *(uint *)(param_1 + 3);
  }
  lVar2 = param_1[2];
  uVar4 = (ulong)(uVar5 & 0x9e3779b9);
  piVar1 = (int *)(lVar2 + uVar4 * 8);
  puVar6 = (uint *)(piVar1 + 1);
  uVar3 = *puVar6;
  if (-1 < (int)uVar3) {
    do {
      if ((*piVar1 == -0x61c88647) && (*(long *)(*param_1 + (ulong)uVar3 * 0x10) == 0))
      goto LAB_033788bc;
      uVar4 = uVar4 + 1 & (long)(int)uVar5;
      piVar1 = (int *)(lVar2 + uVar4 * 8);
      puVar6 = (uint *)(piVar1 + 1);
      uVar3 = *puVar6;
    } while (-1 < (int)uVar3);
  }
  uVar5 = *(uint *)(param_1 + 1);
  *piVar1 = -0x61c88647;
  *puVar6 = uVar5;
  uVar3 = *(uint *)(param_1 + 1);
  lVar2 = param_1[2];
LAB_033788bc:
  return (ulong)uVar3 | ((ulong)((long)piVar1 - lVar2) >> 3) << 0x20;
}


