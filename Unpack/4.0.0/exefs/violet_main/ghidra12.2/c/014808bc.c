/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014808bc; name: FUN_014808bc
 */


void FUN_014808bc(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined5 uVar4;
  undefined5 uVar5;
  undefined5 uVar6;
  undefined5 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 local_d8;
  char local_d4 [4];
  undefined1 auStack_d0 [32];
  byte local_b0 [8];
  undefined4 local_a8 [2];
  undefined8 local_a0;
  char local_98;
  undefined4 local_94;
  undefined1 local_90;
  long local_8e;
  undefined1 *local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  *param_2 = 0;
  plVar13 = (long *)param_3[1];
  uVar11 = (**(code **)(*plVar13 + 0x98))(plVar13);
  uVar14 = param_3[2];
  uVar2 = *(undefined2 *)*param_3;
  FUN_01480c4c(auStack_d0);
  uVar12 = FUN_01246e90(param_1);
  uVar9 = FUN_01482688(uVar12,plVar13,uVar14,uVar2);
  bVar10 = FUN_01480e28(uVar2);
  if (bVar10 != 0) {
    uVar15 = 0;
    do {
      uVar12 = FUN_01246e90(param_1);
      FUN_014831ec(uVar12,uVar2,uVar15,plVar13,uVar14,local_d4,&local_d8);
      uVar8 = local_d8;
      if (local_d4[0] == '\0') {
        FUN_0148155c(auStack_d0,1);
      }
      else {
        puVar1 = param_3 + 3;
        uVar7 = *(undefined5 *)puVar1;
        uVar6 = *(undefined5 *)puVar1;
        uVar5 = *(undefined5 *)puVar1;
        uVar4 = *(undefined5 *)puVar1;
        local_a8[0] = uVar11;
        local_a0 = uVar14;
        if (local_d4[0] == '\t') {
          local_80 = auStack_d0;
          local_98 = 1;
          local_94 = local_d8;
          local_90 = 0;
          local_8e = ((ulong)CONCAT15(uVar9,*(undefined5 *)puVar1) & 0x1ffffffffff) << 0x10;
          local_78 = 1;
          local_70 = 0;
          local_68 = 0;
          FUN_01480c5c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1580),local_b0,local_a8);
          bVar3 = local_b0[0];
          local_98 = 2;
          local_80 = auStack_d0;
          local_94 = uVar8;
          local_90 = 0;
          local_8e = ((ulong)CONCAT15(uVar9,uVar4) & 0x1ffffffffff) << 0x10;
          local_78 = 1;
          local_70 = 0;
          local_68 = 0;
          local_a8[0] = uVar11;
          local_a0 = uVar14;
          FUN_01480c5c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1580),local_b0,local_a8);
          bVar3 = local_b0[0] | bVar3;
          local_98 = 3;
          local_80 = auStack_d0;
          local_94 = uVar8;
          local_90 = 0;
          local_8e = ((ulong)CONCAT15(uVar9,uVar5) & 0x1ffffffffff) << 0x10;
          local_70 = 0;
          local_68 = 0;
          local_78 = 1;
          local_a8[0] = uVar11;
          local_a0 = uVar14;
          FUN_01480c5c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1580),local_b0,local_a8);
          bVar3 = bVar3 | local_b0[0];
          local_98 = 4;
          local_80 = auStack_d0;
          local_94 = uVar8;
          local_90 = 0;
          local_8e = ((ulong)CONCAT15(uVar9,uVar6) & 0x1ffffffffff) << 0x10;
          local_70 = 0;
          local_68 = 0;
          local_78 = 1;
          local_a8[0] = uVar11;
          local_a0 = uVar14;
          FUN_01480c5c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1580),local_b0,local_a8);
          bVar3 = bVar3 | local_b0[0];
          local_98 = '\x05';
          local_80 = auStack_d0;
          local_94 = uVar8;
          local_90 = 0;
          local_8e = ((ulong)CONCAT15(uVar9,uVar7) & 0x1ffffffffff) << 0x10;
          local_70 = 0;
          local_68 = 0;
          local_78 = 1;
          local_a8[0] = uVar11;
          local_a0 = uVar14;
          FUN_01480c5c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1580),local_b0,local_a8);
          bVar3 = bVar3 | local_b0[0];
        }
        else {
          local_98 = local_d4[0];
          local_94 = local_d8;
          local_90 = 0;
          local_70 = 0;
          local_68 = 0;
          local_80 = auStack_d0;
          local_8e = ((ulong)CONCAT15(uVar9,*(undefined5 *)puVar1) & 0x1ffffffffff) << 0x10;
          local_78 = 1;
          FUN_01480c5c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1580),local_b0,local_a8);
          bVar3 = local_b0[0];
        }
        if (bVar3 != 0) {
          uVar12 = FUN_01246e90(param_1);
          FUN_014836dc(uVar12,uVar14,uVar2,local_d4[0],local_d8);
          *param_2 = 1;
        }
      }
      uVar15 = uVar15 + 1;
    } while (bVar10 != uVar15);
  }
  FUN_01480c48(auStack_d0);
  return;
}


