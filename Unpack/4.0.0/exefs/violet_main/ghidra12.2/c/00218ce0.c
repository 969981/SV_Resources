/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00218ce0; name: FUN_00218ce0
 */


void FUN_00218ce0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar6 = (ulong *)(param_1 + 8);
  uVar3 = *puVar6;
  uVar5 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar5 | (uint)uVar3) & 1) == 0) goto LAB_00218d58;
  if ((uVar5 & 1) == 0) {
    puVar1 = (undefined8 *)FUN_0021d48c();
    uVar3 = *puVar6;
    if ((uVar3 & 1) == 0) goto LAB_00218d8c;
LAB_00218d20:
    puVar2 = (undefined8 *)((uVar3 & 0xfffffffffffffffe) + 8);
  }
  else {
    puVar1 = (undefined8 *)((uVar5 & 0xfffffffffffffffe) + 8);
    if ((uVar3 & 1) != 0) goto LAB_00218d20;
LAB_00218d8c:
    puVar2 = (undefined8 *)FUN_0021d48c(puVar6);
  }
  uVar9 = puVar2[1];
  uVar7 = *puVar2;
  uVar4 = puVar2[2];
  uVar10 = puVar1[1];
  uVar8 = *puVar1;
  puVar2[2] = puVar1[2];
  puVar2[1] = uVar10;
  *puVar2 = uVar8;
  puVar1[2] = uVar4;
  puVar1[1] = uVar9;
  *puVar1 = uVar7;
LAB_00218d58:
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  *(undefined8 *)(param_2 + 0x18) = uVar7;
  return;
}


