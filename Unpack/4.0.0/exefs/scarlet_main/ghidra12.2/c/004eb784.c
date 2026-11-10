/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004eb784; name: FUN_004eb784
 */


void FUN_004eb784(long param_1,long param_2)

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
  if ((((uint)uVar6 | (uint)uVar4) & 1) == 0) goto LAB_004eb7f8;
  if ((uVar6 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_00264e54();
    uVar4 = *puVar7;
    if ((uVar4 & 1) == 0) goto LAB_004eb838;
LAB_004eb7c0:
    puVar3 = (undefined8 *)((uVar4 & 0xfffffffffffffffe) + 8);
  }
  else {
    puVar2 = (undefined8 *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((uVar4 & 1) != 0) goto LAB_004eb7c0;
LAB_004eb838:
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
LAB_004eb7f8:
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  return;
}


