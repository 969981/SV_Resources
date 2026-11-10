/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00711794; name: FUN_00711794
 */


void FUN_00711794(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = (ulong *)(param_1 + 8);
  uVar4 = *puVar8;
  uVar6 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar6 | (uint)uVar4) & 1) == 0) goto LAB_0071180c;
  if ((uVar6 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_0021d48c();
    uVar4 = *puVar8;
    if ((uVar4 & 1) == 0) goto LAB_00711978;
LAB_007117d4:
    puVar3 = (undefined8 *)((uVar4 & 0xfffffffffffffffe) + 8);
  }
  else {
    puVar2 = (undefined8 *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((uVar4 & 1) != 0) goto LAB_007117d4;
LAB_00711978:
    puVar3 = (undefined8 *)FUN_0021d48c(puVar8);
  }
  uVar10 = puVar3[1];
  uVar7 = *puVar3;
  uVar5 = puVar3[2];
  uVar11 = puVar2[1];
  uVar9 = *puVar2;
  puVar3[2] = puVar2[2];
  puVar3[1] = uVar11;
  *puVar3 = uVar9;
  puVar2[2] = uVar5;
  puVar2[1] = uVar10;
  *puVar2 = uVar7;
LAB_0071180c:
  FUN_00720d48(param_1 + 0x10,param_2 + 0x10);
  FUN_00720d48(param_1 + 0x28,param_2 + 0x28);
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x40) = uVar5;
  *(undefined8 *)(param_2 + 0x48) = uVar7;
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x58) = uVar5;
  *(undefined8 *)(param_2 + 0x60) = uVar7;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  *(undefined8 *)(param_2 + 0x70) = uVar5;
  *(undefined8 *)(param_2 + 0x78) = uVar7;
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  uVar9 = *(undefined8 *)(param_2 + 0xb8);
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 0xb8) = uVar5;
  *(undefined8 *)(param_2 + 0xc0) = uVar7;
  uVar5 = *(undefined8 *)(param_1 + 200);
  uVar7 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 200) = uVar5;
  *(undefined8 *)(param_2 + 0xd0) = uVar7;
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  uVar7 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0xd8) = uVar5;
  *(undefined8 *)(param_2 + 0xe0) = uVar7;
  uVar5 = *(undefined8 *)(param_1 + 0xe8);
  uVar7 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar9;
  *(undefined8 *)(param_2 + 0xe8) = uVar5;
  *(undefined8 *)(param_2 + 0xf0) = uVar7;
  uVar9 = *(undefined8 *)(param_2 + 0xf8);
  uVar5 = *(undefined8 *)(param_1 + 0xf8);
  uVar7 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = uVar9;
  *(undefined8 *)(param_2 + 0xf8) = uVar5;
  *(undefined8 *)(param_2 + 0x100) = uVar7;
  uVar9 = *(undefined8 *)(param_2 + 0x108);
  uVar5 = *(undefined8 *)(param_1 + 0x108);
  uVar7 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = uVar9;
  *(undefined8 *)(param_2 + 0x110) = uVar7;
  *(undefined8 *)(param_2 + 0x108) = uVar5;
  uVar9 = *(undefined8 *)(param_2 + 0x118);
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  uVar7 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = uVar9;
  *(undefined8 *)(param_2 + 0x120) = uVar7;
  *(undefined8 *)(param_2 + 0x118) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_2 + 0x128) = uVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_2 + 0x130) = uVar1;
  return;
}


