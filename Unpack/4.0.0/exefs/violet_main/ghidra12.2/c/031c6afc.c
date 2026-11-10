/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c6afc; name: FUN_031c6afc
 */


long * FUN_031c6afc(long *param_1,char *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  size_t sVar9;
  uint uVar10;
  
  if (param_2 == (char *)0x0) {
    uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    iVar5 = (int)param_1[0x12];
    iVar3 = -(uint)(uVar2 == 0 && iVar5 == 0);
    bVar1 = uVar2 != 0 || iVar5 != 0;
    if ((int)uVar2 <= iVar3) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,bVar1);
    }
    uVar4 = *(uint *)(param_1 + 1);
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    if (iVar3 < (int)uVar4) {
      uVar10 = (uint)bVar1;
      bVar8 = SBORROW4(uVar4,uVar10);
      bVar6 = (int)(uVar4 - uVar10) < 0;
      bVar7 = uVar4 == uVar10;
    }
    if (!bVar7 && bVar6 == bVar8) {
      *(uint *)(param_1 + 1) = (uint)bVar1;
    }
    *(undefined1 *)(*param_1 - (ulong)(uVar2 == 0 && iVar5 == 0)) = 0;
  }
  else {
    if (param_3 < 0) {
      sVar9 = strlen(param_2);
      param_3 = (int)sVar9;
    }
    uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    iVar5 = uVar2 - 1;
    iVar3 = param_3;
    if (iVar5 <= param_3) {
      iVar3 = iVar5;
    }
    if ((int)param_1[0x12] != 0) {
      iVar3 = param_3;
    }
    iVar5 = iVar3 + 1;
    if ((int)uVar2 <= iVar3) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar5);
    }
    if ((int)param_1[1] <= iVar3 || iVar5 < (int)param_1[1]) {
      *(int *)(param_1 + 1) = iVar5;
    }
    *(undefined1 *)(*param_1 + (long)iVar3) = 0;
    memmove((void *)*param_1,param_2,(long)(int)param_1[1] - 1);
  }
  return param_1;
}


