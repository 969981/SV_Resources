/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03434d00; name: FUN_03434d00
 */


undefined1  [16] FUN_03434d00(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 local_e0 [8];
  float local_d8;
  undefined8 **local_d0;
  long *plStack_c8;
  long local_c0;
  float local_b8;
  undefined2 local_b4;
  long local_b0;
  ulong local_a8;
  undefined8 *local_98;
  ulong local_90;
  long local_80;
  ulong local_78;
  undefined4 local_70;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  
  *param_1 = *(long *)(param_4 + 0xa8) + 8;
  if (*(int *)(param_2 + 0x58) == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = **(long **)(param_2 + 0x50);
  }
  FUN_03423e4c(&local_50,param_2,lVar12 != param_4);
  if (*(int *)(param_3 + 0x58) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = **(long **)(param_3 + 0x50);
  }
  uVar11 = (ulong)(lVar5 != param_4);
  FUN_03423e4c(&local_60,param_3,uVar11);
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = SQRT((local_50 - local_60) * (local_50 - local_60) +
                  (fStack_4c - fStack_5c) * (fStack_4c - fStack_5c) +
                  (local_48 - local_58) * (local_48 - local_58));
  local_70 = 0;
  local_68 = 0;
  local_c0 = param_5;
  if (*(ulong *)(param_3 + uVar11 * 0x38 + 0x620) <
      *(ulong *)(param_2 + (ulong)(lVar12 != param_4) * 0x38 + 0x620)) {
    local_b8 = local_b8 * 8.0;
    local_d8 = local_58;
    plStack_c8 = &local_b0;
    local_d0 = &local_98;
    local_b4 = 0x100;
    FUN_034325c0(param_1,&local_50,param_2 + (ulong)(lVar12 != param_4) * 0x38 + 0x5f0,local_e0);
    if (*(int *)(param_5 + 0x28) != 0) {
      puVar6 = *(undefined8 **)(param_5 + 0x20);
      puVar7 = (undefined4 *)((long)puVar6 + 0x14);
      do {
        uVar1 = *(uint *)(puVar6 + 0xf);
        if (1 < uVar1) {
          uVar11 = 0;
          iVar8 = -1;
          puVar9 = puVar7;
          do {
            uVar1 = uVar1 + iVar8;
            iVar8 = iVar8 + -1;
            uVar10 = *(undefined8 *)(puVar9 + -2);
            puVar9[-2] = *(undefined4 *)((long)puVar6 + (ulong)uVar1 * 0xc + 0xc);
            puVar9[-1] = *(undefined4 *)((long)puVar6 + (ulong)uVar1 * 0xc + 0x10);
            uVar2 = *puVar9;
            uVar11 = uVar11 + 1;
            *puVar9 = *(undefined4 *)((long)puVar6 + (ulong)uVar1 * 0xc + 0x14);
            *(undefined8 *)((long)puVar6 + (ulong)uVar1 * 0xc + 0xc) = uVar10;
            *(undefined4 *)((long)puVar6 + (ulong)uVar1 * 0xc + 0x14) = uVar2;
            uVar1 = *(uint *)(puVar6 + 0xf);
            puVar9 = puVar9 + 3;
          } while (uVar11 < uVar1 >> 1);
        }
        puVar7 = puVar7 + 0x25;
        uVar10 = *puVar6;
        *puVar6 = *(undefined8 *)((long)puVar6 + 0x6c);
        uVar2 = *(undefined4 *)((long)puVar6 + 0x74);
        *(undefined4 *)((long)puVar6 + 0x74) = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)(puVar6 + 1) = uVar2;
        *(undefined8 *)((long)puVar6 + 0x6c) = uVar10;
        puVar6 = (undefined8 *)((long)puVar6 + 0x94);
      } while (puVar6 != (undefined8 *)
                         (*(long *)(param_5 + 0x20) + (ulong)*(uint *)(param_5 + 0x28) * 0x94));
    }
  }
  else {
    local_b8 = local_b8 * 8.0;
    local_d8 = local_48;
    plStack_c8 = &local_b0;
    local_d0 = &local_98;
    local_b4 = 0x100;
    FUN_034325c0(param_1,&local_60,param_3 + uVar11 * 0x38 + 0x5f0,local_e0);
  }
  puVar3 = PTR_DAT_047e2fd0;
  if (local_b0 != 0) {
    local_a8 = local_a8 & 0xffffffff00000000;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
    local_b0 = 0;
    local_a8 = local_a8 & 0xffffffff;
  }
  if (local_98 != (undefined8 *)0x0) {
    if ((int)local_90 != 0) {
      lVar12 = (local_90 & 0xffffffff) * 0x50;
      puVar6 = local_98;
      do {
        (**(code **)*puVar6)(puVar6);
        lVar12 = lVar12 + -0x50;
        puVar6 = puVar6 + 10;
      } while (lVar12 != 0);
    }
    local_90 = local_90 & 0xffffffff00000000;
    (**(code **)(puVar3 + 0x30))(0xb,local_98);
    local_98 = (undefined8 *)0x0;
    local_90 = local_90 & 0xffffffff;
  }
  if ((int)local_78 != 0) {
    uVar11 = 0;
    do {
      plVar4 = *(long **)(local_80 + uVar11 * 8);
      while (plVar4 != (long *)0x0) {
        plVar4 = (long *)*plVar4;
        (**(code **)(puVar3 + 0x30))(0xb);
      }
      *(undefined8 *)(local_80 + uVar11 * 8) = 0;
      uVar11 = uVar11 + 1;
    } while (uVar11 < (local_78 & 0xffffffff));
  }
  local_70 = 0;
  if (local_80 != 0) {
    local_78 = local_78 & 0xffffffff00000000;
    (**(code **)(puVar3 + 0x30))(0xb);
  }
  return ZEXT816(0);
}


