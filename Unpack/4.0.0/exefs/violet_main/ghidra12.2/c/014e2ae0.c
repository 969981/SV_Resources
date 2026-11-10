/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e2ae0; name: FUN_014e2ae0
 */


void FUN_014e2ae0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = FUN_01195854();
  FUN_014e2b84(param_1,*(undefined1 *)(lVar4 + 0x570));
  iVar3 = *(int *)(param_1 + 0x1d8);
  iVar6 = *(int *)(param_1 + 0x108);
  iVar2 = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    iVar2 = *(int *)(param_1 + 0x1dc) + -1;
  }
  if (iVar6 == 0) {
    lVar4 = FUN_01195854();
    uVar5 = (uint)*(byte *)(lVar4 + 0x570);
    iVar6 = *(int *)(param_1 + 0x108);
  }
  else if (iVar6 - 1U < 2) {
    uVar5 = *(uint *)(param_1 + 0x2a4);
  }
  else {
    uVar5 = 0xffffffff;
  }
  iVar7 = iVar2;
  if (iVar6 != 2) {
    iVar7 = 1;
  }
  iVar1 = iVar2;
  if (iVar6 != 1) {
    iVar1 = iVar7;
  }
  iVar2 = iVar3 + iVar2 * 6;
  if (iVar6 != 0) {
    iVar2 = iVar1;
  }
  FUN_014e89c0(param_1,1,uVar5,iVar2);
  return;
}


