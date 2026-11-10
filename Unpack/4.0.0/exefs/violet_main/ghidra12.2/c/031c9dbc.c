/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c9dbc; name: FUN_031c9dbc
 */


undefined8 FUN_031c9dbc(long *param_1,char param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  
  iVar6 = (int)param_1[1];
  uVar7 = iVar6 - 1U & ((int)(iVar6 - 1U) >> 0x1f ^ 0xffffffffU);
  iVar8 = 0;
  lVar9 = (ulong)uVar7 + 1;
  do {
    bVar2 = *(byte *)(*param_1 + (long)(iVar6 + iVar8 + -1));
    if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      uVar7 = -iVar8;
      break;
    }
    iVar8 = iVar8 + -1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar5 = 0x80040200;
  iVar8 = (iVar6 + -2) - uVar7;
  if ((iVar8 != 0 && (int)uVar7 <= iVar6 + -2) && (*(char *)(*param_1 + (long)iVar8) == param_2)) {
    uVar3 = (iVar6 - uVar7) - 2;
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    uVar7 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    uVar4 = uVar7 - 1;
    uVar1 = uVar3;
    if ((int)uVar4 <= (int)uVar3) {
      uVar1 = uVar4;
    }
    if ((int)param_1[0x12] != 0) {
      uVar1 = uVar3;
    }
    iVar8 = uVar1 + 1;
    if ((int)uVar7 <= (int)uVar1) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,iVar8);
      iVar6 = (int)param_1[1];
    }
    if ((iVar6 <= (int)uVar1) || (iVar8 < iVar6)) {
      *(int *)(param_1 + 1) = iVar8;
    }
    uVar5 = 0;
    *(undefined1 *)(*param_1 + (long)(int)uVar1) = 0;
  }
  return uVar5;
}


