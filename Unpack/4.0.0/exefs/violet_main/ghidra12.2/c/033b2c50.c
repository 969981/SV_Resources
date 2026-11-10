/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b2c50; name: FUN_033b2c50
 */


undefined8 FUN_033b2c50(long param_1,byte *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar7 = (uint)*param_2;
  uVar4 = 0x811c9dc5;
  if (*param_2 != 0) {
    pbVar5 = param_2;
    do {
      pbVar5 = pbVar5 + 1;
      uVar4 = (uVar4 ^ uVar7) * 0x1000193;
      uVar7 = (uint)*pbVar5;
    } while (uVar7 != 0);
  }
  uVar7 = *(uint *)(param_1 + 0x24);
  uVar9 = (ulong)(uVar7 & uVar4);
  lVar8 = *(long *)(param_1 + 0x18);
  uVar6 = *(ulong *)(lVar8 + uVar9 * 0x18);
  if (uVar6 != 0xffffffffffffffff) {
    do {
      if ((uVar6 == uVar4) &&
         (iVar2 = strcmp((char *)param_2,*(char **)(lVar8 + uVar9 * 0x18 + 8)), iVar2 == 0))
      goto LAB_033b2d04;
      uVar9 = uVar9 + 1 & (long)(int)uVar7;
      uVar6 = *(ulong *)(lVar8 + uVar9 * 0x18);
    } while (uVar6 != 0xffffffffffffffff);
  }
  uVar9 = (ulong)(uVar7 + 1);
LAB_033b2d04:
  uVar3 = 0x80040200;
  if (((int)uVar9 <= (int)uVar7) &&
     (uVar6 = *(ulong *)(lVar8 + (long)(int)uVar9 * 0x18 + 0x10), -1 < (int)uVar6)) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb8) + (uVar6 & 0xffffffff) * 8);
    iVar2 = piVar1[1];
    lVar8 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80);
    uVar3 = 0;
    *param_3 = lVar8 + *piVar1;
    param_3[1] = lVar8 + iVar2;
  }
  return uVar3;
}


