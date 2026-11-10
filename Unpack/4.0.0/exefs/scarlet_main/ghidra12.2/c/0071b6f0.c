/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071b6f0; name: FUN_0071b6f0
 */


void FUN_0071b6f0(long param_1,long param_2)

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
  if ((((uint)uVar5 | (uint)uVar3) & 1) == 0) goto LAB_0071b768;
  if ((uVar5 & 1) == 0) {
    puVar1 = (undefined8 *)FUN_0021d48c();
    uVar3 = *puVar6;
    if ((uVar3 & 1) == 0) goto LAB_0071b85c;
LAB_0071b730:
    puVar2 = (undefined8 *)((uVar3 & 0xfffffffffffffffe) + 8);
  }
  else {
    puVar1 = (undefined8 *)((uVar5 & 0xfffffffffffffffe) + 8);
    if ((uVar3 & 1) != 0) goto LAB_0071b730;
LAB_0071b85c:
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
LAB_0071b768:
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = uVar4;
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  *(undefined8 *)(param_2 + 0x68) = uVar4;
  *(undefined8 *)(param_2 + 0x70) = uVar7;
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = uVar4;
  return;
}


