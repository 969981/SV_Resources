/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03378a2c; name: FUN_03378a2c
 */


ulong FUN_03378a2c(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar8 = (uint *)(param_1 + 1);
  iVar4 = (int)param_1[3];
  uVar7 = ((long)(int)*puVar8 + 1) * 3;
  if (((((uint)((long)iVar4 << 1) < (uint)uVar7 && -2 < (int)*puVar8) && uVar7 >> 0x20 == 0) &&
      (-1 < iVar4)) && (((long)iVar4 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
  }
  uVar3 = FUN_031e2b00(param_2);
  uVar6 = *(uint *)(param_1 + 3);
  lVar5 = param_1[2];
  uVar7 = (ulong)(uVar6 & uVar3);
  while( true ) {
    puVar1 = (uint *)(lVar5 + uVar7 * 8);
    puVar9 = puVar1 + 1;
    if ((int)*puVar9 < 0) break;
    if (*puVar1 == uVar3) {
      puVar2 = (undefined8 *)(*param_1 + (ulong)*puVar9 * 0x20);
      iVar4 = FUN_031e2760(*puVar2,puVar2[1],*param_2,param_2[1]);
      if (iVar4 == 0) goto LAB_03378b14;
      lVar5 = param_1[2];
      uVar6 = *(uint *)(param_1 + 3);
    }
    uVar7 = ((ulong)((long)puVar1 - lVar5) >> 3) + 1 & (long)(int)uVar6;
  }
  uVar6 = *puVar8;
  *puVar1 = uVar3;
  *puVar9 = uVar6;
  puVar9 = puVar8;
LAB_03378b14:
  return (ulong)*puVar9 | ((ulong)((long)puVar1 - param_1[2]) >> 3) << 0x20;
}


