/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d90bc; name: FUN_030d90bc
 */


void FUN_030d90bc(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 local_a8 [2];
  undefined4 local_a0 [2];
  undefined4 local_98 [2];
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  uint *local_70;
  undefined8 local_68;
  
  local_70 = (uint *)0x0;
  local_68 = -0x8000000000000000;
  local_78[0] = *param_2;
  FUN_0307c5c0(*(undefined8 *)(param_1 + 0x18),local_78,&local_70);
  if ((int)local_68 != 0) {
    puVar10 = local_70 + (long)(int)local_68 * 0xe;
    puVar8 = local_70;
    do {
      puVar9 = puVar8 + 0xe;
      local_88 = (undefined4 *)(CONCAT44(local_88._4_4_,*puVar8) & 0xffffffff003fffff);
      FUN_030e1af4(*(undefined8 *)(*(long *)(param_1 + 0x20) + ((ulong)(*puVar8 >> 0x13) & 0x1ff8)),
                   &local_88,puVar8 + 2);
      puVar8 = puVar9;
    } while (puVar9 != puVar10);
  }
  puVar3 = PTR_DAT_047e4f38;
  iVar13 = *(int *)PTR_DAT_047e4f38;
  lVar7 = tpidr_el0;
  lVar5 = *(long *)(lVar7 + 0x1000b8);
  if (lVar5 == 0) {
    lVar5 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar5;
  }
  if (*(long *)(lVar5 + (long)iVar13 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  local_88 = (undefined4 *)0x0;
  local_80 = 0x8000000000000000;
  local_90[0] = *param_2;
  FUN_030f1f84(param_1 + 0xb0,local_90,&local_88);
  if ((int)local_80 != 0) {
    puVar12 = local_88 + (long)(int)local_80 * 3;
    puVar11 = local_88;
    do {
      FUN_030bbc94(*(undefined8 *)(param_1 + 0x18),*puVar11,puVar11[1],-puVar11[2],0);
      puVar11 = puVar11 + 3;
    } while (puVar11 != puVar12);
  }
  local_98[0] = *param_2;
  FUN_030f1e4c(param_1 + 0xb0,local_98);
  uVar4 = local_80;
  puVar2 = PTR_PTR_047d1a50;
  uVar6 = local_80 >> 0x20;
  local_80 = uVar6 << 0x20;
  if ((-1 < (long)uVar4) && (local_88 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_88,uVar6 * 0xc);
  }
  iVar13 = *(int *)puVar3;
  lVar5 = *(long *)(lVar7 + 0x1000b8);
  if (lVar5 == 0) {
    lVar5 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar5;
  }
  if (*(long *)(lVar5 + (long)iVar13 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  iVar13 = *(int *)(param_1 + 0xd8) + -1;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      local_88 = (undefined4 *)0x0;
      local_80 = -0x8000000000000000;
      lVar7 = *(long *)(param_1 + 0xd0) + (long)iVar13 * 0x30 + 8;
      local_a0[0] = *param_2;
      FUN_030f199c(lVar7,local_a0,&local_88);
      if ((int)local_80 != 0) {
        puVar12 = local_88 + (long)(int)local_80 * 3;
        puVar11 = local_88;
        do {
          FUN_030bbc94(*(undefined8 *)(param_1 + 0x18),*puVar11,puVar11[1],-puVar11[2],0);
          puVar11 = puVar11 + 3;
        } while (puVar11 != puVar12);
      }
      local_a8[0] = *param_2;
      FUN_030f1368(lVar7,local_a8);
      lVar7 = local_80;
      uVar6 = (ulong)local_80._4_4_;
      local_80 = (ulong)local_80._4_4_ << 0x20;
      if ((-1 < lVar7) && (local_88 != (undefined4 *)0x0)) {
        (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))(puVar2 + 0x20,local_88,uVar6 * 0xc);
      }
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  puVar8 = local_70;
  if ((int)local_68 != 0) {
    lVar7 = (long)(int)local_68 * 0x38;
    do {
      uVar1 = *(uint *)((long)puVar8 + lVar7 + -0x14);
      *(undefined4 *)((long)puVar8 + lVar7 + -0x18) = 0;
      if ((-1 < (int)uVar1) && (lVar5 = *(long *)((long)puVar8 + lVar7 + -0x20), lVar5 != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,lVar5,(ulong)uVar1 << 2);
      }
      uVar1 = *(uint *)((long)puVar8 + lVar7 + -0x24);
      *(undefined8 *)((long)puVar8 + lVar7 + -0x20) = 0;
      *(undefined4 *)((long)puVar8 + lVar7 + -0x14) = 0x80000000;
      *(undefined4 *)((long)puVar8 + lVar7 + -0x28) = 0;
      if ((-1 < (int)uVar1) && (lVar5 = *(long *)((long)puVar8 + lVar7 + -0x30), lVar5 != 0)) {
        (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))(puVar2 + 0x20,lVar5,(ulong)uVar1 << 1);
      }
      lVar5 = lVar7 + -0x38;
      *(undefined8 *)((long)puVar8 + lVar7 + -0x30) = 0;
      *(undefined4 *)((long)puVar8 + lVar7 + -0x24) = 0x80000000;
      lVar7 = lVar5;
    } while (lVar5 != 0);
  }
  lVar7 = local_68;
  uVar6 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_70 != (uint *)0x0)) {
    (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))(puVar2 + 0x20,local_70,uVar6 * 0x38);
  }
  return;
}


