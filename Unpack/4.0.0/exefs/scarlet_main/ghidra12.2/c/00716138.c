/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00716138; name: FUN_00716138
 */


void FUN_00716138(long param_1,long param_2)

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
  if ((((uint)uVar6 | (uint)uVar4) & 1) == 0) goto LAB_007161b0;
  if ((uVar6 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_0021d48c();
    uVar4 = *puVar7;
    if ((uVar4 & 1) == 0) goto LAB_00716294;
LAB_00716178:
    puVar3 = (undefined8 *)((uVar4 & 0xfffffffffffffffe) + 8);
  }
  else {
    puVar2 = (undefined8 *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((uVar4 & 1) != 0) goto LAB_00716178;
LAB_00716294:
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
LAB_007161b0:
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
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x28) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = uVar5;
  *(undefined8 *)(param_2 + 0x38) = uVar8;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = uVar5;
  *(undefined8 *)(param_2 + 0x48) = uVar8;
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x50) = uVar5;
  *(undefined8 *)(param_2 + 0x58) = uVar8;
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x60) = uVar5;
  *(undefined8 *)(param_2 + 0x68) = uVar8;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  *(undefined8 *)(param_2 + 0x70) = uVar5;
  *(undefined8 *)(param_2 + 0x78) = uVar8;
  uVar9 = *(undefined8 *)(param_2 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  *(undefined8 *)(param_2 + 0x80) = uVar5;
  *(undefined8 *)(param_2 + 0x88) = uVar8;
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = uVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_2 + 0x98) = uVar1;
  return;
}


