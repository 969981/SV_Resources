/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd6de4; name: FUN_01dd6de4
 */


undefined8 FUN_01dd6de4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = FUN_01dc2404(*(undefined8 *)(param_1 + 0x1a8));
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x19c) = 1;
    iVar1 = *(int *)(param_1 + 0x1d8);
    iVar6 = *(int *)(param_1 + 0x108);
    iVar7 = 0;
    if (*(int *)(param_1 + 0x1dc) != 0) {
      iVar7 = *(int *)(param_1 + 0x1dc) + -1;
    }
    if (iVar6 == 0) {
      lVar3 = FUN_01195854();
      uVar5 = (uint)*(byte *)(lVar3 + 0x570);
      iVar6 = *(int *)(param_1 + 0x108);
    }
    else if (iVar6 - 1U < 2) {
      uVar5 = *(uint *)(param_1 + 0x2a4);
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (iVar6 == 0) {
      iVar7 = iVar1 + iVar7 * 6;
    }
    else if ((iVar6 != 1) && (iVar6 != 2)) {
      iVar7 = 1;
    }
    FUN_014e89c0(param_1,0,uVar5,iVar7);
    uVar4 = 1;
  }
  return uVar4;
}


