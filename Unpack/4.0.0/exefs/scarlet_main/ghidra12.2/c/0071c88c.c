/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071c88c; name: FUN_0071c88c
 */


void FUN_0071c88c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = (ulong *)(param_1 + 8);
  uVar4 = *puVar7;
  uVar6 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar6 | (uint)uVar4) & 1) == 0) goto LAB_0071c904;
  if ((uVar6 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_0021d48c();
    uVar4 = *puVar7;
    if ((uVar4 & 1) == 0) goto LAB_0071c978;
LAB_0071c8cc:
    puVar3 = (undefined8 *)((uVar4 & 0xfffffffffffffffe) + 8);
  }
  else {
    puVar2 = (undefined8 *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((uVar4 & 1) != 0) goto LAB_0071c8cc;
LAB_0071c978:
    puVar3 = (undefined8 *)FUN_0021d48c(puVar7);
  }
  uVar10 = puVar3[1];
  uVar8 = *puVar3;
  uVar5 = puVar3[2];
  uVar11 = puVar2[1];
  uVar9 = *puVar2;
  puVar3[2] = puVar2[2];
  puVar3[1] = uVar11;
  *puVar3 = uVar9;
  puVar2[2] = uVar5;
  puVar2[1] = uVar10;
  *puVar2 = uVar8;
LAB_0071c904:
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  return;
}


