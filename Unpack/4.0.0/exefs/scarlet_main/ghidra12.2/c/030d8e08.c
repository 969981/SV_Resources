/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d8e08; name: FUN_030d8e08
 */


void FUN_030d8e08(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  long lVar15;
  undefined4 *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint *local_80;
  undefined8 local_78;
  undefined4 local_70 [2];
  uint local_68 [2];
  
  plVar1 = (long *)(param_1 + 0xd0);
  local_70[0] = param_2;
  lVar8 = FUN_030db3b4(plVar1,local_70);
  if (lVar8 == 0) {
    lVar8 = -0x100000000;
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = *(uint *)(lVar8 + 4);
    lVar8 = (lVar8 - *(long *)(param_1 + 0xe0)) * 0x20000000;
  }
  uVar11 = uVar11 | (uint)lVar8;
  lVar2 = *plVar1 + (long)(int)uVar11 * 0x30 + 8;
  local_80 = (uint *)0x0;
  local_78 = -0x8000000000000000;
  FUN_030f14b0(lVar2,&local_80);
  puVar7 = PTR_DAT_047e4f38;
  puVar6 = PTR_PTR_047d1a50;
  if ((int)local_78 != 0) {
    lVar5 = tpidr_el0;
    lVar15 = (long)(int)local_78 << 2;
    puVar14 = local_80;
    do {
      uVar3 = *puVar14;
      local_b0 = (undefined4 *)0x0;
      local_a8 = -0x8000000000000000;
      local_a0 = 0;
      local_98 = -0x8000000000000000;
      local_90 = 0;
      FUN_0307c17c(*(undefined8 *)(param_1 + 0x18),local_70[0],uVar3,&local_b0);
      local_68[0] = uVar3 & 0x3fffff;
      FUN_030e1af4(*(undefined8 *)(*(long *)(param_1 + 0x20) + ((ulong)(uVar3 >> 0x13) & 0x1ff8)),
                   local_68,&local_b0);
      iVar4 = *(int *)puVar7;
      lVar9 = *(long *)(lVar5 + 0x1000b8);
      if (lVar9 == 0) {
        lVar9 = FUN_00e5d3b4();
        *(long *)(lVar5 + 0x1000b8) = lVar9;
      }
      if (*(long *)(lVar9 + (long)iVar4 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      lVar9 = local_98;
      uVar10 = (ulong)local_98._4_4_;
      local_98 = (ulong)local_98._4_4_ << 0x20;
      if ((-1 < lVar9) && (local_a0 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_a0,uVar10 << 2);
      }
      lVar9 = local_a8;
      uVar10 = (ulong)local_a8._4_4_;
      local_a0 = 0;
      local_98 = CONCAT44(0x80000000,(undefined4)local_98);
      local_a8 = (ulong)local_a8._4_4_ << 0x20;
      if ((-1 < lVar9) && (local_b0 != (undefined4 *)0x0)) {
        (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))(puVar6 + 0x20,local_b0,uVar10 << 1);
      }
      puVar14 = puVar14 + 1;
      lVar15 = lVar15 + -4;
    } while (lVar15 != 0);
  }
  local_b0 = (undefined4 *)0x0;
  local_a8 = -0x8000000000000000;
  FUN_030f1798(lVar2,&local_b0);
  if ((int)local_a8 != 0) {
    puVar13 = local_b0 + (long)(int)local_a8 * 3;
    puVar12 = local_b0;
    do {
      FUN_030bbc94(*(undefined8 *)(param_1 + 0x18),*puVar12,puVar12[1],-puVar12[2],0);
      puVar12 = puVar12 + 3;
    } while (puVar12 != puVar13);
  }
  if ((*(uint *)(param_1 + 0xe8) < (uint)((ulong)lVar8 >> 0x20)) ||
     (lVar8 = *(long *)(param_1 + 0xe0) + (lVar8 >> 0x20) * 8, *(uint *)(lVar8 + 4) != uVar11)) {
    lVar8 = FUN_030db3b4(plVar1,*plVar1 + (long)(int)uVar11 * 0x30);
  }
  FUN_030db428(plVar1,lVar8);
  lVar8 = local_a8;
  uVar10 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_b0 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))(puVar6 + 0x20,local_b0,uVar10 * 0xc);
  }
  lVar8 = local_78;
  uVar10 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_80 != (uint *)0x0)) {
    (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))(puVar6 + 0x20,local_80,uVar10 << 2);
  }
  return;
}


