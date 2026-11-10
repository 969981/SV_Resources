/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00618188; name: FUN_00618188
 */


void FUN_00618188(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *local_60 [4];
  long local_40 [2];
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x70))();
  lVar6 = param_1 + 0x10;
  FUN_001fcec0(lVar6,uVar1);
  lVar7 = *(long *)(param_1 + 8);
  local_40[1] = 0;
  local_40[0] = lVar6;
  FUN_00617b04(local_60,*(undefined8 *)(lVar7 + 0x10),local_40);
  lVar2 = local_60[0][1];
  if (lVar2 == 0) {
    lVar2 = FUN_00617974(lVar7,lVar6);
    *local_60[0] = lVar2;
    local_60[0][1] = lVar2;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  lVar2 = lVar2 + 0x18;
  *(long *)(param_1 + 0x28) = lVar2;
  *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 2;
  puVar3 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar6 + 8) & 1) == 0) {
    lVar7 = *(long *)(lVar6 + 0x18);
  }
  else {
    puVar3 = (ulong *)*puVar3;
    lVar7 = *(long *)(lVar6 + 0x18);
  }
  if (lVar7 == 0) {
    lVar7 = FUN_004eb86c(puVar3);
    *(long *)(lVar6 + 0x18) = lVar7;
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar7 == lVar2) {
      return;
    }
  }
  else if (lVar7 == lVar2) {
    return;
  }
  plVar4 = (long *)(*(ulong *)(lVar2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar2 + 8) & 1) == 0) {
    uVar5 = *(ulong *)(lVar7 + 8);
  }
  else {
    plVar4 = (long *)*plVar4;
    uVar5 = *(ulong *)(lVar7 + 8);
  }
  puVar3 = (ulong *)(uVar5 & 0xfffffffffffffffe);
  if ((uVar5 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if ((ulong *)plVar4 == puVar3) {
    FUN_004eb784();
    return;
  }
  FUN_00506e00();
  return;
}


