/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0070c4a8; name: FUN_0070c4a8
 */


void FUN_0070c4a8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  uint uVar6;
  undefined *puVar7;
  
  puVar3 = PTR_DAT_047cba80;
  uVar6 = *(uint *)(param_2 + 4);
  if (uVar6 == 0) {
    return;
  }
  if ((uVar6 & 1) == 0) goto LAB_0070c570;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar7 = (undefined *)*puVar1;
  }
  else {
    puVar5 = (ulong *)*puVar5;
    puVar7 = (undefined *)*puVar1;
  }
  if (puVar7 == PTR_DAT_047cba80) {
    FUN_001fcdc8(puVar1,puVar5,PTR_DAT_047cba80);
  }
  uVar4 = (**(code **)(*param_2 + 0x70))(param_2);
  puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar7 = (undefined *)*puVar1;
    if (puVar7 != puVar3) goto LAB_0070c528;
LAB_0070c558:
    FUN_001fcdc8(puVar1,puVar5);
  }
  else {
    puVar5 = (ulong *)*puVar5;
    puVar7 = (undefined *)*puVar1;
    if (puVar7 == puVar3) goto LAB_0070c558;
LAB_0070c528:
    FUN_001fcec0(puVar7,uVar4);
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  uVar6 = *(uint *)(param_2 + 4);
LAB_0070c570:
  if ((uVar6 >> 1 & 1) == 0) {
    return;
  }
  plVar2 = (long *)(param_1 + 0x18);
  puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar7 = (undefined *)*plVar2;
  }
  else {
    puVar5 = (ulong *)*puVar5;
    puVar7 = (undefined *)*plVar2;
  }
  if (puVar7 == puVar3) {
    FUN_001fcdc8(plVar2,puVar5,PTR_DAT_047cba80);
  }
  uVar4 = (**(code **)(*param_2 + 0x78))(param_2);
  puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar7 = (undefined *)*plVar2;
  }
  else {
    puVar5 = (ulong *)*puVar5;
    puVar7 = (undefined *)*plVar2;
  }
  if (puVar7 == puVar3) {
    FUN_001fcdc8(plVar2,puVar5);
  }
  else {
    FUN_001fcec0(puVar7,uVar4);
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
  return;
}


