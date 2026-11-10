/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00514364; name: FUN_00514364
 */


void FUN_00514364(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  puVar7 = (ulong *)(param_1 + 8);
  uVar4 = *puVar7;
  uVar6 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar6 | (uint)uVar4) & 1) == 0) goto LAB_005143d8;
  if ((uVar6 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_00264e54();
    uVar4 = *puVar7;
    if ((uVar4 & 1) == 0) goto LAB_00514418;
LAB_005143a0:
    puVar3 = (undefined8 *)((uVar4 & 0xfffffffffffffffe) + 8);
  }
  else {
    puVar2 = (undefined8 *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((uVar4 & 1) != 0) goto LAB_005143a0;
LAB_00514418:
    puVar3 = (undefined8 *)FUN_00264e54(puVar7);
  }
  uVar5 = *puVar3;
  *puVar3 = *puVar2;
  *puVar2 = uVar5;
  uVar5 = puVar3[1];
  puVar3[1] = puVar2[1];
  puVar2[1] = uVar5;
  uVar5 = puVar3[2];
  puVar3[2] = puVar2[2];
  puVar2[2] = uVar5;
LAB_005143d8:
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  return;
}


